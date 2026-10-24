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

// Function: entry_0024b7c0
// Address: 0x24b7c0 - 0x24b818
void entry_0024b7c0_0x24b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024b7c0_0x24b7c0");
#endif

    ctx->pc = 0x24b7c0u;

    // 0x24b7c0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x24b7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b7c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b7c8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24b7cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b7d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b7d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b7d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b7dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b7e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b7e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24b7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b7e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b7ec: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24b7f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b7f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b7f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b7fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b800: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b804: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b808: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24b808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24b80c: 0x24045900  addiu       $a0, $zero, 0x5900
    ctx->pc = 0x24b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22784));
    // 0x24b810: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24b810u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24b814: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24b814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    ctx->pc = 0x24b818u;
}
