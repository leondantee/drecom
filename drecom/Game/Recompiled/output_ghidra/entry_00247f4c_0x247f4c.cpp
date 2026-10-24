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

// Function: entry_00247f4c
// Address: 0x247f4c - 0x247fa0
void entry_00247f4c_0x247f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247f4c_0x247f4c");
#endif

    ctx->pc = 0x247f4cu;

    // 0x247f4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247f50: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x247f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247f54: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x247f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x247f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f5c: 0x0  nop
    ctx->pc = 0x247f5cu;
    // NOP
    // 0x247f60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247f64: 0x0  nop
    ctx->pc = 0x247f64u;
    // NOP
    // 0x247f68: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x247F68u;
    {
        const bool branch_taken_0x247f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247f68) {
            ctx->pc = 0x247FA0u;
            return;
        }
    }
    ctx->pc = 0x247F70u;
    // 0x247f70: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x247f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x247f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247f7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247f80: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247f84: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x247f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x247f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247f8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x247f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247f90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247f94: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x247f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x247f98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x247F98u;
    {
        const bool branch_taken_0x247f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247f98) {
            ctx->pc = 0x247FB0u;
            return;
        }
    }
    ctx->pc = 0x247FA0u;
}
