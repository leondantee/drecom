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

// Function: entry_00127b64
// Address: 0x127b64 - 0x127b8c
void entry_00127b64_0x127b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127b64_0x127b64");
#endif

    ctx->pc = 0x127b64u;

    // 0x127b64: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x127b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x127b68: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x127b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x127b6c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x127B6Cu;
    {
        const bool branch_taken_0x127b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b6c) {
            ctx->pc = 0x127B8Cu;
            return;
        }
    }
    ctx->pc = 0x127B74u;
    // 0x127b74: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x127b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x127b78: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x127b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x127b7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x127b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x127b80: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x127b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x127b84: 0x10000213  b           . + 4 + (0x213 << 2)
    ctx->pc = 0x127B84u;
    {
        const bool branch_taken_0x127b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b84) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x127B8Cu;
}
