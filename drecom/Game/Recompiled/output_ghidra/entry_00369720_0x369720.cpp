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

// Function: entry_00369720
// Address: 0x369720 - 0x369748
void entry_00369720_0x369720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369720_0x369720");
#endif

    ctx->pc = 0x369720u;

    // 0x369720: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369724: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x369724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x369728: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x369728u;
    {
        const bool branch_taken_0x369728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x369728) {
            ctx->pc = 0x369748u;
            return;
        }
    }
    ctx->pc = 0x369730u;
    // 0x369730: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x369730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369734: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x369734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x369738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x369738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36973c: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x36973cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x369740: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x369740u;
    {
        const bool branch_taken_0x369740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369740) {
            ctx->pc = 0x36975Cu;
            return;
        }
    }
    ctx->pc = 0x369748u;
}
