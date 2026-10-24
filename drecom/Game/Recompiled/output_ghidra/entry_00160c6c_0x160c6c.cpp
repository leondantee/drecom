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

// Function: entry_00160c6c
// Address: 0x160c6c - 0x160cb8
void entry_00160c6c_0x160c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160c6c_0x160c6c");
#endif

    ctx->pc = 0x160c6cu;

    // 0x160c6c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160c70: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x160c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x160c74: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x160c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x160c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c7c: 0x0  nop
    ctx->pc = 0x160c7cu;
    // NOP
    // 0x160c80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160c84: 0x0  nop
    ctx->pc = 0x160c84u;
    // NOP
    // 0x160c88: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x160C88u;
    {
        const bool branch_taken_0x160c88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160c88) {
            ctx->pc = 0x160CB8u;
            return;
        }
    }
    ctx->pc = 0x160C90u;
    // 0x160c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160c94: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160c94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160c98: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x160c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x160c9c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160ca0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ca4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ca8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160cb0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x160CB0u;
    {
        const bool branch_taken_0x160cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160cb0) {
            ctx->pc = 0x160D08u;
            return;
        }
    }
    ctx->pc = 0x160CB8u;
}
