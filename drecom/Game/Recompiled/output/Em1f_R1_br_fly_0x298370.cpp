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

// Function: Em1f_R1_br_fly
// Address: 0x298370 - 0x298518
void Em1f_R1_br_fly_0x298370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1f_R1_br_fly_0x298370");
#endif

    ctx->pc = 0x298370u;

    // 0x298370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298374: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x298374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x298378: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x298378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29837c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298380: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x298380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x298384: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x298384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x298388: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29838c: 0x0  nop
    ctx->pc = 0x29838cu;
    // NOP
    // 0x298390: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x298390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298394: 0x0  nop
    ctx->pc = 0x298394u;
    // NOP
    // 0x298398: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x298398u;
    {
        const bool branch_taken_0x298398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298398) {
            ctx->pc = 0x2984A4u;
            goto label_2984a4;
        }
    }
    ctx->pc = 0x2983A0u;
    // 0x2983a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2983a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2983a4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2983a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2983a8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2983a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x2983ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2983acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2983b0: 0x0  nop
    ctx->pc = 0x2983b0u;
    // NOP
    // 0x2983b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2983b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2983b8: 0x0  nop
    ctx->pc = 0x2983b8u;
    // NOP
    // 0x2983bc: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2983BCu;
    {
        const bool branch_taken_0x2983bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2983bc) {
            ctx->pc = 0x298434u;
            goto label_298434;
        }
    }
    ctx->pc = 0x2983C4u;
    // 0x2983c4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2983c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2983c8: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x2983c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x2983cc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2983ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2983d0: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x2983d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x2983d4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2983d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2983d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2983d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2983dc: 0x0  nop
    ctx->pc = 0x2983dcu;
    // NOP
    // 0x2983e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2983e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2983e4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2983e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2983e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2983e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2983ec: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x2983ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x2983f0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2983f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2983f4: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2983f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2983f8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2983f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2983fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2983fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298400: 0x0  nop
    ctx->pc = 0x298400u;
    // NOP
    // 0x298404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x298404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298408: 0x0  nop
    ctx->pc = 0x298408u;
    // NOP
    // 0x29840c: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x29840Cu;
    {
        const bool branch_taken_0x29840c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29840c) {
            ctx->pc = 0x29850Cu;
            goto label_29850c;
        }
    }
    ctx->pc = 0x298414u;
    // 0x298414: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x298414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x298418: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x298418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29841c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29841cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298420: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x298420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298424: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x298424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298428: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x298428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29842c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x29842Cu;
    {
        const bool branch_taken_0x29842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29842c) {
            ctx->pc = 0x29850Cu;
            goto label_29850c;
        }
    }
    ctx->pc = 0x298434u;
label_298434:
    // 0x298434: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x298434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298438: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x298438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x29843c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x29843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298440: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x298440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x298444: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x298444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x298448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29844c: 0x0  nop
    ctx->pc = 0x29844cu;
    // NOP
    // 0x298450: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x298450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298454: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x298454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x298458: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x298458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29845c: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x29845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298460: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x298460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298464: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x298464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x298468: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x298468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29846c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29846cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298470: 0x0  nop
    ctx->pc = 0x298470u;
    // NOP
    // 0x298474: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x298474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298478: 0x0  nop
    ctx->pc = 0x298478u;
    // NOP
    // 0x29847c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x29847Cu;
    {
        const bool branch_taken_0x29847c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29847c) {
            ctx->pc = 0x29850Cu;
            goto label_29850c;
        }
    }
    ctx->pc = 0x298484u;
    // 0x298484: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x298484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x298488: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x298488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29848c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29848cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298490: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x298490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298494: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x298494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298498: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x298498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29849c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x29849Cu;
    {
        const bool branch_taken_0x29849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29849c) {
            ctx->pc = 0x29850Cu;
            goto label_29850c;
        }
    }
    ctx->pc = 0x2984A4u;
label_2984a4:
    // 0x2984a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2984a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2984a8: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x2984a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x2984ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2984acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2984b0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2984b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2984b4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2984b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2984b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2984b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2984bc: 0x0  nop
    ctx->pc = 0x2984bcu;
    // NOP
    // 0x2984c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2984c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2984c4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2984c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2984c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2984c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2984cc: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x2984ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x2984d0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2984d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2984d4: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x2984d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x2984d8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2984d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2984dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2984dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2984e0: 0x0  nop
    ctx->pc = 0x2984e0u;
    // NOP
    // 0x2984e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2984e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2984e8: 0x0  nop
    ctx->pc = 0x2984e8u;
    // NOP
    // 0x2984ec: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2984ECu;
    {
        const bool branch_taken_0x2984ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2984ec) {
            ctx->pc = 0x29850Cu;
            goto label_29850c;
        }
    }
    ctx->pc = 0x2984F4u;
    // 0x2984f4: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x2984f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x2984f8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2984f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2984fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2984fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298500: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x298500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298504: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x298504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298508: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x298508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_29850c:
    // 0x29850c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29850cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298510: 0x3e00008  jr          $ra
    ctx->pc = 0x298510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298518u;
}
