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

// Function: caseD_10
// Address: 0x1cfd2c - 0x1cfdc8
void caseD_10_0x1cfd2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x1cfd2c");
#endif

    switch (ctx->pc) {
        case 0x1cfd4cu: goto label_1cfd4c;
        case 0x1cfd58u: goto label_1cfd58;
        case 0x1cfda4u: goto label_1cfda4;
        default: break;
    }

    ctx->pc = 0x1cfd2cu;

    // 0x1cfd2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfd30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfd34: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cfd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cfd38: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1cfd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1cfd3c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cfd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cfd40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cfd40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cfd44: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CFD44u;
    SET_GPR_U32(ctx, 31, 0x1CFD4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CFD44u, 0x1CFD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD4Cu;
label_1cfd4c:
    // 0x1cfd4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cfd4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfd50: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1CFD50u;
    SET_GPR_U32(ctx, 31, 0x1CFD58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CFD50u, 0x1CFD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD58u;
label_1cfd58:
    // 0x1cfd58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfd58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfd5c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1cfd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1cfd60: 0x30660003  andi        $a2, $v1, 0x3
    ctx->pc = 0x1cfd60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1cfd64: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1cfd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1cfd68: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1cfd68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1cfd6c: 0x24a49230  addiu       $a0, $a1, -0x6DD0
    ctx->pc = 0x1cfd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939184));
    // 0x1cfd70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cfd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cfd74: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1cfd74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cfd78: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x1cfd78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1cfd7c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1cfd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1cfd80: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1cfd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1cfd84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cfd84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cfd88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfd8c: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1cfd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1cfd90: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1cfd90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cfd94: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1cfd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1cfd98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cfd98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cfd9c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CFD9Cu;
    SET_GPR_U32(ctx, 31, 0x1CFDA4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CFD9Cu, 0x1CFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDA4u;
label_1cfda4:
    // 0x1cfda4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cfda4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfda8: 0x3c05c2a0  lui         $a1, 0xC2A0
    ctx->pc = 0x1cfda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49824 << 16));
    // 0x1cfdac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cfdacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfdb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfdb4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cfdb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1cfdb8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfdbc: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1cfdbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1cfdc0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1cfdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cfdc4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cfdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1cfdc8u;
}
