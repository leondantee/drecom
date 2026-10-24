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

// Function: entry_002cec98
// Address: 0x2cec98 - 0x2cedac
void entry_002cec98_0x2cec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cec98_0x2cec98");
#endif

    switch (ctx->pc) {
        case 0x2ced10u: goto label_2ced10;
        case 0x2ced50u: goto label_2ced50;
        case 0x2ced74u: goto label_2ced74;
        default: break;
    }

    ctx->pc = 0x2cec98u;

    // 0x2cec98: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cec9c: 0x9464000e  lhu         $a0, 0xE($v1)
    ctx->pc = 0x2cec9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2ceca0: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2ceca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ceca4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ceca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ceca8: 0x10650097  beq         $v1, $a1, . + 4 + (0x97 << 2)
    ctx->pc = 0x2CECA8u;
    {
        const bool branch_taken_0x2ceca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ceca8) {
            ctx->pc = 0x2CEF08u;
            return;
        }
    }
    ctx->pc = 0x2CECB0u;
    // 0x2cecb0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cecb4: 0x8c641334  lw          $a0, 0x1334($v1)
    ctx->pc = 0x2cecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2cecb8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2cecb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2cecbc: 0x10600092  beqz        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x2CECBCu;
    {
        const bool branch_taken_0x2cecbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cecbc) {
            ctx->pc = 0x2CEF08u;
            return;
        }
    }
    ctx->pc = 0x2CECC4u;
    // 0x2cecc4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cecc8: 0x8c831354  lw          $v1, 0x1354($a0)
    ctx->pc = 0x2cecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4948)));
    // 0x2ceccc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cecccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cecd0: 0xac831354  sw          $v1, 0x1354($a0)
    ctx->pc = 0x2cecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4948), GPR_U32(ctx, 3));
    // 0x2cecd4: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x2CECD4u;
    {
        const bool branch_taken_0x2cecd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cecd4) {
            ctx->pc = 0x2CEF08u;
            return;
        }
    }
    ctx->pc = 0x2CECDCu;
    // 0x2cecdc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2cecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2cece0: 0x246386d0  addiu       $v1, $v1, -0x7930
    ctx->pc = 0x2cece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936272));
    // 0x2cece4: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2cece4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2cece8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2cece8u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3986D0u));
    // 0x2cecec: 0x7d240000  sq          $a0, 0x0($t1)
    ctx->pc = 0x2cececu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 4));
    // 0x2cecf0: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x2cecf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x2cecf4: 0x24e686e0  addiu       $a2, $a3, -0x7920
    ctx->pc = 0x2cecf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936288));
    // 0x2cecf8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2cecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2cecfc: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2cecfcu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3986E0u));
    // 0x2ced00: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2ced00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2ced04: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2ced04u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ced08: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2CED08u;
    SET_GPR_U32(ctx, 31, 0x2CED10u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2CED08u, 0x2CED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED10u;
label_2ced10:
    // 0x2ced10: 0x3c063fc8  lui         $a2, 0x3FC8
    ctx->pc = 0x2ced10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16328 << 16));
    // 0x2ced14: 0x34c8f5c3  ori         $t0, $a2, 0xF5C3
    ctx->pc = 0x2ced14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62915);
    // 0x2ced18: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2ced18u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ced1c: 0x0  nop
    ctx->pc = 0x2ced1cu;
    // NOP
    // 0x2ced20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ced20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ced24: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2ced24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2ced28: 0x1528c0  sll         $a1, $s5, 3
    ctx->pc = 0x2ced28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2ced2c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2ced2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2ced30: 0x24898480  addiu       $t1, $a0, -0x7B80
    ctx->pc = 0x2ced30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935680));
    // 0x2ced34: 0x1253021  addu        $a2, $t1, $a1
    ctx->pc = 0x2ced34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2ced38: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ced38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ced3c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2ced3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ced40: 0x1485001a  bne         $a0, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CED40u;
    {
        const bool branch_taken_0x2ced40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ced40) {
            ctx->pc = 0x2CEDACu;
            return;
        }
    }
    ctx->pc = 0x2CED48u;
    // 0x2ced48: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2CED48u;
    SET_GPR_U32(ctx, 31, 0x2CED50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2CED48u, 0x2CED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED50u;
label_2ced50:
    // 0x2ced50: 0x3c05437a  lui         $a1, 0x437A
    ctx->pc = 0x2ced50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17274 << 16));
    // 0x2ced54: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2ced54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ced58: 0x0  nop
    ctx->pc = 0x2ced58u;
    // NOP
    // 0x2ced5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ced5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ced60: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2ced60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ced64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ced64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ced68: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2ced68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2ced6c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2CED6Cu;
    SET_GPR_U32(ctx, 31, 0x2CED74u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2CED6Cu, 0x2CED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED74u;
label_2ced74:
    // 0x2ced74: 0x3c06437a  lui         $a2, 0x437A
    ctx->pc = 0x2ced74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17274 << 16));
    // 0x2ced78: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2ced78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ced7c: 0x0  nop
    ctx->pc = 0x2ced7cu;
    // NOP
    // 0x2ced80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ced80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ced84: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2ced84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ced88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ced88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ced8c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2ced8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2ced90: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2ced90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ced94: 0x3c07c409  lui         $a3, 0xC409
    ctx->pc = 0x2ced94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50185 << 16));
    // 0x2ced98: 0x34e38000  ori         $v1, $a3, 0x8000
    ctx->pc = 0x2ced98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x2ced9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ced9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ceda0: 0x0  nop
    ctx->pc = 0x2ceda0u;
    // NOP
    // 0x2ceda4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ceda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ceda8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2ceda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x2cedacu;
}
