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

// Function: Set_effect_em02_uji_ekikabe
// Address: 0x312190 - 0x3122cc
void Set_effect_em02_uji_ekikabe_0x312190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em02_uji_ekikabe_0x312190");
#endif

    switch (ctx->pc) {
        case 0x3121c4u: goto label_3121c4;
        case 0x312210u: goto label_312210;
        case 0x3122acu: goto label_3122ac;
        default: break;
    }

    ctx->pc = 0x312190u;

    // 0x312190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x312190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x312194: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x312194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x312198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31219c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31219cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3121a0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x3121a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x3121a4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x3121a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x3121a8: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x3121a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3121ac: 0x24043503  addiu       $a0, $zero, 0x3503
    ctx->pc = 0x3121acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13571));
    // 0x3121b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3121b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3121b4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x3121b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3121b8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3121b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3121bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3121BCu;
    SET_GPR_U32(ctx, 31, 0x3121C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3121BCu, 0x3121C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121C4u;
label_3121c4:
    // 0x3121c4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3121c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3121c8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3121c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3121cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3121ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3121d0: 0x0  nop
    ctx->pc = 0x3121d0u;
    // NOP
    // 0x3121d4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3121d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3121d8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3121d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3121dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3121dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3121e0: 0x0  nop
    ctx->pc = 0x3121e0u;
    // NOP
    // 0x3121e4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3121e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3121e8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3121e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3121ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3121ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3121f0: 0x0  nop
    ctx->pc = 0x3121f0u;
    // NOP
    // 0x3121f4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3121f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3121f8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3121f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3121fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3121fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312200: 0x0  nop
    ctx->pc = 0x312200u;
    // NOP
    // 0x312204: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x312204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x312208: 0xc067648  jal         func_19D920
    ctx->pc = 0x312208u;
    SET_GPR_U32(ctx, 31, 0x312210u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312208u, 0x312210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312210u;
label_312210:
    // 0x312210: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x312210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x312214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x312214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312218: 0x0  nop
    ctx->pc = 0x312218u;
    // NOP
    // 0x31221c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31221cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x312220: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x312220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x312224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312228: 0x0  nop
    ctx->pc = 0x312228u;
    // NOP
    // 0x31222c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31222cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312230: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x312230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x312234: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x312234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x312238: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x312238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x31223c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31223cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x312240: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x312240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312244: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x312244u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312248: 0x0  nop
    ctx->pc = 0x312248u;
    // NOP
    // 0x31224c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x31224Cu;
    {
        const bool branch_taken_0x31224c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31224c) {
            ctx->pc = 0x312278u;
            goto label_312278;
        }
    }
    ctx->pc = 0x312254u;
    // 0x312254: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x312254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x312258: 0xa202011e  sb          $v0, 0x11E($s0)
    ctx->pc = 0x312258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 286), (uint8_t)GPR_U32(ctx, 2));
    // 0x31225c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x31225cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x312260: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x312260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x312264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312268: 0x0  nop
    ctx->pc = 0x312268u;
    // NOP
    // 0x31226c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x31226cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x312270: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x312270u;
    {
        const bool branch_taken_0x312270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312270) {
            ctx->pc = 0x31228Cu;
            goto label_31228c;
        }
    }
    ctx->pc = 0x312278u;
label_312278:
    // 0x312278: 0x3c02bcf5  lui         $v0, 0xBCF5
    ctx->pc = 0x312278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48373 << 16));
    // 0x31227c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x31227cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x312280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312284: 0x0  nop
    ctx->pc = 0x312284u;
    // NOP
    // 0x312288: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x312288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_31228c:
    // 0x31228c: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x31228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x312290: 0x3442f3b6  ori         $v0, $v0, 0xF3B6
    ctx->pc = 0x312290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62390);
    // 0x312294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312298: 0x0  nop
    ctx->pc = 0x312298u;
    // NOP
    // 0x31229c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x31229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x3122a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3122a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3122a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3122A4u;
    SET_GPR_U32(ctx, 31, 0x3122ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3122A4u, 0x3122ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122ACu;
label_3122ac:
    // 0x3122ac: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3122acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3122b0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x3122b0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3122b4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3122b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3122b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3122b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3122bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3122bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3122c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3122c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3122c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3122C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3122C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3122CCu;
}
