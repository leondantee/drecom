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

// Function: entry_001e3f18
// Address: 0x1e3f18 - 0x1e3f38
void entry_001e3f18_0x1e3f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3f18_0x1e3f18");
#endif

    switch (ctx->pc) {
        case 0x1e3f34u: goto label_1e3f34;
        default: break;
    }

    ctx->pc = 0x1e3f18u;

    // 0x1e3f18: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e3f1c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1e3f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3f20: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1e3f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3f24: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1e3f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e3f28: 0x72404628  paddub      $t0, $s2, $zero
    ctx->pc = 0x1e3f28u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e3f2c: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E3F2Cu;
    SET_GPR_U32(ctx, 31, 0x1E3F34u);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E3F2Cu, 0x1E3F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F34u;
label_1e3f34:
    // 0x1e3f34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e3f34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e3f38u;
}
