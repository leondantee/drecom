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

// Function: entry_003728a4
// Address: 0x3728a4 - 0x3729d8
void entry_003728a4_0x3728a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003728a4_0x3728a4");
#endif

    switch (ctx->pc) {
        case 0x3728b4u: goto label_3728b4;
        case 0x3728c4u: goto label_3728c4;
        case 0x3728d0u: goto label_3728d0;
        case 0x3728f0u: goto label_3728f0;
        case 0x372920u: goto label_372920;
        case 0x37294cu: goto label_37294c;
        case 0x372974u: goto label_372974;
        default: break;
    }

    ctx->pc = 0x3728a4u;

    // 0x3728a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3728a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3728a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3728a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3728ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3728ACu;
    SET_GPR_U32(ctx, 31, 0x3728B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3728ACu, 0x3728B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728B4u;
label_3728b4:
    // 0x3728b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3728b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3728b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3728b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3728bc: 0xc0dc7c8  jal         func_371F20
    ctx->pc = 0x3728BCu;
    SET_GPR_U32(ctx, 31, 0x3728C4u);
    ctx->pc = 0x371F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371F20u, 0x3728BCu, 0x3728C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728C4u;
label_3728c4:
    // 0x3728c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3728c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3728c8: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x3728C8u;
    SET_GPR_U32(ctx, 31, 0x3728D0u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x3728C8u, 0x3728D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728D0u;
label_3728d0:
    // 0x3728d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3728d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3728d4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x3728d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3728d8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3728d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3728dc: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x3728dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x3728e0: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3728E0u;
    {
        const bool branch_taken_0x3728e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3728e0) {
            ctx->pc = 0x3729D8u;
            return;
        }
    }
    ctx->pc = 0x3728E8u;
    // 0x3728e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3728E8u;
    SET_GPR_U32(ctx, 31, 0x3728F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3728E8u, 0x3728F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728F0u;
label_3728f0:
    // 0x3728f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3728f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3728f4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3728f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3728f8: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x3728f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x3728fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3728fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372900: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372900u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x372904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372908: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x372908u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x37290c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37290cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372910: 0x0  nop
    ctx->pc = 0x372910u;
    // NOP
    // 0x372914: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x372914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x372918: 0xc06765c  jal         func_19D970
    ctx->pc = 0x372918u;
    SET_GPR_U32(ctx, 31, 0x372920u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x372918u, 0x372920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372920u;
label_372920:
    // 0x372920: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x372920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x372924: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x372924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x372928: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x372928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37292c: 0x0  nop
    ctx->pc = 0x37292cu;
    // NOP
    // 0x372930: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x372930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x372934: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x372934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x372938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37293c: 0x0  nop
    ctx->pc = 0x37293cu;
    // NOP
    // 0x372940: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x372940u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372944: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x372944u;
    SET_GPR_U32(ctx, 31, 0x37294Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x372944u, 0x37294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37294Cu;
label_37294c:
    // 0x37294c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x37294cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x372950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372954: 0x0  nop
    ctx->pc = 0x372954u;
    // NOP
    // 0x372958: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x372958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x37295c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x372960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372964: 0x0  nop
    ctx->pc = 0x372964u;
    // NOP
    // 0x372968: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x372968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x37296c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x37296Cu;
    SET_GPR_U32(ctx, 31, 0x372974u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x37296Cu, 0x372974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372974u;
label_372974:
    // 0x372974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372978: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x372978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x37297c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x372980: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x372980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x372984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372988: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x372988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37298c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372990: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x372990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x372994: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372998: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x372998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37299c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x37299cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3729a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3729a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3729a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3729a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3729a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3729a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3729ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3729acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3729b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3729b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3729b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3729b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3729b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3729b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3729bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3729bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3729c0: 0x34440203  ori         $a0, $v0, 0x203
    ctx->pc = 0x3729c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)515);
    // 0x3729c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3729c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3729c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3729c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3729cc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3729ccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3729d0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3729D0u;
    SET_GPR_U32(ctx, 31, 0x3729D8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3729D0u, 0x3729D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3729D8u;
}
