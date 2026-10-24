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

// Function: Information_disp
// Address: 0x1a93e0 - 0x1a9810
void Information_disp_0x1a93e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Information_disp_0x1a93e0");
#endif

    switch (ctx->pc) {
        case 0x1a941cu: goto label_1a941c;
        case 0x1a9430u: goto label_1a9430;
        case 0x1a9460u: goto label_1a9460;
        case 0x1a9494u: goto label_1a9494;
        case 0x1a94c8u: goto label_1a94c8;
        case 0x1a94fcu: goto label_1a94fc;
        case 0x1a9530u: goto label_1a9530;
        case 0x1a9564u: goto label_1a9564;
        case 0x1a9598u: goto label_1a9598;
        case 0x1a95ccu: goto label_1a95cc;
        case 0x1a9600u: goto label_1a9600;
        case 0x1a964cu: goto label_1a964c;
        case 0x1a967cu: goto label_1a967c;
        case 0x1a96ccu: goto label_1a96cc;
        case 0x1a9708u: goto label_1a9708;
        case 0x1a9744u: goto label_1a9744;
        case 0x1a9798u: goto label_1a9798;
        case 0x1a97f0u: goto label_1a97f0;
        default: break;
    }

    ctx->pc = 0x1a93e0u;

    // 0x1a93e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a93e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a93e4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1a93e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1a93e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a93e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a93ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a93ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a93f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a93f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a93f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a93f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a93f8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1a93f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1a93fc: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1a93fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a9400: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a9404: 0x24510320  addiu       $s1, $v0, 0x320
    ctx->pc = 0x1a9404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x1a9408: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a9408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a940c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a9410: 0x26250638  addiu       $a1, $s1, 0x638
    ctx->pc = 0x1a9410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1592));
    // 0x1a9414: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A9414u;
    SET_GPR_U32(ctx, 31, 0x1A941Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A9414u, 0x1A941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A941Cu;
label_1a941c:
    // 0x1a941c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a9420: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a9420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a9424: 0x26250654  addiu       $a1, $s1, 0x654
    ctx->pc = 0x1a9424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1620));
    // 0x1a9428: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A9428u;
    SET_GPR_U32(ctx, 31, 0x1A9430u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A9428u, 0x1A9430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9430u;
label_1a9430:
    // 0x1a9430: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x1a9430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a9434: 0x30463fff  andi        $a2, $v0, 0x3FFF
    ctx->pc = 0x1a9434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1a9438: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a9438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a943c: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a943cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a9440: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9444: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a9444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a9448: 0x34421809  ori         $v0, $v0, 0x1809
    ctx->pc = 0x1a9448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6153);
    // 0x1a944c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a944cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9450: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a9450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9454: 0x2445f150  addiu       $a1, $v0, -0xEB0
    ctx->pc = 0x1a9454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
    // 0x1a9458: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9458u;
    SET_GPR_U32(ctx, 31, 0x1A9460u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9458u, 0x1A9460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9460u;
label_1a9460:
    // 0x1a9460: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a9460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a9464: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a9468: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a946c: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a946cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a9470: 0x3442180a  ori         $v0, $v0, 0x180A
    ctx->pc = 0x1a9470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6154);
    // 0x1a9474: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a9474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9478: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a9478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a947c: 0x2445f170  addiu       $a1, $v0, -0xE90
    ctx->pc = 0x1a947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x1a9480: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x1a9480u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a9484: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x1a9484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x1a9488: 0x236be  dsrl32      $a2, $v0, 26
    ctx->pc = 0x1a9488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a948c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A948Cu;
    SET_GPR_U32(ctx, 31, 0x1A9494u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A948Cu, 0x1A9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9494u;
label_1a9494:
    // 0x1a9494: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1a9494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a9498: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x1a9498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x1a949c: 0x236be  dsrl32      $a2, $v0, 26
    ctx->pc = 0x1a949cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1a94a0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a94a4: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a94a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a94a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a94a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a94ac: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a94acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a94b0: 0x3442180b  ori         $v0, $v0, 0x180B
    ctx->pc = 0x1a94b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6155);
    // 0x1a94b4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a94b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a94b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a94bc: 0x2445f188  addiu       $a1, $v0, -0xE78
    ctx->pc = 0x1a94bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963592));
    // 0x1a94c0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A94C0u;
    SET_GPR_U32(ctx, 31, 0x1A94C8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A94C0u, 0x1A94C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A94C8u;
label_1a94c8:
    // 0x1a94c8: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x1a94c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x1a94cc: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x1a94ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1a94d0: 0x2373e  dsrl32      $a2, $v0, 28
    ctx->pc = 0x1a94d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a94d4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a94d8: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a94d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a94dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a94dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a94e0: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a94e4: 0x3442180c  ori         $v0, $v0, 0x180C
    ctx->pc = 0x1a94e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6156);
    // 0x1a94e8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a94e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a94ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a94ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a94f0: 0x2445f198  addiu       $a1, $v0, -0xE68
    ctx->pc = 0x1a94f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963608));
    // 0x1a94f4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A94F4u;
    SET_GPR_U32(ctx, 31, 0x1A94FCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A94F4u, 0x1A94FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A94FCu;
label_1a94fc:
    // 0x1a94fc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a9500: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a9504: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9508: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a9508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a950c: 0x3442180d  ori         $v0, $v0, 0x180D
    ctx->pc = 0x1a950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6157);
    // 0x1a9510: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a9510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9514: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a9514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9518: 0x2445f1a8  addiu       $a1, $v0, -0xE58
    ctx->pc = 0x1a9518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963624));
    // 0x1a951c: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x1a951cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a9520: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1a9520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1a9524: 0x2373e  dsrl32      $a2, $v0, 28
    ctx->pc = 0x1a9524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a9528: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9528u;
    SET_GPR_U32(ctx, 31, 0x1A9530u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9528u, 0x1A9530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9530u;
label_1a9530:
    // 0x1a9530: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x1a9530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a9534: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x1a9534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
    // 0x1a9538: 0x237fe  dsrl32      $a2, $v0, 31
    ctx->pc = 0x1a9538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1a953c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a9540: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a9544: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9548: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a9548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a954c: 0x3442180e  ori         $v0, $v0, 0x180E
    ctx->pc = 0x1a954cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6158);
    // 0x1a9550: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a9550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9554: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a9554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9558: 0x2445f1b8  addiu       $a1, $v0, -0xE48
    ctx->pc = 0x1a9558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963640));
    // 0x1a955c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A955Cu;
    SET_GPR_U32(ctx, 31, 0x1A9564u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A955Cu, 0x1A9564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9564u;
label_1a9564:
    // 0x1a9564: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x1a9564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a9568: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1a9568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1a956c: 0x237be  dsrl32      $a2, $v0, 30
    ctx->pc = 0x1a956cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 30));
    // 0x1a9570: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a9570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a9574: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a9578: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a957c: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a957cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a9580: 0x3442180f  ori         $v0, $v0, 0x180F
    ctx->pc = 0x1a9580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6159);
    // 0x1a9584: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a9584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9588: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a9588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a958c: 0x2445f1c8  addiu       $a1, $v0, -0xE38
    ctx->pc = 0x1a958cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963656));
    // 0x1a9590: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9590u;
    SET_GPR_U32(ctx, 31, 0x1A9598u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9590u, 0x1A9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9598u;
label_1a9598:
    // 0x1a9598: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a9598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a959c: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a959cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a95a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a95a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a95a4: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a95a8: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x1a95a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x1a95ac: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a95acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a95b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a95b4: 0x2445f1e0  addiu       $a1, $v0, -0xE20
    ctx->pc = 0x1a95b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963680));
    // 0x1a95b8: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x1a95b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a95bc: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x1a95bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x1a95c0: 0x234be  dsrl32      $a2, $v0, 18
    ctx->pc = 0x1a95c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x1a95c4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A95C4u;
    SET_GPR_U32(ctx, 31, 0x1A95CCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A95C4u, 0x1A95CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A95CCu;
label_1a95cc:
    // 0x1a95cc: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x1a95ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x1a95d0: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x1a95d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a95d4: 0x2373e  dsrl32      $a2, $v0, 28
    ctx->pc = 0x1a95d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a95d8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a95dc: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a95dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a95e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a95e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a95e4: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a95e8: 0x34421811  ori         $v0, $v0, 0x1811
    ctx->pc = 0x1a95e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6161);
    // 0x1a95ec: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a95ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a95f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a95f4: 0x2445f1f8  addiu       $a1, $v0, -0xE08
    ctx->pc = 0x1a95f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963704));
    // 0x1a95f8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A95F8u;
    SET_GPR_U32(ctx, 31, 0x1A9600u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A95F8u, 0x1A9600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9600u;
label_1a9600:
    // 0x1a9600: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x1a9600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x1a9604: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a9604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a9608: 0x21ffe  dsrl32      $v1, $v0, 31
    ctx->pc = 0x1a9608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1a960c: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x1a960cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x1a9610: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x1a9610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a9614: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a9614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a9618: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a9618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a961c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a961cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a9620: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x1a9620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a9624: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a9624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a9628: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a962c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a962cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9630: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a9630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a9634: 0x34421812  ori         $v0, $v0, 0x1812
    ctx->pc = 0x1a9634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6162);
    // 0x1a9638: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a9638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a963c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a963cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9640: 0x2445f208  addiu       $a1, $v0, -0xDF8
    ctx->pc = 0x1a9640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963720));
    // 0x1a9644: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9644u;
    SET_GPR_U32(ctx, 31, 0x1A964Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9644u, 0x1A964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A964Cu;
label_1a964c:
    // 0x1a964c: 0x9202002f  lbu         $v0, 0x2F($s0)
    ctx->pc = 0x1a964cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x1a9650: 0x3046001f  andi        $a2, $v0, 0x1F
    ctx->pc = 0x1a9650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a9654: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a9654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a9658: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a965c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a965cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9660: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a9660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a9664: 0x34421813  ori         $v0, $v0, 0x1813
    ctx->pc = 0x1a9664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6163);
    // 0x1a9668: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a9668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a966c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a966cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9670: 0x2445f218  addiu       $a1, $v0, -0xDE8
    ctx->pc = 0x1a9670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963736));
    // 0x1a9674: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9674u;
    SET_GPR_U32(ctx, 31, 0x1A967Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9674u, 0x1A967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A967Cu;
label_1a967c:
    // 0x1a967c: 0x8e03030c  lw          $v1, 0x30C($s0)
    ctx->pc = 0x1a967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x1a9680: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a9680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9688: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a9688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a968c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a968cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a9690: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x1a9690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a9694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9698: 0x9042001f  lbu         $v0, 0x1F($v0)
    ctx->pc = 0x1a9698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 31)));
    // 0x1a969c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1a969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a96a0: 0x2377e  dsrl32      $a2, $v0, 29
    ctx->pc = 0x1a96a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x1a96a4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a96a8: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a96a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a96ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a96acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a96b0: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a96b4: 0x34421814  ori         $v0, $v0, 0x1814
    ctx->pc = 0x1a96b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6164);
    // 0x1a96b8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a96b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a96bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a96c0: 0x2445f228  addiu       $a1, $v0, -0xDD8
    ctx->pc = 0x1a96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963752));
    // 0x1a96c4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A96C4u;
    SET_GPR_U32(ctx, 31, 0x1A96CCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A96C4u, 0x1A96CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A96CCu;
label_1a96cc:
    // 0x1a96cc: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x1a96ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x1a96d0: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x1a96d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1a96d4: 0x21f3e  dsrl32      $v1, $v0, 28
    ctx->pc = 0x1a96d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a96d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a96dc: 0x623004  sllv        $a2, $v0, $v1
    ctx->pc = 0x1a96dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a96e0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a96e4: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a96e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a96e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a96e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a96ec: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a96ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a96f0: 0x3442220c  ori         $v0, $v0, 0x220C
    ctx->pc = 0x1a96f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8716);
    // 0x1a96f4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a96f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a96f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a96fc: 0x2445f238  addiu       $a1, $v0, -0xDC8
    ctx->pc = 0x1a96fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963768));
    // 0x1a9700: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9700u;
    SET_GPR_U32(ctx, 31, 0x1A9708u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9700u, 0x1A9708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9708u;
label_1a9708:
    // 0x1a9708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a970c: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x1a970cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a9710: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1a9710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1a9714: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a9714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a9718: 0x433004  sllv        $a2, $v1, $v0
    ctx->pc = 0x1a9718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a971c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a9720: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a9724: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9728: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a9728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a972c: 0x3442220d  ori         $v0, $v0, 0x220D
    ctx->pc = 0x1a972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8717);
    // 0x1a9730: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a9730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9734: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a9734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9738: 0x2445f248  addiu       $a1, $v0, -0xDB8
    ctx->pc = 0x1a9738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963784));
    // 0x1a973c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A973Cu;
    SET_GPR_U32(ctx, 31, 0x1A9744u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A973Cu, 0x1A9744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9744u;
label_1a9744:
    // 0x1a9744: 0x92030315  lbu         $v1, 0x315($s0)
    ctx->pc = 0x1a9744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 789)));
    // 0x1a9748: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A9748u;
    {
        const bool branch_taken_0x1a9748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9748) {
            ctx->pc = 0x1A97F0u;
            goto label_1a97f0;
        }
    }
    ctx->pc = 0x1A9750u;
    // 0x1a9750: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a9750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a9754: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9754u;
    {
        const bool branch_taken_0x1a9754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9754) {
            ctx->pc = 0x1A9768u;
            goto label_1a9768;
        }
    }
    ctx->pc = 0x1A975Cu;
    // 0x1a975c: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1a975cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a9760: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9760u;
    {
        const bool branch_taken_0x1a9760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9760) {
            ctx->pc = 0x1A976Cu;
            goto label_1a976c;
        }
    }
    ctx->pc = 0x1A9768u;
label_1a9768:
    // 0x1a9768: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1a9768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a976c:
    // 0x1a976c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a976cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a9770: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a9774: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a9778: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a9778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a977c: 0x3442240b  ori         $v0, $v0, 0x240B
    ctx->pc = 0x1a977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9227);
    // 0x1a9780: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a9780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9784: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a9784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9788: 0x2445f260  addiu       $a1, $v0, -0xDA0
    ctx->pc = 0x1a9788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
    // 0x1a978c: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1a978cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a9790: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9790u;
    SET_GPR_U32(ctx, 31, 0x1A9798u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9790u, 0x1A9798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9798u;
label_1a9798:
    // 0x1a9798: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x1a9798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x1a979c: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x1a979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a97a0: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a97a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a97a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a97a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a97a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a97a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a97ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A97ACu;
    {
        const bool branch_taken_0x1a97ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a97ac) {
            ctx->pc = 0x1A97C0u;
            goto label_1a97c0;
        }
    }
    ctx->pc = 0x1A97B4u;
    // 0x1a97b4: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x1a97b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a97b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A97B8u;
    {
        const bool branch_taken_0x1a97b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a97b8) {
            ctx->pc = 0x1A97C4u;
            goto label_1a97c4;
        }
    }
    ctx->pc = 0x1A97C0u;
label_1a97c0:
    // 0x1a97c0: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x1a97c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a97c4:
    // 0x1a97c4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a97c8: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a97c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a97cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a97ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a97d0: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a97d4: 0x34422311  ori         $v0, $v0, 0x2311
    ctx->pc = 0x1a97d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8977);
    // 0x1a97d8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a97d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a97dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a97e0: 0x2445f270  addiu       $a1, $v0, -0xD90
    ctx->pc = 0x1a97e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963824));
    // 0x1a97e4: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x1a97e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a97e8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A97E8u;
    SET_GPR_U32(ctx, 31, 0x1A97F0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A97E8u, 0x1A97F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97F0u;
label_1a97f0:
    // 0x1a97f0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1a97f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a97f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a97f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a97f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a97f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a97fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a97fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9804: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a9804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a9808: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9810u;
}
