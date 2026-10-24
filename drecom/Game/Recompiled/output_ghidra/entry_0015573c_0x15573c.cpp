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

// Function: entry_0015573c
// Address: 0x15573c - 0x155754
void entry_0015573c_0x15573c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015573c_0x15573c");
#endif

    ctx->pc = 0x15573cu;

    // 0x15573c: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x15573cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x155740: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155740u;
    {
        const bool branch_taken_0x155740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155740) {
            ctx->pc = 0x155754u;
            return;
        }
    }
    ctx->pc = 0x155748u;
    // 0x155748: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x155748u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15574c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x15574Cu;
    {
        const bool branch_taken_0x15574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15574c) {
            ctx->pc = 0x1557E4u;
            return;
        }
    }
    ctx->pc = 0x155754u;
}
