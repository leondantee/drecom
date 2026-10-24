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

// Function: Om83_R0_init
// Address: 0x35aa00 - 0x35ac90
void Om83_R0_init_0x35aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om83_R0_init_0x35aa00");
#endif

    switch (ctx->pc) {
        case 0x35aae8u: goto label_35aae8;
        case 0x35aaf4u: goto label_35aaf4;
        case 0x35ab60u: goto label_35ab60;
        case 0x35ab6cu: goto label_35ab6c;
        case 0x35abdcu: goto label_35abdc;
        case 0x35abe8u: goto label_35abe8;
        case 0x35ac0cu: goto label_35ac0c;
        default: break;
    }

    ctx->pc = 0x35aa00u;

    // 0x35aa00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35aa04: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x35aa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x35aa08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35aa0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35aa10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35aa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35aa14: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x35aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x35aa18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35aa1c: 0x2443a920  addiu       $v1, $v0, -0x56E0
    ctx->pc = 0x35aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945056));
    // 0x35aa20: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35aa24: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x35aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x35aa28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35aa2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35aa30: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35aa30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35aa34: 0x3c038300  lui         $v1, 0x8300
    ctx->pc = 0x35aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33536 << 16));
    // 0x35aa38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35aa3c: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x35aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x35aa40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35aa44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35aa48: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x35aa48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x35aa4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35aa50: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x35aa50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35aa54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35aa58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35aa58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35aa5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35aa60: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x35aa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x35aa64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35aa68: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x35aa68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x35aa6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x35aa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35aa70: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x35AA70u;
    {
        const bool branch_taken_0x35aa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35aa70) {
            ctx->pc = 0x35ABE8u;
            goto label_35abe8;
        }
    }
    ctx->pc = 0x35AA78u;
    // 0x35aa78: 0x3c02c278  lui         $v0, 0xC278
    ctx->pc = 0x35aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49784 << 16));
    // 0x35aa7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35aa7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35aa80: 0x0  nop
    ctx->pc = 0x35aa80u;
    // NOP
    // 0x35aa84: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x35aa84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x35aa88: 0x3c0243a2  lui         $v0, 0x43A2
    ctx->pc = 0x35aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17314 << 16));
    // 0x35aa8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35aa8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35aa90: 0x0  nop
    ctx->pc = 0x35aa90u;
    // NOP
    // 0x35aa94: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x35aa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x35aa98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35aa98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35aa9c: 0x0  nop
    ctx->pc = 0x35aa9cu;
    // NOP
    // 0x35aaa0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x35aaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x35aaa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35aaa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35aaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35aaac: 0x0  nop
    ctx->pc = 0x35aaacu;
    // NOP
    // 0x35aab0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35aab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x35aab4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35aab8: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x35aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x35aabc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35aabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35aac0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35aac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35aac4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35aac8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35aac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x35aacc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35aaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35aad0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x35aad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35aad4: 0x24042603  addiu       $a0, $zero, 0x2603
    ctx->pc = 0x35aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9731));
    // 0x35aad8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35aad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35aadc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35aadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35aae0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35AAE0u;
    SET_GPR_U32(ctx, 31, 0x35AAE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35AAE0u, 0x35AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AAE8u;
label_35aae8:
    // 0x35aae8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35aae8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35aaec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35AAECu;
    SET_GPR_U32(ctx, 31, 0x35AAF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35AAECu, 0x35AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AAF4u;
label_35aaf4:
    // 0x35aaf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35aaf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35aaf8: 0x0  nop
    ctx->pc = 0x35aaf8u;
    // NOP
    // 0x35aafc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x35aafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x35ab00: 0x3c0243aa  lui         $v0, 0x43AA
    ctx->pc = 0x35ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17322 << 16));
    // 0x35ab04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ab04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ab08: 0x0  nop
    ctx->pc = 0x35ab08u;
    // NOP
    // 0x35ab0c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x35ab0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x35ab10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35ab10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ab14: 0x0  nop
    ctx->pc = 0x35ab14u;
    // NOP
    // 0x35ab18: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x35ab18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x35ab1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35ab20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ab20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ab24: 0x0  nop
    ctx->pc = 0x35ab24u;
    // NOP
    // 0x35ab28: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35ab28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x35ab2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ab30: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x35ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x35ab34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35ab34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35ab38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35ab38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35ab3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35ab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35ab40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x35ab44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35ab44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35ab48: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x35ab48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35ab4c: 0x24042603  addiu       $a0, $zero, 0x2603
    ctx->pc = 0x35ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9731));
    // 0x35ab50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35ab50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ab54: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35ab54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35ab58: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35AB58u;
    SET_GPR_U32(ctx, 31, 0x35AB60u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35AB58u, 0x35AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB60u;
label_35ab60:
    // 0x35ab60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35ab60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35ab64: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35AB64u;
    SET_GPR_U32(ctx, 31, 0x35AB6Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35AB64u, 0x35AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AB6Cu;
label_35ab6c:
    // 0x35ab6c: 0x3c024278  lui         $v0, 0x4278
    ctx->pc = 0x35ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17016 << 16));
    // 0x35ab70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ab70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ab74: 0x0  nop
    ctx->pc = 0x35ab74u;
    // NOP
    // 0x35ab78: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x35ab78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x35ab7c: 0x3c0243a2  lui         $v0, 0x43A2
    ctx->pc = 0x35ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17314 << 16));
    // 0x35ab80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ab80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ab84: 0x0  nop
    ctx->pc = 0x35ab84u;
    // NOP
    // 0x35ab88: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x35ab88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x35ab8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35ab8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ab90: 0x0  nop
    ctx->pc = 0x35ab90u;
    // NOP
    // 0x35ab94: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x35ab94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x35ab98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35ab9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ab9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35aba0: 0x0  nop
    ctx->pc = 0x35aba0u;
    // NOP
    // 0x35aba4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35aba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x35aba8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35abac: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x35abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x35abb0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35abb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35abb4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35abb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35abb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35abb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35abbc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35abbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x35abc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35abc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35abc4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x35abc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35abc8: 0x24042603  addiu       $a0, $zero, 0x2603
    ctx->pc = 0x35abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9731));
    // 0x35abcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35abccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35abd0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35abd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35abd4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35ABD4u;
    SET_GPR_U32(ctx, 31, 0x35ABDCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35ABD4u, 0x35ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ABDCu;
label_35abdc:
    // 0x35abdc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35abdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35abe0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35ABE0u;
    SET_GPR_U32(ctx, 31, 0x35ABE8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35ABE0u, 0x35ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ABE8u;
label_35abe8:
    // 0x35abe8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35abe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35abec: 0x8c300ae8  lw          $s0, 0xAE8($at)
    ctx->pc = 0x35abecu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35abf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35abf4: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x35abf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35abf8: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x35abf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x35abfc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x35abfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35ac00: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x35ac00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35ac04: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x35AC04u;
    SET_GPR_U32(ctx, 31, 0x35AC0Cu);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x35AC04u, 0x35AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC0Cu;
label_35ac0c:
    // 0x35ac0c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x35ac0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35ac10: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35ac14: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x35ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35ac18: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x35ac18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x35ac1c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35ac20: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x35ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35ac24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35ac28: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x35ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x35ac2c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x35ac2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x35ac30: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x35ac34: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x35ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x35ac38: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x35ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x35ac3c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x35ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x35ac40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35ac40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35ac44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35ac48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ac4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ac50: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35ac50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35ac54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ac58: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35ac58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ac5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ac60: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35ac60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ac64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ac68: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35ac68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ac6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ac70: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35ac74: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x35ac74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ac78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35ac78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ac7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ac7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ac80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ac80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ac84: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x35ac84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35ac88: 0x3e00008  jr          $ra
    ctx->pc = 0x35AC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AC90u;
}
