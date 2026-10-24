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

// Function: entry_001b256c
// Address: 0x1b256c - 0x1b25b0
void entry_001b256c_0x1b256c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b256c_0x1b256c");
#endif

    switch (ctx->pc) {
        case 0x1b257cu: goto label_1b257c;
        case 0x1b2594u: goto label_1b2594;
        case 0x1b25a0u: goto label_1b25a0;
        default: break;
    }

    ctx->pc = 0x1b256cu;

    // 0x1b256c: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x1b256cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1b2570: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1b2570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2574: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2574u;
    SET_GPR_U32(ctx, 31, 0x1B257Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B257Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B257Cu) { return; }
    ctx->pc = 0x1B257Cu;
label_1b257c:
    // 0x1b257c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2580: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2584: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1b2584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2588: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1b2588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b258c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B258Cu;
    SET_GPR_U32(ctx, 31, 0x1B2594u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B258Cu, 0x1B2594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2594u;
label_1b2594:
    // 0x1b2594: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2598: 0xc067588  jal         func_19D620
    ctx->pc = 0x1B2598u;
    SET_GPR_U32(ctx, 31, 0x1B25A0u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1B2598u, 0x1B25A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25A0u;
label_1b25a0:
    // 0x1b25a0: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1b25a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1b25a4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x1b25a4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b25a8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1B25A8u;
    {
        const bool branch_taken_0x1b25a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b25a8) {
            ctx->pc = 0x1B28A8u;
            return;
        }
    }
    ctx->pc = 0x1B25B0u;
}
