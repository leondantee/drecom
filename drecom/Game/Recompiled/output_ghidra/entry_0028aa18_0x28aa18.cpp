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

// Function: entry_0028aa18
// Address: 0x28aa18 - 0x28ad48
void entry_0028aa18_0x28aa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028aa18_0x28aa18");
#endif

    switch (ctx->pc) {
        case 0x28aab8u: goto label_28aab8;
        case 0x28aaf8u: goto label_28aaf8;
        case 0x28ab24u: goto label_28ab24;
        case 0x28ab54u: goto label_28ab54;
        case 0x28ac90u: goto label_28ac90;
        case 0x28ad10u: goto label_28ad10;
        default: break;
    }

    ctx->pc = 0x28aa18u;

    // 0x28aa18: 0x8e29000c  lw          $t1, 0xC($s1)
    ctx->pc = 0x28aa18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28aa1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28aa20: 0x1224023  subu        $t0, $t1, $v0
    ctx->pc = 0x28aa20u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x28aa24: 0xafa80140  sw          $t0, 0x140($sp)
    ctx->pc = 0x28aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 8));
    // 0x28aa28: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x28aa28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28aa2c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28aa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28aa30: 0xe64023  subu        $t0, $a3, $a2
    ctx->pc = 0x28aa30u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x28aa34: 0xafa8013c  sw          $t0, 0x13C($sp)
    ctx->pc = 0x28aa34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 8));
    // 0x28aa38: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x28aa38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28aa3c: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x28aa3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28aa40: 0x71209e28  paddub      $s3, $t1, $zero
    ctx->pc = 0x28aa40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28aa44: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x28aa44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28aa48: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x28aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28aa4c: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x28aa4cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28aa50: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x28aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28aa54: 0x2625021  addu        $t2, $s3, $v0
    ctx->pc = 0x28aa54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28aa58: 0x7140ae28  paddub      $s5, $t2, $zero
    ctx->pc = 0x28aa58u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x28aa5c: 0x8fa6013c  lw          $a2, 0x13C($sp)
    ctx->pc = 0x28aa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x28aa60: 0x3c61821  addu        $v1, $fp, $a2
    ctx->pc = 0x28aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x28aa64: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x28aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x28aa68: 0x154023  negu        $t0, $s5
    ctx->pc = 0x28aa68u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
    // 0x28aa6c: 0xafa80134  sw          $t0, 0x134($sp)
    ctx->pc = 0x28aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 8));
    // 0x28aa70: 0x133823  negu        $a3, $s3
    ctx->pc = 0x28aa70u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x28aa74: 0x70e0ae28  paddub      $s5, $a3, $zero
    ctx->pc = 0x28aa74u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28aa78: 0x8fab0134  lw          $t3, 0x134($sp)
    ctx->pc = 0x28aa78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x28aa7c: 0x71609e28  paddub      $s3, $t3, $zero
    ctx->pc = 0x28aa7cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x28aa80: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x28aa84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28aa84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28aa88: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28aa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28aa8c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28aa8cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28aa90: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x28aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x28aa94: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28aa94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28aa98: 0x0  nop
    ctx->pc = 0x28aa98u;
    // NOP
    // 0x28aa9c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28aa9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28aaa0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28aaa0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28aaa4: 0x0  nop
    ctx->pc = 0x28aaa4u;
    // NOP
    // 0x28aaa8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28aaa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28aaac: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28aaacu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28aab0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28AAB0u;
    SET_GPR_U32(ctx, 31, 0x28AAB8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28AAB0u, 0x28AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAB8u;
label_28aab8:
    // 0x28aab8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28aab8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28aabc: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x28aabcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28aac0: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x28aac0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
    // 0x28aac4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x28aac4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28aac8: 0xc6416620  lwc1        $f1, 0x6620($s2)
    ctx->pc = 0x28aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28aacc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28aaccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28aad0: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x28aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x28aad4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28aad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28aad8: 0x0  nop
    ctx->pc = 0x28aad8u;
    // NOP
    // 0x28aadc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x28aadcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28aae0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28aae0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28aae4: 0x0  nop
    ctx->pc = 0x28aae4u;
    // NOP
    // 0x28aae8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x28aae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x28aaec: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x28aaecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x28aaf0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28AAF0u;
    SET_GPR_U32(ctx, 31, 0x28AAF8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28AAF0u, 0x28AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAF8u;
label_28aaf8:
    // 0x28aaf8: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28aaf8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28aafc: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28aafcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ab00: 0x0  nop
    ctx->pc = 0x28ab00u;
    // NOP
    // 0x28ab04: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28ab04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ab08: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x28ab08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
    // 0x28ab0c: 0x34e8cccd  ori         $t0, $a3, 0xCCCD
    ctx->pc = 0x28ab0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x28ab10: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x28ab10u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ab14: 0x0  nop
    ctx->pc = 0x28ab14u;
    // NOP
    // 0x28ab18: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28ab18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28ab1c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28AB1Cu;
    SET_GPR_U32(ctx, 31, 0x28AB24u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28AB1Cu, 0x28AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB24u;
label_28ab24:
    // 0x28ab24: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28ab24u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ab28: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x28ab28u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28ab2c: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x28ab2cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ab30: 0x0  nop
    ctx->pc = 0x28ab30u;
    // NOP
    // 0x28ab34: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x28ab34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28ab38: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x28ab38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x28ab3c: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x28ab3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x28ab40: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x28ab40u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ab44: 0x0  nop
    ctx->pc = 0x28ab44u;
    // NOP
    // 0x28ab48: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x28ab48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28ab4c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28AB4Cu;
    SET_GPR_U32(ctx, 31, 0x28AB54u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28AB4Cu, 0x28AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB54u;
label_28ab54:
    // 0x28ab54: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x28ab54u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ab58: 0x7140ae28  paddub      $s5, $t2, $zero
    ctx->pc = 0x28ab58u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x28ab5c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x28ab5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x28ab60: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x28ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x28ab64: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x28ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x28ab68: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x28ab68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x28ab6c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x28ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x28ab70: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x28ab74: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x28ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28ab78: 0x34a40040  ori         $a0, $a1, 0x40
    ctx->pc = 0x28ab78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x28ab7c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x28ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x28ab80: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28ab84: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x28ab84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28ab88: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x28ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ab8c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x28ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28ab90: 0x43400  sll         $a2, $a0, 16
    ctx->pc = 0x28ab90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x28ab94: 0xe61825  or          $v1, $a3, $a2
    ctx->pc = 0x28ab94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x28ab98: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x28ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x28ab9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28aba0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x28aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28aba4: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x28aba4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28aba8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x28aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28abac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28abacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28abb0: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x28abb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28abb4: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x28abb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x28abb8: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x28abb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28abbc: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x28abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x28abc0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x28abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28abc4: 0x44c00  sll         $t1, $a0, 16
    ctx->pc = 0x28abc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x28abc8: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x28abc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28abcc: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x28abccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x28abd0: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x28abd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28abd4: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x28abd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x28abd8: 0x1253025  or          $a2, $t1, $a1
    ctx->pc = 0x28abd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x28abdc: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x28abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28abe0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x28abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28abe4: 0x663825  or          $a3, $v1, $a2
    ctx->pc = 0x28abe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x28abe8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x28abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28abec: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x28abecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x28abf0: 0x135100  sll         $t2, $s3, 4
    ctx->pc = 0x28abf0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x28abf4: 0x25467000  addiu       $a2, $t2, 0x7000
    ctx->pc = 0x28abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 28672));
    // 0x28abf8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x28abf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28abfc: 0x1e58c0  sll         $t3, $fp, 3
    ctx->pc = 0x28abfcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x28ac00: 0x25657900  addiu       $a1, $t3, 0x7900
    ctx->pc = 0x28ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
    // 0x28ac04: 0x54c00  sll         $t1, $a1, 16
    ctx->pc = 0x28ac04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x28ac08: 0x493025  or          $a2, $v0, $t1
    ctx->pc = 0x28ac08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x28ac0c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x28ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28ac10: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x28ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x28ac14: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x28ac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28ac18: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x28ac18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x28ac1c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x28ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x28ac20: 0x154100  sll         $t0, $s5, 4
    ctx->pc = 0x28ac20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x28ac24: 0x25037000  addiu       $v1, $t0, 0x7000
    ctx->pc = 0x28ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 28672));
    // 0x28ac28: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x28ac28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28ac2c: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x28ac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28ac30: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x28ac30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28ac34: 0x25037900  addiu       $v1, $t0, 0x7900
    ctx->pc = 0x28ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 30976));
    // 0x28ac38: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x28ac38u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28ac3c: 0xa92025  or          $a0, $a1, $t1
    ctx->pc = 0x28ac3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x28ac40: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x28ac40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x28ac44: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x28ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x28ac48: 0x3405fff9  ori         $a1, $zero, 0xFFF9
    ctx->pc = 0x28ac48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x28ac4c: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x28ac4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x28ac50: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x28ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x28ac54: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x28ac54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ac58: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x28ac58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28ac5c: 0x248800a3  addiu       $t0, $a0, 0xA3
    ctx->pc = 0x28ac5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 163));
    // 0x28ac60: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x28ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x28ac64: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x28ac64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28ac68: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x28ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x28ac6c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28ac70: 0x2446cca0  addiu       $a2, $v0, -0x3360
    ctx->pc = 0x28ac70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x28ac74: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x28ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x28ac78: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x28ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x28ac7c: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x28ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28ac80: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28ac80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28ac84: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x28ac84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x28ac88: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AC88u;
    SET_GPR_U32(ctx, 31, 0x28AC90u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AC88u, 0x28AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC90u;
label_28ac90:
    // 0x28ac90: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x28ac90u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ac94: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x28ac94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x28ac98: 0xae8a0000  sw          $t2, 0x0($s4)
    ctx->pc = 0x28ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 10));
    // 0x28ac9c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28aca0: 0x34661009  ori         $a2, $v1, 0x1009
    ctx->pc = 0x28aca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x28aca4: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x28aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
    // 0x28aca8: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x28aca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28acac: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x28acacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x28acb0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x28acb0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x28acb4: 0x83138  dsll        $a2, $t0, 4
    ctx->pc = 0x28acb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 4);
    // 0x28acb8: 0x34c3000a  ori         $v1, $a2, 0xA
    ctx->pc = 0x28acb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x28acbc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x28acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28acc0: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x28acc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28acc4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x28acc4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x28acc8: 0x83bb8  dsll        $a3, $t0, 14
    ctx->pc = 0x28acc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 14);
    // 0x28accc: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x28acccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x28acd0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28acd4: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x28acd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28acd8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x28acd8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x28acdc: 0x83e38  dsll        $a3, $t0, 24
    ctx->pc = 0x28acdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 24);
    // 0x28ace0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x28ace0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x28ace4: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x28ace4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28ace8: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x28ace8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x28acec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28acecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28acf0: 0x340bc  dsll32      $t0, $v1, 2
    ctx->pc = 0x28acf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28acf4: 0x1063825  or          $a3, $t0, $a2
    ctx->pc = 0x28acf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x28acf8: 0xfe870008  sd          $a3, 0x8($s4)
    ctx->pc = 0x28acf8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 7));
    // 0x28acfc: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x28acfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x28ad00: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28ad00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28ad04: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x28ad04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28ad08: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28AD08u;
    SET_GPR_U32(ctx, 31, 0x28AD10u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28AD08u, 0x28AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD10u;
label_28ad10:
    // 0x28ad10: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28ad10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ad14: 0x26930010  addiu       $s3, $s4, 0x10
    ctx->pc = 0x28ad14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28ad18: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x28ad18u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x28ad1c: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x28ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x28ad20: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28ad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28ad24: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x28ad24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28ad28: 0x8fbe0138  lw          $fp, 0x138($sp)
    ctx->pc = 0x28ad28u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x28ad2c: 0x27c20008  addiu       $v0, $fp, 0x8
    ctx->pc = 0x28ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x28ad30: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28ad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28ad34: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28ad34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28ad38: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x28ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x28ad3c: 0x26f50001  addiu       $s5, $s7, 0x1
    ctx->pc = 0x28ad3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28ad40: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x28ad40u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28ad44: 0x0  nop
    ctx->pc = 0x28ad44u;
    // NOP
    ctx->pc = 0x28ad48u;
}
