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

// Function: entry_001f2f30
// Address: 0x1f2f30 - 0x1f2fd8
void entry_001f2f30_0x1f2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2f30_0x1f2f30");
#endif

    ctx->pc = 0x1f2f30u;

    // 0x1f2f30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2f38: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f2f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2f3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2f40: 0x0  nop
    ctx->pc = 0x1f2f40u;
    // NOP
    // 0x1f2f44: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f2f44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2f48: 0x0  nop
    ctx->pc = 0x1f2f48u;
    // NOP
    // 0x1f2f4c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1F2F4Cu;
    {
        const bool branch_taken_0x1f2f4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2f4c) {
            ctx->pc = 0x1F3030u;
            return;
        }
    }
    ctx->pc = 0x1F2F54u;
    // 0x1f2f54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2f5c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f2f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2f60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2f64: 0x0  nop
    ctx->pc = 0x1f2f64u;
    // NOP
    // 0x1f2f68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f2f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2f6c: 0x0  nop
    ctx->pc = 0x1f2f6cu;
    // NOP
    // 0x1f2f70: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1F2F70u;
    {
        const bool branch_taken_0x1f2f70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2f70) {
            ctx->pc = 0x1F2FD8u;
            return;
        }
    }
    ctx->pc = 0x1F2F78u;
    // 0x1f2f78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f7c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f2f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2f80: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f2f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2f84: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1f2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1f2f88: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f2f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f2f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2f90: 0x0  nop
    ctx->pc = 0x1f2f90u;
    // NOP
    // 0x1f2f94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f2f94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f2f98: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1f2f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1f2f9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2fa0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2fa4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f2fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2fa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2fac: 0x0  nop
    ctx->pc = 0x1f2facu;
    // NOP
    // 0x1f2fb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f2fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2fb4: 0x0  nop
    ctx->pc = 0x1f2fb4u;
    // NOP
    // 0x1f2fb8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1F2FB8u;
    {
        const bool branch_taken_0x1f2fb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2fb8) {
            ctx->pc = 0x1F3030u;
            return;
        }
    }
    ctx->pc = 0x1F2FC0u;
    // 0x1f2fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2fc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2fc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2fcc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f2fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f2fd0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F2FD0u;
    {
        const bool branch_taken_0x1f2fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2fd0) {
            ctx->pc = 0x1F3030u;
            return;
        }
    }
    ctx->pc = 0x1F2FD8u;
}
