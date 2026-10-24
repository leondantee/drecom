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

// Function: entry_00114b74
// Address: 0x114b74 - 0x114ba8
void entry_00114b74_0x114b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114b74_0x114b74");
#endif

    ctx->pc = 0x114b74u;

    // 0x114b74: 0x24630036  addiu       $v1, $v1, 0x36
    ctx->pc = 0x114b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
    // 0x114b78: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x114b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x114b7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114b80: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x114b80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x114b84: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x114b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x114b88: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x114b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x114b8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x114b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x114b90: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x114b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x114b94: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x114b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x114b98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x114b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x114b9c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x114b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x114ba0: 0x3405f240  ori         $a1, $zero, 0xF240
    ctx->pc = 0x114ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x114ba4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x114ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    ctx->pc = 0x114ba8u;
}
