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

// Function: Main_win_disp
// Address: 0x1a4f50 - 0x1a5000
void Main_win_disp_0x1a4f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main_win_disp_0x1a4f50");
#endif

    switch (ctx->pc) {
        case 0x1a4f7cu: goto label_1a4f7c;
        case 0x1a4f88u: goto label_1a4f88;
        case 0x1a4fa0u: goto label_1a4fa0;
        case 0x1a4fb8u: goto label_1a4fb8;
        case 0x1a4fd0u: goto label_1a4fd0;
        case 0x1a4fe8u: goto label_1a4fe8;
        default: break;
    }

    ctx->pc = 0x1a4f50u;

    // 0x1a4f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a4f54: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1a4f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a4f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4f60: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a4f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1a4f64: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x1a4f64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4f68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4f6c: 0x24510320  addiu       $s1, $v0, 0x320
    ctx->pc = 0x1a4f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x1a4f70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4f74: 0xc069510  jal         func_1A5440
    ctx->pc = 0x1A4F74u;
    SET_GPR_U32(ctx, 31, 0x1A4F7Cu);
    ctx->pc = 0x1A5440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5440u, 0x1A4F74u, 0x1A4F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F7Cu;
label_1a4f7c:
    // 0x1a4f7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4f80: 0xc0697d4  jal         func_1A5F50
    ctx->pc = 0x1A4F80u;
    SET_GPR_U32(ctx, 31, 0x1A4F88u);
    ctx->pc = 0x1A5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5F50u, 0x1A4F80u, 0x1A4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F88u;
label_1a4f88:
    // 0x1a4f88: 0x920302f8  lbu         $v1, 0x2F8($s0)
    ctx->pc = 0x1a4f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x1a4f8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4F8Cu;
    {
        const bool branch_taken_0x1a4f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f8c) {
            ctx->pc = 0x1A4FA0u;
            goto label_1a4fa0;
        }
    }
    ctx->pc = 0x1A4F94u;
    // 0x1a4f94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4f98: 0xc069898  jal         func_1A6260
    ctx->pc = 0x1A4F98u;
    SET_GPR_U32(ctx, 31, 0x1A4FA0u);
    ctx->pc = 0x1A6260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6260u, 0x1A4F98u, 0x1A4FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FA0u;
label_1a4fa0:
    // 0x1a4fa0: 0x92030315  lbu         $v1, 0x315($s0)
    ctx->pc = 0x1a4fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 789)));
    // 0x1a4fa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4FA4u;
    {
        const bool branch_taken_0x1a4fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fa4) {
            ctx->pc = 0x1A4FB8u;
            goto label_1a4fb8;
        }
    }
    ctx->pc = 0x1A4FACu;
    // 0x1a4fac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4fb0: 0xc069cf8  jal         func_1A73E0
    ctx->pc = 0x1A4FB0u;
    SET_GPR_U32(ctx, 31, 0x1A4FB8u);
    ctx->pc = 0x1A73E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73E0u, 0x1A4FB0u, 0x1A4FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FB8u;
label_1a4fb8:
    // 0x1a4fb8: 0x92030318  lbu         $v1, 0x318($s0)
    ctx->pc = 0x1a4fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 792)));
    // 0x1a4fbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4FBCu;
    {
        const bool branch_taken_0x1a4fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fbc) {
            ctx->pc = 0x1A4FD0u;
            goto label_1a4fd0;
        }
    }
    ctx->pc = 0x1A4FC4u;
    // 0x1a4fc4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4fc8: 0xc06a4f8  jal         func_1A93E0
    ctx->pc = 0x1A4FC8u;
    SET_GPR_U32(ctx, 31, 0x1A4FD0u);
    ctx->pc = 0x1A93E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A93E0u, 0x1A4FC8u, 0x1A4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FD0u;
label_1a4fd0:
    // 0x1a4fd0: 0x92030319  lbu         $v1, 0x319($s0)
    ctx->pc = 0x1a4fd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 793)));
    // 0x1a4fd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4FD4u;
    {
        const bool branch_taken_0x1a4fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fd4) {
            ctx->pc = 0x1A4FE8u;
            goto label_1a4fe8;
        }
    }
    ctx->pc = 0x1A4FDCu;
    // 0x1a4fdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4fe0: 0xc069400  jal         func_1A5000
    ctx->pc = 0x1A4FE0u;
    SET_GPR_U32(ctx, 31, 0x1A4FE8u);
    ctx->pc = 0x1A5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5000u, 0x1A4FE0u, 0x1A4FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FE8u;
label_1a4fe8:
    // 0x1a4fe8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a4fe8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4fec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4ff4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a4ff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a4ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5000u;
}
