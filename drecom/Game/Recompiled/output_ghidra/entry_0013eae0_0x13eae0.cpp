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

// Function: entry_0013eae0
// Address: 0x13eae0 - 0x13eb3c
void entry_0013eae0_0x13eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eae0_0x13eae0");
#endif

    ctx->pc = 0x13eae0u;

    // 0x13eae0: 0x1ef180  sll         $fp, $fp, 6
    ctx->pc = 0x13eae0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x13eae4: 0x26a80004  addiu       $t0, $s5, 0x4
    ctx->pc = 0x13eae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x13eae8: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x13eae8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x13eaec: 0x2682000c  addiu       $v0, $s4, 0xC
    ctx->pc = 0x13eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x13eaf0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x13eaf0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13eaf4: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x13eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x13eaf8: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x13eaf8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13eafc: 0x8fa5167c  lw          $a1, 0x167C($sp)
    ctx->pc = 0x13eafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5756)));
    // 0x13eb00: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x13eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13eb04: 0xafa2167c  sw          $v0, 0x167C($sp)
    ctx->pc = 0x13eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5756), GPR_U32(ctx, 2));
    // 0x13eb08: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x13EB08u;
    {
        const bool branch_taken_0x13eb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eb08) {
            ctx->pc = 0x13E9D8u;
            return;
        }
    }
    ctx->pc = 0x13EB10u;
    // 0x13eb10: 0x8fa71680  lw          $a3, 0x1680($sp)
    ctx->pc = 0x13eb10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5760)));
    // 0x13eb14: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x13EB14u;
    {
        const bool branch_taken_0x13eb14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eb14) {
            ctx->pc = 0x13EB3Cu;
            return;
        }
    }
    ctx->pc = 0x13EB1Cu;
    // 0x13eb1c: 0x8fa51668  lw          $a1, 0x1668($sp)
    ctx->pc = 0x13eb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13eb20: 0x24a200c0  addiu       $v0, $a1, 0xC0
    ctx->pc = 0x13eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x13eb24: 0xafa21668  sw          $v0, 0x1668($sp)
    ctx->pc = 0x13eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5736), GPR_U32(ctx, 2));
    // 0x13eb28: 0x8fa2169c  lw          $v0, 0x169C($sp)
    ctx->pc = 0x13eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13eb2c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x13eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x13eb30: 0xafa4169c  sw          $a0, 0x169C($sp)
    ctx->pc = 0x13eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5788), GPR_U32(ctx, 4));
    // 0x13eb34: 0x10000512  b           . + 4 + (0x512 << 2)
    ctx->pc = 0x13EB34u;
    {
        const bool branch_taken_0x13eb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eb34) {
            ctx->pc = 0x13FF80u;
            return;
        }
    }
    ctx->pc = 0x13EB3Cu;
}
