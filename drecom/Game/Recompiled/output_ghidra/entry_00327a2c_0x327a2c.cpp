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

// Function: entry_00327a2c
// Address: 0x327a2c - 0x327a6c
void entry_00327a2c_0x327a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327a2c_0x327a2c");
#endif

    ctx->pc = 0x327a2cu;

    // 0x327a2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a30: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x327a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x327a34: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x327a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327a38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a3c: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x327a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x327a40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327a44: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x327a44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x327a48: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x327A48u;
    {
        const bool branch_taken_0x327a48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x327a48) {
            ctx->pc = 0x327A6Cu;
            return;
        }
    }
    ctx->pc = 0x327A50u;
    // 0x327a50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x327a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327a54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a58: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x327a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x327a5c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x327a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327a60: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x327a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x327a64: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x327a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x327a68: 0xac830b18  sw          $v1, 0xB18($a0)
    ctx->pc = 0x327a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 3));
    ctx->pc = 0x327a6cu;
}
