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

// Function: Set_effect_pl00_sword_fireset0
// Address: 0x313a10 - 0x313b70
void Set_effect_pl00_sword_fireset0_0x313a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_sword_fireset0_0x313a10");
#endif

    switch (ctx->pc) {
        case 0x313a88u: goto label_313a88;
        case 0x313b50u: goto label_313b50;
        default: break;
    }

    ctx->pc = 0x313a10u;

    // 0x313a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x313a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x313a14: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x313a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x313a18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x313a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x313a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x313a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x313a20: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x313a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x313a24: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x313a24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x313a28: 0xe7ad0048  swc1        $f13, 0x48($sp)
    ctx->pc = 0x313a28u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x313a2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x313a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x313a30: 0x24429240  addiu       $v0, $v0, -0x6DC0
    ctx->pc = 0x313a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x313a34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313a38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x313a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x313a3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x313a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x313a40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x313a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x313a44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x313a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x313a48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x313a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x313a4c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x313a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313a50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x313a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x313a54: 0x8c229370  lw          $v0, -0x6C90($at)
    ctx->pc = 0x313a54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E9370u));
    // 0x313a58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x313a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313a5c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x313a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x313a60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x313a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x313a64: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x313a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x313a68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x313a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x313a6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x313a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x313a70: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x313a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x313a74: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x313a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x313a78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x313a78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313a7c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x313a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x313a80: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x313A80u;
    SET_GPR_U32(ctx, 31, 0x313A88u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x313A80u, 0x313A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313A88u;
label_313a88:
    // 0x313a88: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x313a88u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x313a8c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x313a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x313a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313a94: 0x0  nop
    ctx->pc = 0x313a94u;
    // NOP
    // 0x313a98: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x313a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x313a9c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x313a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x313aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313aa4: 0x0  nop
    ctx->pc = 0x313aa4u;
    // NOP
    // 0x313aa8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x313aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x313aac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x313aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x313ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313ab4: 0x0  nop
    ctx->pc = 0x313ab4u;
    // NOP
    // 0x313ab8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x313ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x313abc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x313abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313ac0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x313ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x313ac4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x313ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x313ac8: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x313ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x313acc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x313accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313ad0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x313ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x313ad4: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x313ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x313ad8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313adc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313adcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313ae0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313ae4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313ae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313aec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313af0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x313af0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x313af4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313af8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313af8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313afc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313b00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313b04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313b08: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x313b0c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x313b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313b10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x313b14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313b18: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x313b18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x313b1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x313b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313b20: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x313b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x313b24: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x313b24u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x313b28: 0x0  nop
    ctx->pc = 0x313b28u;
    // NOP
    // 0x313b2c: 0x0  nop
    ctx->pc = 0x313b2cu;
    // NOP
    // 0x313b30: 0x1010  mfhi        $v0
    ctx->pc = 0x313b30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x313b34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313b38: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x313b38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x313b3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x313b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x313b40: 0xa202011b  sb          $v0, 0x11B($s0)
    ctx->pc = 0x313b40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 283), (uint8_t)GPR_U32(ctx, 2));
    // 0x313b44: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x313b44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x313b48: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x313B48u;
    SET_GPR_U32(ctx, 31, 0x313B50u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x313B48u, 0x313B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B50u;
label_313b50:
    // 0x313b50: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x313b50u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x313b54: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x313b54u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x313b58: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x313b58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313b64: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x313b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x313b68: 0x3e00008  jr          $ra
    ctx->pc = 0x313B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313B70u;
}
