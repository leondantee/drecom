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

// Function: entry_0014d7f8
// Address: 0x14d7f8 - 0x14d824
void entry_0014d7f8_0x14d7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d7f8_0x14d7f8");
#endif

    switch (ctx->pc) {
        case 0x14d808u: goto label_14d808;
        default: break;
    }

    ctx->pc = 0x14d7f8u;

    // 0x14d7f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d7fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d800: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14D800u;
    SET_GPR_U32(ctx, 31, 0x14D808u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D800u, 0x14D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D808u;
label_14d808:
    // 0x14d808: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d80c: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x14d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x14d810: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D810u;
    {
        const bool branch_taken_0x14d810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d810) {
            ctx->pc = 0x14D824u;
            return;
        }
    }
    ctx->pc = 0x14D818u;
    // 0x14d818: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d81c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x14D81Cu;
    SET_GPR_U32(ctx, 31, 0x14D824u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x14D81Cu, 0x14D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D824u;
}
