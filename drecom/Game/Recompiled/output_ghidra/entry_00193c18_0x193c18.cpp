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

// Function: entry_00193c18
// Address: 0x193c18 - 0x193c28
void entry_00193c18_0x193c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193c18_0x193c18");
#endif

    ctx->pc = 0x193c18u;

    // 0x193c18: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x193c18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193c1c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x193c1cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193c20: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x193C20u;
    {
        const bool branch_taken_0x193c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193c20) {
            ctx->pc = 0x193D70u;
            return;
        }
    }
    ctx->pc = 0x193C28u;
}
