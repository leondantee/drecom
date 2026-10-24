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

// Function: entry_00327c30
// Address: 0x327c30 - 0x327c94
void entry_00327c30_0x327c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327c30_0x327c30");
#endif

    ctx->pc = 0x327c30u;

    // 0x327c30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c34: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x327c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x327c38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327c3c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x327c3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x327c40: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x327C40u;
    {
        const bool branch_taken_0x327c40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x327c40) {
            ctx->pc = 0x327BF8u;
            return;
        }
    }
    ctx->pc = 0x327C48u;
    // 0x327c48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c4c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x327c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x327c50: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x327c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327c54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c58: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x327c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x327c5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327c60: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x327c60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x327c64: 0x14200093  bnez        $at, . + 4 + (0x93 << 2)
    ctx->pc = 0x327C64u;
    {
        const bool branch_taken_0x327c64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x327c64) {
            ctx->pc = 0x327EB4u;
            return;
        }
    }
    ctx->pc = 0x327C6Cu;
    // 0x327c6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x327c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327c70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c74: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x327c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x327c78: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327c7c: 0x8ca40b18  lw          $a0, 0xB18($a1)
    ctx->pc = 0x327c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2840)));
    // 0x327c80: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x327c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x327c84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x327c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x327c88: 0xaca30b18  sw          $v1, 0xB18($a1)
    ctx->pc = 0x327c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2840), GPR_U32(ctx, 3));
    // 0x327c8c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x327C8Cu;
    {
        const bool branch_taken_0x327c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327c8c) {
            ctx->pc = 0x327EB4u;
            return;
        }
    }
    ctx->pc = 0x327C94u;
}
