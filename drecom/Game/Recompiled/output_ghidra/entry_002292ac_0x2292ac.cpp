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

// Function: entry_002292ac
// Address: 0x2292ac - 0x2292cc
void entry_002292ac_0x2292ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002292ac_0x2292ac");
#endif

    ctx->pc = 0x2292acu;

    // 0x2292ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2292acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2292b0: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x2292b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x2292b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2292B4u;
    {
        const bool branch_taken_0x2292b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2292b4) {
            ctx->pc = 0x2292CCu;
            return;
        }
    }
    ctx->pc = 0x2292BCu;
    // 0x2292bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2292bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2292c0: 0x8462127e  lh          $v0, 0x127E($v1)
    ctx->pc = 0x2292c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2292c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2292c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2292c8: 0xa462127e  sh          $v0, 0x127E($v1)
    ctx->pc = 0x2292c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2292ccu;
}
