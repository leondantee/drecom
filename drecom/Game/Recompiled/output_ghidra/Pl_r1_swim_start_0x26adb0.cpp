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

// Function: Pl_r1_swim_start
// Address: 0x26adb0 - 0x26aee8
void Pl_r1_swim_start_0x26adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_swim_start_0x26adb0");
#endif

    switch (ctx->pc) {
        case 0x26ae24u: goto label_26ae24;
        case 0x26ae60u: goto label_26ae60;
        case 0x26aea0u: goto label_26aea0;
        case 0x26aea8u: goto label_26aea8;
        case 0x26aeb4u: goto label_26aeb4;
        case 0x26aec8u: goto label_26aec8;
        case 0x26aed4u: goto label_26aed4;
        default: break;
    }

    ctx->pc = 0x26adb0u;

    // 0x26adb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26adb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26adb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x26adb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x26adb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26adbc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x26adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x26adc0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x26adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x26adc4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x26adc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x26adc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26adcc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x26adccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26add0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x26add0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26add4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26add4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26add8: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x26ADD8u;
    {
        const bool branch_taken_0x26add8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26add8) {
            ctx->pc = 0x26AE90u;
            goto label_26ae90;
        }
    }
    ctx->pc = 0x26ADE0u;
    // 0x26ade0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26ADE0u;
    {
        const bool branch_taken_0x26ade0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ade0) {
            ctx->pc = 0x26ADF0u;
            goto label_26adf0;
        }
    }
    ctx->pc = 0x26ADE8u;
    // 0x26ade8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x26ADE8u;
    {
        const bool branch_taken_0x26ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ade8) {
            ctx->pc = 0x26AED4u;
            goto label_26aed4;
        }
    }
    ctx->pc = 0x26ADF0u;
label_26adf0:
    // 0x26adf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26adf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26adf4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x26adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x26adf8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x26adf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x26adfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26adfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26ae00: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x26ae00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x26ae04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae0c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26ae0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26ae10: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x26ae10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x26ae14: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x26ae14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26ae18: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26ae18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26ae1c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26AE1Cu;
    SET_GPR_U32(ctx, 31, 0x26AE24u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26AE1Cu, 0x26AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE24u;
label_26ae24:
    // 0x26ae24: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26ae2c: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x26ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x26ae30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ae34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x26ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x26ae38: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x26ae38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x26ae3c: 0x8c23a538  lw          $v1, -0x5AC8($at)
    ctx->pc = 0x26ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FA538u));
    // 0x26ae40: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x26ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x26ae44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26ae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ae48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x26ae48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x26ae4c: 0xac22a538  sw          $v0, -0x5AC8($at)
    ctx->pc = 0x26ae4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FA538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FA538u, _value); } while (0);
    // 0x26ae50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae54: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x26ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x26ae58: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26AE58u;
    SET_GPR_U32(ctx, 31, 0x26AE60u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26AE58u, 0x26AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE60u;
label_26ae60:
    // 0x26ae60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ae60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ae64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae68: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x26ae68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x26ae6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ae6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ae70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae74: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26ae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x26ae78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae7c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x26ae7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x26ae80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae84: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26ae84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26ae88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26ae8c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26ae8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26ae90:
    // 0x26ae90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ae94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ae98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26AE98u;
    SET_GPR_U32(ctx, 31, 0x26AEA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26AE98u, 0x26AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEA0u;
label_26aea0:
    // 0x26aea0: 0xc09aa38  jal         func_26A8E0
    ctx->pc = 0x26AEA0u;
    SET_GPR_U32(ctx, 31, 0x26AEA8u);
    ctx->pc = 0x26A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A8E0u, 0x26AEA0u, 0x26AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEA8u;
label_26aea8:
    // 0x26aea8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26aea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26aeac: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x26AEACu;
    SET_GPR_U32(ctx, 31, 0x26AEB4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26AEACu, 0x26AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEB4u;
label_26aeb4:
    // 0x26aeb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26aeb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26aeb8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26aebc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26aebcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26aec0: 0xc057590  jal         func_15D640
    ctx->pc = 0x26AEC0u;
    SET_GPR_U32(ctx, 31, 0x26AEC8u);
    ctx->pc = 0x15D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D640u, 0x26AEC0u, 0x26AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEC8u;
label_26aec8:
    // 0x26aec8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26aec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26aecc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26AECCu;
    SET_GPR_U32(ctx, 31, 0x26AED4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26AECCu, 0x26AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AED4u;
label_26aed4:
    // 0x26aed4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x26aed4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26aed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26aed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26aedc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26aedcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26aee0: 0x3e00008  jr          $ra
    ctx->pc = 0x26AEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AEE8u;
}
