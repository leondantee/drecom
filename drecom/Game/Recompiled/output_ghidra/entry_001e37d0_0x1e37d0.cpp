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

// Function: entry_001e37d0
// Address: 0x1e37d0 - 0x1e37e8
void entry_001e37d0_0x1e37d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e37d0_0x1e37d0");
#endif

    ctx->pc = 0x1e37d0u;

    // 0x1e37d0: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x1e37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1e37d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e37d8: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e37d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e37dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E37DCu;
    {
        const bool branch_taken_0x1e37dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e37dc) {
            ctx->pc = 0x1E37E8u;
            return;
        }
    }
    ctx->pc = 0x1E37E4u;
    // 0x1e37e4: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1e37e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x1e37e8u;
}
