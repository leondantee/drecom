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

// Function: entry_0018c8d4
// Address: 0x18c8d4 - 0x18c90c
void entry_0018c8d4_0x18c8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c8d4_0x18c8d4");
#endif

    switch (ctx->pc) {
        case 0x18c904u: goto label_18c904;
        default: break;
    }

    ctx->pc = 0x18c8d4u;

    // 0x18c8d4: 0xdfa300d8  ld          $v1, 0xD8($sp)
    ctx->pc = 0x18c8d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x18c8d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18c8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18c8dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18c8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18c8e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18c8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18c8e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c8e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c8ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18c8ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18c8f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C8F0u;
    {
        const bool branch_taken_0x18c8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c8f0) {
            ctx->pc = 0x18C90Cu;
            return;
        }
    }
    ctx->pc = 0x18C8F8u;
    // 0x18c8f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18c8fc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18C8FCu;
    SET_GPR_U32(ctx, 31, 0x18C904u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18C8FCu, 0x18C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C904u;
label_18c904:
    // 0x18c904: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18C904u;
    {
        const bool branch_taken_0x18c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c904) {
            ctx->pc = 0x18C944u;
            return;
        }
    }
    ctx->pc = 0x18C90Cu;
}
