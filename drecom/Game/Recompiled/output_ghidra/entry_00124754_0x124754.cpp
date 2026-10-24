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

// Function: entry_00124754
// Address: 0x124754 - 0x124774
void entry_00124754_0x124754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124754_0x124754");
#endif

    ctx->pc = 0x124754u;

    // 0x124754: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124758: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12475c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12475cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124760: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x124760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x124764: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x124764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124768: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12476c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12476Cu;
    SET_GPR_U32(ctx, 31, 0x124774u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12476Cu, 0x124774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124774u;
}
