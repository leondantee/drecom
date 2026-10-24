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

// Function: entry_00108e58
// Address: 0x108e58 - 0x108e88
void entry_00108e58_0x108e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108e58_0x108e58");
#endif

    switch (ctx->pc) {
        case 0x108e7cu: goto label_108e7c;
        default: break;
    }

    ctx->pc = 0x108e58u;

label_108e58:
    // 0x108e58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108e5c: 0x0  nop
    ctx->pc = 0x108e5cu;
    // NOP
    // 0x108e60: 0x0  nop
    ctx->pc = 0x108e60u;
    // NOP
    // 0x108e64: 0x0  nop
    ctx->pc = 0x108e64u;
    // NOP
    // 0x108e68: 0x0  nop
    ctx->pc = 0x108e68u;
    // NOP
    // 0x108e6c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108E6Cu;
    {
        const bool branch_taken_0x108e6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108e6c) {
            ctx->pc = 0x108E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e58;
        }
    }
    ctx->pc = 0x108E74u;
    // 0x108e74: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x108E74u;
    SET_GPR_U32(ctx, 31, 0x108E7Cu);
    ctx->pc = 0x108E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E74u;
    // 0x108e78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x108E74u, 0x108E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E7Cu;
label_108e7c:
    // 0x108e7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108e80: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x108e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x108e84: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x108e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    ctx->pc = 0x108e88u;
}
