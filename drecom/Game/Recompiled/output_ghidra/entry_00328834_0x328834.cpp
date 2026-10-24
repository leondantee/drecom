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

// Function: entry_00328834
// Address: 0x328834 - 0x328860
void entry_00328834_0x328834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328834_0x328834");
#endif

    switch (ctx->pc) {
        case 0x32885cu: goto label_32885c;
        default: break;
    }

    ctx->pc = 0x328834u;

    // 0x328834: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x328838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32883c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x32883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328840: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x328840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x328844: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x328844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x328848: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x328848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32884c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x32884cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328850: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x328850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328854: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x328854u;
    SET_GPR_U32(ctx, 31, 0x32885Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x328854u, 0x32885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32885Cu;
label_32885c:
    // 0x32885c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32885cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x328860u;
}
