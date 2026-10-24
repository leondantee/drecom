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

// Function: entry_001b2138
// Address: 0x1b2138 - 0x1b2154
void entry_001b2138_0x1b2138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2138_0x1b2138");
#endif

    ctx->pc = 0x1b2138u;

    // 0x1b2138: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b213c: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x1b213cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b2140: 0x1440ff02  bnez        $v0, . + 4 + (-0xFE << 2)
    ctx->pc = 0x1B2140u;
    {
        const bool branch_taken_0x1b2140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2140) {
            ctx->pc = 0x1B1D4Cu;
            return;
        }
    }
    ctx->pc = 0x1B2148u;
    // 0x1b2148: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1b2148u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b214c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B214Cu;
    {
        const bool branch_taken_0x1b214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b214c) {
            ctx->pc = 0x1B2190u;
            return;
        }
    }
    ctx->pc = 0x1B2154u;
}
