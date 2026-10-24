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

// Function: entry_001e17a8
// Address: 0x1e17a8 - 0x1e17c0
void entry_001e17a8_0x1e17a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e17a8_0x1e17a8");
#endif

    ctx->pc = 0x1e17a8u;

    // 0x1e17a8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e17a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e17ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e17acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e17b0: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e17b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e17b4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e17b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e17b8: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E17B8u;
    SET_GPR_U32(ctx, 31, 0x1E17C0u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E17B8u, 0x1E17C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E17C0u;
}
