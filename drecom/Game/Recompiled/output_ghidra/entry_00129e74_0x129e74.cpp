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

// Function: entry_00129e74
// Address: 0x129e74 - 0x129e9c
void entry_00129e74_0x129e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129e74_0x129e74");
#endif

    ctx->pc = 0x129e74u;

    // 0x129e74: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x129e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x129e78: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x129e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x129e7c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x129E7Cu;
    {
        const bool branch_taken_0x129e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e7c) {
            ctx->pc = 0x129E9Cu;
            return;
        }
    }
    ctx->pc = 0x129E84u;
    // 0x129e84: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x129e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x129e88: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x129e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x129e8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x129e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x129e90: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x129e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x129e94: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x129E94u;
    {
        const bool branch_taken_0x129e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e94) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x129E9Cu;
}
