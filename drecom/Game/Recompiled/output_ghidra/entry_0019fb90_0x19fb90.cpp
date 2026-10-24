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

// Function: entry_0019fb90
// Address: 0x19fb90 - 0x19fbb0
void entry_0019fb90_0x19fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb90_0x19fb90");
#endif

    switch (ctx->pc) {
        case 0x19fba4u: goto label_19fba4;
        default: break;
    }

    ctx->pc = 0x19fb90u;

    // 0x19fb90: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19fb94: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x19fb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19fb98: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19fb9c: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19FB9Cu;
    SET_GPR_U32(ctx, 31, 0x19FBA4u);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19FB9Cu, 0x19FBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FBA4u;
label_19fba4:
    // 0x19fba4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x19fba4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19fba8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FBA8u;
    {
        const bool branch_taken_0x19fba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fba8) {
            ctx->pc = 0x19FBC8u;
            return;
        }
    }
    ctx->pc = 0x19FBB0u;
}
