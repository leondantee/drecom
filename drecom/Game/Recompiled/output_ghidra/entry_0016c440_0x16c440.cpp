#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0016c440
// Address: 0x16c440 - 0x16c7dc
void entry_0016c440_0x16c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c440_0x16c440");
#endif

    switch (ctx->pc) {
        case 0x16c5f8u: goto label_16c5f8;
        case 0x16c608u: goto label_16c608;
        case 0x16c618u: goto label_16c618;
        case 0x16c628u: goto label_16c628;
        case 0x16c63cu: goto label_16c63c;
        case 0x16c650u: goto label_16c650;
        case 0x16c664u: goto label_16c664;
        case 0x16c678u: goto label_16c678;
        case 0x16c788u: goto label_16c788;
        case 0x16c798u: goto label_16c798;
        case 0x16c7a8u: goto label_16c7a8;
        case 0x16c7b8u: goto label_16c7b8;
        default: break;
    }

    ctx->pc = 0x16c440u;

    // 0x16c440: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c444: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x16c444u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16c448: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c44c: 0x84620024  lh          $v0, 0x24($v1)
    ctx->pc = 0x16c44cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x16c450: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c454: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c454u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c458: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c45c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c460: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c464: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x16c464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x16c468: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c46c: 0x84620026  lh          $v0, 0x26($v1)
    ctx->pc = 0x16c46cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x16c470: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16c470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c474: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16c474u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16c478: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c47c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c480: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c484: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x16c484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x16c488: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c48c: 0x84620028  lh          $v0, 0x28($v1)
    ctx->pc = 0x16c48cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x16c490: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16c490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c494: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16c494u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16c498: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c49c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c4a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c4a4: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x16c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x16c4a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c4ac: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x16c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x16c4b0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c4b4: 0x8444002a  lh          $a0, 0x2A($v0)
    ctx->pc = 0x16c4b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x16c4b8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x16c4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x16c4bc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x16c4bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x16c4c0: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x16c4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c4c4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x16c4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16c4c8: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x16c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x16c4cc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x16c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x16c4d0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c4d4: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x16c4d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16c4d8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c4dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c4dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c4e0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c4e4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16c4e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c4ec: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x16c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x16c4f0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c4f4: 0x8442002e  lh          $v0, 0x2E($v0)
    ctx->pc = 0x16c4f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x16c4f8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16c4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c4fc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16c4fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16c500: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c504: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c508: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x16c508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c50c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x16c50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x16c510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c514: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x16c514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x16c518: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c51c: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x16c51cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x16c520: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16c520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c524: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16c524u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16c528: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c52c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c530: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c534: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x16c534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x16c538: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c53c: 0x84620032  lh          $v0, 0x32($v1)
    ctx->pc = 0x16c53cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x16c540: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16c540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c544: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16c544u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16c548: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x16c548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c54c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c554: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x16c554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x16c558: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c55c: 0x84420034  lh          $v0, 0x34($v0)
    ctx->pc = 0x16c55cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16c560: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c564: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c564u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c568: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c56c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c570: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c574: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x16c574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x16c578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c57c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x16c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x16c580: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c584: 0x84420036  lh          $v0, 0x36($v0)
    ctx->pc = 0x16c584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x16c588: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c58c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c58cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c590: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c594: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c598: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c59c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x16c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x16c5a0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c5a4: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x16c5a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x16c5a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c5ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c5acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c5b0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c5b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16c5b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c5bc: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x16c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x16c5c0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c5c4: 0x8442003a  lh          $v0, 0x3A($v0)
    ctx->pc = 0x16c5c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x16c5c8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16c5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16c5cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16c5ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16c5d0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16c5d4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c5d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c5dc: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x16c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x16c5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c5e4: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x16c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x16c5e8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16c5ec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16c5f0: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16C5F0u;
    SET_GPR_U32(ctx, 31, 0x16C5F8u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16C5F8u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C5F8u) { return; }
    ctx->pc = 0x16C5F8u;
label_16c5f8:
    // 0x16c5f8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16c5fc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x16c5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16c600: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16C600u;
    SET_GPR_U32(ctx, 31, 0x16C608u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16C608u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C608u) { return; }
    ctx->pc = 0x16C608u;
label_16c608:
    // 0x16c608: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x16c608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16c60c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x16c60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16c610: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16C610u;
    SET_GPR_U32(ctx, 31, 0x16C618u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16C618u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C618u) { return; }
    ctx->pc = 0x16C618u;
label_16c618:
    // 0x16c618: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x16c618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16c61c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x16c61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16c620: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16C620u;
    SET_GPR_U32(ctx, 31, 0x16C628u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16C628u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C628u) { return; }
    ctx->pc = 0x16C628u;
label_16c628:
    // 0x16c628: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16c62c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16c62cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c630: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x16c630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16c634: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16C634u;
    SET_GPR_U32(ctx, 31, 0x16C63Cu);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16C634u, 0x16C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C63Cu;
label_16c63c:
    // 0x16c63c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x16c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16c640: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16c640u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c644: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x16c644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16c648: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16C648u;
    SET_GPR_U32(ctx, 31, 0x16C650u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16C648u, 0x16C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C650u;
label_16c650:
    // 0x16c650: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x16c650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16c654: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16c654u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c658: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x16c658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16c65c: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16C65Cu;
    SET_GPR_U32(ctx, 31, 0x16C664u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16C65Cu, 0x16C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C664u;
label_16c664:
    // 0x16c664: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x16c664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16c668: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16c668u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16c66c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x16c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16c670: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x16C670u;
    SET_GPR_U32(ctx, 31, 0x16C678u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x16C670u, 0x16C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C678u;
label_16c678:
    // 0x16c678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16c67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c680: 0x0  nop
    ctx->pc = 0x16c680u;
    // NOP
    // 0x16c684: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x16c684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x16c688: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16c68c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c690: 0x0  nop
    ctx->pc = 0x16c690u;
    // NOP
    // 0x16c694: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x16c694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x16c698: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16c69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c6a0: 0x0  nop
    ctx->pc = 0x16c6a0u;
    // NOP
    // 0x16c6a4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x16c6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x16c6a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16c6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c6b0: 0x0  nop
    ctx->pc = 0x16c6b0u;
    // NOP
    // 0x16c6b4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x16c6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x16c6b8: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16c6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6bc: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x16c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c6c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c6c4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x16c6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x16c6c8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16c6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6cc: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x16c6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c6d4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x16c6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x16c6d8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6dc: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x16c6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c6e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c6e4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x16c6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x16c6e8: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16c6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6ec: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x16c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c6f4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x16c6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x16c6f8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16c6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6fc: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x16c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c700: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c704: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x16c704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x16c708: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16c708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c70c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x16c70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c710: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c714: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x16c714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x16c718: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c71c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x16c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c720: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c724: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x16c724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x16c728: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16c728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c72c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x16c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c730: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c734: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x16c734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x16c738: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16c738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c73c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x16c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c740: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c744: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x16c744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x16c748: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x16c748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c74c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x16c74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c750: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c754: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x16c754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x16c758: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x16c758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c75c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x16c75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c760: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c764: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x16c764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x16c768: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x16c768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c76c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x16c76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c770: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c774: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x16c774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x16c778: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16c778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16c77c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x16c77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16c780: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16C780u;
    SET_GPR_U32(ctx, 31, 0x16C788u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16C788u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C788u) { return; }
    ctx->pc = 0x16C788u;
label_16c788:
    // 0x16c788: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16c788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16c78c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x16c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16c790: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16C790u;
    SET_GPR_U32(ctx, 31, 0x16C798u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16C798u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C798u) { return; }
    ctx->pc = 0x16C798u;
label_16c798:
    // 0x16c798: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16c798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16c79c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x16c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16c7a0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16C7A0u;
    SET_GPR_U32(ctx, 31, 0x16C7A8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16C7A8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C7A8u) { return; }
    ctx->pc = 0x16C7A8u;
label_16c7a8:
    // 0x16c7a8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16c7ac: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x16c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x16c7b0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16C7B0u;
    SET_GPR_U32(ctx, 31, 0x16C7B8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16C7B8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16C7B8u) { return; }
    ctx->pc = 0x16C7B8u;
label_16c7b8:
    // 0x16c7b8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c7bc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x16c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16c7c0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c7c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c7c4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C7C4u;
    {
        const bool branch_taken_0x16c7c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7c4) {
            ctx->pc = 0x16C7DCu;
            return;
        }
    }
    ctx->pc = 0x16C7CCu;
    // 0x16c7cc: 0x8fb300a0  lw          $s3, 0xA0($sp)
    ctx->pc = 0x16c7ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c7d0: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x16c7d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16c7d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C7D4u;
    {
        const bool branch_taken_0x16c7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c7d4) {
            ctx->pc = 0x16C7E8u;
            return;
        }
    }
    ctx->pc = 0x16C7DCu;
}
