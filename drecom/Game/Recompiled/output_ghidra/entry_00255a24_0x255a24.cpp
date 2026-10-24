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

// Function: entry_00255a24
// Address: 0x255a24 - 0x255a58
void entry_00255a24_0x255a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255a24_0x255a24");
#endif

    ctx->pc = 0x255a24u;

    // 0x255a24: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x255a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255a28: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x255a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x255a2c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x255a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x255a30: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x255a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x255a34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255A34u;
    {
        const bool branch_taken_0x255a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255a34) {
            ctx->pc = 0x255A58u;
            return;
        }
    }
    ctx->pc = 0x255A3Cu;
    // 0x255a3c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x255a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x255a40: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x255a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x255a44: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x255a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x255a48: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x255a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255a50: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x255a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x255a54: 0x0  nop
    ctx->pc = 0x255a54u;
    // NOP
    ctx->pc = 0x255a58u;
}
