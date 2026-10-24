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

// Function: entry_001a26c8
// Address: 0x1a26c8 - 0x1a26f0
void entry_001a26c8_0x1a26c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a26c8_0x1a26c8");
#endif

    ctx->pc = 0x1a26c8u;

    // 0x1a26c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a26cc: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x1a26ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a26d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a26d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a26d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a26d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a26d8: 0xa0640005  sb          $a0, 0x5($v1)
    ctx->pc = 0x1a26d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a26dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a26dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a26e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a26e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a26e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a26e8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1A26E8u;
    {
        const bool branch_taken_0x1a26e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a26e8) {
            ctx->pc = 0x1A2864u;
            return;
        }
    }
    ctx->pc = 0x1A26F0u;
}
