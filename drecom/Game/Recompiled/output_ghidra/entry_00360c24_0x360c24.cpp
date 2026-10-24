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

// Function: entry_00360c24
// Address: 0x360c24 - 0x360c40
void entry_00360c24_0x360c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360c24_0x360c24");
#endif

    switch (ctx->pc) {
        case 0x360c34u: goto label_360c34;
        default: break;
    }

    ctx->pc = 0x360c24u;

    // 0x360c24: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360c28: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x360c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x360c2c: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x360C2Cu;
    SET_GPR_U32(ctx, 31, 0x360C34u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x360C2Cu, 0x360C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360C34u;
label_360c34:
    // 0x360c34: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x360c34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360c38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x360C38u;
    {
        const bool branch_taken_0x360c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360c38) {
            ctx->pc = 0x360C68u;
            return;
        }
    }
    ctx->pc = 0x360C40u;
}
