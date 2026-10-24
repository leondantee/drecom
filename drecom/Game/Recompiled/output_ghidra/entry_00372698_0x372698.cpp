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

// Function: entry_00372698
// Address: 0x372698 - 0x3727a0
void entry_00372698_0x372698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00372698_0x372698");
#endif

    switch (ctx->pc) {
        case 0x3726b8u: goto label_3726b8;
        case 0x3726e8u: goto label_3726e8;
        case 0x372714u: goto label_372714;
        case 0x37273cu: goto label_37273c;
        default: break;
    }

    ctx->pc = 0x372698u;

    // 0x372698: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37269c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x37269cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x3726a0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3726a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3726a4: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x3726a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x3726a8: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3726A8u;
    {
        const bool branch_taken_0x3726a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3726a8) {
            ctx->pc = 0x3727A0u;
            return;
        }
    }
    ctx->pc = 0x3726B0u;
    // 0x3726b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3726B0u;
    SET_GPR_U32(ctx, 31, 0x3726B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3726B0u, 0x3726B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3726B8u;
label_3726b8:
    // 0x3726b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3726b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3726bc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3726bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3726c0: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x3726c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x3726c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3726c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3726c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3726c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3726cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3726ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3726d0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3726d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x3726d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3726d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3726d8: 0x0  nop
    ctx->pc = 0x3726d8u;
    // NOP
    // 0x3726dc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3726dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3726e0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3726E0u;
    SET_GPR_U32(ctx, 31, 0x3726E8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3726E0u, 0x3726E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3726E8u;
label_3726e8:
    // 0x3726e8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3726e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x3726ec: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3726ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x3726f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3726f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3726f4: 0x0  nop
    ctx->pc = 0x3726f4u;
    // NOP
    // 0x3726f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3726f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3726fc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3726fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x372700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372704: 0x0  nop
    ctx->pc = 0x372704u;
    // NOP
    // 0x372708: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x372708u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37270c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x37270Cu;
    SET_GPR_U32(ctx, 31, 0x372714u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x37270Cu, 0x372714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372714u;
label_372714:
    // 0x372714: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x372714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x372718: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37271c: 0x0  nop
    ctx->pc = 0x37271cu;
    // NOP
    // 0x372720: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x372720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x372724: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x372724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x372728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37272c: 0x0  nop
    ctx->pc = 0x37272cu;
    // NOP
    // 0x372730: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x372730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x372734: 0xc067694  jal         func_19DA50
    ctx->pc = 0x372734u;
    SET_GPR_U32(ctx, 31, 0x37273Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x372734u, 0x37273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37273Cu;
label_37273c:
    // 0x37273c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37273cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372740: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x372740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x372744: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x372744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x372748: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x372748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x37274c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372750: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x372750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372754: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372758: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x372758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x37275c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372760: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x372760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x372764: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x372764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372768: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37276c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37276cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372770: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x372770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x372774: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x372774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x372778: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x372778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x37277c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x372780: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x372780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x372784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x372784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372788: 0x34440203  ori         $a0, $v0, 0x203
    ctx->pc = 0x372788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)515);
    // 0x37278c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37278cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372790: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x372790u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372794: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x372794u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372798: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x372798u;
    SET_GPR_U32(ctx, 31, 0x3727A0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x372798u, 0x3727A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727A0u;
}
