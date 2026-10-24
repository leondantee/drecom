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

// Function: entry_001d4360
// Address: 0x1d4360 - 0x1d43a4
void entry_001d4360_0x1d4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4360_0x1d4360");
#endif

    ctx->pc = 0x1d4360u;

    // 0x1d4360: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1d4360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1d4364: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d4364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d4368: 0x1620ffbd  bnez        $s1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1D4368u;
    {
        const bool branch_taken_0x1d4368 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4368) {
            ctx->pc = 0x1D4260u;
            return;
        }
    }
    ctx->pc = 0x1D4370u;
    // 0x1d4370: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d4370u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d4374: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d4374u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d4378: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d4378u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d437c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d437cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4380: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d4380u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4384: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d4384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4388: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d4388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d438c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d438cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4398: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x1d4398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d439c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D439Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D439Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D43A4u;
}
