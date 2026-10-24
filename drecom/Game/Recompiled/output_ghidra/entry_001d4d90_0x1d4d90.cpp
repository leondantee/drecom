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

// Function: entry_001d4d90
// Address: 0x1d4d90 - 0x1d4dd8
void entry_001d4d90_0x1d4d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4d90_0x1d4d90");
#endif

    ctx->pc = 0x1d4d90u;

    // 0x1d4d90: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1d4d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d4d94: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1d4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d4d98: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1d4d98u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d4d9c: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1D4D9Cu;
    {
        const bool branch_taken_0x1d4d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d9c) {
            ctx->pc = 0x1D4C8Cu;
            return;
        }
    }
    ctx->pc = 0x1D4DA4u;
    // 0x1d4da4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d4da4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d4da8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d4da8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d4dac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d4dacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d4db0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d4db0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4db4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d4db4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4db8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d4db8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4dbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d4dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4dc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4dc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4dc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4dcc: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x1d4dccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d4dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4DD8u;
}
