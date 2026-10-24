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

// Function: entry_001bd8c4
// Address: 0x1bd8c4 - 0x1bd8f8
void entry_001bd8c4_0x1bd8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd8c4_0x1bd8c4");
#endif

    ctx->pc = 0x1bd8c4u;

    // 0x1bd8c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd8c8: 0x908313a4  lbu         $v1, 0x13A4($a0)
    ctx->pc = 0x1bd8c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5028)));
    // 0x1bd8cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bd8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd8d0: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1bd8d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bd8d4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BD8D4u;
    {
        const bool branch_taken_0x1bd8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8d4) {
            ctx->pc = 0x1BD930u;
            return;
        }
    }
    ctx->pc = 0x1BD8DCu;
    // 0x1bd8dc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd8e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bd8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bd8e4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bd8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1bd8e8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bd8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bd8ec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bd8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bd8f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BD8F0u;
    {
        const bool branch_taken_0x1bd8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8f0) {
            ctx->pc = 0x1BD930u;
            return;
        }
    }
    ctx->pc = 0x1BD8F8u;
}
