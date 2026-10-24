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

// Function: entry_001dac44
// Address: 0x1dac44 - 0x1dac78
void entry_001dac44_0x1dac44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dac44_0x1dac44");
#endif

    ctx->pc = 0x1dac44u;

    // 0x1dac44: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1dac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dac48: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1dac48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1dac4c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x1dac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x1dac50: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1dac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1dac54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DAC54u;
    {
        const bool branch_taken_0x1dac54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dac54) {
            ctx->pc = 0x1DAC78u;
            return;
        }
    }
    ctx->pc = 0x1DAC5Cu;
    // 0x1dac5c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1dac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dac60: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x1dac60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1dac64: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1dac64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dac68: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dac6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dac70: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1dac70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1dac74: 0x0  nop
    ctx->pc = 0x1dac74u;
    // NOP
    ctx->pc = 0x1dac78u;
}
