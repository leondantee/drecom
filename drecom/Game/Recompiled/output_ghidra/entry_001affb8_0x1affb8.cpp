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

// Function: entry_001affb8
// Address: 0x1affb8 - 0x1affd0
void entry_001affb8_0x1affb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001affb8_0x1affb8");
#endif

    ctx->pc = 0x1affb8u;

    // 0x1affb8: 0x8fa404b0  lw          $a0, 0x4B0($sp)
    ctx->pc = 0x1affb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1affbc: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1affbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1affc0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1affc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1affc4: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFFC4u;
    {
        const bool branch_taken_0x1affc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1affc4) {
            ctx->pc = 0x1AFFD0u;
            return;
        }
    }
    ctx->pc = 0x1AFFCCu;
    // 0x1affcc: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1affccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->pc = 0x1affd0u;
}
