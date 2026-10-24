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

// Function: entry_00215b38
// Address: 0x215b38 - 0x215b9c
void entry_00215b38_0x215b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215b38_0x215b38");
#endif

    ctx->pc = 0x215b38u;

    // 0x215b38: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x215b38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x215b3c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x215b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x215b40: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x215b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x215b44: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x215b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x215b48: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x215b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x215b4c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x215b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x215b50: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x215b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x215b54: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x215b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x215b58: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x215b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x215b5c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x215b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x215b60: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x215b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x215b64: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x215b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x215b68: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x215b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x215b6c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x215b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x215b70: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x215b70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x215b74: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x215b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x215b78: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x215b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x215b7c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x215b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x215b80: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215B80u;
    {
        const bool branch_taken_0x215b80 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x215b80) {
            ctx->pc = 0x215B9Cu;
            return;
        }
    }
    ctx->pc = 0x215B88u;
    // 0x215b88: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x215b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x215b8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215B8Cu;
    {
        const bool branch_taken_0x215b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215b8c) {
            ctx->pc = 0x215B9Cu;
            return;
        }
    }
    ctx->pc = 0x215B94u;
    // 0x215b94: 0x8084e54  j           func_213950
    ctx->pc = 0x215B94u;
    ctx->pc = 0x213950u;
    iWakeupThread_0x213950(rdram, ctx, runtime); return;
    ctx->pc = 0x215B9Cu;
}
