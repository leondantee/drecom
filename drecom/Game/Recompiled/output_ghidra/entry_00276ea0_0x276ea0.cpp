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

// Function: entry_00276ea0
// Address: 0x276ea0 - 0x276eb8
void entry_00276ea0_0x276ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276ea0_0x276ea0");
#endif

    ctx->pc = 0x276ea0u;

    // 0x276ea0: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x276ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x276ea4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x276EA4u;
    {
        const bool branch_taken_0x276ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276ea4) {
            ctx->pc = 0x276DA8u;
            return;
        }
    }
    ctx->pc = 0x276EACu;
    // 0x276eac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x276eacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276eb0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x276EB0u;
    {
        const bool branch_taken_0x276eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276eb0) {
            ctx->pc = 0x277030u;
            return;
        }
    }
    ctx->pc = 0x276EB8u;
}
