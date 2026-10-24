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

// Function: entry_0026f0c8
// Address: 0x26f0c8 - 0x26f100
void entry_0026f0c8_0x26f0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f0c8_0x26f0c8");
#endif

    switch (ctx->pc) {
        case 0x26f0f8u: goto label_26f0f8;
        default: break;
    }

    ctx->pc = 0x26f0c8u;

    // 0x26f0c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f0cc: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x26f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x26f0d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26F0D0u;
    {
        const bool branch_taken_0x26f0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f0d0) {
            ctx->pc = 0x26F100u;
            return;
        }
    }
    ctx->pc = 0x26F0D8u;
    // 0x26f0d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f0dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f0e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26f0e4: 0x24060079  addiu       $a2, $zero, 0x79
    ctx->pc = 0x26f0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x26f0e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f0ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f0ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26f0f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26F0F0u;
    SET_GPR_U32(ctx, 31, 0x26F0F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F0F0u, 0x26F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0F8u;
label_26f0f8:
    // 0x26f0f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26F0F8u;
    {
        const bool branch_taken_0x26f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f0f8) {
            ctx->pc = 0x26F120u;
            return;
        }
    }
    ctx->pc = 0x26F100u;
}
