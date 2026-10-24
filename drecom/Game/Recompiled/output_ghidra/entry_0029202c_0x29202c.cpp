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

// Function: entry_0029202c
// Address: 0x29202c - 0x292064
void entry_0029202c_0x29202c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029202c_0x29202c");
#endif

    ctx->pc = 0x29202cu;

    // 0x29202c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29202cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x292030: 0x8c222a58  lw          $v0, 0x2A58($at)
    ctx->pc = 0x292030u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A58u));
    // 0x292034: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x292034u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x292038: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x292038u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29203c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29203cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x292040: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x292040u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292044: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x292044u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292048: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x292048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29204c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29204cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292058: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x292058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x29205c: 0x3e00008  jr          $ra
    ctx->pc = 0x29205Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29205Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292064u;
}
