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

// Function: entry_00320b28
// Address: 0x320b28 - 0x320b68
void entry_00320b28_0x320b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320b28_0x320b28");
#endif

    ctx->pc = 0x320b28u;

    // 0x320b28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b2c: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x320b2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320b30: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x320b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x320b34: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x320b34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320b38: 0x1020fff1  beqz        $at, . + 4 + (-0xF << 2)
    ctx->pc = 0x320B38u;
    {
        const bool branch_taken_0x320b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b38) {
            ctx->pc = 0x320B00u;
            return;
        }
    }
    ctx->pc = 0x320B40u;
    // 0x320b40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b44: 0x90850348  lbu         $a1, 0x348($a0)
    ctx->pc = 0x320b44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320b48: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x320b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x320b4c: 0x1460009c  bnez        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x320B4Cu;
    {
        const bool branch_taken_0x320b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320b4c) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x320B54u;
    // 0x320b54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x320b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320b58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320b5c: 0xac650358  sw          $a1, 0x358($v1)
    ctx->pc = 0x320b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 5));
    // 0x320b60: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x320B60u;
    {
        const bool branch_taken_0x320b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b60) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x320B68u;
}
