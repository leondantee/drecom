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

// Function: entry_001da5c8
// Address: 0x1da5c8 - 0x1da610
void entry_001da5c8_0x1da5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da5c8_0x1da5c8");
#endif

    ctx->pc = 0x1da5c8u;

    // 0x1da5c8: 0x8fb400d8  lw          $s4, 0xD8($sp)
    ctx->pc = 0x1da5c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da5cc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da5d0: 0xac540030  sw          $s4, 0x30($v0)
    ctx->pc = 0x1da5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 20));
    // 0x1da5d4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1da5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da5d8: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x1da5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1da5dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1da5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1da5e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1da5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da5e4: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da5e8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da5ec: 0x305e000f  andi        $fp, $v0, 0xF
    ctx->pc = 0x1da5ecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1da5f0: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA5F0u;
    {
        const bool branch_taken_0x1da5f0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da5f0) {
            ctx->pc = 0x1DA610u;
            return;
        }
    }
    ctx->pc = 0x1DA5F8u;
    // 0x1da5f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1da5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1da5fc: 0x5e1823  subu        $v1, $v0, $fp
    ctx->pc = 0x1da5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1da600: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da608: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1da608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1da60c: 0x0  nop
    ctx->pc = 0x1da60cu;
    // NOP
    ctx->pc = 0x1da610u;
}
