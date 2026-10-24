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

// Function: entry_0010cf84
// Address: 0x10cf84 - 0x10cf98
void entry_0010cf84_0x10cf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cf84_0x10cf84");
#endif

    switch (ctx->pc) {
        case 0x10cf8cu: goto label_10cf8c;
        default: break;
    }

    ctx->pc = 0x10cf84u;

    // 0x10cf84: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10CF84u;
    SET_GPR_U32(ctx, 31, 0x10CF8Cu);
    ctx->pc = 0x10CF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF84u;
    // 0x10cf88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10CF8Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10CF8Cu) { return; }
    ctx->pc = 0x10CF8Cu;
label_10cf8c:
    // 0x10cf8c: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CF8Cu;
    {
        const bool branch_taken_0x10cf8c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10cf8c) {
            ctx->pc = 0x10CF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CF8Cu;
            // 0x10cf90: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CF98u;
            return;
        }
    }
    ctx->pc = 0x10CF94u;
    // 0x10cf94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10cf94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10cf98u;
}
