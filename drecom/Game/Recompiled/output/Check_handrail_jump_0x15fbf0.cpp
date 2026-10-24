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

// Function: Check_handrail_jump
// Address: 0x15fbf0 - 0x15fc34
void Check_handrail_jump_0x15fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_handrail_jump_0x15fbf0");
#endif

    ctx->pc = 0x15fbf0u;

    // 0x15fbf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15fbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15fbf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15fbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15fbf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15fbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15fbfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15fbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15fc00: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15fc04: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x15fc04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15fc08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15fc0c: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15fc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15fc10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15fc14: 0x2451eea0  addiu       $s1, $v0, -0x1160
    ctx->pc = 0x15fc14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x15fc18: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15fc18u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15fc1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15fc1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15fc20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fc20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fc24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fc28: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x15fc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15fc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x15FC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FC34u;
}
