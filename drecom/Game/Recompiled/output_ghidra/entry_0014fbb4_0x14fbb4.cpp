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

// Function: entry_0014fbb4
// Address: 0x14fbb4 - 0x14fbd8
void entry_0014fbb4_0x14fbb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fbb4_0x14fbb4");
#endif

    switch (ctx->pc) {
        case 0x14fbd0u: goto label_14fbd0;
        default: break;
    }

    ctx->pc = 0x14fbb4u;

    // 0x14fbb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14fbb8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14fbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14fbbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FBBCu;
    {
        const bool branch_taken_0x14fbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fbbc) {
            ctx->pc = 0x14FBD8u;
            return;
        }
    }
    ctx->pc = 0x14FBC4u;
    // 0x14fbc4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x14fbc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14fbc8: 0xc095df0  jal         func_2577C0
    ctx->pc = 0x14FBC8u;
    SET_GPR_U32(ctx, 31, 0x14FBD0u);
    ctx->pc = 0x2577C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577C0u, 0x14FBC8u, 0x14FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBD0u;
label_14fbd0:
    // 0x14fbd0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14FBD0u;
    {
        const bool branch_taken_0x14fbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fbd0) {
            ctx->pc = 0x14FC10u;
            return;
        }
    }
    ctx->pc = 0x14FBD8u;
}
