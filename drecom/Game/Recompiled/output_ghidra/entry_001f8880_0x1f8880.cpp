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

// Function: entry_001f8880
// Address: 0x1f8880 - 0x1f88c4
void entry_001f8880_0x1f8880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8880_0x1f8880");
#endif

    switch (ctx->pc) {
        case 0x1f88a0u: goto label_1f88a0;
        case 0x1f88b0u: goto label_1f88b0;
        case 0x1f88bcu: goto label_1f88bc;
        default: break;
    }

    ctx->pc = 0x1f8880u;

    // 0x1f8880: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8884: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8888: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f8888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f888c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f888cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f8890: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8894: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f8894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f8898: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F8898u;
    SET_GPR_U32(ctx, 31, 0x1F88A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F8898u, 0x1F88A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88A0u;
label_1f88a0:
    // 0x1f88a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f88a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f88a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f88a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F88A8u;
    SET_GPR_U32(ctx, 31, 0x1F88B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F88A8u, 0x1F88B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88B0u;
label_1f88b0:
    // 0x1f88b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f88b4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F88B4u;
    SET_GPR_U32(ctx, 31, 0x1F88BCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F88B4u, 0x1F88BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88BCu;
label_1f88bc:
    // 0x1f88bc: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1F88BCu;
    {
        const bool branch_taken_0x1f88bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f88bc) {
            ctx->pc = 0x1F8C10u;
            return;
        }
    }
    ctx->pc = 0x1F88C4u;
}
