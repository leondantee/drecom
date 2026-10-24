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

// Function: Pixel_CLUT_ctrl_Usage
// Address: 0x1a5080 - 0x1a5290
void Pixel_CLUT_ctrl_Usage_0x1a5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pixel_CLUT_ctrl_Usage_0x1a5080");
#endif

    switch (ctx->pc) {
        case 0x1a50acu: goto label_1a50ac;
        case 0x1a50d0u: goto label_1a50d0;
        case 0x1a50f4u: goto label_1a50f4;
        case 0x1a5118u: goto label_1a5118;
        case 0x1a513cu: goto label_1a513c;
        case 0x1a5160u: goto label_1a5160;
        case 0x1a5184u: goto label_1a5184;
        case 0x1a51a8u: goto label_1a51a8;
        case 0x1a51ccu: goto label_1a51cc;
        case 0x1a51f0u: goto label_1a51f0;
        case 0x1a5214u: goto label_1a5214;
        case 0x1a5238u: goto label_1a5238;
        case 0x1a525cu: goto label_1a525c;
        case 0x1a5280u: goto label_1a5280;
        default: break;
    }

    ctx->pc = 0x1a5080u;

    // 0x1a5080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5084: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a5084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a5088: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a508c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a508cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5090: 0x3c021c06  lui         $v0, 0x1C06
    ctx->pc = 0x1a5090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7174 << 16));
    // 0x1a5094: 0x34420217  ori         $v0, $v0, 0x217
    ctx->pc = 0x1a5094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)535);
    // 0x1a5098: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a509c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a50a0: 0x2445efb8  addiu       $a1, $v0, -0x1048
    ctx->pc = 0x1a50a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963128));
    // 0x1a50a4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A50A4u;
    SET_GPR_U32(ctx, 31, 0x1A50ACu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A50A4u, 0x1A50ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50ACu;
label_1a50ac:
    // 0x1a50ac: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a50acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a50b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a50b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a50b4: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a50b8: 0x34420218  ori         $v0, $v0, 0x218
    ctx->pc = 0x1a50b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)536);
    // 0x1a50bc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a50bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a50c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a50c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a50c4: 0x2445efc8  addiu       $a1, $v0, -0x1038
    ctx->pc = 0x1a50c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963144));
    // 0x1a50c8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A50C8u;
    SET_GPR_U32(ctx, 31, 0x1A50D0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A50C8u, 0x1A50D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50D0u;
label_1a50d0:
    // 0x1a50d0: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a50d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a50d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a50d8: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a50dc: 0x34420219  ori         $v0, $v0, 0x219
    ctx->pc = 0x1a50dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)537);
    // 0x1a50e0: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a50e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a50e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a50e8: 0x2445efd8  addiu       $a1, $v0, -0x1028
    ctx->pc = 0x1a50e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963160));
    // 0x1a50ec: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A50ECu;
    SET_GPR_U32(ctx, 31, 0x1A50F4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A50ECu, 0x1A50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50F4u;
label_1a50f4:
    // 0x1a50f4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a50f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a50f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a50fc: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a5100: 0x3442021a  ori         $v0, $v0, 0x21A
    ctx->pc = 0x1a5100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)538);
    // 0x1a5104: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5108: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a510c: 0x2445efe8  addiu       $a1, $v0, -0x1018
    ctx->pc = 0x1a510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963176));
    // 0x1a5110: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5110u;
    SET_GPR_U32(ctx, 31, 0x1A5118u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5110u, 0x1A5118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5118u;
label_1a5118:
    // 0x1a5118: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a511c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a511cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5120: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a5120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a5124: 0x34421218  ori         $v0, $v0, 0x1218
    ctx->pc = 0x1a5124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4632);
    // 0x1a5128: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a512c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5130: 0x2445eff8  addiu       $a1, $v0, -0x1008
    ctx->pc = 0x1a5130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963192));
    // 0x1a5134: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5134u;
    SET_GPR_U32(ctx, 31, 0x1A513Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5134u, 0x1A513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A513Cu;
label_1a513c:
    // 0x1a513c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a5140: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5144: 0x3c021c04  lui         $v0, 0x1C04
    ctx->pc = 0x1a5144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7172 << 16));
    // 0x1a5148: 0x34421219  ori         $v0, $v0, 0x1219
    ctx->pc = 0x1a5148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4633);
    // 0x1a514c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a514cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5150: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5154: 0x2445f008  addiu       $a1, $v0, -0xFF8
    ctx->pc = 0x1a5154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    // 0x1a5158: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5158u;
    SET_GPR_U32(ctx, 31, 0x1A5160u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5158u, 0x1A5160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5160u;
label_1a5160:
    // 0x1a5160: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a5164: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5168: 0x3c021c05  lui         $v0, 0x1C05
    ctx->pc = 0x1a5168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7173 << 16));
    // 0x1a516c: 0x34421419  ori         $v0, $v0, 0x1419
    ctx->pc = 0x1a516cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5145);
    // 0x1a5170: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5174: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5178: 0x2445f010  addiu       $a1, $v0, -0xFF0
    ctx->pc = 0x1a5178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
    // 0x1a517c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A517Cu;
    SET_GPR_U32(ctx, 31, 0x1A5184u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A517Cu, 0x1A5184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5184u;
label_1a5184:
    // 0x1a5184: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a5188: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a518c: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a518cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a5190: 0x34421219  ori         $v0, $v0, 0x1219
    ctx->pc = 0x1a5190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4633);
    // 0x1a5194: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5198: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a519c: 0x2445f018  addiu       $a1, $v0, -0xFE8
    ctx->pc = 0x1a519cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963224));
    // 0x1a51a0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A51A0u;
    SET_GPR_U32(ctx, 31, 0x1A51A8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A51A0u, 0x1A51A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51A8u;
label_1a51a8:
    // 0x1a51a8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a51ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a51acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a51b0: 0x3c021c06  lui         $v0, 0x1C06
    ctx->pc = 0x1a51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7174 << 16));
    // 0x1a51b4: 0x3442121a  ori         $v0, $v0, 0x121A
    ctx->pc = 0x1a51b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4634);
    // 0x1a51b8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a51b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a51bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a51c0: 0x2445f028  addiu       $a1, $v0, -0xFD8
    ctx->pc = 0x1a51c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963240));
    // 0x1a51c4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A51C4u;
    SET_GPR_U32(ctx, 31, 0x1A51CCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A51C4u, 0x1A51CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51CCu;
label_1a51cc:
    // 0x1a51cc: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a51d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a51d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a51d4: 0x3c021c02  lui         $v0, 0x1C02
    ctx->pc = 0x1a51d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7170 << 16));
    // 0x1a51d8: 0x3442141a  ori         $v0, $v0, 0x141A
    ctx->pc = 0x1a51d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5146);
    // 0x1a51dc: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a51dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a51e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a51e4: 0x2445f030  addiu       $a1, $v0, -0xFD0
    ctx->pc = 0x1a51e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963248));
    // 0x1a51e8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A51E8u;
    SET_GPR_U32(ctx, 31, 0x1A51F0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A51E8u, 0x1A51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51F0u;
label_1a51f0:
    // 0x1a51f0: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a51f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a51f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a51f8: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a51fc: 0x3442121a  ori         $v0, $v0, 0x121A
    ctx->pc = 0x1a51fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4634);
    // 0x1a5200: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5204: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5208: 0x2445f038  addiu       $a1, $v0, -0xFC8
    ctx->pc = 0x1a5208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963256));
    // 0x1a520c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A520Cu;
    SET_GPR_U32(ctx, 31, 0x1A5214u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A520Cu, 0x1A5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5214u;
label_1a5214:
    // 0x1a5214: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a5218: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a521c: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a521cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a5220: 0x34422218  ori         $v0, $v0, 0x2218
    ctx->pc = 0x1a5220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8728);
    // 0x1a5224: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5228: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a522c: 0x2445f048  addiu       $a1, $v0, -0xFB8
    ctx->pc = 0x1a522cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963272));
    // 0x1a5230: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5230u;
    SET_GPR_U32(ctx, 31, 0x1A5238u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5230u, 0x1A5238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5238u;
label_1a5238:
    // 0x1a5238: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a5238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a523c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a523cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5240: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a5240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a5244: 0x3442221a  ori         $v0, $v0, 0x221A
    ctx->pc = 0x1a5244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8730);
    // 0x1a5248: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a5248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a524c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5250: 0x2445f058  addiu       $a1, $v0, -0xFA8
    ctx->pc = 0x1a5250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963288));
    // 0x1a5254: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5254u;
    SET_GPR_U32(ctx, 31, 0x1A525Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5254u, 0x1A525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A525Cu;
label_1a525c:
    // 0x1a525c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1a525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1a5260: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a5260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a5264: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x1a5264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x1a5268: 0x34422219  ori         $v0, $v0, 0x2219
    ctx->pc = 0x1a5268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8729);
    // 0x1a526c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a526cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5270: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a5270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a5274: 0x2445f068  addiu       $a1, $v0, -0xF98
    ctx->pc = 0x1a5274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963304));
    // 0x1a5278: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A5278u;
    SET_GPR_U32(ctx, 31, 0x1A5280u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A5278u, 0x1A5280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5280u;
label_1a5280:
    // 0x1a5280: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a5280u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5284: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a5284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a5288: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5290u;
}
