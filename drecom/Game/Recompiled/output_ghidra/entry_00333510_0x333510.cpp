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

// Function: entry_00333510
// Address: 0x333510 - 0x333534
void entry_00333510_0x333510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333510_0x333510");
#endif

    switch (ctx->pc) {
        case 0x333528u: goto label_333528;
        default: break;
    }

    ctx->pc = 0x333510u;

    // 0x333510: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x333510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x333514: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x333514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x333518: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x333518u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33351c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33351cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333520: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x333520u;
    SET_GPR_U32(ctx, 31, 0x333528u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x333520u, 0x333528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333528u;
label_333528:
    // 0x333528: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x333528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x33352c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x33352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x333530: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x333530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    ctx->pc = 0x333534u;
}
