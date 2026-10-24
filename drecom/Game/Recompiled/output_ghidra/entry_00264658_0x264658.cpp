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

// Function: entry_00264658
// Address: 0x264658 - 0x264688
void entry_00264658_0x264658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264658_0x264658");
#endif

    switch (ctx->pc) {
        case 0x26466cu: goto label_26466c;
        default: break;
    }

    ctx->pc = 0x264658u;

    // 0x264658: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x264658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26465c: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x26465cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x264660: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x264660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x264664: 0xc076744  jal         func_1D9D10
    ctx->pc = 0x264664u;
    SET_GPR_U32(ctx, 31, 0x26466Cu);
    ctx->pc = 0x1D9D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D10u, 0x264664u, 0x26466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26466Cu;
label_26466c:
    // 0x26466c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x26466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x264670: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x264670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x264674: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x264674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x264678: 0xac64124c  sw          $a0, 0x124C($v1)
    ctx->pc = 0x264678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4684), GPR_U32(ctx, 4));
    // 0x26467c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26467cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264680: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264684: 0x0  nop
    ctx->pc = 0x264684u;
    // NOP
    ctx->pc = 0x264688u;
}
