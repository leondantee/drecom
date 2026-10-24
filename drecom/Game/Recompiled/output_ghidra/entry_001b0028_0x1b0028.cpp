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

// Function: entry_001b0028
// Address: 0x1b0028 - 0x1b0048
void entry_001b0028_0x1b0028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0028_0x1b0028");
#endif

    ctx->pc = 0x1b0028u;

    // 0x1b0028: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b0028u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b002c: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x1b002cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1b0030: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b0030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b0034: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b0034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b0038: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0038u;
    {
        const bool branch_taken_0x1b0038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0038) {
            ctx->pc = 0x1B0048u;
            return;
        }
    }
    ctx->pc = 0x1B0040u;
    // 0x1b0040: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b0040u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b0044: 0x0  nop
    ctx->pc = 0x1b0044u;
    // NOP
    ctx->pc = 0x1b0048u;
}
