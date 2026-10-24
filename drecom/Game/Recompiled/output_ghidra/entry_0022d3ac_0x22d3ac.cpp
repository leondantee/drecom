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

// Function: entry_0022d3ac
// Address: 0x22d3ac - 0x22d454
void entry_0022d3ac_0x22d3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d3ac_0x22d3ac");
#endif

    ctx->pc = 0x22d3acu;

    // 0x22d3ac: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d3b0: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x22d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22d3b4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22d3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d3b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d3b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d3bc: 0x0  nop
    ctx->pc = 0x22d3bcu;
    // NOP
    // 0x22d3c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22d3c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d3c4: 0x0  nop
    ctx->pc = 0x22d3c4u;
    // NOP
    // 0x22d3c8: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22D3C8u;
    {
        const bool branch_taken_0x22d3c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d3c8) {
            ctx->pc = 0x22D4ACu;
            return;
        }
    }
    ctx->pc = 0x22D3D0u;
    // 0x22d3d0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d3d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d3d8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d3dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d3dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d3e0: 0x0  nop
    ctx->pc = 0x22d3e0u;
    // NOP
    // 0x22d3e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d3e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d3e8: 0x0  nop
    ctx->pc = 0x22d3e8u;
    // NOP
    // 0x22d3ec: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x22D3ECu;
    {
        const bool branch_taken_0x22d3ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d3ec) {
            ctx->pc = 0x22D454u;
            return;
        }
    }
    ctx->pc = 0x22D3F4u;
    // 0x22d3f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d3f8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d3fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22d3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d400: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22d400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22d404: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x22d404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22d408: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22d408u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d40c: 0x0  nop
    ctx->pc = 0x22d40cu;
    // NOP
    // 0x22d410: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22d410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22d414: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22d414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22d418: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d41c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d420: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22d420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d428: 0x0  nop
    ctx->pc = 0x22d428u;
    // NOP
    // 0x22d42c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22d42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d430: 0x0  nop
    ctx->pc = 0x22d430u;
    // NOP
    // 0x22d434: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22D434u;
    {
        const bool branch_taken_0x22d434 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d434) {
            ctx->pc = 0x22D4ACu;
            return;
        }
    }
    ctx->pc = 0x22D43Cu;
    // 0x22d43c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d43cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d440: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d444: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d448: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22d448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x22d44c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22D44Cu;
    {
        const bool branch_taken_0x22d44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d44c) {
            ctx->pc = 0x22D4ACu;
            return;
        }
    }
    ctx->pc = 0x22D454u;
}
