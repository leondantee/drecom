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

// Function: entry_0027d4fc
// Address: 0x27d4fc - 0x27d580
void entry_0027d4fc_0x27d4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d4fc_0x27d4fc");
#endif

    switch (ctx->pc) {
        case 0x27d518u: goto label_27d518;
        case 0x27d54cu: goto label_27d54c;
        default: break;
    }

    ctx->pc = 0x27d4fcu;

    // 0x27d4fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27d4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27d500: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x27d500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x27d504: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d508: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x27d508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x27d50c: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x27d50cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27d510: 0xc040c80  jal         func_103200
    ctx->pc = 0x27D510u;
    SET_GPR_U32(ctx, 31, 0x27D518u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x27D518u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D518u) { return; }
    ctx->pc = 0x27D518u;
label_27d518:
    // 0x27d518: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x27d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d51c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x27d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d520: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x27d520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d524: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x27d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d528: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x27d528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d52c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27d52cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d530: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27d530u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27d534: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x27d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d538: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x27d538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d53c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27d53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d540: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x27d540u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27d544: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x27D544u;
    SET_GPR_U32(ctx, 31, 0x27D54Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x27D544u, 0x27D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D54Cu;
label_27d54c:
    // 0x27d54c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27d54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x27d550: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x27d550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d554: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x27d554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d558: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27d558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27d55c: 0x0  nop
    ctx->pc = 0x27d55cu;
    // NOP
    // 0x27d560: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x27D560u;
    {
        const bool branch_taken_0x27d560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27d560) {
            ctx->pc = 0x27D580u;
            return;
        }
    }
    ctx->pc = 0x27D568u;
    // 0x27d568: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x27d568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27d56c: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x27d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x27d570: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x27d570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
    // 0x27d574: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x27d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d578: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x27d578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27d57c: 0x0  nop
    ctx->pc = 0x27d57cu;
    // NOP
    ctx->pc = 0x27d580u;
}
