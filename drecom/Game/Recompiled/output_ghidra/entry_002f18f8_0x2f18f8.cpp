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

// Function: entry_002f18f8
// Address: 0x2f18f8 - 0x2f1934
void entry_002f18f8_0x2f18f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f18f8_0x2f18f8");
#endif

    ctx->pc = 0x2f18f8u;

    // 0x2f18f8: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2f18f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f18fc: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x2F18FCu;
    {
        const bool branch_taken_0x2f18fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f18fc) {
            ctx->pc = 0x2F157Cu;
            return;
        }
    }
    ctx->pc = 0x2F1904u;
    // 0x2f1904: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2f1904u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f1908: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2f1908u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f190c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f190cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f1910: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f1910u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f1914: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f1914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1918: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f1918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f191c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f191cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1928: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2f1928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f192c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F192Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F192Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1934u;
}
