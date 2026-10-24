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

// Function: entry_0023394c
// Address: 0x23394c - 0x233964
void entry_0023394c_0x23394c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023394c_0x23394c");
#endif

    switch (ctx->pc) {
        case 0x233954u: goto label_233954;
        default: break;
    }

    ctx->pc = 0x23394cu;

    // 0x23394c: 0xc0576b8  jal         func_15DAE0
    ctx->pc = 0x23394Cu;
    SET_GPR_U32(ctx, 31, 0x233954u);
    ctx->pc = 0x15DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DAE0u, 0x23394Cu, 0x233954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233954u;
label_233954:
    // 0x233954: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x233954u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x233958: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x233958u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x23395c: 0x3a660001  xori        $a2, $s3, 0x1
    ctx->pc = 0x23395cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x233960: 0x2cc30001  sltiu       $v1, $a2, 0x1
    ctx->pc = 0x233960u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x233964u;
}
