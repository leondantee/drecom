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

// Function: entry_00207d38
// Address: 0x207d38 - 0x207d90
void entry_00207d38_0x207d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207d38_0x207d38");
#endif

    switch (ctx->pc) {
        case 0x207d60u: goto label_207d60;
        case 0x207d88u: goto label_207d88;
        default: break;
    }

    ctx->pc = 0x207d38u;

    // 0x207d38: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d3c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207d3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207d40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207d44: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x207d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x207d48: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x207D48u;
    {
        const bool branch_taken_0x207d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d48) {
            ctx->pc = 0x207E78u;
            return;
        }
    }
    ctx->pc = 0x207D50u;
    // 0x207d50: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d54: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x207d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x207d58: 0xc0ba6b8  jal         func_2E9AE0
    ctx->pc = 0x207D58u;
    SET_GPR_U32(ctx, 31, 0x207D60u);
    ctx->pc = 0x2E9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9AE0u, 0x207D58u, 0x207D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D60u;
label_207d60:
    // 0x207d60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207d64: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x207d64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x207d68: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x207d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x207d6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x207d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207d70: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x207D70u;
    {
        const bool branch_taken_0x207d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d70) {
            ctx->pc = 0x207E78u;
            return;
        }
    }
    ctx->pc = 0x207D78u;
    // 0x207d78: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207d7c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x207d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x207d80: 0xc0bad88  jal         func_2EB620
    ctx->pc = 0x207D80u;
    SET_GPR_U32(ctx, 31, 0x207D88u);
    ctx->pc = 0x2EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB620u, 0x207D80u, 0x207D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D88u;
label_207d88:
    // 0x207d88: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x207D88u;
    {
        const bool branch_taken_0x207d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d88) {
            ctx->pc = 0x207E78u;
            return;
        }
    }
    ctx->pc = 0x207D90u;
}
