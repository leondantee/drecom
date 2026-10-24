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

// Function: entry_00221d0c
// Address: 0x221d0c - 0x221d40
void entry_00221d0c_0x221d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221d0c_0x221d0c");
#endif

    ctx->pc = 0x221d0cu;

    // 0x221d0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x221d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x221d10: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221d14: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x221d14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x221d18: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221d1c: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x221d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x221d20: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221d24: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x221d24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x221d28: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221d2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x221d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x221d30: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221d34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x221d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x221d38: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x221D38u;
    {
        const bool branch_taken_0x221d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221d38) {
            ctx->pc = 0x221DCCu;
            return;
        }
    }
    ctx->pc = 0x221D40u;
}
