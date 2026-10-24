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

// Function: entry_0022d54c
// Address: 0x22d54c - 0x22d5a8
void entry_0022d54c_0x22d54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d54c_0x22d54c");
#endif

    ctx->pc = 0x22d54cu;

    // 0x22d54c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d550: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22d550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d554: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22d554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d558: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22d558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x22d55c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d55cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d560: 0x0  nop
    ctx->pc = 0x22d560u;
    // NOP
    // 0x22d564: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d568: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x22d568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x22d56c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d570: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d574: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d578: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22d578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x22d57c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d57cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d580: 0x0  nop
    ctx->pc = 0x22d580u;
    // NOP
    // 0x22d584: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22d584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d588: 0x0  nop
    ctx->pc = 0x22d588u;
    // NOP
    // 0x22d58c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22D58Cu;
    {
        const bool branch_taken_0x22d58c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d58c) {
            ctx->pc = 0x22D5A8u;
            return;
        }
    }
    ctx->pc = 0x22D594u;
    // 0x22d594: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22d594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22d598: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22d598u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d59c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d5a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d5a4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22d5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    ctx->pc = 0x22d5a8u;
}
