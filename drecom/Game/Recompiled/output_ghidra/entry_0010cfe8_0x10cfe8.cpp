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

// Function: entry_0010cfe8
// Address: 0x10cfe8 - 0x10cffc
void entry_0010cfe8_0x10cfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cfe8_0x10cfe8");
#endif

    switch (ctx->pc) {
        case 0x10cff0u: goto label_10cff0;
        default: break;
    }

    ctx->pc = 0x10cfe8u;

    // 0x10cfe8: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10CFE8u;
    SET_GPR_U32(ctx, 31, 0x10CFF0u);
    ctx->pc = 0x10CFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFE8u;
    // 0x10cfec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10CFF0u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10CFF0u) { return; }
    ctx->pc = 0x10CFF0u;
label_10cff0:
    // 0x10cff0: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CFF0u;
    {
        const bool branch_taken_0x10cff0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10cff0) {
            ctx->pc = 0x10CFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFF0u;
            // 0x10cff4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CFFCu;
            return;
        }
    }
    ctx->pc = 0x10CFF8u;
    // 0x10cff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10cff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10cffcu;
}
