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

// Function: entry_00251650
// Address: 0x251650 - 0x251680
void entry_00251650_0x251650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00251650_0x251650");
#endif

    ctx->pc = 0x251650u;

    // 0x251650: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x251650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251654: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x251654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251658: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x25165c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251660: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x251664: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251668: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25166c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25166cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251670: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251670u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x251674: 0x24045804  addiu       $a0, $zero, 0x5804
    ctx->pc = 0x251674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22532));
    // 0x251678: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25167c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x25167cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    ctx->pc = 0x251680u;
}
