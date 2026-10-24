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
// Address: 0x34c1f4 - 0x34c2c4
void caseD_3_0x34c1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x34c1f4");
#endif

    switch (ctx->pc) {
        case 0x34c204u: goto label_34c204;
        case 0x34c214u: goto label_34c214;
        case 0x34c224u: goto label_34c224;
        case 0x34c230u: goto label_34c230;
        default: break;
    }

    ctx->pc = 0x34c1f4u;

    // 0x34c1f4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c1f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c1f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c1fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34C1FCu;
    SET_GPR_U32(ctx, 31, 0x34C204u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34C1FCu, 0x34C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C204u;
label_34c204:
    // 0x34c204: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c208: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c20c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34C20Cu;
    SET_GPR_U32(ctx, 31, 0x34C214u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34C20Cu, 0x34C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C214u;
label_34c214:
    // 0x34c214: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c218: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34c218u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c21c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34C21Cu;
    SET_GPR_U32(ctx, 31, 0x34C224u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34C21Cu, 0x34C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C224u;
label_34c224:
    // 0x34c224: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c228: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34C228u;
    SET_GPR_U32(ctx, 31, 0x34C230u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34C228u, 0x34C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C230u;
label_34c230:
    // 0x34c230: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c234: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x34c234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34c238: 0x247007d0  addiu       $s0, $v1, 0x7D0
    ctx->pc = 0x34c238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x34c23c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c240: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x34c240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34c244: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x34c244u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x34c248: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x34c248u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34c24c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x34c24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c250: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x34c250u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34c254: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x34c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c258: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34c258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34c25c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34c25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34c260: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c264: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34c268: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34c268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x34c26c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34c26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34c270: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x34c270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c274: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x34c274u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34c278: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x34c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c27c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34c27cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34c280: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34c280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34c284: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x34c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c288: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34c288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34c28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c290: 0x0  nop
    ctx->pc = 0x34c290u;
    // NOP
    // 0x34c294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34c294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c298: 0x0  nop
    ctx->pc = 0x34c298u;
    // NOP
    // 0x34c29c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34C29Cu;
    {
        const bool branch_taken_0x34c29c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c29c) {
            ctx->pc = 0x34C2C4u;
            return;
        }
    }
    ctx->pc = 0x34C2A4u;
    // 0x34c2a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34c2a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c2ac: 0x0  nop
    ctx->pc = 0x34c2acu;
    // NOP
    // 0x34c2b0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34c2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34c2b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x34c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x34c2b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c2b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c2bc: 0x0  nop
    ctx->pc = 0x34c2bcu;
    // NOP
    // 0x34c2c0: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34c2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    ctx->pc = 0x34c2c4u;
}
