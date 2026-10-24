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

// Function: entry_001b97b8
// Address: 0x1b97b8 - 0x1b9810
void entry_001b97b8_0x1b97b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b97b8_0x1b97b8");
#endif

    ctx->pc = 0x1b97b8u;

    // 0x1b97b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b97bc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1b97bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b97c0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1b97c4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b97c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b97c8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B97C8u;
    {
        const bool branch_taken_0x1b97c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b97c8) {
            ctx->pc = 0x1B981Cu;
            return;
        }
    }
    ctx->pc = 0x1B97D0u;
    // 0x1b97d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b97d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b97d4: 0x906513a6  lbu         $a1, 0x13A6($v1)
    ctx->pc = 0x1b97d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b97d8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b97d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b97dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b97e0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B97E0u;
    {
        const bool branch_taken_0x1b97e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b97e0) {
            ctx->pc = 0x1B9810u;
            return;
        }
    }
    ctx->pc = 0x1B97E8u;
    // 0x1b97e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b97e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b97ec: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B97ECu;
    {
        const bool branch_taken_0x1b97ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b97ec) {
            ctx->pc = 0x1B9810u;
            return;
        }
    }
    ctx->pc = 0x1B97F4u;
    // 0x1b97f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b97f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b97f8: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B97F8u;
    {
        const bool branch_taken_0x1b97f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b97f8) {
            ctx->pc = 0x1B981Cu;
            return;
        }
    }
    ctx->pc = 0x1B9800u;
    // 0x1b9800: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9800u;
    {
        const bool branch_taken_0x1b9800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9800) {
            ctx->pc = 0x1B981Cu;
            return;
        }
    }
    ctx->pc = 0x1B9808u;
    // 0x1b9808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9808u;
    {
        const bool branch_taken_0x1b9808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9808) {
            ctx->pc = 0x1B981Cu;
            return;
        }
    }
    ctx->pc = 0x1B9810u;
}
