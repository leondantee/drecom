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

// Function: entry_002494c0
// Address: 0x2494c0 - 0x24950c
void entry_002494c0_0x2494c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002494c0_0x2494c0");
#endif

    ctx->pc = 0x2494c0u;

    // 0x2494c0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2494c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2494c4: 0x9464002e  lhu         $a0, 0x2E($v1)
    ctx->pc = 0x2494c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2494c8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2494c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2494cc: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x2494ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x2494d0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2494D0u;
    {
        const bool branch_taken_0x2494d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2494d0) {
            ctx->pc = 0x249518u;
            return;
        }
    }
    ctx->pc = 0x2494D8u;
    // 0x2494d8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2494d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2494dc: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x2494dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2494e0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2494e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2494e4: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x2494e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x2494e8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2494e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2494ec: 0x90850029  lbu         $a1, 0x29($a0)
    ctx->pc = 0x2494ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x2494f0: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2494F0u;
    {
        const bool branch_taken_0x2494f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2494f0) {
            ctx->pc = 0x24950Cu;
            return;
        }
    }
    ctx->pc = 0x2494F8u;
    // 0x2494f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2494f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2494fc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2494fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249500: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x249500u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x249504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x249504u;
    {
        const bool branch_taken_0x249504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249504) {
            ctx->pc = 0x249518u;
            return;
        }
    }
    ctx->pc = 0x24950Cu;
}
