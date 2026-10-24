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

// Function: Color_edit_ctrl_Usage
// Address: 0x1a5290 - 0x1a5434
void Color_edit_ctrl_Usage_0x1a5290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Color_edit_ctrl_Usage_0x1a5290");
#endif

    switch (ctx->pc) {
        case 0x1a52bcu: goto label_1a52bc;
        case 0x1a52e0u: goto label_1a52e0;
        case 0x1a5304u: goto label_1a5304;
        case 0x1a5328u: goto label_1a5328;
        case 0x1a534cu: goto label_1a534c;
        case 0x1a5370u: goto label_1a5370;
        case 0x1a5394u: goto label_1a5394;
        case 0x1a53b8u: goto label_1a53b8;
        case 0x1a53dcu: goto label_1a53dc;
        case 0x1a5400u: goto label_1a5400;
        case 0x1a5424u: goto label_1a5424;
        default: break;
    }

    ctx->pc = 0x1a5290u;

    // 0x1a5290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5294: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a5294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a5298: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a529c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a529cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a52a0: 0x3c021c06  lui         $v0, 0x1C06
    ctx->pc = 0x1a52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7174 << 16));
    // 0x1a52a4: 0x34420217  ori         $v0, $v0, 0x217
    ctx->pc = 0x1a52a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)535);
    // 0x1a52a8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a52a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a52ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a52acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a52b0: 0x2445efb8  addiu       $a1, $v0, -0x1048
    ctx->pc = 0x1a52b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963128));
    // 0x1a52b4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A52B4u;
    SET_GPR_U32(ctx, 31, 0x1A52BCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A52B4u, 0x1A52BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52BCu;
label_1a52bc:
    // 0x1a52bc: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a52bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a52c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a52c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a52c4: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a52c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a52c8: 0x34420218  ori         $v0, $v0, 0x218
    ctx->pc = 0x1a52c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)536);
    // 0x1a52cc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a52ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a52d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a52d4: 0x2445f078  addiu       $a1, $v0, -0xF88
    ctx->pc = 0x1a52d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963320));
    // 0x1a52d8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A52D8u;
    SET_GPR_U32(ctx, 31, 0x1A52E0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A52D8u, 0x1A52E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52E0u;
label_1a52e0:
    // 0x1a52e0: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a52e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a52e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a52e8: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a52ec: 0x34420219  ori         $v0, $v0, 0x219
    ctx->pc = 0x1a52ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)537);
    // 0x1a52f0: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a52f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a52f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a52f8: 0x2445f088  addiu       $a1, $v0, -0xF78
    ctx->pc = 0x1a52f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963336));
    // 0x1a52fc: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A52FCu;
    SET_GPR_U32(ctx, 31, 0x1A5304u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A52FCu, 0x1A5304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5304u;
label_1a5304:
    // 0x1a5304: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a5308: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a530c: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a530cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a5310: 0x3442021a  ori         $v0, $v0, 0x21A
    ctx->pc = 0x1a5310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)538);
    // 0x1a5314: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5318: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a531c: 0x2445f098  addiu       $a1, $v0, -0xF68
    ctx->pc = 0x1a531cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963352));
    // 0x1a5320: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5320u;
    SET_GPR_U32(ctx, 31, 0x1A5328u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5320u, 0x1A5328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5328u;
label_1a5328:
    // 0x1a5328: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a532c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a532cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5330: 0x3c021c04  lui         $v0, 0x1C04
    ctx->pc = 0x1a5330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7172 << 16));
    // 0x1a5334: 0x34421218  ori         $v0, $v0, 0x1218
    ctx->pc = 0x1a5334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4632);
    // 0x1a5338: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a533c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5340: 0x2445f008  addiu       $a1, $v0, -0xFF8
    ctx->pc = 0x1a5340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    // 0x1a5344: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5344u;
    SET_GPR_U32(ctx, 31, 0x1A534Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5344u, 0x1A534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A534Cu;
label_1a534c:
    // 0x1a534c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a5350: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5354: 0x3c021c05  lui         $v0, 0x1C05
    ctx->pc = 0x1a5354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7173 << 16));
    // 0x1a5358: 0x34421418  ori         $v0, $v0, 0x1418
    ctx->pc = 0x1a5358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5144);
    // 0x1a535c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a535cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5360: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5364: 0x2445f010  addiu       $a1, $v0, -0xFF0
    ctx->pc = 0x1a5364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
    // 0x1a5368: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5368u;
    SET_GPR_U32(ctx, 31, 0x1A5370u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5368u, 0x1A5370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5370u;
label_1a5370:
    // 0x1a5370: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a5374: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5378: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a5378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a537c: 0x34421218  ori         $v0, $v0, 0x1218
    ctx->pc = 0x1a537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4632);
    // 0x1a5380: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5384: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5388: 0x2445f0a8  addiu       $a1, $v0, -0xF58
    ctx->pc = 0x1a5388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963368));
    // 0x1a538c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A538Cu;
    SET_GPR_U32(ctx, 31, 0x1A5394u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A538Cu, 0x1A5394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5394u;
label_1a5394:
    // 0x1a5394: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a5398: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a539c: 0x3c021c06  lui         $v0, 0x1C06
    ctx->pc = 0x1a539cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7174 << 16));
    // 0x1a53a0: 0x34421219  ori         $v0, $v0, 0x1219
    ctx->pc = 0x1a53a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4633);
    // 0x1a53a4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a53a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a53a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a53ac: 0x2445f028  addiu       $a1, $v0, -0xFD8
    ctx->pc = 0x1a53acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963240));
    // 0x1a53b0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A53B0u;
    SET_GPR_U32(ctx, 31, 0x1A53B8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A53B0u, 0x1A53B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53B8u;
label_1a53b8:
    // 0x1a53b8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a53bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a53bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a53c0: 0x3c021c02  lui         $v0, 0x1C02
    ctx->pc = 0x1a53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7170 << 16));
    // 0x1a53c4: 0x34421419  ori         $v0, $v0, 0x1419
    ctx->pc = 0x1a53c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5145);
    // 0x1a53c8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a53c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a53cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a53d0: 0x2445f030  addiu       $a1, $v0, -0xFD0
    ctx->pc = 0x1a53d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963248));
    // 0x1a53d4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A53D4u;
    SET_GPR_U32(ctx, 31, 0x1A53DCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A53D4u, 0x1A53DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53DCu;
label_1a53dc:
    // 0x1a53dc: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a53e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a53e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a53e4: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a53e8: 0x34421219  ori         $v0, $v0, 0x1219
    ctx->pc = 0x1a53e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4633);
    // 0x1a53ec: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a53ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a53f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a53f4: 0x2445f0b8  addiu       $a1, $v0, -0xF48
    ctx->pc = 0x1a53f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963384));
    // 0x1a53f8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A53F8u;
    SET_GPR_U32(ctx, 31, 0x1A5400u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A53F8u, 0x1A5400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5400u;
label_1a5400:
    // 0x1a5400: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a5404: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5408: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a5408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a540c: 0x3442121a  ori         $v0, $v0, 0x121A
    ctx->pc = 0x1a540cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4634);
    // 0x1a5410: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5414: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5418: 0x2445f0c8  addiu       $a1, $v0, -0xF38
    ctx->pc = 0x1a5418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963400));
    // 0x1a541c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A541Cu;
    SET_GPR_U32(ctx, 31, 0x1A5424u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A541Cu, 0x1A5424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5424u;
label_1a5424:
    // 0x1a5424: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a5424u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5428: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a5428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a542c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A542Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A542Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5434u;
}
