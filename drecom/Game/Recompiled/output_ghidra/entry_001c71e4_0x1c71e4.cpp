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

// Function: entry_001c71e4
// Address: 0x1c71e4 - 0x1c72dc
void entry_001c71e4_0x1c71e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c71e4_0x1c71e4");
#endif

    switch (ctx->pc) {
        case 0x1c71f4u: goto label_1c71f4;
        case 0x1c7204u: goto label_1c7204;
        case 0x1c7220u: goto label_1c7220;
        case 0x1c7230u: goto label_1c7230;
        case 0x1c72a8u: goto label_1c72a8;
        default: break;
    }

    ctx->pc = 0x1c71e4u;

    // 0x1c71e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c71e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c71e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c71e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c71ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C71ECu;
    SET_GPR_U32(ctx, 31, 0x1C71F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C71ECu, 0x1C71F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71F4u;
label_1c71f4:
    // 0x1c71f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c71f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c71f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c71f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c71fc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C71FCu;
    SET_GPR_U32(ctx, 31, 0x1C7204u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C71FCu, 0x1C7204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7204u;
label_1c7204:
    // 0x1c7204: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7204u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7208: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c720c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7210: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c7210u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1c7214: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7214u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7218: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C7218u;
    SET_GPR_U32(ctx, 31, 0x1C7220u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C7218u, 0x1C7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7220u;
label_1c7220:
    // 0x1c7220: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7224: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c7224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7228: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C7228u;
    SET_GPR_U32(ctx, 31, 0x1C7230u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C7228u, 0x1C7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7230u;
label_1c7230:
    // 0x1c7230: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c7230u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7234: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7238: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x1c7238u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
    // 0x1c723c: 0x11000079  beqz        $t0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1C723Cu;
    {
        const bool branch_taken_0x1c723c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c723c) {
            ctx->pc = 0x1C7424u;
            return;
        }
    }
    ctx->pc = 0x1C7244u;
    // 0x1c7244: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7248: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c7248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c724c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1c724cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1c7250: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c7250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c7254: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x1C7254u;
    {
        const bool branch_taken_0x1c7254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7254) {
            ctx->pc = 0x1C7410u;
            return;
        }
    }
    ctx->pc = 0x1C725Cu;
    // 0x1c725c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c725cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7260: 0xc4a11388  lwc1        $f1, 0x1388($a1)
    ctx->pc = 0x1c7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7264: 0x3c064240  lui         $a2, 0x4240
    ctx->pc = 0x1c7264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16960 << 16));
    // 0x1c7268: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c7268u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c726c: 0x0  nop
    ctx->pc = 0x1c726cu;
    // NOP
    // 0x1c7270: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7274: 0x0  nop
    ctx->pc = 0x1c7274u;
    // NOP
    // 0x1c7278: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
    ctx->pc = 0x1C7278u;
    {
        const bool branch_taken_0x1c7278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7278) {
            ctx->pc = 0x1C73F8u;
            return;
        }
    }
    ctx->pc = 0x1C7280u;
    // 0x1c7280: 0x8e270090  lw          $a3, 0x90($s1)
    ctx->pc = 0x1c7280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1c7284: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1c7284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1c7288: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C7288u;
    {
        const bool branch_taken_0x1c7288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7288) {
            ctx->pc = 0x1C733Cu;
            return;
        }
    }
    ctx->pc = 0x1C7290u;
    // 0x1c7290: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7294: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1c7294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7298: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1c7298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c729c: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x1c729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c72a0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C72A0u;
    SET_GPR_U32(ctx, 31, 0x1C72A8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C72A0u, 0x1C72A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72A8u;
label_1c72a8:
    // 0x1c72a8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c72a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1c72ac: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c72acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c72b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c72b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c72b4: 0x0  nop
    ctx->pc = 0x1c72b4u;
    // NOP
    // 0x1c72b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c72b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c72bc: 0x0  nop
    ctx->pc = 0x1c72bcu;
    // NOP
    // 0x1c72c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C72C0u;
    {
        const bool branch_taken_0x1c72c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c72c0) {
            ctx->pc = 0x1C72DCu;
            return;
        }
    }
    ctx->pc = 0x1C72C8u;
    // 0x1c72c8: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x1c72c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x1c72cc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c72ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c72d0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c72d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c72d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c72d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c72d8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c72d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x1c72dcu;
}
