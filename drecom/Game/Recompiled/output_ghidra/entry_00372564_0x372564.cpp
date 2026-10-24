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

// Function: entry_00372564
// Address: 0x372564 - 0x372698
void entry_00372564_0x372564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00372564_0x372564");
#endif

    switch (ctx->pc) {
        case 0x372574u: goto label_372574;
        case 0x372584u: goto label_372584;
        case 0x372590u: goto label_372590;
        case 0x3725b0u: goto label_3725b0;
        case 0x3725e0u: goto label_3725e0;
        case 0x37260cu: goto label_37260c;
        case 0x372634u: goto label_372634;
        default: break;
    }

    ctx->pc = 0x372564u;

    // 0x372564: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372568: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x372568u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37256c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x37256Cu;
    SET_GPR_U32(ctx, 31, 0x372574u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x37256Cu, 0x372574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372574u;
label_372574:
    // 0x372574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372578: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x372578u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37257c: 0xc0dc7c8  jal         func_371F20
    ctx->pc = 0x37257Cu;
    SET_GPR_U32(ctx, 31, 0x372584u);
    ctx->pc = 0x371F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371F20u, 0x37257Cu, 0x372584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372584u;
label_372584:
    // 0x372584: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372588: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x372588u;
    SET_GPR_U32(ctx, 31, 0x372590u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x372588u, 0x372590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372590u;
label_372590:
    // 0x372590: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372594: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x372594u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x372598: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x372598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37259c: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x37259cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x3725a0: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3725A0u;
    {
        const bool branch_taken_0x3725a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3725a0) {
            ctx->pc = 0x372698u;
            return;
        }
    }
    ctx->pc = 0x3725A8u;
    // 0x3725a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3725A8u;
    SET_GPR_U32(ctx, 31, 0x3725B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3725A8u, 0x3725B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3725B0u;
label_3725b0:
    // 0x3725b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3725b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3725b4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3725b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3725b8: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x3725b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x3725bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3725bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3725c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3725c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3725c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3725c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3725c8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3725c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3725cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3725ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3725d0: 0x0  nop
    ctx->pc = 0x3725d0u;
    // NOP
    // 0x3725d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3725d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3725d8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3725D8u;
    SET_GPR_U32(ctx, 31, 0x3725E0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3725D8u, 0x3725E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3725E0u;
label_3725e0:
    // 0x3725e0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3725e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x3725e4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3725e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x3725e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3725e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3725ec: 0x0  nop
    ctx->pc = 0x3725ecu;
    // NOP
    // 0x3725f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3725f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3725f4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3725f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3725f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3725f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3725fc: 0x0  nop
    ctx->pc = 0x3725fcu;
    // NOP
    // 0x372600: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x372600u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372604: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x372604u;
    SET_GPR_U32(ctx, 31, 0x37260Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x372604u, 0x37260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37260Cu;
label_37260c:
    // 0x37260c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x37260cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x372610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372614: 0x0  nop
    ctx->pc = 0x372614u;
    // NOP
    // 0x372618: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x372618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x37261c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37261cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x372620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372624: 0x0  nop
    ctx->pc = 0x372624u;
    // NOP
    // 0x372628: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x372628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x37262c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x37262Cu;
    SET_GPR_U32(ctx, 31, 0x372634u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x37262Cu, 0x372634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372634u;
label_372634:
    // 0x372634: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372638: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x372638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x37263c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37263cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x372640: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x372640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x372644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372648: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x372648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37264c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372650: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x372650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x372654: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372658: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x372658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37265c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x37265cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372660: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372664: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x372664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372668: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x372668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x37266c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x37266cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x372670: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x372670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x372674: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x372674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x372678: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x372678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37267c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37267cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372680: 0x34440203  ori         $a0, $v0, 0x203
    ctx->pc = 0x372680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)515);
    // 0x372684: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x372684u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372688: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x372688u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37268c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x37268cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372690: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x372690u;
    SET_GPR_U32(ctx, 31, 0x372698u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x372690u, 0x372698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372698u;
}
