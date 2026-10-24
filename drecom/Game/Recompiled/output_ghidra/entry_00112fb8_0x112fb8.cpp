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

// Function: entry_00112fb8
// Address: 0x112fb8 - 0x112ff8
void entry_00112fb8_0x112fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112fb8_0x112fb8");
#endif

    switch (ctx->pc) {
        case 0x112fe4u: goto label_112fe4;
        default: break;
    }

    ctx->pc = 0x112fb8u;

    // 0x112fb8: 0x3d4a821  addu        $s5, $fp, $s4
    ctx->pc = 0x112fb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x112fbc: 0x8fa4023c  lw          $a0, 0x23C($sp)
    ctx->pc = 0x112fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x112fc0: 0x1580c0  sll         $s0, $s5, 3
    ctx->pc = 0x112fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x112fc4: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x112fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x112fc8: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x112fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x112fcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112fd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x112fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112fd8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x112fd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fdc: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x112FDCu;
    SET_GPR_U32(ctx, 31, 0x112FE4u);
    ctx->pc = 0x112FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FDCu;
    // 0x112fe0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x112FDCu, 0x112FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FE4u;
label_112fe4:
    // 0x112fe4: 0x16e00017  bnez        $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x112FE4u;
    {
        const bool branch_taken_0x112fe4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x112FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FE4u;
        // 0x112fe8: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fe4) {
            ctx->pc = 0x113044u;
            return;
        }
    }
    ctx->pc = 0x112FECu;
    // 0x112fec: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x112fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x112ff0: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x112ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x112ff4: 0x0  nop
    ctx->pc = 0x112ff4u;
    // NOP
    ctx->pc = 0x112ff8u;
}
