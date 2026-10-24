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

// Function: entry_001a4e7c
// Address: 0x1a4e7c - 0x1a4ea0
void entry_001a4e7c_0x1a4e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4e7c_0x1a4e7c");
#endif

    ctx->pc = 0x1a4e7cu;

    // 0x1a4e7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e80: 0x90630306  lbu         $v1, 0x306($v1)
    ctx->pc = 0x1a4e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 774)));
    // 0x1a4e84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4e88: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1a4e88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a4e8c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E8Cu;
    {
        const bool branch_taken_0x1a4e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e8c) {
            ctx->pc = 0x1A4EA0u;
            return;
        }
    }
    ctx->pc = 0x1A4E94u;
    // 0x1a4e94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a4e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a4e98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e9c: 0xa0640306  sb          $a0, 0x306($v1)
    ctx->pc = 0x1a4e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 774), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a4ea0u;
}
