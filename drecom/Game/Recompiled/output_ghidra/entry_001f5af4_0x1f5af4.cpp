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

// Function: entry_001f5af4
// Address: 0x1f5af4 - 0x1f5b6c
void entry_001f5af4_0x1f5af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5af4_0x1f5af4");
#endif

    ctx->pc = 0x1f5af4u;

    // 0x1f5af4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5af8: 0x24721330  addiu       $s2, $v1, 0x1330
    ctx->pc = 0x1f5af8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5afc: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1f5afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5b00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b04: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5b08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5b0c: 0x0  nop
    ctx->pc = 0x1f5b0cu;
    // NOP
    // 0x1f5b10: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F5B10u;
    {
        const bool branch_taken_0x1f5b10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5b10) {
            ctx->pc = 0x1F5B6Cu;
            return;
        }
    }
    ctx->pc = 0x1F5B18u;
    // 0x1f5b18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b1c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f5b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5b20: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1f5b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5b24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b28: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5b2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f5b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f5b30: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f5b34: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b38: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f5b3c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f5b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5b40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b44: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f5b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5b48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5b48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5b4c: 0x0  nop
    ctx->pc = 0x1f5b4cu;
    // NOP
    // 0x1f5b50: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5B50u;
    {
        const bool branch_taken_0x1f5b50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5b50) {
            ctx->pc = 0x1F5B6Cu;
            return;
        }
    }
    ctx->pc = 0x1F5B58u;
    // 0x1f5b58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5b60: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f5b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5b64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1f5b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b68: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x1f5b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    ctx->pc = 0x1f5b6cu;
}
