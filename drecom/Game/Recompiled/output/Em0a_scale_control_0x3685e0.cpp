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

// Function: Em0a_scale_control
// Address: 0x3685e0 - 0x36872c
void Em0a_scale_control_0x3685e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_scale_control_0x3685e0");
#endif

    ctx->pc = 0x3685e0u;

    // 0x3685e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3685e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3685e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3685e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3685e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3685e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3685ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3685ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3685f0: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x3685f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3685f4: 0x9203006e  lbu         $v1, 0x6E($s0)
    ctx->pc = 0x3685f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x3685f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3685f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3685fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3685fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368600: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x368600u;
    {
        const bool branch_taken_0x368600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x368600) {
            ctx->pc = 0x3686A4u;
            goto label_3686a4;
        }
    }
    ctx->pc = 0x368608u;
    // 0x368608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36860c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x36860Cu;
    {
        const bool branch_taken_0x36860c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36860c) {
            ctx->pc = 0x368624u;
            goto label_368624;
        }
    }
    ctx->pc = 0x368614u;
    // 0x368614: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x368614u;
    {
        const bool branch_taken_0x368614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368614) {
            ctx->pc = 0x36871Cu;
            goto label_36871c;
        }
    }
    ctx->pc = 0x36861Cu;
    // 0x36861c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x36861Cu;
    {
        const bool branch_taken_0x36861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36861c) {
            ctx->pc = 0x36871Cu;
            goto label_36871c;
        }
    }
    ctx->pc = 0x368624u;
label_368624:
    // 0x368624: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x368624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368628: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x368628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36862c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x36862cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x368630: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x368630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x368634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368638: 0x0  nop
    ctx->pc = 0x368638u;
    // NOP
    // 0x36863c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36863cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x368640: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x368640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x368644: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368648: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x368648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36864c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x36864cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x368650: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368654: 0x0  nop
    ctx->pc = 0x368654u;
    // NOP
    // 0x368658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x368658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36865c: 0x0  nop
    ctx->pc = 0x36865cu;
    // NOP
    // 0x368660: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x368660u;
    {
        const bool branch_taken_0x368660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x368660) {
            ctx->pc = 0x36867Cu;
            goto label_36867c;
        }
    }
    ctx->pc = 0x368668u;
    // 0x368668: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x368668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x36866c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36866cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368670: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368674: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x368674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x368678: 0xa200006e  sb          $zero, 0x6E($s0)
    ctx->pc = 0x368678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 0));
label_36867c:
    // 0x36867c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368680: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x368680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368684: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368688: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x368688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x36868c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368690: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x368690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368694: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368698: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x368698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x36869c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x36869Cu;
    {
        const bool branch_taken_0x36869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36869c) {
            ctx->pc = 0x36871Cu;
            goto label_36871c;
        }
    }
    ctx->pc = 0x3686A4u;
label_3686a4:
    // 0x3686a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3686a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3686a8: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x3686a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3686ac: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3686acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x3686b0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x3686b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x3686b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3686b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3686b8: 0x0  nop
    ctx->pc = 0x3686b8u;
    // NOP
    // 0x3686bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3686bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3686c0: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x3686c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x3686c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3686c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3686c8: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x3686c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3686cc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3686ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3686d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3686d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3686d4: 0x0  nop
    ctx->pc = 0x3686d4u;
    // NOP
    // 0x3686d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3686d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3686dc: 0x0  nop
    ctx->pc = 0x3686dcu;
    // NOP
    // 0x3686e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3686E0u;
    {
        const bool branch_taken_0x3686e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3686e0) {
            ctx->pc = 0x3686FCu;
            goto label_3686fc;
        }
    }
    ctx->pc = 0x3686E8u;
    // 0x3686e8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3686e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3686ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3686ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3686f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3686f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3686f4: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3686f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x3686f8: 0xa200006e  sb          $zero, 0x6E($s0)
    ctx->pc = 0x3686f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 0));
label_3686fc:
    // 0x3686fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3686fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368700: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x368700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368704: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368708: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x368708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x36870c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368710: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x368710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368714: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368718: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x368718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
label_36871c:
    // 0x36871c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36871cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368720: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x368720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x368724: 0x3e00008  jr          $ra
    ctx->pc = 0x368724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36872Cu;
}
