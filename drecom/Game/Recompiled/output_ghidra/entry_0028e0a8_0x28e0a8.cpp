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

// Function: entry_0028e0a8
// Address: 0x28e0a8 - 0x28e0cc
void entry_0028e0a8_0x28e0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e0a8_0x28e0a8");
#endif

    switch (ctx->pc) {
        case 0x28e0c4u: goto label_28e0c4;
        default: break;
    }

    ctx->pc = 0x28e0a8u;

    // 0x28e0a8: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e0a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e0ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28e0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e0b4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E0B4u;
    {
        const bool branch_taken_0x28e0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e0b4) {
            ctx->pc = 0x28E0CCu;
            return;
        }
    }
    ctx->pc = 0x28E0BCu;
    // 0x28e0bc: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28E0BCu;
    SET_GPR_U32(ctx, 31, 0x28E0C4u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28E0BCu, 0x28E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E0C4u;
label_28e0c4:
    // 0x28e0c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E0C4u;
    {
        const bool branch_taken_0x28e0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e0c4) {
            ctx->pc = 0x28E0E8u;
            return;
        }
    }
    ctx->pc = 0x28E0CCu;
}
