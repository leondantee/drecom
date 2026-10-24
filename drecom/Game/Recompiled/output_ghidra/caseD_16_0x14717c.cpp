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

// Function: caseD_16
// Address: 0x14717c - 0x1471b0
void caseD_16_0x14717c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x14717c");
#endif

    switch (ctx->pc) {
        case 0x14719cu: goto label_14719c;
        default: break;
    }

    ctx->pc = 0x14717cu;

    // 0x14717c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x14717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147180: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147184: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x147184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x147188: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x147188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14718c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14718cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147190: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x147190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x147194: 0xc0965d0  jal         func_259740
    ctx->pc = 0x147194u;
    SET_GPR_U32(ctx, 31, 0x14719Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x147194u, 0x14719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14719Cu;
label_14719c:
    // 0x14719c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x14719cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1471a0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1471a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1471a4: 0x90e80002  lbu         $t0, 0x2($a3)
    ctx->pc = 0x1471a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1471a8: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1471a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1471ac: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x1471acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1471b0u;
}
