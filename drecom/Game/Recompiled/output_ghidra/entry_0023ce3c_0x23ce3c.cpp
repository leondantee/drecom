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

// Function: entry_0023ce3c
// Address: 0x23ce3c - 0x23ceb4
void entry_0023ce3c_0x23ce3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ce3c_0x23ce3c");
#endif

    ctx->pc = 0x23ce3cu;

    // 0x23ce3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ce44: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23ce44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ce48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce4c: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ce50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23ce50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ce54: 0x0  nop
    ctx->pc = 0x23ce54u;
    // NOP
    // 0x23ce58: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x23CE58u;
    {
        const bool branch_taken_0x23ce58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ce58) {
            ctx->pc = 0x23CEB4u;
            return;
        }
    }
    ctx->pc = 0x23CE60u;
    // 0x23ce60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ce68: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x23ce68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ce6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce70: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ce74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23ce74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23ce78: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x23ce7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ce84: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23ce84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ce88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce8c: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ce90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23ce90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ce94: 0x0  nop
    ctx->pc = 0x23ce94u;
    // NOP
    // 0x23ce98: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23CE98u;
    {
        const bool branch_taken_0x23ce98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ce98) {
            ctx->pc = 0x23CEB4u;
            return;
        }
    }
    ctx->pc = 0x23CEA0u;
    // 0x23cea0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cea4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cea8: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x23cea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ceac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ceb0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23ceb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x23ceb4u;
}
