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

// Function: entry_00320da0
// Address: 0x320da0 - 0x320dc0
void entry_00320da0_0x320da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320da0_0x320da0");
#endif

    ctx->pc = 0x320da0u;

    // 0x320da0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320da4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x320da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320da8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320dac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x320DACu;
    {
        const bool branch_taken_0x320dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320dac) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x320DB4u;
    // 0x320db4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320db8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320dbc: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x320dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    ctx->pc = 0x320dc0u;
}
