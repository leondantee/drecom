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

// Function: entry_001b5f24
// Address: 0x1b5f24 - 0x1b5f94
void entry_001b5f24_0x1b5f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5f24_0x1b5f24");
#endif

    ctx->pc = 0x1b5f24u;

    // 0x1b5f24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5f28: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1b5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b5f2c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b5f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1b5f30: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b5f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1b5f34: 0x1060036a  beqz        $v1, . + 4 + (0x36A << 2)
    ctx->pc = 0x1B5F34u;
    {
        const bool branch_taken_0x1b5f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f34) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B5F3Cu;
    // 0x1b5f3c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b5f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5f40: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b5f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b5f44: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1b5f48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b5f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b5f4c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b5f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b5f50: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1b5f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1b5f54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5f58: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1b5f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b5f5c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b5f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b5f60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b5f64: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5F64u;
    {
        const bool branch_taken_0x1b5f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b5f64) {
            ctx->pc = 0x1B5F94u;
            return;
        }
    }
    ctx->pc = 0x1B5F6Cu;
    // 0x1b5f6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5f70: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5F70u;
    {
        const bool branch_taken_0x1b5f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b5f70) {
            ctx->pc = 0x1B5F94u;
            return;
        }
    }
    ctx->pc = 0x1B5F78u;
    // 0x1b5f78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b5f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5f7c: 0x10860358  beq         $a0, $a2, . + 4 + (0x358 << 2)
    ctx->pc = 0x1B5F7Cu;
    {
        const bool branch_taken_0x1b5f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1b5f7c) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B5F84u;
    // 0x1b5f84: 0x10800356  beqz        $a0, . + 4 + (0x356 << 2)
    ctx->pc = 0x1B5F84u;
    {
        const bool branch_taken_0x1b5f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f84) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B5F8Cu;
    // 0x1b5f8c: 0x10000354  b           . + 4 + (0x354 << 2)
    ctx->pc = 0x1B5F8Cu;
    {
        const bool branch_taken_0x1b5f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f8c) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B5F94u;
}
