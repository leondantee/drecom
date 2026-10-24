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

// Function: entry_00152e98
// Address: 0x152e98 - 0x152ec8
void entry_00152e98_0x152e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152e98_0x152e98");
#endif

    ctx->pc = 0x152e98u;

label_152e98:
    // 0x152e98: 0x9202157d  lbu         $v0, 0x157D($s0)
    ctx->pc = 0x152e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5501)));
label_152e9c:
    // 0x152e9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x152e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_152ea0:
    // 0x152ea0: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x152ea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_152ea4:
    // 0x152ea4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_152ea8:
    if (ctx->pc == 0x152EA8u) {
        ctx->pc = 0x152EACu;
        goto label_152eac;
    }
    ctx->pc = 0x152EA4u;
    {
        const bool branch_taken_0x152ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ea4) {
            ctx->pc = 0x152EC8u;
            return;
        }
    }
    ctx->pc = 0x152EACu;
label_152eac:
    // 0x152eac: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x152eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_152eb0:
    // 0x152eb0: 0x2483e990  addiu       $v1, $a0, -0x1670
    ctx->pc = 0x152eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
label_152eb4:
    // 0x152eb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x152eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_152eb8:
    // 0x152eb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_152ebc:
    // 0x152ebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x152ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_152ec0:
    // 0x152ec0: 0x600008  jr          $v1
label_152ec4:
    if (ctx->pc == 0x152EC4u) {
        ctx->pc = 0x152EC8u;
        goto label_fallthrough_0x152ec0;
    }
    ctx->pc = 0x152EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152EC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x152ec0:
    ctx->pc = 0x152EC8u;
}
