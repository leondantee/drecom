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

// Function: entry_0028dc18
// Address: 0x28dc18 - 0x28dc38
void entry_0028dc18_0x28dc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028dc18_0x28dc18");
#endif

    switch (ctx->pc) {
        case 0x28dc34u: goto label_28dc34;
        default: break;
    }

    ctx->pc = 0x28dc18u;

    // 0x28dc18: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28dc18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dc1c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28dc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28dc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dc24: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DC24u;
    {
        const bool branch_taken_0x28dc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28dc24) {
            ctx->pc = 0x28DC38u;
            return;
        }
    }
    ctx->pc = 0x28DC2Cu;
    // 0x28dc2c: 0xc0a3b1c  jal         func_28EC70
    ctx->pc = 0x28DC2Cu;
    SET_GPR_U32(ctx, 31, 0x28DC34u);
    ctx->pc = 0x28EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC70u, 0x28DC2Cu, 0x28DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC34u;
label_28dc34:
    // 0x28dc34: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x28dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    ctx->pc = 0x28dc38u;
}
