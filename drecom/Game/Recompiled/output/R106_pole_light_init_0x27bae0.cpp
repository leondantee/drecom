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

// Function: R106_pole_light_init
// Address: 0x27bae0 - 0x27bbd4
void R106_pole_light_init_0x27bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R106_pole_light_init_0x27bae0");
#endif

    switch (ctx->pc) {
        case 0x27bb18u: goto label_27bb18;
        case 0x27bb38u: goto label_27bb38;
        case 0x27bb68u: goto label_27bb68;
        case 0x27bb78u: goto label_27bb78;
        case 0x27bb88u: goto label_27bb88;
        case 0x27bb98u: goto label_27bb98;
        default: break;
    }

    ctx->pc = 0x27bae0u;

    // 0x27bae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27bae4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x27bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x27bae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27baec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27baecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27baf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27baf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27baf4: 0x0  nop
    ctx->pc = 0x27baf4u;
    // NOP
    // 0x27baf8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x27baf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x27bafc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27bb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bb04: 0x0  nop
    ctx->pc = 0x27bb04u;
    // NOP
    // 0x27bb08: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27bb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27bb0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x27bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27bb10: 0xc05da88  jal         func_176A20
    ctx->pc = 0x27BB10u;
    SET_GPR_U32(ctx, 31, 0x27BB18u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x27BB10u, 0x27BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB18u;
label_27bb18:
    // 0x27bb18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27bb1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bb20: 0xa4221b44  sh          $v0, 0x1B44($at)
    ctx->pc = 0x27bb20u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x621B44u, _value); } while (0);
    // 0x27bb24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bb28: 0x8c30f9f0  lw          $s0, -0x610($at)
    ctx->pc = 0x27bb28u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9F0u));
    // 0x27bb2c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27bb30: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x27BB30u;
    SET_GPR_U32(ctx, 31, 0x27BB38u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x27BB30u, 0x27BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB38u;
label_27bb38:
    // 0x27bb38: 0x3c024692  lui         $v0, 0x4692
    ctx->pc = 0x27bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18066 << 16));
    // 0x27bb3c: 0x3442cc00  ori         $v0, $v0, 0xCC00
    ctx->pc = 0x27bb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52224);
    // 0x27bb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bb44: 0x0  nop
    ctx->pc = 0x27bb44u;
    // NOP
    // 0x27bb48: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27bb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27bb4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27bb50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27bb54: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x27bb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27bb58: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27bb58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27bb5c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x27bb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27bb60: 0xc0a1054  jal         func_284150
    ctx->pc = 0x27BB60u;
    SET_GPR_U32(ctx, 31, 0x27BB68u);
    ctx->pc = 0x284150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284150u, 0x27BB60u, 0x27BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB68u;
label_27bb68:
    // 0x27bb68: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27bb68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27bb6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bb70: 0xc096390  jal         func_258E40
    ctx->pc = 0x27BB70u;
    SET_GPR_U32(ctx, 31, 0x27BB78u);
    ctx->pc = 0x258E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E40u, 0x27BB70u, 0x27BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB78u;
label_27bb78:
    // 0x27bb78: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27bb78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27bb7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27bb80: 0xc096188  jal         func_258620
    ctx->pc = 0x27BB80u;
    SET_GPR_U32(ctx, 31, 0x27BB88u);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x27BB80u, 0x27BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB88u;
label_27bb88:
    // 0x27bb88: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27bb88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27bb8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27bb8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27bb90: 0xc09620c  jal         func_258830
    ctx->pc = 0x27BB90u;
    SET_GPR_U32(ctx, 31, 0x27BB98u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x27BB90u, 0x27BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB98u;
label_27bb98:
    // 0x27bb98: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x27bb98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27bb9c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x27bb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x27bba0: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x27bba0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x27bba4: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x27bba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27bba8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x27bba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x27bbac: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x27bbacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x27bbb0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x27bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x27bbb4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x27bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27bbb8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x27bbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x27bbbc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x27bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x27bbc0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27bbc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bbc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27bbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bbc8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x27bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27bbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x27BBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BBD4u;
}
