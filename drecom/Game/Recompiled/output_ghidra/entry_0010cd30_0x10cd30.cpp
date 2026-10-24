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

// Function: entry_0010cd30
// Address: 0x10cd30 - 0x10cd48
void entry_0010cd30_0x10cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cd30_0x10cd30");
#endif

    switch (ctx->pc) {
        case 0x10cd38u: goto label_10cd38;
        default: break;
    }

    ctx->pc = 0x10cd30u;

    // 0x10cd30: 0xc0432e4  jal         func_10CB90
    ctx->pc = 0x10CD30u;
    SET_GPR_U32(ctx, 31, 0x10CD38u);
    ctx->pc = 0x10CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD30u;
    // 0x10cd34: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB90u, 0x10CD30u, 0x10CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD38u;
label_10cd38:
    // 0x10cd38: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x10cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x10cd3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10cd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10cd40: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x10cd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x10cd44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10cd44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x10cd48u;
}
