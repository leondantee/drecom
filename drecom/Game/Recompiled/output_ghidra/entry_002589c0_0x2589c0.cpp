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

// Function: entry_002589c0
// Address: 0x2589c0 - 0x2589d8
void entry_002589c0_0x2589c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002589c0_0x2589c0");
#endif

    switch (ctx->pc) {
        case 0x2589d4u: goto label_2589d4;
        default: break;
    }

    ctx->pc = 0x2589c0u;

    // 0x2589c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2589c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2589c4: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2589c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2589c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2589c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2589cc: 0xc096280  jal         func_258A00
    ctx->pc = 0x2589CCu;
    SET_GPR_U32(ctx, 31, 0x2589D4u);
    ctx->pc = 0x258A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A00u, 0x2589CCu, 0x2589D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589D4u;
label_2589d4:
    // 0x2589d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2589d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2589d8u;
}
