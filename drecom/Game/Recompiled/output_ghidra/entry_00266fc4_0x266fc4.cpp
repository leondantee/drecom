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

// Function: entry_00266fc4
// Address: 0x266fc4 - 0x266fe0
void entry_00266fc4_0x266fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266fc4_0x266fc4");
#endif

    switch (ctx->pc) {
        case 0x266fd8u: goto label_266fd8;
        default: break;
    }

    ctx->pc = 0x266fc4u;

    // 0x266fc4: 0x8e041240  lw          $a0, 0x1240($s0)
    ctx->pc = 0x266fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x266fc8: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x266fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x266fcc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x266fccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266fd0: 0xc05b4f8  jal         func_16D3E0
    ctx->pc = 0x266FD0u;
    SET_GPR_U32(ctx, 31, 0x266FD8u);
    ctx->pc = 0x16D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D3E0u, 0x266FD0u, 0x266FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FD8u;
label_266fd8:
    // 0x266fd8: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x266fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x266fdc: 0x0  nop
    ctx->pc = 0x266fdcu;
    // NOP
    ctx->pc = 0x266fe0u;
}
