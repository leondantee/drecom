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

// Function: entry_0027af08
// Address: 0x27af08 - 0x27b01c
void entry_0027af08_0x27af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027af08_0x27af08");
#endif

    switch (ctx->pc) {
        case 0x27af20u: goto label_27af20;
        case 0x27afbcu: goto label_27afbc;
        case 0x27afc8u: goto label_27afc8;
        case 0x27afdcu: goto label_27afdc;
        case 0x27afe8u: goto label_27afe8;
        case 0x27affcu: goto label_27affc;
        default: break;
    }

    ctx->pc = 0x27af08u;

    // 0x27af08: 0x2e420032  sltiu       $v0, $s2, 0x32
    ctx->pc = 0x27af08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x27af0c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27AF0Cu;
    {
        const bool branch_taken_0x27af0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27af0c) {
            ctx->pc = 0x27AEE8u;
            return;
        }
    }
    ctx->pc = 0x27AF14u;
    // 0x27af14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27af14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27af18: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x27AF18u;
    SET_GPR_U32(ctx, 31, 0x27AF20u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x27AF18u, 0x27AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF20u;
label_27af20:
    // 0x27af20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27af20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27af24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27af24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27af28: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27af2c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x27af2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC0u, _value); } while (0);
    // 0x27af30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27af30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27af34: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27af38: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x27af38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC1u, _value); } while (0);
    // 0x27af3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27af40: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27af44: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x27af44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    // 0x27af48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27af48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27af4c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27af50: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x27af50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC3u, _value); } while (0);
    // 0x27af54: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x27af54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x27af58: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27af58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27af5c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27af60: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x27af60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC4u, _value); } while (0);
    // 0x27af64: 0x3c0245bd  lui         $v0, 0x45BD
    ctx->pc = 0x27af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17853 << 16));
    // 0x27af68: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x27af68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x27af6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27af6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27af70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27af70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27af74: 0xe420dce0  swc1        $f0, -0x2320($at)
    ctx->pc = 0x27af74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE0u, _value); } while (0); }
    // 0x27af78: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x27af78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x27af7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27af7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27af80: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27af80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27af84: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x27af84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x27af88: 0x3c02c5a2  lui         $v0, 0xC5A2
    ctx->pc = 0x27af88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50594 << 16));
    // 0x27af8c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x27af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x27af90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27af90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27af94: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27af94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27af98: 0xe420dce8  swc1        $f0, -0x2318($at)
    ctx->pc = 0x27af98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE8u, _value); } while (0); }
    // 0x27af9c: 0x3c023fae  lui         $v0, 0x3FAE
    ctx->pc = 0x27af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16302 << 16));
    // 0x27afa0: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x27afa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x27afa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27afa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27afa8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27afa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27afac: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x27afacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x27afb0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27afb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27afb4: 0xc0a1120  jal         func_284480
    ctx->pc = 0x27AFB4u;
    SET_GPR_U32(ctx, 31, 0x27AFBCu);
    ctx->pc = 0x284480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284480u, 0x27AFB4u, 0x27AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFBCu;
label_27afbc:
    // 0x27afbc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x27afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x27afc0: 0xc084964  jal         func_212590
    ctx->pc = 0x27AFC0u;
    SET_GPR_U32(ctx, 31, 0x27AFC8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27AFC0u, 0x27AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFC8u;
label_27afc8:
    // 0x27afc8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27afcc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27afccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27afd0: 0x2445abc0  addiu       $a1, $v0, -0x5440
    ctx->pc = 0x27afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945728));
    // 0x27afd4: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27AFD4u;
    SET_GPR_U32(ctx, 31, 0x27AFDCu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27AFD4u, 0x27AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFDCu;
label_27afdc:
    // 0x27afdc: 0x240400be  addiu       $a0, $zero, 0xBE
    ctx->pc = 0x27afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x27afe0: 0xc084964  jal         func_212590
    ctx->pc = 0x27AFE0u;
    SET_GPR_U32(ctx, 31, 0x27AFE8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27AFE0u, 0x27AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFE8u;
label_27afe8:
    // 0x27afe8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x27afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27afec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27afecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27aff0: 0x2445acf0  addiu       $a1, $v0, -0x5310
    ctx->pc = 0x27aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946032));
    // 0x27aff4: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27AFF4u;
    SET_GPR_U32(ctx, 31, 0x27AFFCu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27AFF4u, 0x27AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFFCu;
label_27affc:
    // 0x27affc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x27affcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27b000: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27b004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27b008: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B008u;
    {
        const bool branch_taken_0x27b008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b008) {
            ctx->pc = 0x27B01Cu;
            return;
        }
    }
    ctx->pc = 0x27B010u;
    // 0x27b010: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x27b010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27b014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27b018: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x27b018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x27b01cu;
}
