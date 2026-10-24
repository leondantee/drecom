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

// Function: entry_00328bd4
// Address: 0x328bd4 - 0x328c00
void entry_00328bd4_0x328bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328bd4_0x328bd4");
#endif

    switch (ctx->pc) {
        case 0x328bfcu: goto label_328bfc;
        default: break;
    }

    ctx->pc = 0x328bd4u;

    // 0x328bd4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328bd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328bdc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x328bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328be0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x328be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x328be4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x328be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x328be8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328bec: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x328becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328bf0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x328bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328bf4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x328BF4u;
    SET_GPR_U32(ctx, 31, 0x328BFCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x328BF4u, 0x328BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BFCu;
label_328bfc:
    // 0x328bfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x328bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x328c00u;
}
