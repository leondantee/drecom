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

// Function: entry_0022448c
// Address: 0x22448c - 0x2244d0
void entry_0022448c_0x22448c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022448c_0x22448c");
#endif

    ctx->pc = 0x22448cu;

    // 0x22448c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224494: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x224494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224498: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x224498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x22449c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22449cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2244a0: 0x0  nop
    ctx->pc = 0x2244a0u;
    // NOP
    // 0x2244a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2244a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2244a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2244a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2244ac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2244acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2244b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2244b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2244b4: 0x0  nop
    ctx->pc = 0x2244b4u;
    // NOP
    // 0x2244b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2244B8u;
    {
        const bool branch_taken_0x2244b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2244b8) {
            ctx->pc = 0x2244D0u;
            return;
        }
    }
    ctx->pc = 0x2244C0u;
    // 0x2244c0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2244c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2244c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2244c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2244c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2244c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2244cc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2244ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x2244d0u;
}
