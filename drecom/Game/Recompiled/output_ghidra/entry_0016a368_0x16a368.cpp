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

// Function: entry_0016a368
// Address: 0x16a368 - 0x16a3bc
void entry_0016a368_0x16a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a368_0x16a368");
#endif

    ctx->pc = 0x16a368u;

    // 0x16a368: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x16a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a36c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x16a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x16a370: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x16a370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x16a374: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x16a374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x16a378: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16a378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16a37c: 0xafa30268  sw          $v1, 0x268($sp)
    ctx->pc = 0x16a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
    // 0x16a380: 0x1460fec9  bnez        $v1, . + 4 + (-0x137 << 2)
    ctx->pc = 0x16A380u;
    {
        const bool branch_taken_0x16a380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a380) {
            ctx->pc = 0x169EA8u;
            return;
        }
    }
    ctx->pc = 0x16A388u;
    // 0x16a388: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x16a388u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16a38c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16a38cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16a390: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16a390u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a394: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16a394u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16a398: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16a398u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16a39c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16a39cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a3a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16a3a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a3a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a3a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a3a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a3ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a3b0: 0x27bd0270  addiu       $sp, $sp, 0x270
    ctx->pc = 0x16a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x16a3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x16A3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A3BCu;
}
