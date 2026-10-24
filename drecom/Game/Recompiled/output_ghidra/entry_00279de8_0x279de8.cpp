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

// Function: entry_00279de8
// Address: 0x279de8 - 0x279e14
void entry_00279de8_0x279de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279de8_0x279de8");
#endif

    ctx->pc = 0x279de8u;

    // 0x279de8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x279de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x279dec: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x279decu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x279df0: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x279df0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x279df4: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x279DF4u;
    {
        const bool branch_taken_0x279df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279df4) {
            ctx->pc = 0x279D1Cu;
            return;
        }
    }
    ctx->pc = 0x279DFCu;
    // 0x279dfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x279dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279e08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x279e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x279e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x279E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279E14u;
}
