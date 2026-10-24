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

// Function: caseD_2
// Address: 0x20702c - 0x207080
void caseD_2_0x20702c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x20702c");
#endif

    switch (ctx->pc) {
        case 0x20704cu: goto label_20704c;
        default: break;
    }

    ctx->pc = 0x20702cu;

    // 0x20702c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207030: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207034: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x207034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x207038: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x207038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x20703c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20703cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207040: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x207040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x207044: 0xc0965d0  jal         func_259740
    ctx->pc = 0x207044u;
    SET_GPR_U32(ctx, 31, 0x20704Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x207044u, 0x20704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20704Cu;
label_20704c:
    // 0x20704c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20704cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x207050: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207054: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x207054u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x207058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20705c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x20705cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207060: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x207060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x207064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207068: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20706c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x20706cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x207070: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207074: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x207074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x207078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x207078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20707c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20707cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x207080u;
}
