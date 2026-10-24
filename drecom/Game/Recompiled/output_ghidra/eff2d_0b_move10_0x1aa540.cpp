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

// Function: eff2d_0b_move10
// Address: 0x1aa540 - 0x1aa688
void eff2d_0b_move10_0x1aa540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0b_move10_0x1aa540");
#endif

    ctx->pc = 0x1aa540u;

    // 0x1aa540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aa544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa548: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1aa548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1aa54c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1aa54cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aa550: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa554: 0xc4610090  lwc1        $f1, 0x90($v1)
    ctx->pc = 0x1aa554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa558: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa55c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1aa55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa560: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa564: 0x0  nop
    ctx->pc = 0x1aa564u;
    // NOP
    // 0x1aa568: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1AA568u;
    {
        const bool branch_taken_0x1aa568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa568) {
            ctx->pc = 0x1AA594u;
            goto label_1aa594;
        }
    }
    ctx->pc = 0x1AA570u;
    // 0x1aa570: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa574: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1aa574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa578: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa57c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1aa57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1aa580: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa584: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa58c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa590: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1aa590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_1aa594:
    // 0x1aa594: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa598: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x1aa598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa59c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5a0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1aa5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa5a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa5a8: 0x0  nop
    ctx->pc = 0x1aa5a8u;
    // NOP
    // 0x1aa5ac: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1AA5ACu;
    {
        const bool branch_taken_0x1aa5ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa5ac) {
            ctx->pc = 0x1AA5D8u;
            goto label_1aa5d8;
        }
    }
    ctx->pc = 0x1AA5B4u;
    // 0x1aa5b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5b8: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1aa5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa5bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5c0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1aa5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1aa5c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa5c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa5cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa5d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5d4: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x1aa5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
label_1aa5d8:
    // 0x1aa5d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5dc: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1aa5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa5e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1aa5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa5e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa5ec: 0x0  nop
    ctx->pc = 0x1aa5ecu;
    // NOP
    // 0x1aa5f0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1AA5F0u;
    {
        const bool branch_taken_0x1aa5f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa5f0) {
            ctx->pc = 0x1AA61Cu;
            goto label_1aa61c;
        }
    }
    ctx->pc = 0x1AA5F8u;
    // 0x1aa5f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa5fc: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1aa5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa600: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa604: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1aa604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1aa608: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa60c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa614: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa618: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x1aa618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_1aa61c:
    // 0x1aa61c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa620: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1aa620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa624: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa628: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1aa628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa62c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa630: 0x0  nop
    ctx->pc = 0x1aa630u;
    // NOP
    // 0x1aa634: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1AA634u;
    {
        const bool branch_taken_0x1aa634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa634) {
            ctx->pc = 0x1AA660u;
            goto label_1aa660;
        }
    }
    ctx->pc = 0x1AA63Cu;
    // 0x1aa63c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa640: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1aa640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa644: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa648: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1aa648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1aa64c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa650: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa658: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa65c: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x1aa65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
label_1aa660:
    // 0x1aa660: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1aa660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa664: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA664u;
    {
        const bool branch_taken_0x1aa664 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aa664) {
            ctx->pc = 0x1AA678u;
            goto label_1aa678;
        }
    }
    ctx->pc = 0x1AA66Cu;
    // 0x1aa66c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aa66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa670: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa674: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x1aa674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
label_1aa678:
    // 0x1aa678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa67c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1aa67cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aa680: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA688u;
}
