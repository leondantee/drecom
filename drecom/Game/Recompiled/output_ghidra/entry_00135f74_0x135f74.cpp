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

// Function: entry_00135f74
// Address: 0x135f74 - 0x135f94
void entry_00135f74_0x135f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135f74_0x135f74");
#endif

    ctx->pc = 0x135f74u;

    // 0x135f74: 0x86030088  lh          $v1, 0x88($s0)
    ctx->pc = 0x135f74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x135f78: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135F78u;
    {
        const bool branch_taken_0x135f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f78) {
            ctx->pc = 0x135F94u;
            return;
        }
    }
    ctx->pc = 0x135F80u;
    // 0x135f80: 0x86030088  lh          $v1, 0x88($s0)
    ctx->pc = 0x135f80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x135f84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x135f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135f88: 0xa6030088  sh          $v1, 0x88($s0)
    ctx->pc = 0x135f88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 3));
    // 0x135f8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135F8Cu;
    {
        const bool branch_taken_0x135f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f8c) {
            ctx->pc = 0x135FACu;
            return;
        }
    }
    ctx->pc = 0x135F94u;
}
