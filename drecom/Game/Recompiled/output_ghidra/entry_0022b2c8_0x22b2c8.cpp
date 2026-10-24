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

// Function: entry_0022b2c8
// Address: 0x22b2c8 - 0x22b2f8
void entry_0022b2c8_0x22b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b2c8_0x22b2c8");
#endif

    ctx->pc = 0x22b2c8u;

    // 0x22b2c8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b2cc: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x22b2ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x22b2d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x22b2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22b2d4: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x22b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x22b2d8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B2D8u;
    {
        const bool branch_taken_0x22b2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22b2d8) {
            ctx->pc = 0x22B2F8u;
            return;
        }
    }
    ctx->pc = 0x22B2E0u;
    // 0x22b2e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b2e4: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x22b2e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x22b2e8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x22b2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22b2ec: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x22b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x22b2f0: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x22B2F0u;
    {
        const bool branch_taken_0x22b2f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b2f0) {
            ctx->pc = 0x22B348u;
            return;
        }
    }
    ctx->pc = 0x22B2F8u;
}
