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

// Function: entry_0011cd10
// Address: 0x11cd10 - 0x11cd6c
void entry_0011cd10_0x11cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cd10_0x11cd10");
#endif

    ctx->pc = 0x11cd10u;

    // 0x11cd10: 0x9203f  dsra32      $a0, $t1, 0
    ctx->pc = 0x11cd10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x11cd14: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11CD14u;
    {
        const bool branch_taken_0x11cd14 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x11cd14) {
            ctx->pc = 0x11CD6Cu;
            return;
        }
    }
    ctx->pc = 0x11CD1Cu;
    // 0x11cd1c: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x11cd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11cd20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11cd20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11cd24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11cd28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11cd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11cd2c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11cd30: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x11cd30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x11cd34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11cd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11cd38: 0x41823  negu        $v1, $a0
    ctx->pc = 0x11cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x11cd3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11cd40: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x11cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x11cd44: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x11cd44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x11cd48: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x11cd48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x11cd4c: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x11cd4cu;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x11cd50: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x11cd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11cd54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11cd54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11cd58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11cd58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11cd5c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x11cd5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x11cd60: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11cd64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11cd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11cd68: 0xe34825  or          $t1, $a3, $v1
    ctx->pc = 0x11cd68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    ctx->pc = 0x11cd6cu;
}
