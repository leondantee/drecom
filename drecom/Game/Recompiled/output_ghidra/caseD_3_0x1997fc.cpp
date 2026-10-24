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

// Function: caseD_3
// Address: 0x1997fc - 0x19986c
void caseD_3_0x1997fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1997fc");
#endif

    switch (ctx->pc) {
        case 0x19981cu: goto label_19981c;
        default: break;
    }

    ctx->pc = 0x1997fcu;

    // 0x1997fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1997fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199800: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199804: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199808: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x199808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19980c: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19980cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x199810: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x199810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x199814: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x199814u;
    SET_GPR_U32(ctx, 31, 0x19981Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19981Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19981Cu) { return; }
    ctx->pc = 0x19981Cu;
label_19981c:
    // 0x19981c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199820: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x199820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199824: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x199828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19982c: 0x0  nop
    ctx->pc = 0x19982cu;
    // NOP
    // 0x199830: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x199830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x199834: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x199834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x199838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19983c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x19983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199840: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x199840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x199844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199848: 0x0  nop
    ctx->pc = 0x199848u;
    // NOP
    // 0x19984c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19984cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199850: 0x0  nop
    ctx->pc = 0x199850u;
    // NOP
    // 0x199854: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x199854u;
    {
        const bool branch_taken_0x199854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199854) {
            ctx->pc = 0x19986Cu;
            return;
        }
    }
    ctx->pc = 0x19985Cu;
    // 0x19985c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19985cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x199860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199864: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199868: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x199868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x19986cu;
}
