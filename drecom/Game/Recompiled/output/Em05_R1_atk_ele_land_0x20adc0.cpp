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

// Function: Em05_R1_atk_ele_land
// Address: 0x20adc0 - 0x20ba14
void Em05_R1_atk_ele_land_0x20adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_atk_ele_land_0x20adc0");
#endif

    switch (ctx->pc) {
        case 0x20ae70u: goto label_20ae70;
        case 0x20aef0u: goto label_20aef0;
        case 0x20af84u: goto label_20af84;
        case 0x20afa4u: goto label_20afa4;
        case 0x20b028u: goto label_20b028;
        case 0x20b03cu: goto label_20b03c;
        case 0x20b074u: goto label_20b074;
        case 0x20b0d4u: goto label_20b0d4;
        case 0x20b0f4u: goto label_20b0f4;
        case 0x20b1dcu: goto label_20b1dc;
        case 0x20b2c4u: goto label_20b2c4;
        case 0x20b4d8u: goto label_20b4d8;
        case 0x20b4e8u: goto label_20b4e8;
        case 0x20b548u: goto label_20b548;
        case 0x20b5b8u: goto label_20b5b8;
        case 0x20b5d4u: goto label_20b5d4;
        case 0x20b668u: goto label_20b668;
        case 0x20b6d0u: goto label_20b6d0;
        case 0x20b6f8u: goto label_20b6f8;
        case 0x20b7f8u: goto label_20b7f8;
        case 0x20b818u: goto label_20b818;
        case 0x20b910u: goto label_20b910;
        case 0x20b928u: goto label_20b928;
        case 0x20b934u: goto label_20b934;
        case 0x20b948u: goto label_20b948;
        case 0x20b954u: goto label_20b954;
        default: break;
    }

    ctx->pc = 0x20adc0u;

    // 0x20adc0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x20adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x20adc4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x20adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x20adc8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x20adc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x20adcc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20adccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x20add0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x20add4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20add4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x20add8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x20addc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20addcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20ade0: 0xafa40188  sw          $a0, 0x188($sp)
    ctx->pc = 0x20ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 4));
    // 0x20ade4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x20ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x20ade8: 0x2483a210  addiu       $v1, $a0, -0x5DF0
    ctx->pc = 0x20ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943248));
    // 0x20adec: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x20adecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20adf0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x20adf0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A210u));
    // 0x20adf4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x20adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x20adf8: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x20adf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x20adfc: 0x24c3a220  addiu       $v1, $a2, -0x5DE0
    ctx->pc = 0x20adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943264));
    // 0x20ae00: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x20ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20ae04: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x20ae04u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A220u));
    // 0x20ae08: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x20ae0c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20ae10: 0x2463a230  addiu       $v1, $v1, -0x5DD0
    ctx->pc = 0x20ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943280));
    // 0x20ae14: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x20ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20ae18: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x20ae18u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A230u));
    // 0x20ae1c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20ae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x20ae20: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae24: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20ae24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20ae28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20ae28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20ae2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ae30: 0x1083005c  beq         $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x20AE30u;
    {
        const bool branch_taken_0x20ae30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20ae30) {
            ctx->pc = 0x20AFA4u;
            goto label_20afa4;
        }
    }
    ctx->pc = 0x20AE38u;
    // 0x20ae38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AE38u;
    {
        const bool branch_taken_0x20ae38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae38) {
            ctx->pc = 0x20AE48u;
            goto label_20ae48;
        }
    }
    ctx->pc = 0x20AE40u;
    // 0x20ae40: 0x100002ea  b           . + 4 + (0x2EA << 2)
    ctx->pc = 0x20AE40u;
    {
        const bool branch_taken_0x20ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae40) {
            ctx->pc = 0x20B9ECu;
            goto label_20b9ec;
        }
    }
    ctx->pc = 0x20AE48u;
label_20ae48:
    // 0x20ae48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ae48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ae4c: 0xac2094e0  sw          $zero, -0x6B20($at)
    ctx->pc = 0x20ae4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6194E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194E0u, _value); } while (0);
    // 0x20ae50: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae54: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20ae5c: 0x24063c20  addiu       $a2, $zero, 0x3C20
    ctx->pc = 0x20ae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15392));
    // 0x20ae60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20ae60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ae64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20ae64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20ae68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20AE68u;
    SET_GPR_U32(ctx, 31, 0x20AE70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20AE68u, 0x20AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE70u;
label_20ae70:
    // 0x20ae70: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae74: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20ae74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ae78: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae7c: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x20ae7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ae80: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae84: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x20ae84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x20ae88: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae8c: 0xac401344  sw          $zero, 0x1344($v0)
    ctx->pc = 0x20ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 0));
    // 0x20ae90: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20ae94: 0xac401348  sw          $zero, 0x1348($v0)
    ctx->pc = 0x20ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4936), GPR_U32(ctx, 0));
    // 0x20ae98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ae98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ae9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ae9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aea0: 0xe42094b8  swc1        $f0, -0x6B48($at)
    ctx->pc = 0x20aea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B8u, _value); } while (0); }
    // 0x20aea4: 0x3c0543e1  lui         $a1, 0x43E1
    ctx->pc = 0x20aea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17377 << 16));
    // 0x20aea8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20aea8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20aeac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20aeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aeb0: 0xe42094c0  swc1        $f0, -0x6B40($at)
    ctx->pc = 0x20aeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194C0u, _value); } while (0); }
    // 0x20aeb4: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20aeb8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x20aeb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20aebc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x20aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20aec0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20aec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x20aec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aec8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20aecc: 0xa4430096  sh          $v1, 0x96($v0)
    ctx->pc = 0x20aeccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x20aed0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20aed4: 0xa4400094  sh          $zero, 0x94($v0)
    ctx->pc = 0x20aed4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x20aed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20aed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20aedc: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20aee0: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x20aee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x20aee4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x20aee4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20aee8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20AEE8u;
    {
        const bool branch_taken_0x20aee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aee8) {
            ctx->pc = 0x20AF10u;
            goto label_20af10;
        }
    }
    ctx->pc = 0x20AEF0u;
label_20aef0:
    // 0x20aef0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20aef4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20aef8: 0x244293e0  addiu       $v0, $v0, -0x6C20
    ctx->pc = 0x20aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939616));
    // 0x20aefc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20af00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20af00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20af04: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x20af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20af08: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x20af08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20af0c: 0x0  nop
    ctx->pc = 0x20af0cu;
    // NOP
label_20af10:
    // 0x20af10: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x20af10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x20af14: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x20AF14u;
    {
        const bool branch_taken_0x20af14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20af14) {
            ctx->pc = 0x20AEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20aef0;
        }
    }
    ctx->pc = 0x20AF1Cu;
    // 0x20af1c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20af20: 0xac801368  sw          $zero, 0x1368($a0)
    ctx->pc = 0x20af20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4968), GPR_U32(ctx, 0));
    // 0x20af24: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20af28: 0xac401374  sw          $zero, 0x1374($v0)
    ctx->pc = 0x20af28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4980), GPR_U32(ctx, 0));
    // 0x20af2c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20af2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20af30: 0x8c239310  lw          $v1, -0x6CF0($at)
    ctx->pc = 0x20af30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619310u));
    // 0x20af34: 0x8c66020c  lw          $a2, 0x20C($v1)
    ctx->pc = 0x20af34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x20af38: 0x34c20005  ori         $v0, $a2, 0x5
    ctx->pc = 0x20af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x20af3c: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x20af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
    // 0x20af40: 0x24030505  addiu       $v1, $zero, 0x505
    ctx->pc = 0x20af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x20af44: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x20af44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20af48: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20af4c: 0x8c490130  lw          $t1, 0x130($v0)
    ctx->pc = 0x20af4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20af50: 0x25220030  addiu       $v0, $t1, 0x30
    ctx->pc = 0x20af50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x20af54: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x20af54u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20af58: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x20af58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20af5c: 0x7c4a0000  sq          $t2, 0x0($v0)
    ctx->pc = 0x20af5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 10));
    // 0x20af60: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20af60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20af64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20af64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20af68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20af68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20af6c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x20af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20af70: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x20af70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20af74: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x20af74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20af78: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x20af78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20af7c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20AF7Cu;
    SET_GPR_U32(ctx, 31, 0x20AF84u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20AF84u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20AF84u) { return; }
    ctx->pc = 0x20AF84u;
label_20af84:
    // 0x20af84: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20af84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20af88: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20af88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20af8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20af8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20af90: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x20af90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x20af94: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x20af94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20af98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20af98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20af9c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20AF9Cu;
    SET_GPR_U32(ctx, 31, 0x20AFA4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20AF9Cu, 0x20AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFA4u;
label_20afa4:
    // 0x20afa4: 0x8fb10188  lw          $s1, 0x188($sp)
    ctx->pc = 0x20afa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20afa8: 0x8622127e  lh          $v0, 0x127E($s1)
    ctx->pc = 0x20afa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4734)));
    // 0x20afac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20afb0: 0xa622127e  sh          $v0, 0x127E($s1)
    ctx->pc = 0x20afb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x20afb4: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20afb8: 0x8485127a  lh          $a1, 0x127A($a0)
    ctx->pc = 0x20afb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x20afbc: 0x14a000c7  bnez        $a1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x20AFBCu;
    {
        const bool branch_taken_0x20afbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x20afbc) {
            ctx->pc = 0x20B2DCu;
            goto label_20b2dc;
        }
    }
    ctx->pc = 0x20AFC4u;
    // 0x20afc4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20afc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20afc8: 0xc42194b8  lwc1        $f1, -0x6B48($at)
    ctx->pc = 0x20afc8u;
    { uint32_t bits = FAST_READ32(0x6194B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20afcc: 0x3c0640c0  lui         $a2, 0x40C0
    ctx->pc = 0x20afccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16576 << 16));
    // 0x20afd0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20afd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20afd4: 0x0  nop
    ctx->pc = 0x20afd4u;
    // NOP
    // 0x20afd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20afd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20afdc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20afdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20afe0: 0xe42094b8  swc1        $f0, -0x6B48($at)
    ctx->pc = 0x20afe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B8u, _value); } while (0); }
    // 0x20afe4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20afe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20afe8: 0xc42094b8  lwc1        $f0, -0x6B48($at)
    ctx->pc = 0x20afe8u;
    { uint32_t bits = FAST_READ32(0x6194B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20afec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20afecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aff0: 0x8c229310  lw          $v0, -0x6CF0($at)
    ctx->pc = 0x20aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x619310u));
    // 0x20aff4: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x20aff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x20aff8: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x20aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20affc: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b000: 0x3c043c83  lui         $a0, 0x3C83
    ctx->pc = 0x20b000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15491 << 16));
    // 0x20b004: 0x3482126f  ori         $v0, $a0, 0x126F
    ctx->pc = 0x20b004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4719);
    // 0x20b008: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20b008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20b00c: 0x24a60120  addiu       $a2, $a1, 0x120
    ctx->pc = 0x20b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x20b010: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x20b010u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20b014: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x20b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20b018: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20b018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x20b01c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x20b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x20b020: 0xc05c848  jal         func_172120
    ctx->pc = 0x20B020u;
    SET_GPR_U32(ctx, 31, 0x20B028u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x20B020u, 0x20B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B028u;
label_20b028:
    // 0x20b028: 0x8fb00188  lw          $s0, 0x188($sp)
    ctx->pc = 0x20b028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b02c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x20b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b030: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20b030u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20b034: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x20B034u;
    SET_GPR_U32(ctx, 31, 0x20B03Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x20B034u, 0x20B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B03Cu;
label_20b03c:
    // 0x20b03c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b040: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20b040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20b044: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b048: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x20b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20b04c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20b04cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b050: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b054: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x20b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20b058: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20b058u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192C0u, _value); } while (0);
    // 0x20b05c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b060: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b064: 0x24449280  addiu       $a0, $v0, -0x6D80
    ctx->pc = 0x20b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x20b068: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x20b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20b06c: 0xc067844  jal         func_19E110
    ctx->pc = 0x20B06Cu;
    SET_GPR_U32(ctx, 31, 0x20B074u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x20B06Cu, 0x20B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B074u;
label_20b074:
    // 0x20b074: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b078: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b07c: 0xe42094dc  swc1        $f0, -0x6B24($at)
    ctx->pc = 0x20b07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194DCu, _value); } while (0); }
    // 0x20b080: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b084: 0xe42094d0  swc1        $f0, -0x6B30($at)
    ctx->pc = 0x20b084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194D0u, _value); } while (0); }
    // 0x20b088: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b08c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x20b08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b090: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20b090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20b094: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x20b094u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b098: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20b098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20b09c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b0a0: 0xe42094d4  swc1        $f0, -0x6B2C($at)
    ctx->pc = 0x20b0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194D4u, _value); } while (0); }
    // 0x20b0a4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b0a8: 0xc440128c  lwc1        $f0, 0x128C($v0)
    ctx->pc = 0x20b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b0ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b0b0: 0xe42094d8  swc1        $f0, -0x6B28($at)
    ctx->pc = 0x20b0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194D8u, _value); } while (0); }
    // 0x20b0b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b0b8: 0x244494d0  addiu       $a0, $v0, -0x6B30
    ctx->pc = 0x20b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x20b0bc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b0c0: 0x24659280  addiu       $a1, $v1, -0x6D80
    ctx->pc = 0x20b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939264));
    // 0x20b0c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b0c8: 0x244694d0  addiu       $a2, $v0, -0x6B30
    ctx->pc = 0x20b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x20b0cc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20B0CCu;
    SET_GPR_U32(ctx, 31, 0x20B0D4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20B0D4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20B0D4u) { return; }
    ctx->pc = 0x20B0D4u;
label_20b0d4:
    // 0x20b0d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b0d8: 0x244492c0  addiu       $a0, $v0, -0x6D40
    ctx->pc = 0x20b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20b0dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b0e0: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x20b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20b0e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b0e8: 0x244694d0  addiu       $a2, $v0, -0x6B30
    ctx->pc = 0x20b0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x20b0ec: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x20B0ECu;
    SET_GPR_U32(ctx, 31, 0x20B0F4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x20B0F4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20B0F4u) { return; }
    ctx->pc = 0x20B0F4u;
label_20b0f4:
    // 0x20b0f4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b0f8: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x20b0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x20b0fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20b0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20b100: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20b100u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20b104: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x20b104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x20b108: 0x14400187  bnez        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x20B108u;
    {
        const bool branch_taken_0x20b108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b108) {
            ctx->pc = 0x20B728u;
            goto label_20b728;
        }
    }
    ctx->pc = 0x20B110u;
    // 0x20b110: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20b110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20b114: 0x2442a240  addiu       $v0, $v0, -0x5DC0
    ctx->pc = 0x20b114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x20b118: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x20b118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20b11c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x20b11cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x38A240u));
    // 0x20b120: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x20b120u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x20b124: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x20b124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x20b128: 0x24c2a250  addiu       $v0, $a2, -0x5DB0
    ctx->pc = 0x20b128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943312));
    // 0x20b12c: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x20b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x20b130: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20b130u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A250u));
    // 0x20b134: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20b134u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20b138: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x20b138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x20b13c: 0x24a2a260  addiu       $v0, $a1, -0x5DA0
    ctx->pc = 0x20b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943328));
    // 0x20b140: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x20b140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x20b144: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20b144u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A260u));
    // 0x20b148: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20b148u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20b14c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b150: 0x8c421374  lw          $v0, 0x1374($v0)
    ctx->pc = 0x20b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4980)));
    // 0x20b154: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x20b154u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20b158: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B158u;
    {
        const bool branch_taken_0x20b158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b158) {
            ctx->pc = 0x20B16Cu;
            goto label_20b16c;
        }
    }
    ctx->pc = 0x20B160u;
    // 0x20b160: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20b160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b164: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B164u;
    {
        const bool branch_taken_0x20b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b164) {
            ctx->pc = 0x20B170u;
            goto label_20b170;
        }
    }
    ctx->pc = 0x20B16Cu;
label_20b16c:
    // 0x20b16c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x20b16cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20b170:
    // 0x20b170: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x20b170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x20b174: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20b174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b178: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x20b178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x20b17c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20b17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20b180: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20b184: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b188: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20b188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x20b18c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20b190: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x20b190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x20b194: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20b194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20b198: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x20b198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x20b19c: 0x3c0543af  lui         $a1, 0x43AF
    ctx->pc = 0x20b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17327 << 16));
    // 0x20b1a0: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x20b1a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20b1a4: 0x324b00ff  andi        $t3, $s2, 0xFF
    ctx->pc = 0x20b1a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x20b1a8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b1ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20b1acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20b1b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20b1b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b1b4: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x20b1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20b1b8: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x20b1b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x20b1bc: 0x8faa0188  lw          $t2, 0x188($sp)
    ctx->pc = 0x20b1bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b1c0: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x20b1c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20b1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b1c8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x20b1c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20b1cc: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x20b1ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x20b1d0: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x20b1d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x20b1d4: 0xc0bb7c0  jal         func_2EDF00
    ctx->pc = 0x20B1D4u;
    SET_GPR_U32(ctx, 31, 0x20B1DCu);
    ctx->pc = 0x2EDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF00u, 0x20B1D4u, 0x20B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1DCu;
label_20b1dc:
    // 0x20b1dc: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b1e0: 0x8c821374  lw          $v0, 0x1374($a0)
    ctx->pc = 0x20b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4980)));
    // 0x20b1e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20b1e8: 0xac821374  sw          $v0, 0x1374($a0)
    ctx->pc = 0x20b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4980), GPR_U32(ctx, 2));
    // 0x20b1ec: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x20b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b1f0: 0x84a2127e  lh          $v0, 0x127E($a1)
    ctx->pc = 0x20b1f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x20b1f4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x20b1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20b1f8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20b1f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20b1fc: 0x2881000b  slti        $at, $a0, 0xB
    ctx->pc = 0x20b1fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20b200: 0x14200149  bnez        $at, . + 4 + (0x149 << 2)
    ctx->pc = 0x20B200u;
    {
        const bool branch_taken_0x20b200 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b200) {
            ctx->pc = 0x20B728u;
            goto label_20b728;
        }
    }
    ctx->pc = 0x20B208u;
    // 0x20b208: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20b208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20b20c: 0x2445a270  addiu       $a1, $v0, -0x5D90
    ctx->pc = 0x20b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943344));
    // 0x20b210: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20b210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x20b214: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x20b214u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A270u));
    // 0x20b218: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b218u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x20b21c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20b220: 0x2463a280  addiu       $v1, $v1, -0x5D80
    ctx->pc = 0x20b220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943360));
    // 0x20b224: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x20b224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x20b228: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x20b228u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x38A280u));
    // 0x20b22c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x20b22cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x20b230: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20b230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20b234: 0x2463a290  addiu       $v1, $v1, -0x5D70
    ctx->pc = 0x20b234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943376));
    // 0x20b238: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x20b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x20b23c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x20b23cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A290u));
    // 0x20b240: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b240u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x20b244: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b248: 0x8c641374  lw          $a0, 0x1374($v1)
    ctx->pc = 0x20b248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4980)));
    // 0x20b24c: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x20b24cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20b250: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B250u;
    {
        const bool branch_taken_0x20b250 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b250) {
            ctx->pc = 0x20B264u;
            goto label_20b264;
        }
    }
    ctx->pc = 0x20B258u;
    // 0x20b258: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20b258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b25c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B25Cu;
    {
        const bool branch_taken_0x20b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b25c) {
            ctx->pc = 0x20B268u;
            goto label_20b268;
        }
    }
    ctx->pc = 0x20B264u;
label_20b264:
    // 0x20b264: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x20b264u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20b268:
    // 0x20b268: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x20b268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x20b26c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20b26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b270: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x20b270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x20b274: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x20b274u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20b278: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20b278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20b27c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b280: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x20b284: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20b288: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x20b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x20b28c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20b290: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x20b290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x20b294: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x20b294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x20b298: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x20b298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20b29c: 0x326b00ff  andi        $t3, $s3, 0xFF
    ctx->pc = 0x20b29cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x20b2a0: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b2a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b2a8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x20b2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x20b2ac: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x20b2acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b2b0: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x20b2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20b2b4: 0x27a90110  addiu       $t1, $sp, 0x110
    ctx->pc = 0x20b2b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x20b2b8: 0x27aa0120  addiu       $t2, $sp, 0x120
    ctx->pc = 0x20b2b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x20b2bc: 0xc0bb7c0  jal         func_2EDF00
    ctx->pc = 0x20B2BCu;
    SET_GPR_U32(ctx, 31, 0x20B2C4u);
    ctx->pc = 0x2EDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF00u, 0x20B2BCu, 0x20B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B2C4u;
label_20b2c4:
    // 0x20b2c4: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b2c8: 0x8c621374  lw          $v0, 0x1374($v1)
    ctx->pc = 0x20b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4980)));
    // 0x20b2cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20b2d0: 0xac621374  sw          $v0, 0x1374($v1)
    ctx->pc = 0x20b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4980), GPR_U32(ctx, 2));
    // 0x20b2d4: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x20B2D4u;
    {
        const bool branch_taken_0x20b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b2d4) {
            ctx->pc = 0x20B728u;
            goto label_20b728;
        }
    }
    ctx->pc = 0x20B2DCu;
label_20b2dc:
    // 0x20b2dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b2e0: 0xc42194b8  lwc1        $f1, -0x6B48($at)
    ctx->pc = 0x20b2e0u;
    { uint32_t bits = FAST_READ32(0x6194B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b2e4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x20b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x20b2e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b2ec: 0x0  nop
    ctx->pc = 0x20b2ecu;
    // NOP
    // 0x20b2f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20b2f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20b2f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b2f8: 0xe42094b8  swc1        $f0, -0x6B48($at)
    ctx->pc = 0x20b2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B8u, _value); } while (0); }
    // 0x20b2fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b300: 0xc42194b8  lwc1        $f1, -0x6B48($at)
    ctx->pc = 0x20b300u;
    { uint32_t bits = FAST_READ32(0x6194B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b308: 0x0  nop
    ctx->pc = 0x20b308u;
    // NOP
    // 0x20b30c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b30cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b310: 0x0  nop
    ctx->pc = 0x20b310u;
    // NOP
    // 0x20b314: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20B314u;
    {
        const bool branch_taken_0x20b314 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b314) {
            ctx->pc = 0x20B328u;
            goto label_20b328;
        }
    }
    ctx->pc = 0x20B31Cu;
    // 0x20b31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b320: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b324: 0xe42094b8  swc1        $f0, -0x6B48($at)
    ctx->pc = 0x20b324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B8u, _value); } while (0); }
label_20b328:
    // 0x20b328: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b32c: 0xc42094b8  lwc1        $f0, -0x6B48($at)
    ctx->pc = 0x20b32cu;
    { uint32_t bits = FAST_READ32(0x6194B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b330: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b334: 0x8c229310  lw          $v0, -0x6CF0($at)
    ctx->pc = 0x20b334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x619310u));
    // 0x20b338: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x20b338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x20b33c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b340: 0xc42194c0  lwc1        $f1, -0x6B40($at)
    ctx->pc = 0x20b340u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b348: 0x0  nop
    ctx->pc = 0x20b348u;
    // NOP
    // 0x20b34c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20b34cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b350: 0x0  nop
    ctx->pc = 0x20b350u;
    // NOP
    // 0x20b354: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x20B354u;
    {
        const bool branch_taken_0x20b354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b354) {
            ctx->pc = 0x20B37Cu;
            goto label_20b37c;
        }
    }
    ctx->pc = 0x20B35Cu;
    // 0x20b35c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b360: 0xc42194c0  lwc1        $f1, -0x6B40($at)
    ctx->pc = 0x20b360u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b364: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x20b364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x20b368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b36c: 0x0  nop
    ctx->pc = 0x20b36cu;
    // NOP
    // 0x20b370: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20b370u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20b374: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b378: 0xe42094c0  swc1        $f0, -0x6B40($at)
    ctx->pc = 0x20b378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194C0u, _value); } while (0); }
label_20b37c:
    // 0x20b37c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b380: 0xc42194c0  lwc1        $f1, -0x6B40($at)
    ctx->pc = 0x20b380u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b384: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20b384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20b388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b38c: 0x0  nop
    ctx->pc = 0x20b38cu;
    // NOP
    // 0x20b390: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b394: 0x0  nop
    ctx->pc = 0x20b394u;
    // NOP
    // 0x20b398: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20B398u;
    {
        const bool branch_taken_0x20b398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b398) {
            ctx->pc = 0x20B3B0u;
            goto label_20b3b0;
        }
    }
    ctx->pc = 0x20B3A0u;
    // 0x20b3a0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20b3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b3a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b3ac: 0xe42094c0  swc1        $f0, -0x6B40($at)
    ctx->pc = 0x20b3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194C0u, _value); } while (0); }
label_20b3b0:
    // 0x20b3b0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b3b4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x20b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b3b8: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x20b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x20b3bc: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x20b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x20b3c0: 0xac6200f0  sw          $v0, 0xF0($v1)
    ctx->pc = 0x20b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    // 0x20b3c4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b3c8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x20b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b3cc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x20b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x20b3d0: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x20b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x20b3d4: 0xac6200f4  sw          $v0, 0xF4($v1)
    ctx->pc = 0x20b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
    // 0x20b3d8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b3dc: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x20b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b3e0: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x20b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x20b3e4: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x20b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x20b3e8: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x20b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x20b3ec: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b3f0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b3f4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x20b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x20b3f8: 0x2c410100  sltiu       $at, $v0, 0x100
    ctx->pc = 0x20b3f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20b3fc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B3FCu;
    {
        const bool branch_taken_0x20b3fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b3fc) {
            ctx->pc = 0x20B414u;
            goto label_20b414;
        }
    }
    ctx->pc = 0x20B404u;
    // 0x20b404: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20b404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b408: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b40c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b410: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x20b410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
label_20b414:
    // 0x20b414: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b418: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b41c: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x20b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x20b420: 0x2c410100  sltiu       $at, $v0, 0x100
    ctx->pc = 0x20b420u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20b424: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B424u;
    {
        const bool branch_taken_0x20b424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b424) {
            ctx->pc = 0x20B43Cu;
            goto label_20b43c;
        }
    }
    ctx->pc = 0x20B42Cu;
    // 0x20b42c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b430: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b434: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b438: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x20b438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
label_20b43c:
    // 0x20b43c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b440: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b444: 0x8c4200f8  lw          $v0, 0xF8($v0)
    ctx->pc = 0x20b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x20b448: 0x2c410100  sltiu       $at, $v0, 0x100
    ctx->pc = 0x20b448u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20b44c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B44Cu;
    {
        const bool branch_taken_0x20b44c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b44c) {
            ctx->pc = 0x20B464u;
            goto label_20b464;
        }
    }
    ctx->pc = 0x20B454u;
    // 0x20b454: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20b454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b458: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b45c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b460: 0xac4300f8  sw          $v1, 0xF8($v0)
    ctx->pc = 0x20b460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 3));
label_20b464:
    // 0x20b464: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b468: 0x8c2293e0  lw          $v0, -0x6C20($at)
    ctx->pc = 0x20b468u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6193E0u));
    // 0x20b46c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x20B46Cu;
    {
        const bool branch_taken_0x20b46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b46c) {
            ctx->pc = 0x20B524u;
            goto label_20b524;
        }
    }
    ctx->pc = 0x20B474u;
    // 0x20b474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b478: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b47c: 0xac2293e0  sw          $v0, -0x6C20($at)
    ctx->pc = 0x20b47cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6193E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E0u, _value); } while (0);
    // 0x20b480: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b484: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x20b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20b488: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20b488u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6192C0u));
    // 0x20b48c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b490: 0x24429390  addiu       $v0, $v0, -0x6C70
    ctx->pc = 0x20b490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x20b494: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20b494u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x619390u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x619390u, _value); } while (0);
    // 0x20b498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20b498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b49c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b4a0: 0xac2293e4  sw          $v0, -0x6C1C($at)
    ctx->pc = 0x20b4a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6193E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E4u, _value); } while (0);
    // 0x20b4a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x20b4a8: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x20b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x20b4ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20b4acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3EDCE0u));
    // 0x20b4b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b4b4: 0x244293a0  addiu       $v0, $v0, -0x6C60
    ctx->pc = 0x20b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939552));
    // 0x20b4b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20b4b8u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6193A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6193A0u, _value); } while (0);
    // 0x20b4bc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x20b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x20b4c0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b4c4: 0x246593a0  addiu       $a1, $v1, -0x6C60
    ctx->pc = 0x20b4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939552));
    // 0x20b4c8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b4cc: 0x24669390  addiu       $a2, $v1, -0x6C70
    ctx->pc = 0x20b4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939536));
    // 0x20b4d0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x20B4D0u;
    SET_GPR_U32(ctx, 31, 0x20B4D8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x20B4D0u, 0x20B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4D8u;
label_20b4d8:
    // 0x20b4d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20b4d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20b4dc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x20b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x20b4e0: 0xc067588  jal         func_19D620
    ctx->pc = 0x20B4E0u;
    SET_GPR_U32(ctx, 31, 0x20B4E8u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x20B4E0u, 0x20B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4E8u;
label_20b4e8:
    // 0x20b4e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b4ec: 0xe4209404  swc1        $f0, -0x6BFC($at)
    ctx->pc = 0x20b4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619404u, _value); } while (0); }
    // 0x20b4f0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b4f4: 0xc4219404  lwc1        $f1, -0x6BFC($at)
    ctx->pc = 0x20b4f4u;
    { uint32_t bits = FAST_READ32(0x619404u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b4f8: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x20b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x20b4fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20b4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b500: 0x0  nop
    ctx->pc = 0x20b500u;
    // NOP
    // 0x20b504: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20b504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b508: 0x0  nop
    ctx->pc = 0x20b508u;
    // NOP
    // 0x20b50c: 0x45010086  bc1t        . + 4 + (0x86 << 2)
    ctx->pc = 0x20B50Cu;
    {
        const bool branch_taken_0x20b50c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b50c) {
            ctx->pc = 0x20B728u;
            goto label_20b728;
        }
    }
    ctx->pc = 0x20B514u;
    // 0x20b514: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b518: 0xac2093e4  sw          $zero, -0x6C1C($at)
    ctx->pc = 0x20b518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6193E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6193E4u, _value); } while (0);
    // 0x20b51c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x20B51Cu;
    {
        const bool branch_taken_0x20b51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b51c) {
            ctx->pc = 0x20B728u;
            goto label_20b728;
        }
    }
    ctx->pc = 0x20B524u;
label_20b524:
    // 0x20b524: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b528: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x20b528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x20b52c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x20b52cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x6192C0u));
    // 0x20b530: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b534: 0x24639390  addiu       $v1, $v1, -0x6C70
    ctx->pc = 0x20b534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939536));
    // 0x20b538: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x20b538u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x619390u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x619390u, _value); } while (0);
    // 0x20b53c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x20b53cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b540: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x20B540u;
    {
        const bool branch_taken_0x20b540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b540) {
            ctx->pc = 0x20B718u;
            goto label_20b718;
        }
    }
    ctx->pc = 0x20B548u;
label_20b548:
    // 0x20b548: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x20b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20b54c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x20b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b550: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b554: 0x246293e0  addiu       $v0, $v1, -0x6C20
    ctx->pc = 0x20b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939616));
    // 0x20b558: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x20b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20b55c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b560: 0x10a0006b  beqz        $a1, . + 4 + (0x6B << 2)
    ctx->pc = 0x20B560u;
    {
        const bool branch_taken_0x20b560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b560) {
            ctx->pc = 0x20B710u;
            goto label_20b710;
        }
    }
    ctx->pc = 0x20B568u;
    // 0x20b568: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x20b568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20b56c: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x20b56cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20b570: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x20b570u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x20b574: 0x250293e0  addiu       $v0, $t0, -0x6C20
    ctx->pc = 0x20b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939616));
    // 0x20b578: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20b57c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b580: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b584: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20B584u;
    {
        const bool branch_taken_0x20b584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b584) {
            ctx->pc = 0x20B5B0u;
            goto label_20b5b0;
        }
    }
    ctx->pc = 0x20B58Cu;
    // 0x20b58c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x20b590: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x20b590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x20b594: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x20b594u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3EDCE0u));
    // 0x20b598: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x20b598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20b59c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x20b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20b5a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b5a4: 0x24439390  addiu       $v1, $v0, -0x6C70
    ctx->pc = 0x20b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x20b5a8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x20b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20b5ac: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x20b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
label_20b5b0:
    // 0x20b5b0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20B5B0u;
    SET_GPR_U32(ctx, 31, 0x20B5B8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20B5B0u, 0x20B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5B8u;
label_20b5b8:
    // 0x20b5b8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x20b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x20b5bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20b5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b5c0: 0x0  nop
    ctx->pc = 0x20b5c0u;
    // NOP
    // 0x20b5c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20b5c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20b5c8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x20b5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x20b5cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20B5CCu;
    SET_GPR_U32(ctx, 31, 0x20B5D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20B5CCu, 0x20B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5D4u;
label_20b5d4:
    // 0x20b5d4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x20b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x20b5d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20b5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b5dc: 0x0  nop
    ctx->pc = 0x20b5dcu;
    // NOP
    // 0x20b5e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20b5e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20b5e4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x20b5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x20b5e8: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b5ec: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x20b5ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20b5f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20b5f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20b5f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20b5f8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20b5fc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20B5FCu;
    {
        const bool branch_taken_0x20b5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b5fc) {
            ctx->pc = 0x20B668u;
            goto label_20b668;
        }
    }
    ctx->pc = 0x20B604u;
    // 0x20b604: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20b604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20b608: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20b608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b60c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20b610: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20b614: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x20b614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20b618: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b61c: 0x24439390  addiu       $v1, $v0, -0x6C70
    ctx->pc = 0x20b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x20b620: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x20b620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20b624: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x20b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20b628: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x20b628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20b62c: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x20b62cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
    // 0x20b630: 0x26829390  addiu       $v0, $s4, -0x6C70
    ctx->pc = 0x20b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939536));
    // 0x20b634: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x20b634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b638: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20b638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20b63c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20b63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20b640: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20b640u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b644: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20b644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b648: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20b648u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b64c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20b64cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b650: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b654: 0xc42d94c0  lwc1        $f13, -0x6B40($at)
    ctx->pc = 0x20b654u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20b658: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x20b658u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20b65c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20b65cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b660: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20B660u;
    SET_GPR_U32(ctx, 31, 0x20B668u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20B660u, 0x20B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B668u;
label_20b668:
    // 0x20b668: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20b668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20b66c: 0x9022ec68  lbu         $v0, -0x1398($at)
    ctx->pc = 0x20b66cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x20b670: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x20B670u;
    {
        const bool branch_taken_0x20b670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b670) {
            ctx->pc = 0x20B710u;
            goto label_20b710;
        }
    }
    ctx->pc = 0x20B678u;
    // 0x20b678: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b67c: 0x8c2294e0  lw          $v0, -0x6B20($at)
    ctx->pc = 0x20b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6194E0u));
    // 0x20b680: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x20B680u;
    {
        const bool branch_taken_0x20b680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b680) {
            ctx->pc = 0x20B710u;
            goto label_20b710;
        }
    }
    ctx->pc = 0x20B688u;
    // 0x20b688: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x20b688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20b68c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x20b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20b690: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x20b690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x20b694: 0x24c293e0  addiu       $v0, $a2, -0x6C20
    ctx->pc = 0x20b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939616));
    // 0x20b698: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20b69c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b6a0: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x20b6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20b6a4: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x20B6A4u;
    {
        const bool branch_taken_0x20b6a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b6a4) {
            ctx->pc = 0x20B710u;
            goto label_20b710;
        }
    }
    ctx->pc = 0x20B6ACu;
    // 0x20b6ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20b6b0: 0x24518c70  addiu       $s1, $v0, -0x7390
    ctx->pc = 0x20b6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x20b6b4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b6b8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20b6bc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x20b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x20b6c0: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x20b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x20b6c4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x20b6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20b6c8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20B6C8u;
    SET_GPR_U32(ctx, 31, 0x20B6D0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20B6D0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20B6D0u) { return; }
    ctx->pc = 0x20B6D0u;
label_20b6d0:
    // 0x20b6d0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x20b6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x20b6d4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x20b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x20b6d8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b6dc: 0x246292c0  addiu       $v0, $v1, -0x6D40
    ctx->pc = 0x20b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x20b6e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20b6e4: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b6e8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x20b6e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20b6ec: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x20b6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x20b6f0: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x20B6F0u;
    SET_GPR_U32(ctx, 31, 0x20B6F8u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x20B6F0u, 0x20B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6F8u;
label_20b6f8:
    // 0x20b6f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B6F8u;
    {
        const bool branch_taken_0x20b6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b6f8) {
            ctx->pc = 0x20B710u;
            goto label_20b710;
        }
    }
    ctx->pc = 0x20B700u;
    // 0x20b700: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b704: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b708: 0xac2594e0  sw          $a1, -0x6B20($at)
    ctx->pc = 0x20b708u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6194E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194E0u, _value); } while (0);
    // 0x20b70c: 0x0  nop
    ctx->pc = 0x20b70cu;
    // NOP
label_20b710:
    // 0x20b710: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20b710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20b714: 0x0  nop
    ctx->pc = 0x20b714u;
    // NOP
label_20b718:
    // 0x20b718: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x20b718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20b71c: 0x1440ff8a  bnez        $v0, . + 4 + (-0x76 << 2)
    ctx->pc = 0x20B71Cu;
    {
        const bool branch_taken_0x20b71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b71c) {
            ctx->pc = 0x20B548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b548;
        }
    }
    ctx->pc = 0x20B724u;
    // 0x20b724: 0x0  nop
    ctx->pc = 0x20b724u;
    // NOP
label_20b728:
    // 0x20b728: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b72c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20b72cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20b730: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20b730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20b734: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20b734u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20b738: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x20b738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20b73c: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x20B73Cu;
    {
        const bool branch_taken_0x20b73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b73c) {
            ctx->pc = 0x20B914u;
            goto label_20b914;
        }
    }
    ctx->pc = 0x20B744u;
    // 0x20b744: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b748: 0x904309db  lbu         $v1, 0x9DB($v0)
    ctx->pc = 0x20b748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20b74c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x20b74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20b750: 0x30440080  andi        $a0, $v0, 0x80
    ctx->pc = 0x20b750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20b754: 0x1080006f  beqz        $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x20B754u;
    {
        const bool branch_taken_0x20b754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b754) {
            ctx->pc = 0x20B914u;
            goto label_20b914;
        }
    }
    ctx->pc = 0x20B75Cu;
    // 0x20b75c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b760: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x20b760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x20b764: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x20B764u;
    {
        const bool branch_taken_0x20b764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b764) {
            ctx->pc = 0x20B818u;
            goto label_20b818;
        }
    }
    ctx->pc = 0x20B76Cu;
    // 0x20b76c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b770: 0xac401348  sw          $zero, 0x1348($v0)
    ctx->pc = 0x20b770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4936), GPR_U32(ctx, 0));
    // 0x20b774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b778: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b77c: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x20b77cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x20b780: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x20b780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20b784: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x20b784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b788: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x20b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x20b78c: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x20b78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x20b790: 0x24060258  addiu       $a2, $zero, 0x258
    ctx->pc = 0x20b790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20b794: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b798: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b79c: 0xac4600f4  sw          $a2, 0xF4($v0)
    ctx->pc = 0x20b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 6));
    // 0x20b7a0: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x20b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20b7a4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b7a8: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x20b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b7ac: 0xaca400f8  sw          $a0, 0xF8($a1)
    ctx->pc = 0x20b7acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 4));
    // 0x20b7b0: 0x24020506  addiu       $v0, $zero, 0x506
    ctx->pc = 0x20b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x20b7b4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x20b7b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20b7b8: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x20b7b8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20b7bc: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b7c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20b7c4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20b7c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20b7c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b7cc: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x20b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20b7d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20b7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20b7d4: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20b7d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20b7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b7dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20b7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20b7e0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x20b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20b7e4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x20b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20b7e8: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x20b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20b7ec: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x20b7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20b7f0: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20B7F0u;
    SET_GPR_U32(ctx, 31, 0x20B7F8u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20B7F8u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20B7F8u) { return; }
    ctx->pc = 0x20B7F8u;
label_20b7f8:
    // 0x20b7f8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20b7fc: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x20b7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20b800: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20b800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b804: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x20b804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x20b808: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x20b808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20b80c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20b80cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b810: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20B810u;
    SET_GPR_U32(ctx, 31, 0x20B818u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20B810u, 0x20B818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B818u;
label_20b818:
    // 0x20b818: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b81c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x20b81cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20b820: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20b824: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20b824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20b828: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x20b828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x20b82c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x20B82Cu;
    {
        const bool branch_taken_0x20b82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b82c) {
            ctx->pc = 0x20B914u;
            goto label_20b914;
        }
    }
    ctx->pc = 0x20B834u;
    // 0x20b834: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b838: 0xc42194c0  lwc1        $f1, -0x6B40($at)
    ctx->pc = 0x20b838u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b83c: 0x3c124316  lui         $s2, 0x4316
    ctx->pc = 0x20b83cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17174 << 16));
    // 0x20b840: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x20b840u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b844: 0x0  nop
    ctx->pc = 0x20b844u;
    // NOP
    // 0x20b848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b84c: 0x0  nop
    ctx->pc = 0x20b84cu;
    // NOP
    // 0x20b850: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20B850u;
    {
        const bool branch_taken_0x20b850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b850) {
            ctx->pc = 0x20B870u;
            goto label_20b870;
        }
    }
    ctx->pc = 0x20B858u;
    // 0x20b858: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20b858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20b85c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b860: 0x0  nop
    ctx->pc = 0x20b860u;
    // NOP
    // 0x20b864: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x20b864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x20b868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20B868u;
    {
        const bool branch_taken_0x20b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b868) {
            ctx->pc = 0x20B87Cu;
            goto label_20b87c;
        }
    }
    ctx->pc = 0x20B870u;
label_20b870:
    // 0x20b870: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b874: 0xc42094c0  lwc1        $f0, -0x6B40($at)
    ctx->pc = 0x20b874u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b878: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x20b878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_20b87c:
    // 0x20b87c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b880: 0xc42194c0  lwc1        $f1, -0x6B40($at)
    ctx->pc = 0x20b880u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b884: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20b884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20b888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b88c: 0x0  nop
    ctx->pc = 0x20b88cu;
    // NOP
    // 0x20b890: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b894: 0x0  nop
    ctx->pc = 0x20b894u;
    // NOP
    // 0x20b898: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20B898u;
    {
        const bool branch_taken_0x20b898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b898) {
            ctx->pc = 0x20B8B8u;
            goto label_20b8b8;
        }
    }
    ctx->pc = 0x20B8A0u;
    // 0x20b8a0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20b8a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b8a8: 0x0  nop
    ctx->pc = 0x20b8a8u;
    // NOP
    // 0x20b8ac: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x20b8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x20b8b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20B8B0u;
    {
        const bool branch_taken_0x20b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b8b0) {
            ctx->pc = 0x20B8C4u;
            goto label_20b8c4;
        }
    }
    ctx->pc = 0x20B8B8u;
label_20b8b8:
    // 0x20b8b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b8bc: 0xc42094c0  lwc1        $f0, -0x6B40($at)
    ctx->pc = 0x20b8bcu;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b8c0: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x20b8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_20b8c4:
    // 0x20b8c4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20b8c8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20b8cc: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b8d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20b8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b8d4: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x20b8d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20b8d8: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x20b8d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x20b8dc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20b8dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b8e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20b8e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b8e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b8e8: 0x244992c0  addiu       $t1, $v0, -0x6D40
    ctx->pc = 0x20b8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20b8ec: 0xc7ac017c  lwc1        $f12, 0x17C($sp)
    ctx->pc = 0x20b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20b8f0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b8f4: 0xc42d94c0  lwc1        $f13, -0x6B40($at)
    ctx->pc = 0x20b8f4u;
    { uint32_t bits = FAST_READ32(0x6194C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20b8f8: 0xc7ae0178  lwc1        $f14, 0x178($sp)
    ctx->pc = 0x20b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20b8fc: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x20b8fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20b900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b904: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x20b904u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20b908: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20B908u;
    SET_GPR_U32(ctx, 31, 0x20B910u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20B908u, 0x20B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B910u;
label_20b910:
    // 0x20b910: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x20b910u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_20b914:
    // 0x20b914: 0x8faa0188  lw          $t2, 0x188($sp)
    ctx->pc = 0x20b914u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b918: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x20b918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20b91c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20b91cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b920: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20B920u;
    SET_GPR_U32(ctx, 31, 0x20B928u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20B920u, 0x20B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B928u;
label_20b928:
    // 0x20b928: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b92c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20B92Cu;
    SET_GPR_U32(ctx, 31, 0x20B934u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20B92Cu, 0x20B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B934u;
label_20b934:
    // 0x20b934: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b938: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20b938u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20b93c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20b93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b940: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20B940u;
    SET_GPR_U32(ctx, 31, 0x20B948u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20B940u, 0x20B948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B948u;
label_20b948:
    // 0x20b948: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b94c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20B94Cu;
    SET_GPR_U32(ctx, 31, 0x20B954u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20B94Cu, 0x20B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B954u;
label_20b954:
    // 0x20b954: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x20b954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b958: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x20b958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x20b95c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20b960: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x20b960u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20b964: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b968: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20b968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20b96c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x20B96Cu;
    {
        const bool branch_taken_0x20b96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b96c) {
            ctx->pc = 0x20B9ECu;
            goto label_20b9ec;
        }
    }
    ctx->pc = 0x20B974u;
    // 0x20b974: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b978: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20b978u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x20b97c: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x20b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x20b980: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20b984: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20b984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20b988: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20b988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x20b98c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b990: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b994: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x20b994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20b998: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x20b998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x20b99c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b9a0: 0x8fb30188  lw          $s3, 0x188($sp)
    ctx->pc = 0x20b9a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9a4: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x20b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x20b9a8: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x20b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x20b9ac: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b9b0: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9b4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x20b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20b9b8: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x20b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x20b9bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b9c0: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20b9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b9c8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x20b9c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b9cc: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9d0: 0xa08b0001  sb          $t3, 0x1($a0)
    ctx->pc = 0x20b9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 11));
    // 0x20b9d4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x20b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9d8: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x20b9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b9dc: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x20b9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9e0: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x20b9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b9e4: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x20b9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b9e8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x20b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_20b9ec:
    // 0x20b9ec: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x20b9ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20b9f0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x20b9f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20b9f4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20b9f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20b9f8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20b9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20b9fc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20b9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ba00: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20ba00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ba04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20ba04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ba08: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x20ba08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x20ba0c: 0x3e00008  jr          $ra
    ctx->pc = 0x20BA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BA14u;
}
