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

// Function: entry_001c1c3c
// Address: 0x1c1c3c - 0x1c1c70
void entry_001c1c3c_0x1c1c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1c3c_0x1c1c3c");
#endif

    switch (ctx->pc) {
        case 0x1c1c54u: goto label_1c1c54;
        default: break;
    }

    ctx->pc = 0x1c1c3cu;

    // 0x1c1c3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c40: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c1c40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c1c44: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C1C44u;
    {
        const bool branch_taken_0x1c1c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c44) {
            ctx->pc = 0x1C1CA0u;
            return;
        }
    }
    ctx->pc = 0x1C1C4Cu;
    // 0x1c1c4c: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x1C1C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C1C54u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1C1C4Cu, 0x1C1C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C54u;
label_1c1c54:
    // 0x1c1c54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1C54u;
    {
        const bool branch_taken_0x1c1c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c54) {
            ctx->pc = 0x1C1C70u;
            return;
        }
    }
    ctx->pc = 0x1C1C5Cu;
    // 0x1c1c5c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c1c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c1c60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1c64: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1c1c68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C1C68u;
    {
        const bool branch_taken_0x1c1c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c68) {
            ctx->pc = 0x1C1CA0u;
            return;
        }
    }
    ctx->pc = 0x1C1C70u;
}
