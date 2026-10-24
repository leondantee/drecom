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

// Function: caseD_1
// Address: 0x364d3c - 0x364d98
void caseD_1_0x364d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x364d3c");
#endif

    switch (ctx->pc) {
        case 0x364d60u: goto label_364d60;
        case 0x364d84u: goto label_364d84;
        default: break;
    }

    ctx->pc = 0x364d3cu;

    // 0x364d3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364d40: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x364d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364d48: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x364d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x364d4c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x364D4Cu;
    {
        const bool branch_taken_0x364d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364d4c) {
            ctx->pc = 0x364DD0u;
            return;
        }
    }
    ctx->pc = 0x364D54u;
    // 0x364d54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x364d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x364d58: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x364D58u;
    SET_GPR_U32(ctx, 31, 0x364D60u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x364D58u, 0x364D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D60u;
label_364d60:
    // 0x364d60: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364d64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364d68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x364d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x364d6c: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x364d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x364d70: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x364d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x364d74: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x364d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x364d78: 0x24478d00  addiu       $a3, $v0, -0x7300
    ctx->pc = 0x364d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
    // 0x364d7c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x364D7Cu;
    SET_GPR_U32(ctx, 31, 0x364D84u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x364D7Cu, 0x364D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D84u;
label_364d84:
    // 0x364d84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x364D84u;
    {
        const bool branch_taken_0x364d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364d84) {
            ctx->pc = 0x364D98u;
            return;
        }
    }
    ctx->pc = 0x364D8Cu;
    // 0x364d8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364d90: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x364D90u;
    SET_GPR_U32(ctx, 31, 0x364D98u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x364D90u, 0x364D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D98u;
}
