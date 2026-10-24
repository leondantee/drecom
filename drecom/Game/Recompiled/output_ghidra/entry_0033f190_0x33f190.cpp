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

// Function: entry_0033f190
// Address: 0x33f190 - 0x33f1c4
void entry_0033f190_0x33f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f190_0x33f190");
#endif

    ctx->pc = 0x33f190u;

    // 0x33f190: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x33f190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x33f194: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33f194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33f198: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x33f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x33f19c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f1a0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x33f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x33f1a4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x33f1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x33f1a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33f1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33f1ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33f1b0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33F1B0u;
    {
        const bool branch_taken_0x33f1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33f1b0) {
            ctx->pc = 0x33F1C4u;
            return;
        }
    }
    ctx->pc = 0x33F1B8u;
    // 0x33f1b8: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x33f1b8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33f1bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33F1BCu;
    {
        const bool branch_taken_0x33f1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f1bc) {
            ctx->pc = 0x33F1E0u;
            return;
        }
    }
    ctx->pc = 0x33F1C4u;
}
