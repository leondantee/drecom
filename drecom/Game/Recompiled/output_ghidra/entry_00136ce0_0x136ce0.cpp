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

// Function: entry_00136ce0
// Address: 0x136ce0 - 0x136d50
void entry_00136ce0_0x136ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136ce0_0x136ce0");
#endif

    ctx->pc = 0x136ce0u;

    // 0x136ce0: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x136ce0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x136ce4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x136ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x136ce8: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x136ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x136cec: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x136cecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x136cf0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x136cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136cf4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136cf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136cf8: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x136cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x136cfc: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x136CFCu;
    {
        const bool branch_taken_0x136cfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x136cfc) {
            ctx->pc = 0x136D50u;
            return;
        }
    }
    ctx->pc = 0x136D04u;
    // 0x136d04: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x136d04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x136d08: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x136d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136d0c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136d0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136d10: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x136d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136d14: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x136d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136d18: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x136d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x136d1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x136d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136d20: 0x39840  sll         $s3, $v1, 1
    ctx->pc = 0x136d20u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x136d24: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x136d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x136d28: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136d28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136d2c: 0x3ae3c  dsll32      $s5, $v1, 24
    ctx->pc = 0x136d2cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 24));
    // 0x136d30: 0x15ae3f  dsra32      $s5, $s5, 24
    ctx->pc = 0x136d30u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
    // 0x136d34: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x136d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x136d38: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x136d38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x136d3c: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x136D3Cu;
    {
        const bool branch_taken_0x136d3c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x136d3c) {
            ctx->pc = 0x136D90u;
            return;
        }
    }
    ctx->pc = 0x136D44u;
    // 0x136d44: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x136d44u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136d48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x136D48u;
    {
        const bool branch_taken_0x136d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d48) {
            ctx->pc = 0x136D90u;
            return;
        }
    }
    ctx->pc = 0x136D50u;
}
