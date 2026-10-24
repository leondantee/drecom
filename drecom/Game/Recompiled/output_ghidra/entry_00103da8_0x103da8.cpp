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

// Function: entry_00103da8
// Address: 0x103da8 - 0x103ddc
void entry_00103da8_0x103da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103da8_0x103da8");
#endif

    switch (ctx->pc) {
        case 0x103dc8u: goto label_103dc8;
        default: break;
    }

    ctx->pc = 0x103da8u;

    // 0x103da8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x103da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x103dac: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x103dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x103db0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x103DB0u;
    {
        const bool branch_taken_0x103db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103db0) {
            ctx->pc = 0x103DDCu;
            return;
        }
    }
    ctx->pc = 0x103DB8u;
    // 0x103db8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x103db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x103dbc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x103dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dc0: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x103DC0u;
    SET_GPR_U32(ctx, 31, 0x103DC8u);
    ctx->pc = 0x103DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DC0u;
    // 0x103dc4: 0x2484c5c0  addiu       $a0, $a0, -0x3A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x103DC0u, 0x103DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DC8u;
label_103dc8:
    // 0x103dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103dcc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x103dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x103dd0: 0xac623d08  sw          $v0, 0x3D08($v1)
    ctx->pc = 0x103dd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383D08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383D08u, _value); } while (0);
    // 0x103dd4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x103DD4u;
    {
        const bool branch_taken_0x103dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DD4u;
        // 0x103dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dd4) {
            ctx->pc = 0x104024u;
            return;
        }
    }
    ctx->pc = 0x103DDCu;
}
