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

// Function: caseD_c
// Address: 0x1c7d34 - 0x1c7dd0
void caseD_c_0x1c7d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1c7d34");
#endif

    switch (ctx->pc) {
        case 0x1c7d54u: goto label_1c7d54;
        case 0x1c7d5cu: goto label_1c7d5c;
        case 0x1c7dacu: goto label_1c7dac;
        default: break;
    }

    ctx->pc = 0x1c7d34u;

    // 0x1c7d34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7d38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7d3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1c7d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1c7d40: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1c7d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c7d44: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c7d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c7d48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c7d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c7d4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C7D4Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C7D4Cu, 0x1C7D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D54u;
label_1c7d54:
    // 0x1c7d54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1C7D54u;
    SET_GPR_U32(ctx, 31, 0x1C7D5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C7D54u, 0x1C7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D5Cu;
label_1c7d5c:
    // 0x1c7d5c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1c7d5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7d60: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c7d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1c7d64: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1c7d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1c7d68: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1c7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c7d6c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1c7d70: 0x24459230  addiu       $a1, $v0, -0x6DD0
    ctx->pc = 0x1c7d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939184));
    // 0x1c7d74: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1c7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c7d78: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x1c7d78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7d7c: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1c7d7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1c7d80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7d84: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x1c7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1c7d88: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1c7d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x1c7d8c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c7d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c7d90: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1c7d90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c7d94: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c7d94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1c7d98: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1c7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1c7d9c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c7d9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7da0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c7da0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7da4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C7DA4u;
    SET_GPR_U32(ctx, 31, 0x1C7DACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C7DA4u, 0x1C7DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DACu;
label_1c7dac:
    // 0x1c7dac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7dacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7db0: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x1c7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x1c7db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7db8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7dbc: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1c7dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x1c7dc0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7dc4: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c7dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c7dc8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c7dcc: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c7dccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c7dd0u;
}
