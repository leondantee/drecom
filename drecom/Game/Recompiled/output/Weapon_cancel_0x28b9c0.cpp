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

// Function: Weapon_cancel
// Address: 0x28b9c0 - 0x28bdec
void Weapon_cancel_0x28b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_cancel_0x28b9c0");
#endif

    switch (ctx->pc) {
        case 0x28ba60u: goto label_28ba60;
        case 0x28bb40u: goto label_28bb40;
        case 0x28bba0u: goto label_28bba0;
        case 0x28bbd0u: goto label_28bbd0;
        case 0x28bc10u: goto label_28bc10;
        case 0x28bc24u: goto label_28bc24;
        case 0x28bc4cu: goto label_28bc4c;
        case 0x28bc68u: goto label_28bc68;
        case 0x28bc90u: goto label_28bc90;
        case 0x28bd60u: goto label_28bd60;
        case 0x28bda8u: goto label_28bda8;
        case 0x28bdd0u: goto label_28bdd0;
        default: break;
    }

    ctx->pc = 0x28b9c0u;

    // 0x28b9c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28b9c4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x28b9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x28b9c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28b9cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b9d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b9d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28b9d8: 0x24506150  addiu       $s0, $v0, 0x6150
    ctx->pc = 0x28b9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x28b9dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28b9e0: 0x24522070  addiu       $s2, $v0, 0x2070
    ctx->pc = 0x28b9e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8304));
    // 0x28b9e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28b9e8: 0x24512090  addiu       $s1, $v0, 0x2090
    ctx->pc = 0x28b9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x28b9ec: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28b9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28b9f0: 0x8c236290  lw          $v1, 0x6290($at)
    ctx->pc = 0x28b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x396290u));
    // 0x28b9f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b9f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B9F8u;
    {
        const bool branch_taken_0x28b9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28b9f8) {
            ctx->pc = 0x28BA10u;
            goto label_28ba10;
        }
    }
    ctx->pc = 0x28BA00u;
    // 0x28ba00: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ba00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ba04: 0xac202060  sw          $zero, 0x2060($at)
    ctx->pc = 0x28ba04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622060u, _value); } while (0);
    // 0x28ba08: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28ba08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28ba0c: 0xac206290  sw          $zero, 0x6290($at)
    ctx->pc = 0x28ba0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x396290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x396290u, _value); } while (0);
label_28ba10:
    // 0x28ba10: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28ba14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ba18: 0x10620084  beq         $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x28BA18u;
    {
        const bool branch_taken_0x28ba18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ba18) {
            ctx->pc = 0x28BC2Cu;
            goto label_28bc2c;
        }
    }
    ctx->pc = 0x28BA20u;
    // 0x28ba20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BA20u;
    {
        const bool branch_taken_0x28ba20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba20) {
            ctx->pc = 0x28BA30u;
            goto label_28ba30;
        }
    }
    ctx->pc = 0x28BA28u;
    // 0x28ba28: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x28BA28u;
    {
        const bool branch_taken_0x28ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba28) {
            ctx->pc = 0x28BD60u;
            goto label_28bd60;
        }
    }
    ctx->pc = 0x28BA30u;
label_28ba30:
    // 0x28ba30: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28ba30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28ba34: 0x9022c774  lbu         $v0, -0x388C($at)
    ctx->pc = 0x28ba34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C774u));
    // 0x28ba38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ba38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ba3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BA3Cu;
    {
        const bool branch_taken_0x28ba3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ba3c) {
            ctx->pc = 0x28BA60u;
            goto label_28ba60;
        }
    }
    ctx->pc = 0x28BA44u;
    // 0x28ba44: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x28ba44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x28ba48: 0x8c22c294  lw          $v0, -0x3D6C($at)
    ctx->pc = 0x28ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC294u));
    // 0x28ba4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BA4Cu;
    {
        const bool branch_taken_0x28ba4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba4c) {
            ctx->pc = 0x28BA60u;
            goto label_28ba60;
        }
    }
    ctx->pc = 0x28BA54u;
    // 0x28ba54: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x28ba54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28ba58: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x28BA58u;
    SET_GPR_U32(ctx, 31, 0x28BA60u);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x28BA58u, 0x28BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA60u;
label_28ba60:
    // 0x28ba60: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ba60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ba64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ba64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ba68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BA68u;
    {
        const bool branch_taken_0x28ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ba68) {
            ctx->pc = 0x28BA80u;
            goto label_28ba80;
        }
    }
    ctx->pc = 0x28BA70u;
    // 0x28ba70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ba74: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x28ba74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ba78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28BA78u;
    {
        const bool branch_taken_0x28ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba78) {
            ctx->pc = 0x28BA9Cu;
            goto label_28ba9c;
        }
    }
    ctx->pc = 0x28BA80u;
label_28ba80:
    // 0x28ba80: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ba80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ba84: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28ba84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ba88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ba8c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BA8Cu;
    {
        const bool branch_taken_0x28ba8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ba8c) {
            ctx->pc = 0x28BA9Cu;
            goto label_28ba9c;
        }
    }
    ctx->pc = 0x28BA94u;
    // 0x28ba94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ba98: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x28ba98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
label_28ba9c:
    // 0x28ba9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28baa0: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x28baa0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x28baa4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x28baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x28baa8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28baa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28baac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28baacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bab0: 0x0  nop
    ctx->pc = 0x28bab0u;
    // NOP
    // 0x28bab4: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x28bab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x28bab8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x28bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28babc: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x28babcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x28bac0: 0x3c02bd80  lui         $v0, 0xBD80
    ctx->pc = 0x28bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48512 << 16));
    // 0x28bac4: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x28bac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x28bac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bacc: 0x0  nop
    ctx->pc = 0x28baccu;
    // NOP
    // 0x28bad0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x28bad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x28bad4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28bad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28badc: 0x0  nop
    ctx->pc = 0x28badcu;
    // NOP
    // 0x28bae0: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x28bae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x28bae4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x28bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x28bae8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28bae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28baec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28baecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28baf0: 0x0  nop
    ctx->pc = 0x28baf0u;
    // NOP
    // 0x28baf4: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x28baf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x28baf8: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x28baf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x28bafc: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x28bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x28bb00: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x28bb00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bb04: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x28bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x28bb08: 0xa6220036  sh          $v0, 0x36($s1)
    ctx->pc = 0x28bb08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bb0c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28bb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28bb10: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x28bb10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bb14: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28bb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28bb18: 0x9022c774  lbu         $v0, -0x388C($at)
    ctx->pc = 0x28bb18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C774u));
    // 0x28bb1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28bb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28bb20: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28BB20u;
    {
        const bool branch_taken_0x28bb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bb20) {
            ctx->pc = 0x28BB70u;
            goto label_28bb70;
        }
    }
    ctx->pc = 0x28BB28u;
    // 0x28bb28: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x28bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x28bb2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28bb30: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x28bb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x28bb34: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28bb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28bb38: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28BB38u;
    SET_GPR_U32(ctx, 31, 0x28BB40u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28BB40u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28BB40u) { return; }
    ctx->pc = 0x28BB40u;
label_28bb40:
    // 0x28bb40: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28bb44: 0x24426158  addiu       $v0, $v0, 0x6158
    ctx->pc = 0x28bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24920));
    // 0x28bb48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28bb4c: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x28bb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x28bb50: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x28bb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x28bb54: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x28bb54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bb58: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x28bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x28bb5c: 0xa6220036  sh          $v0, 0x36($s1)
    ctx->pc = 0x28bb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bb60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28bb64: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x28bb64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bb68: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x28BB68u;
    {
        const bool branch_taken_0x28bb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bb68) {
            ctx->pc = 0x28BBD0u;
            goto label_28bbd0;
        }
    }
    ctx->pc = 0x28BB70u;
label_28bb70:
    // 0x28bb70: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28bb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28bb74: 0x9022c774  lbu         $v0, -0x388C($at)
    ctx->pc = 0x28bb74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C774u));
    // 0x28bb78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28bb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28bb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bb80: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28BB80u;
    {
        const bool branch_taken_0x28bb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28bb80) {
            ctx->pc = 0x28BBD0u;
            goto label_28bbd0;
        }
    }
    ctx->pc = 0x28BB88u;
    // 0x28bb88: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x28bb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x28bb8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28bb90: 0x2445e910  addiu       $a1, $v0, -0x16F0
    ctx->pc = 0x28bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x28bb94: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28bb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28bb98: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28BB98u;
    SET_GPR_U32(ctx, 31, 0x28BBA0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28BBA0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28BBA0u) { return; }
    ctx->pc = 0x28BBA0u;
label_28bba0:
    // 0x28bba0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28bba4: 0x2442615c  addiu       $v0, $v0, 0x615C
    ctx->pc = 0x28bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24924));
    // 0x28bba8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28bba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28bbac: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x28bbacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x28bbb0: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x28bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x28bbb4: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x28bbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bbb8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x28bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28bbbc: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x28bbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bbc0: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x28bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x28bbc4: 0xa6220036  sh          $v0, 0x36($s1)
    ctx->pc = 0x28bbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x28bbc8: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28BBC8u;
    SET_GPR_U32(ctx, 31, 0x28BBD0u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28BBC8u, 0x28BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBD0u;
label_28bbd0:
    // 0x28bbd0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bbd4: 0xac202058  sw          $zero, 0x2058($at)
    ctx->pc = 0x28bbd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622058u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622058u, _value); } while (0);
    // 0x28bbd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28bbd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bbdc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bbe0: 0xe4202050  swc1        $f0, 0x2050($at)
    ctx->pc = 0x28bbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622050u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622050u, _value); } while (0); }
    // 0x28bbe4: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28bbe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28bbec: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28bbf0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bbf4: 0xac202060  sw          $zero, 0x2060($at)
    ctx->pc = 0x28bbf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622060u, _value); } while (0);
    // 0x28bbf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28bbf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bbfc: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x28bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x28bc00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28bc00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bc04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28bc04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bc08: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28BC08u;
    SET_GPR_U32(ctx, 31, 0x28BC10u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28BC08u, 0x28BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC10u;
label_28bc10:
    // 0x28bc10: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x28bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28bc14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28bc14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bc18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28bc18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bc1c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x28BC1Cu;
    SET_GPR_U32(ctx, 31, 0x28BC24u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x28BC1Cu, 0x28BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC24u;
label_28bc24:
    // 0x28bc24: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x28BC24u;
    {
        const bool branch_taken_0x28bc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bc24) {
            ctx->pc = 0x28BD60u;
            goto label_28bd60;
        }
    }
    ctx->pc = 0x28BC2Cu;
label_28bc2c:
    // 0x28bc2c: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28bc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28bc30: 0x9022c774  lbu         $v0, -0x388C($at)
    ctx->pc = 0x28bc30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C774u));
    // 0x28bc34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28bc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bc3c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BC3Cu;
    {
        const bool branch_taken_0x28bc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28bc3c) {
            ctx->pc = 0x28BC4Cu;
            goto label_28bc4c;
        }
    }
    ctx->pc = 0x28BC44u;
    // 0x28bc44: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28BC44u;
    SET_GPR_U32(ctx, 31, 0x28BC4Cu);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28BC44u, 0x28BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC4Cu;
label_28bc4c:
    // 0x28bc4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28bc4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bc50: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x28bc50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x28bc54: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x28bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x28bc58: 0x2445c09c  addiu       $a1, $v0, -0x3F64
    ctx->pc = 0x28bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951068));
    // 0x28bc5c: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x28bc5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28bc60: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x28BC60u;
    SET_GPR_U32(ctx, 31, 0x28BC68u);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x28BC60u, 0x28BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC68u;
label_28bc68:
    // 0x28bc68: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28BC68u;
    {
        const bool branch_taken_0x28bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bc68) {
            ctx->pc = 0x28BCD4u;
            goto label_28bcd4;
        }
    }
    ctx->pc = 0x28BC70u;
    // 0x28bc70: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28bc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28bc74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28bc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28bc78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bc7c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BC7Cu;
    {
        const bool branch_taken_0x28bc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28bc7c) {
            ctx->pc = 0x28BC94u;
            goto label_28bc94;
        }
    }
    ctx->pc = 0x28BC84u;
    // 0x28bc84: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28bc84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bc88: 0xc062b40  jal         func_18AD00
    ctx->pc = 0x28BC88u;
    SET_GPR_U32(ctx, 31, 0x28BC90u);
    ctx->pc = 0x18AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD00u, 0x28BC88u, 0x28BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC90u;
label_28bc90:
    // 0x28bc90: 0xa2006855  sb          $zero, 0x6855($s0)
    ctx->pc = 0x28bc90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26709), (uint8_t)GPR_U32(ctx, 0));
label_28bc94:
    // 0x28bc94: 0x92026625  lbu         $v0, 0x6625($s0)
    ctx->pc = 0x28bc94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26149)));
    // 0x28bc98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28bc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28bc9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bca0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28BCA0u;
    {
        const bool branch_taken_0x28bca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28bca0) {
            ctx->pc = 0x28BCBCu;
            goto label_28bcbc;
        }
    }
    ctx->pc = 0x28BCA8u;
    // 0x28bca8: 0xa2006625  sb          $zero, 0x6625($s0)
    ctx->pc = 0x28bca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26149), (uint8_t)GPR_U32(ctx, 0));
    // 0x28bcac: 0xae00685c  sw          $zero, 0x685C($s0)
    ctx->pc = 0x28bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 0));
    // 0x28bcb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bcb4: 0xa20265ab  sb          $v0, 0x65AB($s0)
    ctx->pc = 0x28bcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26027), (uint8_t)GPR_U32(ctx, 2));
    // 0x28bcb8: 0xa20065ac  sb          $zero, 0x65AC($s0)
    ctx->pc = 0x28bcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26028), (uint8_t)GPR_U32(ctx, 0));
label_28bcbc:
    // 0x28bcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bcc0: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28bcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28bcc4: 0xac22bf18  sw          $v0, -0x40E8($at)
    ctx->pc = 0x28bcc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62BF18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62BF18u, _value); } while (0);
    // 0x28bcc8: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x28bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28bccc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28bcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28bcd0: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
label_28bcd4:
    // 0x28bcd4: 0xc6015df4  lwc1        $f1, 0x5DF4($s0)
    ctx->pc = 0x28bcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bcd8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bcd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bcdc: 0xc4202050  lwc1        $f0, 0x2050($at)
    ctx->pc = 0x28bcdcu;
    { uint32_t bits = FAST_READ32(0x622050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bce0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28bce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28bce4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bce8: 0xe4202050  swc1        $f0, 0x2050($at)
    ctx->pc = 0x28bce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622050u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622050u, _value); } while (0); }
    // 0x28bcec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28bcecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28bcf0: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x28bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x28bcf4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28bcf8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x28bcf8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x28bcfc: 0x0  nop
    ctx->pc = 0x28bcfcu;
    // NOP
    // 0x28bd00: 0x0  nop
    ctx->pc = 0x28bd00u;
    // NOP
    // 0x28bd04: 0x1010  mfhi        $v0
    ctx->pc = 0x28bd04u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28bd08: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28BD08u;
    {
        const bool branch_taken_0x28bd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bd08) {
            ctx->pc = 0x28BD60u;
            goto label_28bd60;
        }
    }
    ctx->pc = 0x28BD10u;
    // 0x28bd10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bd14: 0x8c222060  lw          $v0, 0x2060($at)
    ctx->pc = 0x28bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622060u));
    // 0x28bd18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28bd1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bd20: 0xac222060  sw          $v0, 0x2060($at)
    ctx->pc = 0x28bd20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622060u, _value); } while (0);
    // 0x28bd24: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x28bd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28bd28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BD28u;
    {
        const bool branch_taken_0x28bd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bd28) {
            ctx->pc = 0x28BD3Cu;
            goto label_28bd3c;
        }
    }
    ctx->pc = 0x28BD30u;
    // 0x28bd30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28bd34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bd38: 0xac222060  sw          $v0, 0x2060($at)
    ctx->pc = 0x28bd38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622060u, _value); } while (0);
label_28bd3c:
    // 0x28bd3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bd40: 0x8c222060  lw          $v0, 0x2060($at)
    ctx->pc = 0x28bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622060u));
    // 0x28bd44: 0x24420027  addiu       $v0, $v0, 0x27
    ctx->pc = 0x28bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x28bd48: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28bd48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28bd4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28bd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bd50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28bd50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bd54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28bd54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bd58: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28BD58u;
    SET_GPR_U32(ctx, 31, 0x28BD60u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28BD58u, 0x28BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD60u;
label_28bd60:
    // 0x28bd60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bd64: 0xc4202050  lwc1        $f0, 0x2050($at)
    ctx->pc = 0x28bd64u;
    { uint32_t bits = FAST_READ32(0x622050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bd68: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28bd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28bd6c: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x28bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bd70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28bd74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bd78: 0x0  nop
    ctx->pc = 0x28bd78u;
    // NOP
    // 0x28bd7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28bd7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28bd80: 0x0  nop
    ctx->pc = 0x28bd80u;
    // NOP
    // 0x28bd84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28BD84u;
    {
        const bool branch_taken_0x28bd84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bd84) {
            ctx->pc = 0x28BD9Cu;
            goto label_28bd9c;
        }
    }
    ctx->pc = 0x28BD8Cu;
    // 0x28bd8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28bd90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bd90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bd94: 0x0  nop
    ctx->pc = 0x28bd94u;
    // NOP
    // 0x28bd98: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28bd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
label_28bd9c:
    // 0x28bd9c: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x28bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28bda0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28BDA0u;
    SET_GPR_U32(ctx, 31, 0x28BDA8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28BDA0u, 0x28BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BDA8u;
label_28bda8:
    // 0x28bda8: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x28bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x28bdac: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x28bdacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28bdb0: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x28bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x28bdb4: 0x3463050a  ori         $v1, $v1, 0x50A
    ctx->pc = 0x28bdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1290);
    // 0x28bdb8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x28bdb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28bdbc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28bdc0: 0x24651670  addiu       $a1, $v1, 0x1670
    ctx->pc = 0x28bdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5744));
    // 0x28bdc4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28bdc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28bdc8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x28BDC8u;
    SET_GPR_U32(ctx, 31, 0x28BDD0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x28BDC8u, 0x28BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BDD0u;
label_28bdd0:
    // 0x28bdd0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x28bdd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bdd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28bdd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bdd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bdd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bde0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28bde4: 0x3e00008  jr          $ra
    ctx->pc = 0x28BDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BDECu;
}
