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

// Function: entry_0032eb80
// Address: 0x32eb80 - 0x32eba4
void entry_0032eb80_0x32eb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032eb80_0x32eb80");
#endif

    ctx->pc = 0x32eb80u;

    // 0x32eb80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32eb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32eb84: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x32eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0110u));
    // 0x32eb88: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x32eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x32eb8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32eb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32eb90: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EB90u;
    {
        const bool branch_taken_0x32eb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32eb90) {
            ctx->pc = 0x32EBA4u;
            return;
        }
    }
    ctx->pc = 0x32EB98u;
    // 0x32eb98: 0x8e036614  lw          $v1, 0x6614($s0)
    ctx->pc = 0x32eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26132)));
    // 0x32eb9c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x32eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x32eba0: 0xae036614  sw          $v1, 0x6614($s0)
    ctx->pc = 0x32eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26132), GPR_U32(ctx, 3));
    ctx->pc = 0x32eba4u;
}
