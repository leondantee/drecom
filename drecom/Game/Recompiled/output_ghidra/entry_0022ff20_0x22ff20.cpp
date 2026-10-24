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

// Function: entry_0022ff20
// Address: 0x22ff20 - 0x22ff98
void entry_0022ff20_0x22ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ff20_0x22ff20");
#endif

    ctx->pc = 0x22ff20u;

    // 0x22ff20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ff28: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ff2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff30: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ff34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ff38: 0x0  nop
    ctx->pc = 0x22ff38u;
    // NOP
    // 0x22ff3c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x22FF3Cu;
    {
        const bool branch_taken_0x22ff3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ff3c) {
            ctx->pc = 0x22FF98u;
            return;
        }
    }
    ctx->pc = 0x22FF44u;
    // 0x22ff44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ff4c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22ff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ff50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff54: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22ff58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22ff5c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x22ff60: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff64: 0x24731330  addiu       $s3, $v1, 0x1330
    ctx->pc = 0x22ff64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ff68: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x22ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ff6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff70: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ff74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ff78: 0x0  nop
    ctx->pc = 0x22ff78u;
    // NOP
    // 0x22ff7c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22FF7Cu;
    {
        const bool branch_taken_0x22ff7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ff7c) {
            ctx->pc = 0x22FF98u;
            return;
        }
    }
    ctx->pc = 0x22FF84u;
    // 0x22ff84: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff88: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x22ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22ff8c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x22ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff94: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x22ff98u;
}
