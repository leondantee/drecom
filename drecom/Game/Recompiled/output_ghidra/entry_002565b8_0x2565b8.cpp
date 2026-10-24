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

// Function: entry_002565b8
// Address: 0x2565b8 - 0x256600
void entry_002565b8_0x2565b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002565b8_0x2565b8");
#endif

    ctx->pc = 0x2565b8u;

    // 0x2565b8: 0x8fb400d8  lw          $s4, 0xD8($sp)
    ctx->pc = 0x2565b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2565bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2565bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2565c0: 0xac540030  sw          $s4, 0x30($v0)
    ctx->pc = 0x2565c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 20));
    // 0x2565c4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2565c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2565c8: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x2565c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2565cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2565ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2565d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2565d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2565d4: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2565d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2565d8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2565d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2565dc: 0x305e000f  andi        $fp, $v0, 0xF
    ctx->pc = 0x2565dcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2565e0: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2565E0u;
    {
        const bool branch_taken_0x2565e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2565e0) {
            ctx->pc = 0x256600u;
            return;
        }
    }
    ctx->pc = 0x2565E8u;
    // 0x2565e8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2565e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2565ec: 0x5e1823  subu        $v1, $v0, $fp
    ctx->pc = 0x2565ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2565f0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2565f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2565f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2565f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2565f8: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2565f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2565fc: 0x0  nop
    ctx->pc = 0x2565fcu;
    // NOP
    ctx->pc = 0x256600u;
}
