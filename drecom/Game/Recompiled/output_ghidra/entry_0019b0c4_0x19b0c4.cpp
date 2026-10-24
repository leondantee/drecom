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

// Function: entry_0019b0c4
// Address: 0x19b0c4 - 0x19b0e4
void entry_0019b0c4_0x19b0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b0c4_0x19b0c4");
#endif

    ctx->pc = 0x19b0c4u;

    // 0x19b0c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19b0c8: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x19b0c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x19b0cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19b0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19b0d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b0d4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B0D4u;
    {
        const bool branch_taken_0x19b0d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b0d4) {
            ctx->pc = 0x19B0E4u;
            return;
        }
    }
    ctx->pc = 0x19B0DCu;
    // 0x19b0dc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19B0DCu;
    {
        const bool branch_taken_0x19b0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b0dc) {
            ctx->pc = 0x19B0E4u;
            return;
        }
    }
    ctx->pc = 0x19B0E4u;
}
