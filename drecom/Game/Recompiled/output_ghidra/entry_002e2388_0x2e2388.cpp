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

// Function: entry_002e2388
// Address: 0x2e2388 - 0x2e23a8
void entry_002e2388_0x2e2388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2388_0x2e2388");
#endif

    ctx->pc = 0x2e2388u;

    // 0x2e2388: 0x860300c6  lh          $v1, 0xC6($s0)
    ctx->pc = 0x2e2388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x2e238c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E238Cu;
    {
        const bool branch_taken_0x2e238c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e238c) {
            ctx->pc = 0x2E23A8u;
            return;
        }
    }
    ctx->pc = 0x2E2394u;
    // 0x2e2394: 0x860300c6  lh          $v1, 0xC6($s0)
    ctx->pc = 0x2e2394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 198)));
    // 0x2e2398: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e2398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e239c: 0xa60300c6  sh          $v1, 0xC6($s0)
    ctx->pc = 0x2e239cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e23a0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2E23A0u;
    {
        const bool branch_taken_0x2e23a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e23a0) {
            ctx->pc = 0x2E242Cu;
            return;
        }
    }
    ctx->pc = 0x2E23A8u;
}
