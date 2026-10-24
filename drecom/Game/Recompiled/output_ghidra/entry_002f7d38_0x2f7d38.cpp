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

// Function: entry_002f7d38
// Address: 0x2f7d38 - 0x2f7d70
void entry_002f7d38_0x2f7d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7d38_0x2f7d38");
#endif

    ctx->pc = 0x2f7d38u;

    // 0x2f7d38: 0x7bbf00b0  lq          $ra, 0xB0($sp)
    ctx->pc = 0x2f7d38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f7d3c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2f7d3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f7d40: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2f7d40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f7d44: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2f7d44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f7d48: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2f7d48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f7d4c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2f7d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7d50: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2f7d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7d54: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2f7d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7d58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2f7d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7d5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f7d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7d60: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f7d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f7d64: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2f7d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2f7d68: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7D70u;
}
