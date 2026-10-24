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

// Function: entry_0034f070
// Address: 0x34f070 - 0x34f0f8
void entry_0034f070_0x34f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f070_0x34f070");
#endif

    ctx->pc = 0x34f070u;

    // 0x34f070: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f074: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f078: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34f078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f07c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f080: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f084: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34f088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f08c: 0x0  nop
    ctx->pc = 0x34f08cu;
    // NOP
    // 0x34f090: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x34F090u;
    {
        const bool branch_taken_0x34f090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f090) {
            ctx->pc = 0x34F0F8u;
            return;
        }
    }
    ctx->pc = 0x34F098u;
    // 0x34f098: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f09c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f0a0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f0a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x34f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x34f0a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f0ac: 0x0  nop
    ctx->pc = 0x34f0acu;
    // NOP
    // 0x34f0b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34f0b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34f0b4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x34f0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34f0b8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f0bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f0c0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f0c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f0c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f0cc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f0d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f0d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f0d4: 0x0  nop
    ctx->pc = 0x34f0d4u;
    // NOP
    // 0x34f0d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x34F0D8u;
    {
        const bool branch_taken_0x34f0d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f0d8) {
            ctx->pc = 0x34F0F8u;
            return;
        }
    }
    ctx->pc = 0x34F0E0u;
    // 0x34f0e0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f0e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f0e8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x34f0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f0ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f0f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f0f4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x34f0f8u;
}
