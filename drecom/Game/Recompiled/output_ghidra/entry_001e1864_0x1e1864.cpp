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

// Function: entry_001e1864
// Address: 0x1e1864 - 0x1e18a8
void entry_001e1864_0x1e1864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1864_0x1e1864");
#endif

    switch (ctx->pc) {
        case 0x1e1878u: goto label_1e1878;
        default: break;
    }

    ctx->pc = 0x1e1864u;

    // 0x1e1864: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e1864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e1868: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e1868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e186c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e186cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1870: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E1870u;
    SET_GPR_U32(ctx, 31, 0x1E1878u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E1870u, 0x1E1878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1878u;
label_1e1878:
    // 0x1e1878: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1e1878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e187c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1880: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e1880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e1884: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e1884u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e1888: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1888u;
    {
        const bool branch_taken_0x1e1888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1888) {
            ctx->pc = 0x1E18A8u;
            return;
        }
    }
    ctx->pc = 0x1E1890u;
    // 0x1e1890: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1e1890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1e1894: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1898: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e1898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e189c: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e189cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e18a0: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1E18A0u;
    {
        const bool branch_taken_0x1e18a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e18a0) {
            ctx->pc = 0x1E18CCu;
            return;
        }
    }
    ctx->pc = 0x1E18A8u;
}
