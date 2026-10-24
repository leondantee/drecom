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

// Function: entry_0016d16c
// Address: 0x16d16c - 0x16d190
void entry_0016d16c_0x16d16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d16c_0x16d16c");
#endif

    ctx->pc = 0x16d16cu;

    // 0x16d16c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x16d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16d170: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16d174: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d178: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D178u;
    {
        const bool branch_taken_0x16d178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d178) {
            ctx->pc = 0x16D190u;
            return;
        }
    }
    ctx->pc = 0x16D180u;
    // 0x16d180: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x16d180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16d184: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x16d184u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16d188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D188u;
    {
        const bool branch_taken_0x16d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d188) {
            ctx->pc = 0x16D19Cu;
            return;
        }
    }
    ctx->pc = 0x16D190u;
}
