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

// Function: entry_0032cd58
// Address: 0x32cd58 - 0x32ce98
void entry_0032cd58_0x32cd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032cd58_0x32cd58");
#endif

    switch (ctx->pc) {
        case 0x32ce30u: goto label_32ce30;
        default: break;
    }

    ctx->pc = 0x32cd58u;

    // 0x32cd58: 0x26721420  addiu       $s2, $s3, 0x1420
    ctx->pc = 0x32cd58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 5152));
    // 0x32cd5c: 0x7240f628  paddub      $fp, $s2, $zero
    ctx->pc = 0x32cd5cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32cd60: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x32cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x32cd64: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32cd68: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x32cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x32cd6c: 0x24421420  addiu       $v0, $v0, 0x1420
    ctx->pc = 0x32cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
    // 0x32cd70: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x32cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x32cd74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32cd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32cd78: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x32cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x32cd7c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32cd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cd80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32cd84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x32cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32cd88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32cd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32cd8c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x32cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32cd90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32cd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32cd94: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x32cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x32cd98: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x32cd98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32cd9c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x32cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32cda0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32cda4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x32cda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x32cda8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x32cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x32cdac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32cdb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32cdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32cdb4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x32cdb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x32cdb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32cdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32cdbc: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x32cdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x32cdc0: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x32CDC0u;
    {
        const bool branch_taken_0x32cdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cdc0) {
            ctx->pc = 0x32CE98u;
            return;
        }
    }
    ctx->pc = 0x32CDC8u;
    // 0x32cdc8: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x32cdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x32cdcc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x32cdccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32cdd0: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x32cdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cdd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32cdd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32cdd8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x32cdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x32cddc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x32cddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x32cde0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32cde0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32cde4: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x32cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32cde8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32cde8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32cdec: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x32cdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x32cdf0: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x32cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x32cdf4: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x32cdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x32cdf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32cdf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32cdfc: 0x0  nop
    ctx->pc = 0x32cdfcu;
    // NOP
    // 0x32ce00: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x32ce00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x32ce04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32ce08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ce08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ce0c: 0x0  nop
    ctx->pc = 0x32ce0cu;
    // NOP
    // 0x32ce10: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x32ce10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x32ce14: 0x24027501  addiu       $v0, $zero, 0x7501
    ctx->pc = 0x32ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29953));
    // 0x32ce18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32ce18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ce1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32ce1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ce20: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x32ce20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x32ce24: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x32ce24u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ce28: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x32CE28u;
    SET_GPR_U32(ctx, 31, 0x32CE30u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x32CE28u, 0x32CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE30u;
label_32ce30:
    // 0x32ce30: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x32ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x32ce34: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x32ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x32ce38: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x32ce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ce3c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x32ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ce40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32ce40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32ce44: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x32ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x32ce48: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x32ce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ce4c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32ce4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32ce50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x32ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32ce54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ce54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ce58: 0x0  nop
    ctx->pc = 0x32ce58u;
    // NOP
    // 0x32ce5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32ce5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32ce60: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x32ce60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x32ce64: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32ce68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32ce68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32ce6c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x32ce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x32ce70: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x32ce70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32ce74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32ce74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32ce78: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x32ce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ce7c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32ce7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32ce80: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x32ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x32ce84: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x32ce84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x32ce88: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x32ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x32ce8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32ce8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ce90: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x32CE90u;
    SET_GPR_U32(ctx, 31, 0x32CE98u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x32CE90u, 0x32CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE98u;
}
