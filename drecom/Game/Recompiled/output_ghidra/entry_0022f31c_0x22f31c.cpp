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

// Function: entry_0022f31c
// Address: 0x22f31c - 0x22f344
void entry_0022f31c_0x22f31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f31c_0x22f31c");
#endif

    switch (ctx->pc) {
        case 0x22f33cu: goto label_22f33c;
        default: break;
    }

    ctx->pc = 0x22f31cu;

    // 0x22f31c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f320: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f324: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22f324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22f328: 0x2406781a  addiu       $a2, $zero, 0x781A
    ctx->pc = 0x22f328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30746));
    // 0x22f32c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22f32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f330: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22f330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f334: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22F334u;
    SET_GPR_U32(ctx, 31, 0x22F33Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22F334u, 0x22F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F33Cu;
label_22f33c:
    // 0x22f33c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x22F33Cu;
    {
        const bool branch_taken_0x22f33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f33c) {
            ctx->pc = 0x22F3E0u;
            return;
        }
    }
    ctx->pc = 0x22F344u;
}
