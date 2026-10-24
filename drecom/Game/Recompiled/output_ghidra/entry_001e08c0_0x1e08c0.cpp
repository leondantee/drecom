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

// Function: entry_001e08c0
// Address: 0x1e08c0 - 0x1e0914
void entry_001e08c0_0x1e08c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e08c0_0x1e08c0");
#endif

    ctx->pc = 0x1e08c0u;

    // 0x1e08c0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1e08c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1e08c4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1e08c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1e08c8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e08c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1e08cc: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1e08ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1e08d0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e08d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1e08d4: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1e08d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1e08d8: 0x16a0ff20  bnez        $s5, . + 4 + (-0xE0 << 2)
    ctx->pc = 0x1E08D8u;
    {
        const bool branch_taken_0x1e08d8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e08d8) {
            ctx->pc = 0x1E055Cu;
            return;
        }
    }
    ctx->pc = 0x1E08E0u;
    // 0x1e08e0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e08e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e08e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e08e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e08e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e08e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e08ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e08ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e08f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e08f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e08f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e08f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e08f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e08f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e08fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e08fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0908: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1e0908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e090c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E090Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E090Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0914u;
}
