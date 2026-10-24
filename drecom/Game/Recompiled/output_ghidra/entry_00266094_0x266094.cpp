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

// Function: entry_00266094
// Address: 0x266094 - 0x2660ac
void entry_00266094_0x266094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266094_0x266094");
#endif

    switch (ctx->pc) {
        case 0x2660a8u: goto label_2660a8;
        default: break;
    }

    ctx->pc = 0x266094u;

    // 0x266094: 0x8e260a68  lw          $a2, 0xA68($s1)
    ctx->pc = 0x266094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x266098: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266098u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26609c: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x26609cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2660a0: 0xc0998dc  jal         func_266370
    ctx->pc = 0x2660A0u;
    SET_GPR_U32(ctx, 31, 0x2660A8u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x2660A0u, 0x2660A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660A8u;
label_2660a8:
    // 0x2660a8: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x2660a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    ctx->pc = 0x2660acu;
}
