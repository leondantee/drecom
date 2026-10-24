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

// Function: entry_00300884
// Address: 0x300884 - 0x3008b8
void entry_00300884_0x300884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00300884_0x300884");
#endif

    switch (ctx->pc) {
        case 0x3008b0u: goto label_3008b0;
        default: break;
    }

    ctx->pc = 0x300884u;

label_300884:
    // 0x300884: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300888:
    // 0x300888: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30088c:
    // 0x30088c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x30088cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_300890:
    // 0x300890: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x300890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_300894:
    // 0x300894: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x300894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_300898:
    // 0x300898: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x300898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_30089c:
    // 0x30089c: 0x24429300  addiu       $v0, $v0, -0x6D00
    ctx->pc = 0x30089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939392));
label_3008a0:
    // 0x3008a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3008a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3008a4:
    // 0x3008a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3008a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3008a8:
    // 0x3008a8: 0x40f809  jalr        $v0
label_3008ac:
    if (ctx->pc == 0x3008ACu) {
        ctx->pc = 0x3008B0u;
        goto label_3008b0;
    }
    ctx->pc = 0x3008A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3008B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3008A8u, 0x3008B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3008B0u;
label_3008b0:
    // 0x3008b0: 0x1000004c  b           . + 4 + (0x4C << 2)
label_3008b4:
    if (ctx->pc == 0x3008B4u) {
        ctx->pc = 0x3008B8u;
        goto label_fallthrough_0x3008b0;
    }
    ctx->pc = 0x3008B0u;
    {
        const bool branch_taken_0x3008b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3008b0) {
            ctx->pc = 0x3009E4u;
            return;
        }
    }
label_fallthrough_0x3008b0:
    ctx->pc = 0x3008B8u;
}
