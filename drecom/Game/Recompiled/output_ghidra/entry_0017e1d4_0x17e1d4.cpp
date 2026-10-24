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

// Function: entry_0017e1d4
// Address: 0x17e1d4 - 0x17e1f8
void entry_0017e1d4_0x17e1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e1d4_0x17e1d4");
#endif

    ctx->pc = 0x17e1d4u;

label_17e1d4:
    // 0x17e1d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17e1d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_17e1d8:
    // 0x17e1d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17e1dc:
    // 0x17e1dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17e1e0:
    // 0x17e1e0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x17e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_17e1e4:
    // 0x17e1e4: 0x24425930  addiu       $v0, $v0, 0x5930
    ctx->pc = 0x17e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22832));
label_17e1e8:
    // 0x17e1e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17e1ec:
    // 0x17e1ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e1f0:
    // 0x17e1f0: 0x40f809  jalr        $v0
label_17e1f4:
    if (ctx->pc == 0x17E1F4u) {
        ctx->pc = 0x17E1F8u;
        goto label_fallthrough_0x17e1f0;
    }
    ctx->pc = 0x17E1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17E1F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E1F0u, 0x17E1F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17e1f0:
    ctx->pc = 0x17E1F8u;
}
