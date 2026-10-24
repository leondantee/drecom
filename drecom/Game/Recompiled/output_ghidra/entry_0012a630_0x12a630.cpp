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

// Function: entry_0012a630
// Address: 0x12a630 - 0x12a64c
void entry_0012a630_0x12a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a630_0x12a630");
#endif

    ctx->pc = 0x12a630u;

    // 0x12a630: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12a630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12a634: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x12a634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12a638: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12a638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x12a63c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A63Cu;
    {
        const bool branch_taken_0x12a63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a63c) {
            ctx->pc = 0x12A64Cu;
            return;
        }
    }
    ctx->pc = 0x12A644u;
    // 0x12a644: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x12a644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x12a648: 0xa602007c  sh          $v0, 0x7C($s0)
    ctx->pc = 0x12a648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12a64cu;
}
