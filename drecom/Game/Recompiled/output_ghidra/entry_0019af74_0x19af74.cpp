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

// Function: entry_0019af74
// Address: 0x19af74 - 0x19af94
void entry_0019af74_0x19af74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af74_0x19af74");
#endif

    ctx->pc = 0x19af74u;

    // 0x19af74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af78: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x19af78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x19af7c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19af7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19af80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19af84: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AF84u;
    {
        const bool branch_taken_0x19af84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19af84) {
            ctx->pc = 0x19AF94u;
            return;
        }
    }
    ctx->pc = 0x19AF8Cu;
    // 0x19af8c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19AF8Cu;
    {
        const bool branch_taken_0x19af8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af8c) {
            ctx->pc = 0x19AF94u;
            return;
        }
    }
    ctx->pc = 0x19AF94u;
}
