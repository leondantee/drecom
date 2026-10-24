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

// Function: entry_0028db3c
// Address: 0x28db3c - 0x28db5c
void entry_0028db3c_0x28db3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028db3c_0x28db3c");
#endif

    switch (ctx->pc) {
        case 0x28db58u: goto label_28db58;
        default: break;
    }

    ctx->pc = 0x28db3cu;

    // 0x28db3c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28db3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28db40: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28db40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28db44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28db44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28db48: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DB48u;
    {
        const bool branch_taken_0x28db48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28db48) {
            ctx->pc = 0x28DB5Cu;
            return;
        }
    }
    ctx->pc = 0x28DB50u;
    // 0x28db50: 0xc0a3b1c  jal         func_28EC70
    ctx->pc = 0x28DB50u;
    SET_GPR_U32(ctx, 31, 0x28DB58u);
    ctx->pc = 0x28EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC70u, 0x28DB50u, 0x28DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB58u;
label_28db58:
    // 0x28db58: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x28db58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    ctx->pc = 0x28db5cu;
}
