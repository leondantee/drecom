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

// Function: caseD_e
// Address: 0x1cfbbc - 0x1cfc60
void caseD_e_0x1cfbbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x1cfbbc");
#endif

    switch (ctx->pc) {
        case 0x1cfbdcu: goto label_1cfbdc;
        case 0x1cfbe8u: goto label_1cfbe8;
        case 0x1cfc3cu: goto label_1cfc3c;
        default: break;
    }

    ctx->pc = 0x1cfbbcu;

    // 0x1cfbbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfbc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfbc4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cfbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cfbc8: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1cfbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1cfbcc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cfbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cfbd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cfbd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cfbd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CFBD4u;
    SET_GPR_U32(ctx, 31, 0x1CFBDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CFBD4u, 0x1CFBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBDCu;
label_1cfbdc:
    // 0x1cfbdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfbdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfbe0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1CFBE0u;
    SET_GPR_U32(ctx, 31, 0x1CFBE8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CFBE0u, 0x1CFBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBE8u;
label_1cfbe8:
    // 0x1cfbe8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfbe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfbec: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1cfbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1cfbf0: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1cfbf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1cfbf4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1cfbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cfbf8: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1cfbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1cfbfc: 0x24b09230  addiu       $s0, $a1, -0x6DD0
    ctx->pc = 0x1cfbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939184));
    // 0x1cfc00: 0x2033821  addu        $a3, $s0, $v1
    ctx->pc = 0x1cfc00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1cfc04: 0x94e80000  lhu         $t0, 0x0($a3)
    ctx->pc = 0x1cfc04u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cfc08: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x1cfc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1cfc0c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1cfc0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1cfc10: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x1cfc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x1cfc14: 0x34a34000  ori         $v1, $a1, 0x4000
    ctx->pc = 0x1cfc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x1cfc18: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cfc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cfc1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cfc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfc20: 0x8c460130  lw          $a2, 0x130($v0)
    ctx->pc = 0x1cfc20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cfc24: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1cfc24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cfc28: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x1cfc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x1cfc2c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1cfc2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1cfc30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cfc30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cfc34: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CFC34u;
    SET_GPR_U32(ctx, 31, 0x1CFC3Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CFC34u, 0x1CFC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC3Cu;
label_1cfc3c:
    // 0x1cfc3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cfc3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfc40: 0x3c04c2a0  lui         $a0, 0xC2A0
    ctx->pc = 0x1cfc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49824 << 16));
    // 0x1cfc44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cfc44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfc48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cfc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfc4c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1cfc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1cfc50: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cfc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfc54: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x1cfc54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cfc58: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1cfc58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cfc5c: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x1cfc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x1cfc60u;
}
