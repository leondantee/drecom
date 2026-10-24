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

// Function: entry_001257c4
// Address: 0x1257c4 - 0x1257ec
void entry_001257c4_0x1257c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001257c4_0x1257c4");
#endif

    ctx->pc = 0x1257c4u;

    // 0x1257c4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1257c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1257c8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1257c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1257cc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1257CCu;
    {
        const bool branch_taken_0x1257cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1257cc) {
            ctx->pc = 0x1257ECu;
            return;
        }
    }
    ctx->pc = 0x1257D4u;
    // 0x1257d4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1257d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1257d8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x1257d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1257dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1257dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1257e0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1257e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1257e4: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x1257E4u;
    {
        const bool branch_taken_0x1257e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1257e4) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x1257ECu;
}
