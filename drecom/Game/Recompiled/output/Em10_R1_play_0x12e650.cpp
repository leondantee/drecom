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

// Function: Em10_R1_play
// Address: 0x12e650 - 0x12e750
void Em10_R1_play_0x12e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_play_0x12e650");
#endif

    switch (ctx->pc) {
        case 0x12e6b0u: goto label_12e6b0;
        case 0x12e6d0u: goto label_12e6d0;
        case 0x12e6dcu: goto label_12e6dc;
        case 0x12e6ecu: goto label_12e6ec;
        case 0x12e6f8u: goto label_12e6f8;
        default: break;
    }

    ctx->pc = 0x12e650u;

    // 0x12e650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12e650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12e654: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x12e654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x12e658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e65c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x12e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x12e660: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e664: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12e664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x12e668: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e66c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12e66cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12e670: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12e670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12e674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e678: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E678u;
    {
        const bool branch_taken_0x12e678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12e678) {
            ctx->pc = 0x12E6C0u;
            goto label_12e6c0;
        }
    }
    ctx->pc = 0x12E680u;
    // 0x12e680: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E680u;
    {
        const bool branch_taken_0x12e680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e680) {
            ctx->pc = 0x12E690u;
            goto label_12e690;
        }
    }
    ctx->pc = 0x12E688u;
    // 0x12e688: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12E688u;
    {
        const bool branch_taken_0x12e688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e688) {
            ctx->pc = 0x12E73Cu;
            goto label_12e73c;
        }
    }
    ctx->pc = 0x12E690u;
label_12e690:
    // 0x12e690: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e694: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e698: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12e698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12e69c: 0x24063c27  addiu       $a2, $zero, 0x3C27
    ctx->pc = 0x12e69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15399));
    // 0x12e6a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12e6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e6a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12e6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12e6a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12E6A8u;
    SET_GPR_U32(ctx, 31, 0x12E6B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12E6A8u, 0x12E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6B0u;
label_12e6b0:
    // 0x12e6b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6b4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12e6b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12e6b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12e6bc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12e6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12e6c0:
    // 0x12e6c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e6c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e6c8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12E6C8u;
    SET_GPR_U32(ctx, 31, 0x12E6D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12E6C8u, 0x12E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6D0u;
label_12e6d0:
    // 0x12e6d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6d4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12E6D4u;
    SET_GPR_U32(ctx, 31, 0x12E6DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12E6D4u, 0x12E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6DCu;
label_12e6dc:
    // 0x12e6dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e6e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e6e4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12E6E4u;
    SET_GPR_U32(ctx, 31, 0x12E6ECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12E6E4u, 0x12E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6ECu;
label_12e6ec:
    // 0x12e6ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6f0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12E6F0u;
    SET_GPR_U32(ctx, 31, 0x12E6F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12E6F0u, 0x12E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6F8u;
label_12e6f8:
    // 0x12e6f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12e6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12e700: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12E700u;
    {
        const bool branch_taken_0x12e700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e700) {
            ctx->pc = 0x12E73Cu;
            goto label_12e73c;
        }
    }
    ctx->pc = 0x12E708u;
    // 0x12e708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12e708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e70c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e710: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12e710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e714: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12e714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12e718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e71c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12e71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e720: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e724: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12e724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e728: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e72c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12e72cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e730: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e734: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12e734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12e738: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12e738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
label_12e73c:
    // 0x12e73c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x12e73cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e744: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12e744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12e748: 0x3e00008  jr          $ra
    ctx->pc = 0x12E748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E750u;
}
