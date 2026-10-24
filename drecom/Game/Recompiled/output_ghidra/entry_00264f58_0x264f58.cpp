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

// Function: entry_00264f58
// Address: 0x264f58 - 0x264f80
void entry_00264f58_0x264f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264f58_0x264f58");
#endif

    switch (ctx->pc) {
        case 0x264f78u: goto label_264f78;
        default: break;
    }

    ctx->pc = 0x264f58u;

    // 0x264f58: 0xae15005c  sw          $s5, 0x5C($s0)
    ctx->pc = 0x264f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 21));
    // 0x264f5c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x264f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x264f60: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x264f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x264f64: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x264F64u;
    {
        const bool branch_taken_0x264f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264f64) {
            ctx->pc = 0x264F80u;
            return;
        }
    }
    ctx->pc = 0x264F6Cu;
    // 0x264f6c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x264f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x264f70: 0xc07675c  jal         func_1D9D70
    ctx->pc = 0x264F70u;
    SET_GPR_U32(ctx, 31, 0x264F78u);
    ctx->pc = 0x1D9D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D70u, 0x264F70u, 0x264F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F78u;
label_264f78:
    // 0x264f78: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x264f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x264f7c: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x264f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    ctx->pc = 0x264f80u;
}
