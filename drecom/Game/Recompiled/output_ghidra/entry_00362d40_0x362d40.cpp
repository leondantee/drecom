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

// Function: entry_00362d40
// Address: 0x362d40 - 0x362d6c
void entry_00362d40_0x362d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362d40_0x362d40");
#endif

    switch (ctx->pc) {
        case 0x362d60u: goto label_362d60;
        default: break;
    }

    ctx->pc = 0x362d40u;

    // 0x362d40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d44: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x362d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x362d48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x362d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x362d4c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x362D4Cu;
    {
        const bool branch_taken_0x362d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x362d4c) {
            ctx->pc = 0x362D6Cu;
            return;
        }
    }
    ctx->pc = 0x362D54u;
    // 0x362d54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x362d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d58: 0xc05cd10  jal         func_173440
    ctx->pc = 0x362D58u;
    SET_GPR_U32(ctx, 31, 0x362D60u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x362D58u, 0x362D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D60u;
label_362d60:
    // 0x362d60: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x362d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d64: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x362D64u;
    SET_GPR_U32(ctx, 31, 0x362D6Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x362D64u, 0x362D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D6Cu;
}
