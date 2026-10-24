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

// Function: entry_002584e4
// Address: 0x2584e4 - 0x258508
void entry_002584e4_0x2584e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002584e4_0x2584e4");
#endif

    switch (ctx->pc) {
        case 0x2584fcu: goto label_2584fc;
        default: break;
    }

    ctx->pc = 0x2584e4u;

    // 0x2584e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2584e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2584e8: 0xdfa50030  ld          $a1, 0x30($sp)
    ctx->pc = 0x2584e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2584ec: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x2584ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2584f0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2584f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2584f4: 0xc09614c  jal         func_258530
    ctx->pc = 0x2584F4u;
    SET_GPR_U32(ctx, 31, 0x2584FCu);
    ctx->pc = 0x258530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258530u, 0x2584F4u, 0x2584FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2584FCu;
label_2584fc:
    // 0x2584fc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2584fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x258500: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x258500u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258504: 0x0  nop
    ctx->pc = 0x258504u;
    // NOP
    ctx->pc = 0x258508u;
}
