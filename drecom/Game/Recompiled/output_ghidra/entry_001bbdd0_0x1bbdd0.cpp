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

// Function: entry_001bbdd0
// Address: 0x1bbdd0 - 0x1bbdf4
void entry_001bbdd0_0x1bbdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbdd0_0x1bbdd0");
#endif

    ctx->pc = 0x1bbdd0u;

    // 0x1bbdd0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bbdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbdd4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1bbdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1bbdd8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBDD8u;
    {
        const bool branch_taken_0x1bbdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbdd8) {
            ctx->pc = 0x1BBDF4u;
            return;
        }
    }
    ctx->pc = 0x1BBDE0u;
    // 0x1bbde0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bbde0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbde4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bbde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bbde8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bbde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1bbdec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bbdecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bbdf0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1bbdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x1bbdf4u;
}
