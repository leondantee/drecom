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

// Function: entry_003729d8
// Address: 0x3729d8 - 0x372ae0
void entry_003729d8_0x3729d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003729d8_0x3729d8");
#endif

    switch (ctx->pc) {
        case 0x3729f8u: goto label_3729f8;
        case 0x372a28u: goto label_372a28;
        case 0x372a54u: goto label_372a54;
        case 0x372a7cu: goto label_372a7c;
        default: break;
    }

    ctx->pc = 0x3729d8u;

    // 0x3729d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3729d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3729dc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x3729dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x3729e0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3729e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3729e4: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x3729e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x3729e8: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3729E8u;
    {
        const bool branch_taken_0x3729e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3729e8) {
            ctx->pc = 0x372AE0u;
            return;
        }
    }
    ctx->pc = 0x3729F0u;
    // 0x3729f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3729F0u;
    SET_GPR_U32(ctx, 31, 0x3729F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3729F0u, 0x3729F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3729F8u;
label_3729f8:
    // 0x3729f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3729f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3729fc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3729fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x372a00: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x372a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x372a04: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x372a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372a08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372a08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x372a0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372a10: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x372a10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x372a14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372a18: 0x0  nop
    ctx->pc = 0x372a18u;
    // NOP
    // 0x372a1c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x372a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x372a20: 0xc06765c  jal         func_19D970
    ctx->pc = 0x372A20u;
    SET_GPR_U32(ctx, 31, 0x372A28u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x372A20u, 0x372A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A28u;
label_372a28:
    // 0x372a28: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x372a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x372a2c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x372a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x372a30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x372a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x372a34: 0x0  nop
    ctx->pc = 0x372a34u;
    // NOP
    // 0x372a38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x372a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x372a3c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x372a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x372a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372a44: 0x0  nop
    ctx->pc = 0x372a44u;
    // NOP
    // 0x372a48: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x372a48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372a4c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x372A4Cu;
    SET_GPR_U32(ctx, 31, 0x372A54u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x372A4Cu, 0x372A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A54u;
label_372a54:
    // 0x372a54: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x372a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x372a58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372a5c: 0x0  nop
    ctx->pc = 0x372a5cu;
    // NOP
    // 0x372a60: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x372a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x372a64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x372a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x372a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372a6c: 0x0  nop
    ctx->pc = 0x372a6cu;
    // NOP
    // 0x372a70: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x372a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x372a74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x372A74u;
    SET_GPR_U32(ctx, 31, 0x372A7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x372A74u, 0x372A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A7Cu;
label_372a7c:
    // 0x372a7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372a80: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x372a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x372a84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x372a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x372a88: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x372a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x372a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372a90: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x372a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372a94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372a98: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x372a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x372a9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372aa0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x372aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x372aa4: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x372aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372aa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372aac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x372aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372ab0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x372ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x372ab4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x372ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x372ab8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x372ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x372abc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x372abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x372ac0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x372ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x372ac4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x372ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372ac8: 0x34440203  ori         $a0, $v0, 0x203
    ctx->pc = 0x372ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)515);
    // 0x372acc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x372accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372ad0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x372ad0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372ad4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x372ad4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372ad8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x372AD8u;
    SET_GPR_U32(ctx, 31, 0x372AE0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x372AD8u, 0x372AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372AE0u;
}
