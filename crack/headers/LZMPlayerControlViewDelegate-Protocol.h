//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LZMLiveModel, LZMLiveUrlModel, LZMReportInfoModel, UIButton, UISlider, UIView;

@protocol LZMPlayerControlViewDelegate <NSObject>

@optional
- (void)lzm_controlView:(UIView *)arg1 projectBtnClick:(UIButton *)arg2;
- (void)lzm_controlView:(UIView *)arg1 IsCollect:(_Bool)arg2;
- (void)lzm_controlView:(UIView *)arg1 sectionPage:(long long)arg2;
- (void)lzm_controlView:(UIView *)arg1 chooseSection:(long long)arg2;
- (void)lzm_controlView:(UIView *)arg1 nextSection:(UIButton *)arg2;
- (void)lzm_controlView:(UIView *)arg1 chooseNumber:(long long)arg2;
- (void)lzm_controlView:(UIView *)arg1 nextNumber:(UIButton *)arg2;
- (void)lzm_controlViewWebPlay;
- (void)lzm_controlView:(UIView *)arg1 sourceStats:(long long)arg2;
- (void)lzm_reportError:(long long)arg1 withErrorInfo:(LZMReportInfoModel *)arg2;
- (void)lzm_controlView:(UIView *)arg1 changeChannel:(LZMLiveModel *)arg2;
- (void)lzm_controlView:(UIView *)arg1 changeSource:(LZMLiveUrlModel *)arg2;
- (void)lzm_controlView:(UIView *)arg1 closeAction:(UIButton *)arg2;
- (void)lzm_controlViewRepeatPlayAction:(UIView *)arg1;
- (void)lzm_controlView:(UIView *)arg1 progressSliderTouchEnded:(UISlider *)arg2;
- (void)lzm_controlView:(UIView *)arg1 progressSliderValueChanged:(UISlider *)arg2;
- (void)lzm_controlView:(UIView *)arg1 progressSliderTouchBegan:(UISlider *)arg2;
- (void)lzm_controlView:(UIView *)arg1 progressSliderTap:(double)arg2;
- (void)lzm_controlView:(UIView *)arg1 resolutionAction:(long long)arg2;
- (void)lzm_controlViewWillHidden:(UIView *)arg1 isFullscreen:(_Bool)arg2;
- (void)lzm_controlViewWillShow:(UIView *)arg1 isFullscreen:(_Bool)arg2;
- (void)lzm_controlView:(UIView *)arg1 refreshAction:(UIButton *)arg2;
- (void)lzm_controlView:(UIView *)arg1 collectAction:(UIButton *)arg2;
- (void)lzm_controlView:(UIView *)arg1 noWifiContinuePlay:(UIButton *)arg2;
- (void)lzm_controlView:(UIView *)arg1 cneterPlayAction:(UIButton *)arg2;
- (void)lzm_controlView:(UIView *)arg1 lockScreenAction:(UIButton *)arg2;
- (void)lzm_controlView:(UIView *)arg1 fullScreenAction:(UIButton *)arg2;
- (void)lzm_controlView:(UIView *)arg1 playAction:(UIButton *)arg2;
- (void)lzm_controlView:(UIView *)arg1 backAction:(UIButton *)arg2;
@end
