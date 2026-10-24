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

// Function: entry_001a16c8
// Address: 0x1a16c8 - 0x1a16f0
void entry_001a16c8_0x1a16c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a16c8_0x1a16c8");
#endif

    ctx->pc = 0x1a16c8u;

    // 0x1a16c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a16c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a16cc: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x1a16ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1a16d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A16D0u;
    {
        const bool branch_taken_0x1a16d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a16d0) {
            ctx->pc = 0x1A16F0u;
            return;
        }
    }
    ctx->pc = 0x1A16D8u;
    // 0x1a16d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a16d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a16dc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1a16dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a16e0: 0x84a4000c  lh          $a0, 0xC($a1)
    ctx->pc = 0x1a16e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a16e4: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x1a16e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1a16e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a16ec: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x1a16ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a16f0u;
}
