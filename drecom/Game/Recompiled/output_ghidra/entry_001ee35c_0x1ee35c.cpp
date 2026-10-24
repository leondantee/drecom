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

// Function: entry_001ee35c
// Address: 0x1ee35c - 0x1ee39c
void entry_001ee35c_0x1ee35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee35c_0x1ee35c");
#endif

    switch (ctx->pc) {
        case 0x1ee394u: goto label_1ee394;
        default: break;
    }

    ctx->pc = 0x1ee35cu;

    // 0x1ee35c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee360: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee364: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ee364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ee368: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ee368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ee36c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EE36Cu;
    {
        const bool branch_taken_0x1ee36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee36c) {
            ctx->pc = 0x1EE39Cu;
            return;
        }
    }
    ctx->pc = 0x1EE374u;
    // 0x1ee374: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee378: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee37c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee380: 0x24067808  addiu       $a2, $zero, 0x7808
    ctx->pc = 0x1ee380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30728));
    // 0x1ee384: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee388: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee38c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE38Cu;
    SET_GPR_U32(ctx, 31, 0x1EE394u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE38Cu, 0x1EE394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE394u;
label_1ee394:
    // 0x1ee394: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE394u;
    {
        const bool branch_taken_0x1ee394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee394) {
            ctx->pc = 0x1EE3BCu;
            return;
        }
    }
    ctx->pc = 0x1EE39Cu;
}
