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

// Function: entry_0016de4c
// Address: 0x16de4c - 0x16de68
void entry_0016de4c_0x16de4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016de4c_0x16de4c");
#endif

    switch (ctx->pc) {
        case 0x16de5cu: goto label_16de5c;
        default: break;
    }

    ctx->pc = 0x16de4cu;

    // 0x16de4c: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16de50: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16de50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16de54: 0xc05b7c4  jal         func_16DF10
    ctx->pc = 0x16DE54u;
    SET_GPR_U32(ctx, 31, 0x16DE5Cu);
    ctx->pc = 0x16DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF10u, 0x16DE54u, 0x16DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE5Cu;
label_16de5c:
    // 0x16de5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16de5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16de60: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16de60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16de64: 0x7200b628  paddub      $s6, $s0, $zero
    ctx->pc = 0x16de64u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16de68u;
}
