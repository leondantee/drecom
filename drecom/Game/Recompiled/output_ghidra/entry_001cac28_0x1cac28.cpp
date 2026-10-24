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

// Function: entry_001cac28
// Address: 0x1cac28 - 0x1cac50
void entry_001cac28_0x1cac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cac28_0x1cac28");
#endif

    ctx->pc = 0x1cac28u;

    // 0x1cac28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac2c: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1cac2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1cac30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAC30u;
    {
        const bool branch_taken_0x1cac30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cac30) {
            ctx->pc = 0x1CAC50u;
            return;
        }
    }
    ctx->pc = 0x1CAC38u;
    // 0x1cac38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1cac38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac3c: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x1cac3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x1cac40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cac40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cac44: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x1cac44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cac48: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CAC48u;
    {
        const bool branch_taken_0x1cac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cac48) {
            ctx->pc = 0x1CAC84u;
            return;
        }
    }
    ctx->pc = 0x1CAC50u;
}
