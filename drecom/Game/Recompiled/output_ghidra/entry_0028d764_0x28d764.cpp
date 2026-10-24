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

// Function: entry_0028d764
// Address: 0x28d764 - 0x28d780
void entry_0028d764_0x28d764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d764_0x28d764");
#endif

    ctx->pc = 0x28d764u;

    // 0x28d764: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28d764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d768: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28d768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28d76c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28d76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d770: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D770u;
    {
        const bool branch_taken_0x28d770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x28d770) {
            ctx->pc = 0x28D780u;
            return;
        }
    }
    ctx->pc = 0x28D778u;
    // 0x28d778: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28D778u;
    SET_GPR_U32(ctx, 31, 0x28D780u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28D778u, 0x28D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D780u;
}
