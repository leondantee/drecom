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

// Function: entry_0030e870
// Address: 0x30e870 - 0x30e8a0
void entry_0030e870_0x30e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e870_0x30e870");
#endif

    switch (ctx->pc) {
        case 0x30e890u: goto label_30e890;
        default: break;
    }

    ctx->pc = 0x30e870u;

    // 0x30e870: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30e870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e874: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e878: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x30e878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x30e87c: 0x24062833  addiu       $a2, $zero, 0x2833
    ctx->pc = 0x30e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10291));
    // 0x30e880: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e884: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30e884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e888: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30E888u;
    SET_GPR_U32(ctx, 31, 0x30E890u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30E888u, 0x30E890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E890u;
label_30e890:
    // 0x30e890: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30e890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30e894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30e894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e898: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e89c: 0xa465127a  sh          $a1, 0x127A($v1)
    ctx->pc = 0x30e89cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x30e8a0u;
}
