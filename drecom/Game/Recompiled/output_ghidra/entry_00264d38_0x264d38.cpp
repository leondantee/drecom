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

// Function: entry_00264d38
// Address: 0x264d38 - 0x264d68
void entry_00264d38_0x264d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264d38_0x264d38");
#endif

    ctx->pc = 0x264d38u;

    // 0x264d38: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264d3c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264d40: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x264d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x264d44: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x264d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x264d48: 0x24640068  addiu       $a0, $v1, 0x68
    ctx->pc = 0x264d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x264d4c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x264d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x264d50: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x264d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x264d54: 0xac64124c  sw          $a0, 0x124C($v1)
    ctx->pc = 0x264d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4684), GPR_U32(ctx, 4));
    // 0x264d58: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264d5c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264d60: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264d64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x264d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x264d68u;
}
