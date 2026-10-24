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

// Function: R11c_init
// Address: 0x2793b0 - 0x279410
void R11c_init_0x2793b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R11c_init_0x2793b0");
#endif

    switch (ctx->pc) {
        case 0x2793c0u: goto label_2793c0;
        case 0x2793e8u: goto label_2793e8;
        default: break;
    }

    ctx->pc = 0x2793b0u;

    // 0x2793b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2793b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2793b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2793b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2793b8: 0xc09e50c  jal         func_279430
    ctx->pc = 0x2793B8u;
    SET_GPR_U32(ctx, 31, 0x2793C0u);
    ctx->pc = 0x279430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279430u, 0x2793B8u, 0x2793C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793C0u;
label_2793c0:
    // 0x2793c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2793c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2793c4: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x2793c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x2793c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2793c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2793cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2793ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2793d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2793D0u;
    {
        const bool branch_taken_0x2793d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2793d0) {
            ctx->pc = 0x2793E8u;
            goto label_2793e8;
        }
    }
    ctx->pc = 0x2793D8u;
    // 0x2793d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2793d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2793dc: 0x2444f0e0  addiu       $a0, $v0, -0xF20
    ctx->pc = 0x2793dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963424));
    // 0x2793e0: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x2793E0u;
    SET_GPR_U32(ctx, 31, 0x2793E8u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x2793E0u, 0x2793E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793E8u;
label_2793e8:
    // 0x2793e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2793e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2793ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2793ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2793f0: 0xa023d5f1  sb          $v1, -0x2A0F($at)
    ctx->pc = 0x2793f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD5F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F1u, _value); } while (0);
    // 0x2793f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2793f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2793f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2793f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2793fc: 0xa023d691  sb          $v1, -0x296F($at)
    ctx->pc = 0x2793fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD691u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD691u, _value); } while (0);
    // 0x279400: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x279400u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279404: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x279404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x279408: 0x3e00008  jr          $ra
    ctx->pc = 0x279408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279410u;
}
