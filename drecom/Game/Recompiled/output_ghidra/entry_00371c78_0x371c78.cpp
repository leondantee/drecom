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

// Function: entry_00371c78
// Address: 0x371c78 - 0x371cac
void entry_00371c78_0x371c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371c78_0x371c78");
#endif

    switch (ctx->pc) {
        case 0x371ca0u: goto label_371ca0;
        default: break;
    }

    ctx->pc = 0x371c78u;

    // 0x371c78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371c7c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x371C7Cu;
    {
        const bool branch_taken_0x371c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371c7c) {
            ctx->pc = 0x371CACu;
            return;
        }
    }
    ctx->pc = 0x371C84u;
    // 0x371c84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x371c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371c88: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x371c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x371c8c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x371c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x371c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371c94: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x371c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x371c98: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x371C98u;
    SET_GPR_U32(ctx, 31, 0x371CA0u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x371C98u, 0x371CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371CA0u;
label_371ca0:
    // 0x371ca0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x371ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x371ca4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x371CA4u;
    {
        const bool branch_taken_0x371ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371ca4) {
            ctx->pc = 0x371CC0u;
            return;
        }
    }
    ctx->pc = 0x371CACu;
}
