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

// Function: entry_001a5d98
// Address: 0x1a5d98 - 0x1a5de0
void entry_001a5d98_0x1a5d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5d98_0x1a5d98");
#endif

    switch (ctx->pc) {
        case 0x1a5db8u: goto label_1a5db8;
        case 0x1a5dccu: goto label_1a5dcc;
        default: break;
    }

    ctx->pc = 0x1a5d98u;

    // 0x1a5d98: 0x9203031a  lbu         $v1, 0x31A($s0)
    ctx->pc = 0x1a5d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 794)));
    // 0x1a5d9c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5D9Cu;
    {
        const bool branch_taken_0x1a5d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d9c) {
            ctx->pc = 0x1A5DE0u;
            return;
        }
    }
    ctx->pc = 0x1A5DA4u;
    // 0x1a5da4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5da8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5dac: 0x262506f0  addiu       $a1, $s1, 0x6F0
    ctx->pc = 0x1a5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1a5db0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5DB0u;
    SET_GPR_U32(ctx, 31, 0x1A5DB8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5DB0u, 0x1A5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DB8u;
label_1a5db8:
    // 0x1a5db8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5dbc: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5dc0: 0x260502b8  addiu       $a1, $s0, 0x2B8
    ctx->pc = 0x1a5dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
    // 0x1a5dc4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5DC4u;
    SET_GPR_U32(ctx, 31, 0x1A5DCCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5DC4u, 0x1A5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DCCu;
label_1a5dcc:
    // 0x1a5dcc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a5dd0: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x1a5dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
    // 0x1a5dd4: 0x260502e8  addiu       $a1, $s0, 0x2E8
    ctx->pc = 0x1a5dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 744));
    // 0x1a5dd8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5DD8u;
    SET_GPR_U32(ctx, 31, 0x1A5DE0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5DD8u, 0x1A5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DE0u;
}
