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

// Function: entry_001e19cc
// Address: 0x1e19cc - 0x1e19f0
void entry_001e19cc_0x1e19cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e19cc_0x1e19cc");
#endif

    switch (ctx->pc) {
        case 0x1e19ecu: goto label_1e19ec;
        default: break;
    }

    ctx->pc = 0x1e19ccu;

    // 0x1e19cc: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e19d0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1e19d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e19d4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1e19d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e19d8: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x1e19d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e19dc: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x1e19dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e19e0: 0x72404628  paddub      $t0, $s2, $zero
    ctx->pc = 0x1e19e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e19e4: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E19E4u;
    SET_GPR_U32(ctx, 31, 0x1E19ECu);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E19E4u, 0x1E19ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19ECu;
label_1e19ec:
    // 0x1e19ec: 0x0  nop
    ctx->pc = 0x1e19ecu;
    // NOP
    ctx->pc = 0x1e19f0u;
}
