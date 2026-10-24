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

// Function: entry_00119b84
// Address: 0x119b84 - 0x119ba4
void entry_00119b84_0x119b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119b84_0x119b84");
#endif

    switch (ctx->pc) {
        case 0x119b90u: goto label_119b90;
        default: break;
    }

    ctx->pc = 0x119b84u;

    // 0x119b84: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x119b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x119b88: 0xc046438  jal         func_1190E0
    ctx->pc = 0x119B88u;
    SET_GPR_U32(ctx, 31, 0x119B90u);
    ctx->pc = 0x119B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B88u;
    // 0x119b8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1190E0u, 0x119B88u, 0x119B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B90u;
label_119b90:
    // 0x119b90: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x119b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x119b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119b98: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x119b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x119b9c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x119b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x119ba0: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x119ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    ctx->pc = 0x119ba4u;
}
