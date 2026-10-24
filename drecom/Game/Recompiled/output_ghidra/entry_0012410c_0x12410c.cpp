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

// Function: entry_0012410c
// Address: 0x12410c - 0x124134
void entry_0012410c_0x12410c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012410c_0x12410c");
#endif

    switch (ctx->pc) {
        case 0x12412cu: goto label_12412c;
        default: break;
    }

    ctx->pc = 0x12410cu;

    // 0x12410c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12410cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124110: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x124110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x124114: 0x34620020  ori         $v0, $v1, 0x20
    ctx->pc = 0x124114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x124118: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x124118u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x12411c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12411cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124120: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x124120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x124124: 0xc048148  jal         func_120520
    ctx->pc = 0x124124u;
    SET_GPR_U32(ctx, 31, 0x12412Cu);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x124124u, 0x12412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12412Cu;
label_12412c:
    // 0x12412c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x12412Cu;
    {
        const bool branch_taken_0x12412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12412c) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x124134u;
}
