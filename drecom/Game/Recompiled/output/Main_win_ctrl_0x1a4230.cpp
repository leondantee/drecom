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

// Function: Main_win_ctrl
// Address: 0x1a4230 - 0x1a4294
void Main_win_ctrl_0x1a4230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main_win_ctrl_0x1a4230");
#endif

    switch (ctx->pc) {
        case 0x1a4270u: goto label_1a4270;
        case 0x1a4284u: goto label_1a4284;
        default: break;
    }

    ctx->pc = 0x1a4230u;

    // 0x1a4230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4234: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a4234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a4238: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a4238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1a423c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a423cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a4240: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1a4240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a4244: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a4244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a424c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A424Cu;
    {
        const bool branch_taken_0x1a424c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a424c) {
            ctx->pc = 0x1A4278u;
            goto label_1a4278;
        }
    }
    ctx->pc = 0x1A4254u;
    // 0x1a4254: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4254u;
    {
        const bool branch_taken_0x1a4254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4254) {
            ctx->pc = 0x1A4264u;
            goto label_1a4264;
        }
    }
    ctx->pc = 0x1A425Cu;
    // 0x1a425c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A425Cu;
    {
        const bool branch_taken_0x1a425c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a425c) {
            ctx->pc = 0x1A4284u;
            goto label_1a4284;
        }
    }
    ctx->pc = 0x1A4264u;
label_1a4264:
    // 0x1a4264: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a4264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a4268: 0xc0690a8  jal         func_1A42A0
    ctx->pc = 0x1A4268u;
    SET_GPR_U32(ctx, 31, 0x1A4270u);
    ctx->pc = 0x1A42A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A42A0u, 0x1A4268u, 0x1A4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4270u;
label_1a4270:
    // 0x1a4270: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4270u;
    {
        const bool branch_taken_0x1a4270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4270) {
            ctx->pc = 0x1A4284u;
            goto label_1a4284;
        }
    }
    ctx->pc = 0x1A4278u;
label_1a4278:
    // 0x1a4278: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a4278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a427c: 0xc0692e4  jal         func_1A4B90
    ctx->pc = 0x1A427Cu;
    SET_GPR_U32(ctx, 31, 0x1A4284u);
    ctx->pc = 0x1A4B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B90u, 0x1A427Cu, 0x1A4284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4284u;
label_1a4284:
    // 0x1a4284: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a4284u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4288: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a4288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a428c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A428Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A428Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4294u;
}
