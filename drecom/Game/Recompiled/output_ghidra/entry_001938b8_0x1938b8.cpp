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

// Function: entry_001938b8
// Address: 0x1938b8 - 0x1938d0
void entry_001938b8_0x1938b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001938b8_0x1938b8");
#endif

    ctx->pc = 0x1938b8u;

    // 0x1938b8: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1938b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1938bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1938BCu;
    {
        const bool branch_taken_0x1938bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1938bc) {
            ctx->pc = 0x1938D0u;
            return;
        }
    }
    ctx->pc = 0x1938C4u;
    // 0x1938c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1938c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1938c8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1938c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1938cc: 0x0  nop
    ctx->pc = 0x1938ccu;
    // NOP
    ctx->pc = 0x1938d0u;
}
