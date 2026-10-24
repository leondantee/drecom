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

// Function: $L2
// Address: 0x118a4c - 0x118a68
void ps2__L2_0x118a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L2_0x118a4c");
#endif

    ctx->pc = 0x118a4cu;

    // 0x118a4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x118a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x118a50: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x118a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x118a54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x118a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x118a58: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x118A58u;
    {
        const bool branch_taken_0x118a58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x118a58) {
            ctx->pc = 0x118A8Cu;
            return;
        }
    }
    ctx->pc = 0x118A60u;
    // 0x118a60: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x118a60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x118a64: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x118a64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x118a68u;
}
