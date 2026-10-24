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

// Function: entry_00255094
// Address: 0x255094 - 0x2550c8
void entry_00255094_0x255094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255094_0x255094");
#endif

    ctx->pc = 0x255094u;

    // 0x255094: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x255094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x255098: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x255098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x25509c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x25509cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2550a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2550a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2550a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2550A4u;
    {
        const bool branch_taken_0x2550a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2550a4) {
            ctx->pc = 0x2550C8u;
            return;
        }
    }
    ctx->pc = 0x2550ACu;
    // 0x2550ac: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2550acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2550b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2550b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2550b4: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x2550b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2550b8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2550b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2550bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2550bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2550c0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2550c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2550c4: 0x0  nop
    ctx->pc = 0x2550c4u;
    // NOP
    ctx->pc = 0x2550c8u;
}
