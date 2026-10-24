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

// Function: entry_0016deb8
// Address: 0x16deb8 - 0x16df0c
void entry_0016deb8_0x16deb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016deb8_0x16deb8");
#endif

    ctx->pc = 0x16deb8u;

    // 0x16deb8: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x16deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16debc: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x16debcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x16dec0: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x16dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x16dec4: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x16dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x16dec8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16decc: 0xafa30268  sw          $v1, 0x268($sp)
    ctx->pc = 0x16deccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
    // 0x16ded0: 0x1460fec9  bnez        $v1, . + 4 + (-0x137 << 2)
    ctx->pc = 0x16DED0u;
    {
        const bool branch_taken_0x16ded0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ded0) {
            ctx->pc = 0x16D9F8u;
            return;
        }
    }
    ctx->pc = 0x16DED8u;
    // 0x16ded8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x16ded8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16dedc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16dedcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16dee0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16dee0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16dee4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16dee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16dee8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16dee8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16deec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16deecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16def0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16def0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16def4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16def4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16def8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16def8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16defc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16defcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16df00: 0x27bd0270  addiu       $sp, $sp, 0x270
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x16df04: 0x3e00008  jr          $ra
    ctx->pc = 0x16DF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DF0Cu;
}
