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

// Function: entry_00136d50
// Address: 0x136d50 - 0x136d90
void entry_00136d50_0x136d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136d50_0x136d50");
#endif

    ctx->pc = 0x136d50u;

    // 0x136d50: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x136d50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x136d54: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x136d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136d58: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x136d58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x136d5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x136d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x136d60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x136d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136d64: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x136d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x136d68: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x136d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136d6c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136d6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136d70: 0x3ae3c  dsll32      $s5, $v1, 24
    ctx->pc = 0x136d70u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136d74: 0x15ae3f  dsra32      $s5, $s5, 24
    ctx->pc = 0x136d74u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
    // 0x136d78: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x136d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x136d7c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136d7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136d80: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136D80u;
    {
        const bool branch_taken_0x136d80 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x136d80) {
            ctx->pc = 0x136D90u;
            return;
        }
    }
    ctx->pc = 0x136D88u;
    // 0x136d88: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x136d88u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136d8c: 0x0  nop
    ctx->pc = 0x136d8cu;
    // NOP
    ctx->pc = 0x136d90u;
}
