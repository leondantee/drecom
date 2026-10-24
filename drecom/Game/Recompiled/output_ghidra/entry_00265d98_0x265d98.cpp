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

// Function: entry_00265d98
// Address: 0x265d98 - 0x265dc0
void entry_00265d98_0x265d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265d98_0x265d98");
#endif

    switch (ctx->pc) {
        case 0x265db8u: goto label_265db8;
        default: break;
    }

    ctx->pc = 0x265d98u;

    // 0x265d98: 0xae16005c  sw          $s6, 0x5C($s0)
    ctx->pc = 0x265d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 22));
    // 0x265d9c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x265d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x265da0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x265da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x265da4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265DA4u;
    {
        const bool branch_taken_0x265da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265da4) {
            ctx->pc = 0x265DC0u;
            return;
        }
    }
    ctx->pc = 0x265DACu;
    // 0x265dac: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x265dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x265db0: 0xc07675c  jal         func_1D9D70
    ctx->pc = 0x265DB0u;
    SET_GPR_U32(ctx, 31, 0x265DB8u);
    ctx->pc = 0x1D9D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D70u, 0x265DB0u, 0x265DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DB8u;
label_265db8:
    // 0x265db8: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x265db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x265dbc: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x265dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    ctx->pc = 0x265dc0u;
}
