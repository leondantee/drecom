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

// Function: entry_0027a9b4
// Address: 0x27a9b4 - 0x27aae0
void entry_0027a9b4_0x27a9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a9b4_0x27a9b4");
#endif

    switch (ctx->pc) {
        case 0x27aa4cu: goto label_27aa4c;
        case 0x27aa58u: goto label_27aa58;
        default: break;
    }

    ctx->pc = 0x27a9b4u;

    // 0x27a9b4: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27a9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a9b8: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x27a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
    // 0x27a9bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a9c0: 0x0  nop
    ctx->pc = 0x27a9c0u;
    // NOP
    // 0x27a9c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27a9c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27a9c8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x27a9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27a9cc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x27a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x27a9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a9d4: 0x0  nop
    ctx->pc = 0x27a9d4u;
    // NOP
    // 0x27a9d8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27a9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27a9dc: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x27a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x27a9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a9e4: 0x0  nop
    ctx->pc = 0x27a9e4u;
    // NOP
    // 0x27a9e8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27a9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27a9ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27a9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a9f4: 0x0  nop
    ctx->pc = 0x27a9f4u;
    // NOP
    // 0x27a9f8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27a9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27a9fc: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x27a9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x27aa00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x27aa00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x27aa04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x27aa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27aa08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x27aa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x27aa0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27aa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27aa10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27aa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27aa14: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x27aa14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27aa18: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x27aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x27aa1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x27aa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27aa20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x27aa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x27aa24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x27aa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27aa28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x27aa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x27aa2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27aa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27aa30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27aa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27aa34: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x27aa34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x27aa38: 0x24042f04  addiu       $a0, $zero, 0x2F04
    ctx->pc = 0x27aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12036));
    // 0x27aa3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27aa3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27aa40: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27aa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27aa44: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27AA44u;
    SET_GPR_U32(ctx, 31, 0x27AA4Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27AA44u, 0x27AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA4Cu;
label_27aa4c:
    // 0x27aa4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27aa4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27aa50: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27AA50u;
    SET_GPR_U32(ctx, 31, 0x27AA58u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27AA50u, 0x27AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA58u;
label_27aa58:
    // 0x27aa58: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x27aa58u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27aa5c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x27aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x27aa60: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x27aa60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x27aa64: 0x1243001e  beq         $s2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x27AA64u;
    {
        const bool branch_taken_0x27aa64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x27aa64) {
            ctx->pc = 0x27AAE0u;
            return;
        }
    }
    ctx->pc = 0x27AA6Cu;
    // 0x27aa6c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x27aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x27aa70: 0xa243011c  sb          $v1, 0x11C($s2)
    ctx->pc = 0x27aa70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x27aa74: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aa78: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x27aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x27aa7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27aa7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aa80: 0x0  nop
    ctx->pc = 0x27aa80u;
    // NOP
    // 0x27aa84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27aa84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27aa88: 0x0  nop
    ctx->pc = 0x27aa88u;
    // NOP
    // 0x27aa8c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x27AA8Cu;
    {
        const bool branch_taken_0x27aa8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27aa8c) {
            ctx->pc = 0x27AAE0u;
            return;
        }
    }
    ctx->pc = 0x27AA94u;
    // 0x27aa94: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x27aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x27aa98: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x27aa98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x27aa9c: 0x12430010  beq         $s2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x27AA9Cu;
    {
        const bool branch_taken_0x27aa9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x27aa9c) {
            ctx->pc = 0x27AAE0u;
            return;
        }
    }
    ctx->pc = 0x27AAA4u;
    // 0x27aaa4: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aaa8: 0x3c034387  lui         $v1, 0x4387
    ctx->pc = 0x27aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17287 << 16));
    // 0x27aaac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27aaacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aab0: 0x0  nop
    ctx->pc = 0x27aab0u;
    // NOP
    // 0x27aab4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x27aab4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27aab8: 0x3c03bd23  lui         $v1, 0xBD23
    ctx->pc = 0x27aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48419 << 16));
    // 0x27aabc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x27aabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x27aac0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27aac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aac4: 0x0  nop
    ctx->pc = 0x27aac4u;
    // NOP
    // 0x27aac8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x27aac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27aacc: 0x3c034387  lui         $v1, 0x4387
    ctx->pc = 0x27aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17287 << 16));
    // 0x27aad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27aad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aad4: 0x0  nop
    ctx->pc = 0x27aad4u;
    // NOP
    // 0x27aad8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x27aad8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27aadc: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x27aadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    ctx->pc = 0x27aae0u;
}
