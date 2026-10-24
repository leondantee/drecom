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

// Function: entry_0035d52c
// Address: 0x35d52c - 0x35d558
void entry_0035d52c_0x35d52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d52c_0x35d52c");
#endif

    ctx->pc = 0x35d52cu;

    // 0x35d52c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x35d52cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35d530: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35d530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35d534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35d534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35d538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35d538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35d53c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35d53cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35d540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d54c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x35d54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x35d550: 0x3e00008  jr          $ra
    ctx->pc = 0x35D550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D558u;
}
