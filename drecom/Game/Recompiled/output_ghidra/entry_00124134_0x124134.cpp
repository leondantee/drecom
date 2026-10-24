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

// Function: entry_00124134
// Address: 0x124134 - 0x12415c
void entry_00124134_0x124134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124134_0x124134");
#endif

    switch (ctx->pc) {
        case 0x124154u: goto label_124154;
        default: break;
    }

    ctx->pc = 0x124134u;

    // 0x124134: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x124134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124138: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x124138u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x12413c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x12413cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x124140: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x124140u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x124144: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124148: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x124148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12414c: 0xc048148  jal         func_120520
    ctx->pc = 0x12414Cu;
    SET_GPR_U32(ctx, 31, 0x124154u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x12414Cu, 0x124154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124154u;
label_124154:
    // 0x124154: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x124154u;
    {
        const bool branch_taken_0x124154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124154) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x12415Cu;
}
