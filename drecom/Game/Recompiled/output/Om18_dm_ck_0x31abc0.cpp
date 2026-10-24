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

// Function: Om18_dm_ck
// Address: 0x31abc0 - 0x31ae5c
void Om18_dm_ck_0x31abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_dm_ck_0x31abc0");
#endif

    switch (ctx->pc) {
        case 0x31ac94u: goto label_31ac94;
        case 0x31ad14u: goto label_31ad14;
        default: break;
    }

    ctx->pc = 0x31abc0u;

    // 0x31abc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31abc4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x31abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x31abc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31abcc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x31abccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x31abd0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x31abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x31abd4: 0x24639c90  addiu       $v1, $v1, -0x6370
    ctx->pc = 0x31abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941840));
    // 0x31abd8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31abdc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x31abdcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399C90u));
    // 0x31abe0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x31abe0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x31abe4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31abe8: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x31abe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x31abec: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x31ABECu;
    {
        const bool branch_taken_0x31abec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31abec) {
            ctx->pc = 0x31AE48u;
            goto label_31ae48;
        }
    }
    ctx->pc = 0x31ABF4u;
    // 0x31abf4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31abf8: 0x8c7012a4  lw          $s0, 0x12A4($v1)
    ctx->pc = 0x31abf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4772)));
    // 0x31abfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ac00: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x31ac00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x31ac04: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31ac04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31ac08: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x31ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31ac0c: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x31AC0Cu;
    {
        const bool branch_taken_0x31ac0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31ac0c) {
            ctx->pc = 0x31AC44u;
            goto label_31ac44;
        }
    }
    ctx->pc = 0x31AC14u;
    // 0x31ac14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ac18: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x31ac18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x31ac1c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31ac1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31ac20: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x31ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x31ac24: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31AC24u;
    {
        const bool branch_taken_0x31ac24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31ac24) {
            ctx->pc = 0x31AC44u;
            goto label_31ac44;
        }
    }
    ctx->pc = 0x31AC2Cu;
    // 0x31ac2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ac30: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x31ac30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x31ac34: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31ac34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31ac38: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x31ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31ac3c: 0x14830054  bne         $a0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x31AC3Cu;
    {
        const bool branch_taken_0x31ac3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31ac3c) {
            ctx->pc = 0x31AD90u;
            goto label_31ad90;
        }
    }
    ctx->pc = 0x31AC44u;
label_31ac44:
    // 0x31ac44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ac48: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x31ac48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x31ac4c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31ac4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ac50: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x31ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31ac54: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31AC54u;
    {
        const bool branch_taken_0x31ac54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ac54) {
            ctx->pc = 0x31AC74u;
            goto label_31ac74;
        }
    }
    ctx->pc = 0x31AC5Cu;
    // 0x31ac5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ac60: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x31ac60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x31ac64: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31ac64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ac68: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x31ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31ac6c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31AC6Cu;
    {
        const bool branch_taken_0x31ac6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31ac6c) {
            ctx->pc = 0x31AC8Cu;
            goto label_31ac8c;
        }
    }
    ctx->pc = 0x31AC74u;
label_31ac74:
    // 0x31ac74: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x31ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x31ac78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ac78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ac7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ac80: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x31ac80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x31ac84: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31AC84u;
    {
        const bool branch_taken_0x31ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ac84) {
            ctx->pc = 0x31ACCCu;
            goto label_31accc;
        }
    }
    ctx->pc = 0x31AC8Cu;
label_31ac8c:
    // 0x31ac8c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x31AC8Cu;
    SET_GPR_U32(ctx, 31, 0x31AC94u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x31AC8Cu, 0x31AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC94u;
label_31ac94:
    // 0x31ac94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31ac98: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x31ac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x31ac9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31AC9Cu;
    {
        const bool branch_taken_0x31ac9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ac9c) {
            ctx->pc = 0x31ACBCu;
            goto label_31acbc;
        }
    }
    ctx->pc = 0x31ACA4u;
    // 0x31aca4: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x31aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x31aca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31aca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31acac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31acb0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x31acb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x31acb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31ACB4u;
    {
        const bool branch_taken_0x31acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31acb4) {
            ctx->pc = 0x31ACCCu;
            goto label_31accc;
        }
    }
    ctx->pc = 0x31ACBCu;
label_31acbc:
    // 0x31acbc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x31acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x31acc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31acc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31acc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31acc8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x31acc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_31accc:
    // 0x31accc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31acd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31acd4: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x31acd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x31acd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31acdc: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x31acdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ace0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ace4: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x31ace4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ace8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x31ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31acec: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31acecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31acf0: 0xa022ae97  sb          $v0, -0x5169($at)
    ctx->pc = 0x31acf0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AE97u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE97u, _value); } while (0);
    // 0x31acf4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x31acf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x31acf8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31acf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31acfc: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x31acfcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31ad00: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x31ad00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31ad04: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x31ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x31ad08: 0x2447ae90  addiu       $a3, $v0, -0x5170
    ctx->pc = 0x31ad08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946448));
    // 0x31ad0c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x31AD0Cu;
    SET_GPR_U32(ctx, 31, 0x31AD14u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x31AD0Cu, 0x31AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD14u;
label_31ad14:
    // 0x31ad14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31ad18: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ad18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ad1c: 0xa023ae97  sb          $v1, -0x5169($at)
    ctx->pc = 0x31ad1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AE97u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x85AE97u, _value); } while (0);
    // 0x31ad20: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31ad24: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x31ad24u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31ad28: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31ad28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31ad2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31ad2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31ad30: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31AD30u;
    {
        const bool branch_taken_0x31ad30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x31ad30) {
            ctx->pc = 0x31AD4Cu;
            goto label_31ad4c;
        }
    }
    ctx->pc = 0x31AD38u;
    // 0x31ad38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ad38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ad3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad40: 0xac6412a0  sw          $a0, 0x12A0($v1)
    ctx->pc = 0x31ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 4));
    // 0x31ad44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31AD44u;
    {
        const bool branch_taken_0x31ad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ad44) {
            ctx->pc = 0x31AD58u;
            goto label_31ad58;
        }
    }
    ctx->pc = 0x31AD4Cu;
label_31ad4c:
    // 0x31ad4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31ad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31ad50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad54: 0xac6412a0  sw          $a0, 0x12A0($v1)
    ctx->pc = 0x31ad54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 4));
label_31ad58:
    // 0x31ad58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31ad58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ad5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad60: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31ad60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31ad64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31ad68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad6c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x31ad6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x31ad70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad74: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31ad74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ad78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad7c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31ad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ad80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad84: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31ad88: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x31AD88u;
    {
        const bool branch_taken_0x31ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ad88) {
            ctx->pc = 0x31AE48u;
            goto label_31ae48;
        }
    }
    ctx->pc = 0x31AD90u;
label_31ad90:
    // 0x31ad90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad94: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x31ad94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x31ad98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31ad98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31ad9c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x31ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x31ada0: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31ADA0u;
    {
        const bool branch_taken_0x31ada0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31ada0) {
            ctx->pc = 0x31ADDCu;
            goto label_31addc;
        }
    }
    ctx->pc = 0x31ADA8u;
    // 0x31ada8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31adac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31adb0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31adb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31adb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31adb8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31adb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31adbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31adc0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31adc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31adc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31adc8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31adc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31adcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31add0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31add0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31add4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x31ADD4u;
    {
        const bool branch_taken_0x31add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31add4) {
            ctx->pc = 0x31AE48u;
            goto label_31ae48;
        }
    }
    ctx->pc = 0x31ADDCu;
label_31addc:
    // 0x31addc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31addcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ade0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x31ade0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x31ade4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31ade4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31ade8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x31ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x31adec: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x31ADECu;
    {
        const bool branch_taken_0x31adec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31adec) {
            ctx->pc = 0x31AE48u;
            goto label_31ae48;
        }
    }
    ctx->pc = 0x31ADF4u;
    // 0x31adf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31adf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31adfc: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x31adfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x31ae00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae04: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x31ae04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ae08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae0c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x31ae0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ae10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ae14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae18: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31ae18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31ae1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ae20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae24: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x31ae24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x31ae28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31ae2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ae30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31ae34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ae38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31ae40: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x31AE40u;
    {
        const bool branch_taken_0x31ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ae40) {
            ctx->pc = 0x31AE48u;
            goto label_31ae48;
        }
    }
    ctx->pc = 0x31AE48u;
label_31ae48:
    // 0x31ae48: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31ae48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ae4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ae4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ae50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x31ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31ae54: 0x3e00008  jr          $ra
    ctx->pc = 0x31AE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AE5Cu;
}
