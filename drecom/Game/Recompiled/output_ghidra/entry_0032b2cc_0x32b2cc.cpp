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

// Function: entry_0032b2cc
// Address: 0x32b2cc - 0x32b334
void entry_0032b2cc_0x32b2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b2cc_0x32b2cc");
#endif

    ctx->pc = 0x32b2ccu;

    // 0x32b2cc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b2d0: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b2d0u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b2d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b2d8: 0x0  nop
    ctx->pc = 0x32b2d8u;
    // NOP
    // 0x32b2dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32b2dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b2e0: 0x0  nop
    ctx->pc = 0x32b2e0u;
    // NOP
    // 0x32b2e4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x32B2E4u;
    {
        const bool branch_taken_0x32b2e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b2e4) {
            ctx->pc = 0x32B334u;
            return;
        }
    }
    ctx->pc = 0x32B2ECu;
    // 0x32b2ec: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b2f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b2f4: 0x0  nop
    ctx->pc = 0x32b2f4u;
    // NOP
    // 0x32b2f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32b2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b2fc: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32b300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b304: 0x0  nop
    ctx->pc = 0x32b304u;
    // NOP
    // 0x32b308: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b30c: 0x0  nop
    ctx->pc = 0x32b30cu;
    // NOP
    // 0x32b310: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x32B310u;
    {
        const bool branch_taken_0x32b310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b310) {
            ctx->pc = 0x32B374u;
            return;
        }
    }
    ctx->pc = 0x32B318u;
    // 0x32b318: 0xa20028b9  sb          $zero, 0x28B9($s0)
    ctx->pc = 0x32b318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b31c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b320: 0xa20328c0  sb          $v1, 0x28C0($s0)
    ctx->pc = 0x32b320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 3));
    // 0x32b324: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32b324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32b328: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
    // 0x32b32c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x32B32Cu;
    {
        const bool branch_taken_0x32b32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b32c) {
            ctx->pc = 0x32B374u;
            return;
        }
    }
    ctx->pc = 0x32B334u;
}
