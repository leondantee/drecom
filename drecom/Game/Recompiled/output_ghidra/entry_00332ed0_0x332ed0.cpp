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

// Function: entry_00332ed0
// Address: 0x332ed0 - 0x332ee8
void entry_00332ed0_0x332ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332ed0_0x332ed0");
#endif

    ctx->pc = 0x332ed0u;

    // 0x332ed0: 0x2932821  addu        $a1, $s4, $s3
    ctx->pc = 0x332ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x332ed4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x332ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x332ed8: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x332ed8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x332edc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x332EDCu;
    {
        const bool branch_taken_0x332edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332edc) {
            ctx->pc = 0x332EE8u;
            return;
        }
    }
    ctx->pc = 0x332EE4u;
    // 0x332ee4: 0x2539023  subu        $s2, $s2, $s3
    ctx->pc = 0x332ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    ctx->pc = 0x332ee8u;
}
