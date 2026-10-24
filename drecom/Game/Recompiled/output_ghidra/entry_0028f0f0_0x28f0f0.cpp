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

// Function: entry_0028f0f0
// Address: 0x28f0f0 - 0x28f13c
void entry_0028f0f0_0x28f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f0f0_0x28f0f0");
#endif

    ctx->pc = 0x28f0f0u;

    // 0x28f0f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f0f4: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f0f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f0f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f0fc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x28f0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x28f100: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28F100u;
    {
        const bool branch_taken_0x28f100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f100) {
            ctx->pc = 0x28F13Cu;
            return;
        }
    }
    ctx->pc = 0x28F108u;
    // 0x28f108: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f10c: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f10cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f110: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f114: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x28f114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x28f118: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F118u;
    {
        const bool branch_taken_0x28f118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f118) {
            ctx->pc = 0x28F13Cu;
            return;
        }
    }
    ctx->pc = 0x28F120u;
    // 0x28f120: 0x8e035db0  lw          $v1, 0x5DB0($s0)
    ctx->pc = 0x28f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23984)));
    // 0x28f124: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x28f124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28f128: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F128u;
    {
        const bool branch_taken_0x28f128 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f128) {
            ctx->pc = 0x28F13Cu;
            return;
        }
    }
    ctx->pc = 0x28F130u;
    // 0x28f130: 0x8e035db0  lw          $v1, 0x5DB0($s0)
    ctx->pc = 0x28f130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23984)));
    // 0x28f134: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28f134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28f138: 0xae035db0  sw          $v1, 0x5DB0($s0)
    ctx->pc = 0x28f138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23984), GPR_U32(ctx, 3));
    ctx->pc = 0x28f13cu;
}
