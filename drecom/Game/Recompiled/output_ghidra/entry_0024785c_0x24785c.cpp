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

// Function: entry_0024785c
// Address: 0x24785c - 0x247880
void entry_0024785c_0x24785c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024785c_0x24785c");
#endif

    ctx->pc = 0x24785cu;

    // 0x24785c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247860: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x247860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x247864: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x247864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x247868: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x247868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24786c: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x24786cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x247870: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x247870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x247874: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x247874u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x247878: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x247878u;
    SET_GPR_U32(ctx, 31, 0x247880u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x247878u, 0x247880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247880u;
}
