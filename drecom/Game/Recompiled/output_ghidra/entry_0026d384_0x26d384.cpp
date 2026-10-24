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

// Function: entry_0026d384
// Address: 0x26d384 - 0x26d39c
void entry_0026d384_0x26d384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026d384_0x26d384");
#endif

    ctx->pc = 0x26d384u;

    // 0x26d384: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d388: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x26d388u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x26d38c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x26d38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26d390: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x26d390u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x26d394: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x26D394u;
    {
        const bool branch_taken_0x26d394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d394) {
            ctx->pc = 0x26D450u;
            return;
        }
    }
    ctx->pc = 0x26D39Cu;
}
