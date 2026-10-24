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

// Function: entry_00264870
// Address: 0x264870 - 0x264884
void entry_00264870_0x264870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264870_0x264870");
#endif

    ctx->pc = 0x264870u;

    // 0x264870: 0xae37005c  sw          $s7, 0x5C($s1)
    ctx->pc = 0x264870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 23));
    // 0x264874: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x264874u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264878: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x264878u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26487c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26487Cu;
    {
        const bool branch_taken_0x26487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26487c) {
            ctx->pc = 0x2648B0u;
            return;
        }
    }
    ctx->pc = 0x264884u;
}
