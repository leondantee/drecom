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

// Function: entry_00320c48
// Address: 0x320c48 - 0x320c80
void entry_00320c48_0x320c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320c48_0x320c48");
#endif

    ctx->pc = 0x320c48u;

    // 0x320c48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c4c: 0x90660344  lbu         $a2, 0x344($v1)
    ctx->pc = 0x320c4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x320c50: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x320c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x320c54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c58: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x320c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x320c5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320c60: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x320c60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x320c64: 0x14200056  bnez        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x320C64u;
    {
        const bool branch_taken_0x320c64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x320c64) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x320C6Cu;
    // 0x320c6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320c70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c74: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x320c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x320c78: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x320C78u;
    {
        const bool branch_taken_0x320c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320c78) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x320C80u;
}
