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
// Address: 0x118cd0 - 0x118cec
void ps2__L2_0x118cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L2_0x118cd0");
#endif

    ctx->pc = 0x118cd0u;

    // 0x118cd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x118cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x118cd4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x118cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x118cd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x118cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x118cdc: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x118CDCu;
    {
        const bool branch_taken_0x118cdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x118cdc) {
            ctx->pc = 0x118D08u;
            return;
        }
    }
    ctx->pc = 0x118CE4u;
    // 0x118ce4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x118ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x118ce8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x118ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x118cecu;
}
