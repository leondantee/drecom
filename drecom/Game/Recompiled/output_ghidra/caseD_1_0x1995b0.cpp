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

// Function: caseD_1
// Address: 0x1995b0 - 0x199620
void caseD_1_0x1995b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1995b0");
#endif

    switch (ctx->pc) {
        case 0x1995d0u: goto label_1995d0;
        default: break;
    }

    ctx->pc = 0x1995b0u;

    // 0x1995b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1995b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1995b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1995b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1995b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1995b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1995bc: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1995bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1995c0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x1995c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1995c4: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x1995c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1995c8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1995C8u;
    SET_GPR_U32(ctx, 31, 0x1995D0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1995D0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1995D0u) { return; }
    ctx->pc = 0x1995D0u;
label_1995d0:
    // 0x1995d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1995d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1995d4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1995d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1995d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1995d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1995dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1995dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1995e0: 0x0  nop
    ctx->pc = 0x1995e0u;
    // NOP
    // 0x1995e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1995e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1995e8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1995e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1995ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1995ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1995f0: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1995f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1995f4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1995f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1995f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1995f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1995fc: 0x0  nop
    ctx->pc = 0x1995fcu;
    // NOP
    // 0x199600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199604: 0x0  nop
    ctx->pc = 0x199604u;
    // NOP
    // 0x199608: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x199608u;
    {
        const bool branch_taken_0x199608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199608) {
            ctx->pc = 0x199620u;
            return;
        }
    }
    ctx->pc = 0x199610u;
    // 0x199610: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x199610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x199614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199618: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19961c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x19961cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x199620u;
}
