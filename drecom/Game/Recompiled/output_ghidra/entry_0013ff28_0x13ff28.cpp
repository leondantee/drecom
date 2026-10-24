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

// Function: entry_0013ff28
// Address: 0x13ff28 - 0x13ff80
void entry_0013ff28_0x13ff28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ff28_0x13ff28");
#endif

    ctx->pc = 0x13ff28u;

    // 0x13ff28: 0x26e4000c  addiu       $a0, $s7, 0xC
    ctx->pc = 0x13ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x13ff2c: 0x7080be28  paddub      $s7, $a0, $zero
    ctx->pc = 0x13ff2cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13ff30: 0x26a50004  addiu       $a1, $s5, 0x4
    ctx->pc = 0x13ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x13ff34: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x13ff34u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ff38: 0x8fa2166c  lw          $v0, 0x166C($sp)
    ctx->pc = 0x13ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5740)));
    // 0x13ff3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x13ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13ff40: 0xafa2166c  sw          $v0, 0x166C($sp)
    ctx->pc = 0x13ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5740), GPR_U32(ctx, 2));
    // 0x13ff44: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x13ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x13ff48: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x13ff48u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13ff4c: 0x26c50001  addiu       $a1, $s6, 0x1
    ctx->pc = 0x13ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x13ff50: 0x70a0b628  paddub      $s6, $a1, $zero
    ctx->pc = 0x13ff50u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ff54: 0x8fa2167c  lw          $v0, 0x167C($sp)
    ctx->pc = 0x13ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5756)));
    // 0x13ff58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13ff5c: 0xafa2167c  sw          $v0, 0x167C($sp)
    ctx->pc = 0x13ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5756), GPR_U32(ctx, 2));
    // 0x13ff60: 0x1440fb47  bnez        $v0, . + 4 + (-0x4B9 << 2)
    ctx->pc = 0x13FF60u;
    {
        const bool branch_taken_0x13ff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ff60) {
            ctx->pc = 0x13EC80u;
            return;
        }
    }
    ctx->pc = 0x13FF68u;
    // 0x13ff68: 0x8fa21668  lw          $v0, 0x1668($sp)
    ctx->pc = 0x13ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13ff6c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x13ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x13ff70: 0xafa21668  sw          $v0, 0x1668($sp)
    ctx->pc = 0x13ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5736), GPR_U32(ctx, 2));
    // 0x13ff74: 0x8fa5169c  lw          $a1, 0x169C($sp)
    ctx->pc = 0x13ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13ff78: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x13ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x13ff7c: 0xafa2169c  sw          $v0, 0x169C($sp)
    ctx->pc = 0x13ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5788), GPR_U32(ctx, 2));
    ctx->pc = 0x13ff80u;
}
