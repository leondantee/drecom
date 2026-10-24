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

// Function: Em20_R0_scenario
// Address: 0x359a70 - 0x359b40
void Em20_R0_scenario_0x359a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em20_R0_scenario_0x359a70");
#endif

    switch (ctx->pc) {
        case 0x359ae4u: goto label_359ae4;
        case 0x359b04u: goto label_359b04;
        case 0x359b10u: goto label_359b10;
        case 0x359b1cu: goto label_359b1c;
        case 0x359b2cu: goto label_359b2c;
        default: break;
    }

    ctx->pc = 0x359a70u;

    // 0x359a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359a74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x359a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x359a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x359a7c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x359a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x359a80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x359a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359a84: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x359a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x359a88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x359a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x359a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x359a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359a90: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x359A90u;
    {
        const bool branch_taken_0x359a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x359a90) {
            ctx->pc = 0x359AF4u;
            goto label_359af4;
        }
    }
    ctx->pc = 0x359A98u;
    // 0x359a98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359A98u;
    {
        const bool branch_taken_0x359a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x359a98) {
            ctx->pc = 0x359AA8u;
            goto label_359aa8;
        }
    }
    ctx->pc = 0x359AA0u;
    // 0x359aa0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x359AA0u;
    {
        const bool branch_taken_0x359aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359aa0) {
            ctx->pc = 0x359B2Cu;
            goto label_359b2c;
        }
    }
    ctx->pc = 0x359AA8u;
label_359aa8:
    // 0x359aa8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x359aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359aac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x359aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x359ab0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x359ab0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x359ab4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x359ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359ab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x359ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359abc: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x359abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x359ac0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x359ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x359ac4: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x359ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x359ac8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x359ac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x359acc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x359accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359ad0: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x359ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x359ad4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x359ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359ad8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x359ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x359adc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x359ADCu;
    SET_GPR_U32(ctx, 31, 0x359AE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x359ADCu, 0x359AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359AE4u;
label_359ae4:
    // 0x359ae4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x359ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359ae8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x359ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x359aec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x359aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x359af0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x359af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_359af4:
    // 0x359af4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x359af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359af8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359af8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359afc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x359AFCu;
    SET_GPR_U32(ctx, 31, 0x359B04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x359AFCu, 0x359B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B04u;
label_359b04:
    // 0x359b04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x359b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359b08: 0xc05cd10  jal         func_173440
    ctx->pc = 0x359B08u;
    SET_GPR_U32(ctx, 31, 0x359B10u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x359B08u, 0x359B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B10u;
label_359b10:
    // 0x359b10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x359b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359b14: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x359B14u;
    SET_GPR_U32(ctx, 31, 0x359B1Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x359B14u, 0x359B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B1Cu;
label_359b1c:
    // 0x359b1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x359b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359b20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x359b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x359b24: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x359B24u;
    SET_GPR_U32(ctx, 31, 0x359B2Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x359B24u, 0x359B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B2Cu;
label_359b2c:
    // 0x359b2c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x359b2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359b30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359b34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x359b34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x359b38: 0x3e00008  jr          $ra
    ctx->pc = 0x359B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359B40u;
}
