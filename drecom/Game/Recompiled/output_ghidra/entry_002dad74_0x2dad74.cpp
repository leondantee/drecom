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

// Function: entry_002dad74
// Address: 0x2dad74 - 0x2dad94
void entry_002dad74_0x2dad74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dad74_0x2dad74");
#endif

    ctx->pc = 0x2dad74u;

    // 0x2dad74: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x2dad74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2dad78: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DAD78u;
    {
        const bool branch_taken_0x2dad78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad78) {
            ctx->pc = 0x2DAD94u;
            return;
        }
    }
    ctx->pc = 0x2DAD80u;
    // 0x2dad80: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x2dad80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2dad84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dad88: 0xa60300c0  sh          $v1, 0xC0($s0)
    ctx->pc = 0x2dad88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dad8c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2DAD8Cu;
    {
        const bool branch_taken_0x2dad8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad8c) {
            ctx->pc = 0x2DAE2Cu;
            return;
        }
    }
    ctx->pc = 0x2DAD94u;
}
