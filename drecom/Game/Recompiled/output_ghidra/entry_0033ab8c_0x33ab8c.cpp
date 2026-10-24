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

// Function: entry_0033ab8c
// Address: 0x33ab8c - 0x33aba4
void entry_0033ab8c_0x33ab8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ab8c_0x33ab8c");
#endif

    ctx->pc = 0x33ab8cu;

    // 0x33ab8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33ab90: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AB90u;
    {
        const bool branch_taken_0x33ab90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ab90) {
            ctx->pc = 0x33ABA4u;
            return;
        }
    }
    ctx->pc = 0x33AB98u;
    // 0x33ab98: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33ab98u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33ab9c: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x33AB9Cu;
    {
        const bool branch_taken_0x33ab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ab9c) {
            ctx->pc = 0x33B0ACu;
            return;
        }
    }
    ctx->pc = 0x33ABA4u;
}
