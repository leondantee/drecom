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

// Function: entry_0028ba9c
// Address: 0x28ba9c - 0x28bb70
void entry_0028ba9c_0x28ba9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ba9c_0x28ba9c");
#endif

    switch (ctx->pc) {
        case 0x28bb40u: goto label_28bb40;
        default: break;
    }

    ctx->pc = 0x28ba9cu;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x28BB70u;
}
