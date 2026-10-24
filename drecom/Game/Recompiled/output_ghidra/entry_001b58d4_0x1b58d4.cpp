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

// Function: entry_001b58d4
// Address: 0x1b58d4 - 0x1b5908
void entry_001b58d4_0x1b58d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b58d4_0x1b58d4");
#endif

    ctx->pc = 0x1b58d4u;

    // 0x1b58d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b58d8: 0x906413a4  lbu         $a0, 0x13A4($v1)
    ctx->pc = 0x1b58d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5028)));
    // 0x1b58dc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1b58dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b58e0: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1b58e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b58e4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B58E4u;
    {
        const bool branch_taken_0x1b58e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b58e4) {
            ctx->pc = 0x1B5940u;
            return;
        }
    }
    ctx->pc = 0x1B58ECu;
    // 0x1b58ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b58ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b58f0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1b58f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b58f4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b58f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1b58f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b58f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b58fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b58fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1b5900: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B5900u;
    {
        const bool branch_taken_0x1b5900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5900) {
            ctx->pc = 0x1B5940u;
            return;
        }
    }
    ctx->pc = 0x1B5908u;
}
