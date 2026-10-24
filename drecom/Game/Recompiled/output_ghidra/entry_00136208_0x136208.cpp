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

// Function: entry_00136208
// Address: 0x136208 - 0x136228
void entry_00136208_0x136208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136208_0x136208");
#endif

    switch (ctx->pc) {
        case 0x136220u: goto label_136220;
        default: break;
    }

    ctx->pc = 0x136208u;

    // 0x136208: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x136208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13620c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x13620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x136210: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x136210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x136214: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x136214u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x136218: 0xc04d5a0  jal         func_135680
    ctx->pc = 0x136218u;
    SET_GPR_U32(ctx, 31, 0x136220u);
    ctx->pc = 0x135680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135680u, 0x136218u, 0x136220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136220u;
label_136220:
    // 0x136220: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x136220u;
    {
        const bool branch_taken_0x136220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136220) {
            ctx->pc = 0x1362D4u;
            return;
        }
    }
    ctx->pc = 0x136228u;
}
