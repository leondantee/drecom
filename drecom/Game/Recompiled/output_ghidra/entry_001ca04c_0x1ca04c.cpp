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

// Function: entry_001ca04c
// Address: 0x1ca04c - 0x1ca074
void entry_001ca04c_0x1ca04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca04c_0x1ca04c");
#endif

    switch (ctx->pc) {
        case 0x1ca06cu: goto label_1ca06c;
        default: break;
    }

    ctx->pc = 0x1ca04cu;

    // 0x1ca04c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca050: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca054: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ca054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ca058: 0x2406078f  addiu       $a2, $zero, 0x78F
    ctx->pc = 0x1ca058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1935));
    // 0x1ca05c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca060: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ca060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca064: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CA064u;
    SET_GPR_U32(ctx, 31, 0x1CA06Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CA064u, 0x1CA06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA06Cu;
label_1ca06c:
    // 0x1ca06c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA06Cu;
    {
        const bool branch_taken_0x1ca06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca06c) {
            ctx->pc = 0x1CA0BCu;
            return;
        }
    }
    ctx->pc = 0x1CA074u;
}
