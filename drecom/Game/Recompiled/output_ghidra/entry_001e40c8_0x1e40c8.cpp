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

// Function: entry_001e40c8
// Address: 0x1e40c8 - 0x1e40f0
void entry_001e40c8_0x1e40c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e40c8_0x1e40c8");
#endif

    ctx->pc = 0x1e40c8u;

    // 0x1e40c8: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e40cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e40ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e40d0: 0x106000f1  beqz        $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1E40D0u;
    {
        const bool branch_taken_0x1e40d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40d0) {
            ctx->pc = 0x1E4498u;
            return;
        }
    }
    ctx->pc = 0x1E40D8u;
    // 0x1e40d8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e40dc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e40dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e40e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E40E0u;
    {
        const bool branch_taken_0x1e40e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40e0) {
            ctx->pc = 0x1E40F0u;
            return;
        }
    }
    ctx->pc = 0x1E40E8u;
    // 0x1e40e8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e40e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1e40ec: 0x0  nop
    ctx->pc = 0x1e40ecu;
    // NOP
    ctx->pc = 0x1e40f0u;
}
