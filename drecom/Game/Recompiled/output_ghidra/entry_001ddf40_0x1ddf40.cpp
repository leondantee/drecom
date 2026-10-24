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

// Function: entry_001ddf40
// Address: 0x1ddf40 - 0x1ddfbc
void entry_001ddf40_0x1ddf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddf40_0x1ddf40");
#endif

    ctx->pc = 0x1ddf40u;

    // 0x1ddf40: 0x87a200f4  lh          $v0, 0xF4($sp)
    ctx->pc = 0x1ddf40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1ddf44: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1ddf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddf48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddf48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddf4c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1ddf4cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1ddf50: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1ddf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ddf54: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x1ddf54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ddf58: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1ddf58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddf5c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1ddf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1ddf60: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DDF60u;
    {
        const bool branch_taken_0x1ddf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddf60) {
            ctx->pc = 0x1DDFBCu;
            return;
        }
    }
    ctx->pc = 0x1DDF68u;
    // 0x1ddf68: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x1ddf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1ddf6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddf6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddf70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ddf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ddf74: 0x8c22f174  lw          $v0, -0xE8C($at)
    ctx->pc = 0x1ddf74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF174u));
    // 0x1ddf78: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DDF78u;
    {
        const bool branch_taken_0x1ddf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ddf78) {
            ctx->pc = 0x1DDFF0u;
            return;
        }
    }
    ctx->pc = 0x1DDF80u;
    // 0x1ddf80: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1ddf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1ddf84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddf84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddf88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ddf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ddf8c: 0x8c23f174  lw          $v1, -0xE8C($at)
    ctx->pc = 0x1ddf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF174u));
    // 0x1ddf90: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DDF90u;
    {
        const bool branch_taken_0x1ddf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ddf90) {
            ctx->pc = 0x1DDFF0u;
            return;
        }
    }
    ctx->pc = 0x1DDF98u;
    // 0x1ddf98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ddf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ddf9c: 0x8c22f174  lw          $v0, -0xE8C($at)
    ctx->pc = 0x1ddf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF174u));
    // 0x1ddfa0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddfa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddfa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddfa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ddfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ddfac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ddfacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ddfb0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1ddfb0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddfb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DDFB4u;
    {
        const bool branch_taken_0x1ddfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddfb4) {
            ctx->pc = 0x1DDFF0u;
            return;
        }
    }
    ctx->pc = 0x1DDFBCu;
}
