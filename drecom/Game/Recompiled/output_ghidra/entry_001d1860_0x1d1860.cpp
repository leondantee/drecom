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

// Function: entry_001d1860
// Address: 0x1d1860 - 0x1d1874
void entry_001d1860_0x1d1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1860_0x1d1860");
#endif

    ctx->pc = 0x1d1860u;

    // 0x1d1860: 0x36830008  ori         $v1, $s4, 0x8
    ctx->pc = 0x1d1860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
    // 0x1d1864: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1d1864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d1868: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1d1868u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d186c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D186Cu;
    {
        const bool branch_taken_0x1d186c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d186c) {
            ctx->pc = 0x1D1880u;
            return;
        }
    }
    ctx->pc = 0x1D1874u;
}
