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

// Function: entry_0010d054
// Address: 0x10d054 - 0x10d068
void entry_0010d054_0x10d054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d054_0x10d054");
#endif

    switch (ctx->pc) {
        case 0x10d05cu: goto label_10d05c;
        default: break;
    }

    ctx->pc = 0x10d054u;

    // 0x10d054: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10D054u;
    SET_GPR_U32(ctx, 31, 0x10D05Cu);
    ctx->pc = 0x10D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D054u;
    // 0x10d058: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10D05Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D05Cu) { return; }
    ctx->pc = 0x10D05Cu;
label_10d05c:
    // 0x10d05c: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10D05Cu;
    {
        const bool branch_taken_0x10d05c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10d05c) {
            ctx->pc = 0x10D060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D05Cu;
            // 0x10d060: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D068u;
            return;
        }
    }
    ctx->pc = 0x10D064u;
    // 0x10d064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10d068u;
}
