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

// Function: entry_00271408
// Address: 0x271408 - 0x271448
void entry_00271408_0x271408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271408_0x271408");
#endif

    switch (ctx->pc) {
        case 0x271428u: goto label_271428;
        case 0x271434u: goto label_271434;
        default: break;
    }

    ctx->pc = 0x271408u;

    // 0x271408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27140c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27140cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271410: 0xac22fd70  sw          $v0, -0x290($at)
    ctx->pc = 0x271410u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD70u, _value); } while (0);
    // 0x271414: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x271414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x271418: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x271418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x27141c: 0x24451d30  addiu       $a1, $v0, 0x1D30
    ctx->pc = 0x27141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
    // 0x271420: 0xc0848cc  jal         func_212330
    ctx->pc = 0x271420u;
    SET_GPR_U32(ctx, 31, 0x271428u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x271420u, 0x271428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271428u;
label_271428:
    // 0x271428: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x271428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27142c: 0xc0c79e8  jal         func_31E7A0
    ctx->pc = 0x27142Cu;
    SET_GPR_U32(ctx, 31, 0x271434u);
    ctx->pc = 0x31E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7A0u, 0x27142Cu, 0x271434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271434u;
label_271434:
    // 0x271434: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x271434u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27143c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27143cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271440: 0x3e00008  jr          $ra
    ctx->pc = 0x271440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271448u;
}
