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

// Function: entry_00160f4c
// Address: 0x160f4c - 0x160f98
void entry_00160f4c_0x160f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160f4c_0x160f4c");
#endif

    ctx->pc = 0x160f4cu;

    // 0x160f4c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160f50: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x160f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x160f54: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x160f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x160f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f5c: 0x0  nop
    ctx->pc = 0x160f5cu;
    // NOP
    // 0x160f60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160f64: 0x0  nop
    ctx->pc = 0x160f64u;
    // NOP
    // 0x160f68: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x160F68u;
    {
        const bool branch_taken_0x160f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160f68) {
            ctx->pc = 0x160F98u;
            return;
        }
    }
    ctx->pc = 0x160F70u;
    // 0x160f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160f74: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160f78: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x160f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x160f7c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160f80: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160f80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160f84: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160f88: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160f90: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x160F90u;
    {
        const bool branch_taken_0x160f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f90) {
            ctx->pc = 0x161028u;
            return;
        }
    }
    ctx->pc = 0x160F98u;
}
