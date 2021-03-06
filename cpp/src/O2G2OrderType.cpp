#include "stdafx.h"
#include <O2GOrderType.h>

using namespace boost::python;

class CommnadsValWrap{};
class DummyB{};
// TODO
void export_O2G2()
{
            class_<CommnadsValWrap> ("Commnads", no_init)
            .value("CreateOrder", &O2G2::Commands::CreateOrder)
            .value("CreateOCO", &O2G2::Commands::CreateOCO)
            .value("CreateOTO", &O2G2::Commands::CreateOTO)
            .value("CreateOTOCO", &O2G2::Commands::CreateOTOCO)
            .value("JoinToNewContingencyGroup", &O2G2::Commands::JoinToNewContingencyGroup)
            .value("JoinToExistingContingencyGroup", &O2G2::Commands::JoinToExistingContingencyGroup)
            .value("RemoveFromContingencyGroup", &O2G2::Commands::RemoveFromContingencyGroup)
            .value("EditOrder", &O2G2::Commands::EditOrder)
            .value("DeleteOrder", &O2G2::Commands::DeleteOrder)
            .value("SetSubscriptionStatus", &O2G2::Commands::SetSubscriptionStatus)
            .value("UpdateMarginRequirements", &O2G2::Commands::UpdateMarginRequirements)
            .value("GetLastOrderUpdate", &O2G2::Commands::GetLastOrderUpdate)
            .value("AcceptOrder", &O2G2::Commands::AcceptOrder)
            .value("ChangePassword", &O2G2::Commands::ChangePassword)
            .value("SendMail", &O2G2::Commands::SendMail)
            .value("UpdateCommissions", &O2G2::Commands::UpdateCommissions)
            .value("Buy", &O2G2::Buy)
            .value("Sell", &O2G2::Sell)
            .export_values();
        
        class_<OrdersValWrap, bases<O2G2Vals>, boost::noncopyable>("Orders", no_init)
            .value("TrueMarketOpen", &O2G2::Orders::TrueMarketOpen)
            .value("MarketOpen", &O2G2::Orders::MarketOpen)
            .value("MarketOpenRange", &O2G2::Orders::MarketOpenRange)
            .value("OpenLimit", &O2G2::Orders::OpenLimit)
            .value("TrueMarketClose", &O2G2::Orders::TrueMarketClose)
            .value("MarketClose", &O2G2::Orders::MarketClose)
            .value("MarketCloseRange", &O2G2::Orders::MarketCloseRange)
            .value("CloseLimit", &O2G2::Orders::CloseLimit)
            .value("StopEntry", &O2G2::Orders::StopEntry)
            .value("LimitEntry", &O2G2::Orders::LimitEntry)
            .value("RangeEntry", &O2G2::Orders::RangeEntry)
            .value("Entry", &O2G2::Orders::Entry)
            .value("Stop", &O2G2::Orders::Stop)
            .value("Limit", &O2G2::Orders::Limit)
            .value("StopTrailingEntry", &O2G2::Orders::StopTrailingEntry)
            .value("LimitTrailingEntry", &O2G2::Orders::LimitTrailingEntry)
            .value("RangeTrailingEntry", &O2G2::Orders::RangeTrailingEntry)
            .export_values();
            
        class_<TIFValWrap, bases<O2G2Vals>, boost::noncopyable>("TIF", no_init)
            .value("GTC", &O2G2::TIF::GTC)
            .value("IOC", &O2G2::TIF::IOC)
            .value("DAY", &O2G2::TIF::DAY)
            .value("FOK", &O2G2::TIF::FOK)
            .value("GTD", &O2G2::TIF::GTD)
            .export_values();
            
        class_<PegValWrap, bases<O2G2Vals>, boost::noncopyable>("Peg", no_init)
            .value("FromOpen", &O2G2::Peg::FromOpen)
            .value("FromClose", &O2G2::Peg::FromClose)
            .export_values();
            
        class_<KeyTypeValWrap, bases<O2G2Vals>, boost::noncopyable>("KeyType", no_init)
            .value("OrderID", &O2G2::KeyType::OrderID)
            .value("RequestID", &O2G2::KeyType::RequestID)
            .value("RequestTXT", &O2G2::KeyType::RequestTXT)
            .export_values();
            
        class_<SystemPropertiesValWrap, bases<O2G2Vals>, boost::noncopyable>("SystemProperties", no_init)    
            .value("Tradable", &O2G2::SubscriptionStatuses::Tradable)
            .value("Disable", &O2G2::SubscriptionStatuses::Disable)
            .value("ViewOnly", &O2G2::SubscriptionStatuses::ViewOnly)
            .value("BASE_CRNCY", &O2G2::SystemProperties::BASE_CRNCY)
            .value("BASE_UNIT_SIZE", &O2G2::SystemProperties::BASE_UNIT_SIZE)
            .value("BASE_CRNCY_PRECISION", &O2G2::SystemProperties::BASE_CRNCY_PRECISION)
            .value("BASE_CRNCY_SYMBOL", &O2G2::SystemProperties::BASE_CRNCY_SYMBOL)
            .value("BASE_TIME_ZONE", &O2G2::SystemProperties::BASE_TIME_ZONE)
            .value("COND_DIST", &O2G2::SystemProperties::COND_DIST)
            .value("COND_DIST_ENTRY", &O2G2::SystemProperties::COND_DIST_ENTRY)
            .value("END_TRADING_DAY", &O2G2::SystemProperties::END_TRADING_DAY)
            .value("FORCE_PASSWORD_CHANGE", &O2G2::SystemProperties::FORCE_PASSWORD_CHANGE)
            .value("MARKET_OPEN", &O2G2::SystemProperties::MARKET_OPEN)
            .value("QUERYDEPTH_0", &O2G2::SystemProperties::QUERYDEPTH_0)
            .value("QUERYDEPTH_1", &O2G2::SystemProperties::QUERYDEPTH_1)
            .value("QUERYDEPTH_2", &O2G2::SystemProperties::QUERYDEPTH_2)
            .value("QUERYDEPTH_3", &O2G2::SystemProperties::QUERYDEPTH_3)
            .value("QUERYDEPTH_4", &O2G2::SystemProperties::QUERYDEPTH_4)
            .value("QUERYDEPTH_5", &O2G2::SystemProperties::QUERYDEPTH_5)
            .value("QUERYDEPTH_6", &O2G2::SystemProperties::QUERYDEPTH_6)
            .value("QUERYDEPTH_7", &O2G2::SystemProperties::QUERYDEPTH_7)
            .value("QUERYDEPTH_8", &O2G2::SystemProperties::QUERYDEPTH_8)
            .value("QUERYDEPTH_h2", &O2G2::SystemProperties::QUERYDEPTH_h2)
            .value("QUERYDEPTH_h3", &O2G2::SystemProperties::QUERYDEPTH_h3)
            .value("QUERYDEPTH_h4", &O2G2::SystemProperties::QUERYDEPTH_h4)
            .value("QUERYDEPTH_h6", &O2G2::SystemProperties::QUERYDEPTH_h6)
            .value("QUERYDEPTH_h8", &O2G2::SystemProperties::QUERYDEPTH_h8)
            .value("SERVER_TIME_UTC", &O2G2::SystemProperties::SERVER_TIME_UTC)
            .value("SupportTickVolume", &O2G2::SystemProperties::SupportTickVolume)
            .value("TP_170", &O2G2::SystemProperties::TP_170)
            .value("TP_171", &O2G2::SystemProperties::TP_171)
            .value("TP_172", &O2G2::SystemProperties::TP_172)
            .value("TP_86", &O2G2::SystemProperties::TP_86)
            .value("TP_88", &O2G2::SystemProperties::TP_88)
            .value("TP_89", &O2G2::SystemProperties::TP_89)
            .value("TP_94", &O2G2::SystemProperties::TP_94)
            .value("CP_170", &O2G2::SystemProperties::CP_170)
            .value("CP_171", &O2G2::SystemProperties::CP_171)
            .value("CP_172", &O2G2::SystemProperties::CP_172)
            .value("CP_86", &O2G2::SystemProperties::CP_86)
            .value("CP_88", &O2G2::SystemProperties::CP_88)
            .value("CP_89", &O2G2::SystemProperties::CP_89)
            .value("CP_94", &O2G2::SystemProperties::CP_94)
            .value("TRAILING_DYNAMIC", &O2G2::SystemProperties::TRAILING_DYNAMIC)
            .value("TRAILING_FLUCTUATE", &O2G2::SystemProperties::TRAILING_FLUCTUATE)
            .value("TRAILING_FLUCTUATE_PTS_MAX", &O2G2::SystemProperties::TRAILING_FLUCTUATE_PTS_MAX)
            .value("TRAILING_FLUCTUATE_PTS_MIN", &O2G2::SystemProperties::TRAILING_FLUCTUATE_PTS_MIN)
            .value("PEGGED_STOP_LIMIT_DISABLED", &O2G2::SystemProperties::PEGGED_STOP_LIMIT_DISABLED)
            .value("FIRST_TICK_OPEN_PRICE_ENABLED", &O2G2::SystemProperties::FIRST_TICK_OPEN_PRICE_ENABLED)
            .export_values();
            
        class_<MessageTypeValWrap, bases<O2G2Vals>, boost::noncopyable>("MessageType", no_init)    
            .value("Regular", &O2G2::MessageType::Regular)
            .value("Popup", &O2G2::MessageType::Popup)
            .value("Answer", &O2G2::MessageType::Answer)
            .value("ForcedPopup", &O2G2::MessageType::ForcedPopup)
            .value("Plain", &O2G2::MessageFeature::Plain)
            .value("TradingHours", &O2G2::MessageFeature::TradingHours)
            .value("Question", &O2G2::MessageFeature::Question)
            .value("Information", &O2G2::MessageFeature::Information)
            .value("MarketCondition", &O2G2::MessageFeature::MarketCondition)
            .value("SoftwareUpdate", &O2G2::MessageFeature::SoftwareUpdate)
            .value("Emergency", &O2G2::MessageFeature::Emergency)
            .value("SystemFailure", &O2G2::MessageFeature::SystemFailure)
            .export_values();
    
};