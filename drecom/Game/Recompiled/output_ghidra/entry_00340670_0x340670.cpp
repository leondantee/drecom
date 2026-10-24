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

// Function: entry_00340670
// Address: 0x340670 - 0x340690
void entry_00340670_0x340670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340670_0x340670");
#endif

    switch (ctx->pc) {
        case 0x340684u: goto label_340684;
        default: break;
    }

    ctx->pc = 0x340670u;

    // 0x340670: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x340670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340674: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340678: 0xc44c12cc  lwc1        $f12, 0x12CC($v0)
    ctx->pc = 0x340678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34067c: 0xc0d0358  jal         func_340D60
    ctx->pc = 0x34067Cu;
    SET_GPR_U32(ctx, 31, 0x340684u);
    ctx->pc = 0x340D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340D60u, 0x34067Cu, 0x340684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340684u;
label_340684:
    // 0x340684: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340684u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340688: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x340688u;
    {
        const bool branch_taken_0x340688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340688) {
            ctx->pc = 0x3406C8u;
            return;
        }
    }
    ctx->pc = 0x340690u;
}
