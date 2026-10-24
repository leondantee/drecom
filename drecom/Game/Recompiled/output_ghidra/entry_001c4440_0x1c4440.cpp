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

// Function: entry_001c4440
// Address: 0x1c4440 - 0x1c4460
void entry_001c4440_0x1c4440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4440_0x1c4440");
#endif

    ctx->pc = 0x1c4440u;

    // 0x1c4440: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4444: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x1c4444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x1c4448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4448u;
    {
        const bool branch_taken_0x1c4448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4448) {
            ctx->pc = 0x1C4460u;
            return;
        }
    }
    ctx->pc = 0x1C4450u;
    // 0x1c4450: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4454: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x1c4454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c4458: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c4458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c445c: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x1c445cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c4460u;
}
