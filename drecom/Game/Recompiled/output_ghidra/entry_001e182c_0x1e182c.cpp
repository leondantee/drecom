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

// Function: entry_001e182c
// Address: 0x1e182c - 0x1e1864
void entry_001e182c_0x1e182c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e182c_0x1e182c");
#endif

    switch (ctx->pc) {
        case 0x1e1854u: goto label_1e1854;
        default: break;
    }

    ctx->pc = 0x1e182cu;

    // 0x1e182c: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x1e182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1e1830: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1834: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e1834u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e1838: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1838u;
    {
        const bool branch_taken_0x1e1838 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1838) {
            ctx->pc = 0x1E1864u;
            return;
        }
    }
    ctx->pc = 0x1E1840u;
    // 0x1e1840: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e1840u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e1844: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e1844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1848: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e1848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e184c: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E184Cu;
    SET_GPR_U32(ctx, 31, 0x1E1854u);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E184Cu, 0x1E1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1854u;
label_1e1854:
    // 0x1e1854: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e1854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e1858: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e1858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e185c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1E185Cu;
    {
        const bool branch_taken_0x1e185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e185c) {
            ctx->pc = 0x1E1A00u;
            return;
        }
    }
    ctx->pc = 0x1E1864u;
}
