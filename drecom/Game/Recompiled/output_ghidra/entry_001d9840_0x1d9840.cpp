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

// Function: entry_001d9840
// Address: 0x1d9840 - 0x1d9890
void entry_001d9840_0x1d9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9840_0x1d9840");
#endif

    switch (ctx->pc) {
        case 0x1d9880u: goto label_1d9880;
        case 0x1d9888u: goto label_1d9888;
        default: break;
    }

    ctx->pc = 0x1d9840u;

    // 0x1d9840: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9844: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d9844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9848: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1d9848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d984c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D984Cu;
    {
        const bool branch_taken_0x1d984c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d984c) {
            ctx->pc = 0x1D981Cu;
            return;
        }
    }
    ctx->pc = 0x1D9854u;
    // 0x1d9854: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9858: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d9858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d985c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D985Cu;
    {
        const bool branch_taken_0x1d985c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d985c) {
            ctx->pc = 0x1D9890u;
            return;
        }
    }
    ctx->pc = 0x1D9864u;
    // 0x1d9864: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d9864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9868: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d9868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d986c: 0x2444fd60  addiu       $a0, $v0, -0x2A0
    ctx->pc = 0x1d986cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
    // 0x1d9870: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1d9870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d9874: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d9874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d9878: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x1D9878u;
    SET_GPR_U32(ctx, 31, 0x1D9880u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x1D9880u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D9880u) { return; }
    ctx->pc = 0x1D9880u;
label_1d9880:
    // 0x1d9880: 0xc0766f4  jal         func_1D9BD0
    ctx->pc = 0x1D9880u;
    SET_GPR_U32(ctx, 31, 0x1D9888u);
    ctx->pc = 0x1D9BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BD0u, 0x1D9880u, 0x1D9888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9888u;
label_1d9888:
    // 0x1d9888: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9888u;
    {
        const bool branch_taken_0x1d9888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9888) {
            ctx->pc = 0x1D9898u;
            return;
        }
    }
    ctx->pc = 0x1D9890u;
}
