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

// Function: entry_001ef85c
// Address: 0x1ef85c - 0x1ef880
void entry_001ef85c_0x1ef85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef85c_0x1ef85c");
#endif

    ctx->pc = 0x1ef85cu;

    // 0x1ef85c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1ef85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1ef860: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ef860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ef864: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ef864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef868: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef86c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x1ef86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x1ef870: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1ef870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ef874: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ef874u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef878: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EF878u;
    SET_GPR_U32(ctx, 31, 0x1EF880u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EF878u, 0x1EF880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF880u;
}
