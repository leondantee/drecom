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

// Function: Efm_set_meisai_ura
// Address: 0x1df9f0 - 0x1dfab0
void Efm_set_meisai_ura_0x1df9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_set_meisai_ura_0x1df9f0");
#endif

    switch (ctx->pc) {
        case 0x1dfa48u: goto label_1dfa48;
        case 0x1dfa58u: goto label_1dfa58;
        case 0x1dfa68u: goto label_1dfa68;
        case 0x1dfa7cu: goto label_1dfa7c;
        case 0x1dfa90u: goto label_1dfa90;
        case 0x1dfaa0u: goto label_1dfaa0;
        default: break;
    }

    ctx->pc = 0x1df9f0u;

    // 0x1df9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df9f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1df9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1df9f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1df9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1df9fc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1df9fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1dfa00: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1dfa00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1dfa04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1dfa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfa08: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1dfa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1dfa0c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1dfa0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1dfa10: 0x304200f9  andi        $v0, $v0, 0xF9
    ctx->pc = 0x1dfa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)249);
    // 0x1dfa14: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1dfa14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dfa18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1dfa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfa1c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1dfa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1dfa20: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1dfa20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1dfa24: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1dfa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1dfa28: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1dfa28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dfa2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dfa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dfa30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1dfa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfa34: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1dfa34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dfa38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1dfa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfa3c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1dfa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dfa40: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x1DFA40u;
    SET_GPR_U32(ctx, 31, 0x1DFA48u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x1DFA40u, 0x1DFA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA48u;
label_1dfa48:
    // 0x1dfa48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1dfa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfa4c: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x1dfa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x1dfa50: 0xc077b74  jal         func_1DEDD0
    ctx->pc = 0x1DFA50u;
    SET_GPR_U32(ctx, 31, 0x1DFA58u);
    ctx->pc = 0x1DEDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEDD0u, 0x1DFA50u, 0x1DFA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA58u;
label_1dfa58:
    // 0x1dfa58: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1dfa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfa5c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1dfa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1dfa60: 0xc096188  jal         func_258620
    ctx->pc = 0x1DFA60u;
    SET_GPR_U32(ctx, 31, 0x1DFA68u);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x1DFA60u, 0x1DFA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA68u;
label_1dfa68:
    // 0x1dfa68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1dfa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dfa6c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1dfa6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dfa70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1dfa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfa74: 0xc09620c  jal         func_258830
    ctx->pc = 0x1DFA74u;
    SET_GPR_U32(ctx, 31, 0x1DFA7Cu);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1DFA74u, 0x1DFA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA7Cu;
label_1dfa7c:
    // 0x1dfa7c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1dfa7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1dfa80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dfa80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dfa84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1dfa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfa88: 0xc0962cc  jal         func_258B30
    ctx->pc = 0x1DFA88u;
    SET_GPR_U32(ctx, 31, 0x1DFA90u);
    ctx->pc = 0x258B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B30u, 0x1DFA88u, 0x1DFA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA90u;
label_1dfa90:
    // 0x1dfa90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1dfa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfa94: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1dfa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dfa98: 0xc096268  jal         func_2589A0
    ctx->pc = 0x1DFA98u;
    SET_GPR_U32(ctx, 31, 0x1DFAA0u);
    ctx->pc = 0x2589A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2589A0u, 0x1DFA98u, 0x1DFAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAA0u;
label_1dfaa0:
    // 0x1dfaa0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1dfaa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfaa4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dfaa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dfaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFAB0u;
}
