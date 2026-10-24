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

// Function: entry_002dd030
// Address: 0x2dd030 - 0x2dd194
void entry_002dd030_0x2dd030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd030_0x2dd030");
#endif

    switch (ctx->pc) {
        case 0x2dd0f0u: goto label_2dd0f0;
        case 0x2dd120u: goto label_2dd120;
        case 0x2dd158u: goto label_2dd158;
        case 0x2dd190u: goto label_2dd190;
        default: break;
    }

    ctx->pc = 0x2dd030u;

    // 0x2dd030: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x2dd030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd038: 0x0  nop
    ctx->pc = 0x2dd038u;
    // NOP
    // 0x2dd03c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dd03cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd040: 0x0  nop
    ctx->pc = 0x2dd040u;
    // NOP
    // 0x2dd044: 0x45010053  bc1t        . + 4 + (0x53 << 2)
    ctx->pc = 0x2DD044u;
    {
        const bool branch_taken_0x2dd044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd044) {
            ctx->pc = 0x2DD194u;
            return;
        }
    }
    ctx->pc = 0x2DD04Cu;
    // 0x2dd04c: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x2dd04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd050: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2dd050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2dd054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dd054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd058: 0x0  nop
    ctx->pc = 0x2dd058u;
    // NOP
    // 0x2dd05c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dd05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dd060: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2dd060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2dd064: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2dd064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd068: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x2dd068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x2dd06c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dd06cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd070: 0x0  nop
    ctx->pc = 0x2dd070u;
    // NOP
    // 0x2dd074: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dd074u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dd078: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2dd078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2dd07c: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2dd07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dd080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd084: 0x0  nop
    ctx->pc = 0x2dd084u;
    // NOP
    // 0x2dd088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dd088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd08c: 0x0  nop
    ctx->pc = 0x2dd08cu;
    // NOP
    // 0x2dd090: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x2DD090u;
    {
        const bool branch_taken_0x2dd090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd090) {
            ctx->pc = 0x2DD194u;
            return;
        }
    }
    ctx->pc = 0x2DD098u;
    // 0x2dd098: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd09c: 0x0  nop
    ctx->pc = 0x2dd09cu;
    // NOP
    // 0x2dd0a0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2dd0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2dd0a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd0a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd0a8: 0x0  nop
    ctx->pc = 0x2dd0a8u;
    // NOP
    // 0x2dd0ac: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2dd0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2dd0b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2dd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2dd0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dd0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd0b8: 0x0  nop
    ctx->pc = 0x2dd0b8u;
    // NOP
    // 0x2dd0bc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dd0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2dd0c0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2dd0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2dd0c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2dd0c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd0c8: 0x0  nop
    ctx->pc = 0x2dd0c8u;
    // NOP
    // 0x2dd0cc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2dd0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2dd0d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2dd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2dd0d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dd0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd0d8: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x2dd0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd0dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dd0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dd0e0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2dd0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2dd0e4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2dd0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dd0e8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DD0E8u;
    SET_GPR_U32(ctx, 31, 0x2DD0F0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DD0E8u, 0x2DD0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD0F0u;
label_2dd0f0:
    // 0x2dd0f0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dd0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd0f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd0f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd0f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dd0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dd0fc: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2dd0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dd100: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dd100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dd104: 0xc7ad00fc  lwc1        $f13, 0xFC($sp)
    ctx->pc = 0x2dd104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dd108: 0xc7ae00fc  lwc1        $f14, 0xFC($sp)
    ctx->pc = 0x2dd108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2dd10c: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x2dd10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2dd110: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dd110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd114: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dd114u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd118: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DD118u;
    SET_GPR_U32(ctx, 31, 0x2DD120u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DD118u, 0x2DD120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD120u;
label_2dd120:
    // 0x2dd120: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dd120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd124: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd124u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd128: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2dd128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dd12c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2dd12cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd130: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2dd130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dd134: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dd134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dd138: 0xc7ad00fc  lwc1        $f13, 0xFC($sp)
    ctx->pc = 0x2dd138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dd13c: 0xc7ae00fc  lwc1        $f14, 0xFC($sp)
    ctx->pc = 0x2dd13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2dd140: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x2dd140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2dd144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd148: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2dd148u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd14c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dd14cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd150: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DD150u;
    SET_GPR_U32(ctx, 31, 0x2DD158u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DD150u, 0x2DD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD158u;
label_2dd158:
    // 0x2dd158: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2dd158u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd15c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dd15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dd160: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2dd160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd164: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd164u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd168: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dd168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dd16c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2dd16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dd170: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2dd170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dd174: 0xc7ad00fc  lwc1        $f13, 0xFC($sp)
    ctx->pc = 0x2dd174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dd178: 0xc7ae00fc  lwc1        $f14, 0xFC($sp)
    ctx->pc = 0x2dd178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2dd17c: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x2dd17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2dd180: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dd180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd184: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dd184u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd188: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DD188u;
    SET_GPR_U32(ctx, 31, 0x2DD190u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DD188u, 0x2DD190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD190u;
label_2dd190:
    // 0x2dd190: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd190u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2dd194u;
}
