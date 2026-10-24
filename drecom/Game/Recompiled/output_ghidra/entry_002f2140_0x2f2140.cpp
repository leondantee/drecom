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

// Function: entry_002f2140
// Address: 0x2f2140 - 0x2f217c
void entry_002f2140_0x2f2140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2140_0x2f2140");
#endif

    ctx->pc = 0x2f2140u;

    // 0x2f2140: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2f2140u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f2144: 0x1460ff1b  bnez        $v1, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x2F2144u;
    {
        const bool branch_taken_0x2f2144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2144) {
            ctx->pc = 0x2F1DB4u;
            return;
        }
    }
    ctx->pc = 0x2F214Cu;
    // 0x2f214c: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2f214cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2150: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2f2150u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f2154: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f2154u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2158: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f2158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f215c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f215cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2160: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f2160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f2164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f2168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f216c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f216cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2170: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2f2170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f2174: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F217Cu;
}
