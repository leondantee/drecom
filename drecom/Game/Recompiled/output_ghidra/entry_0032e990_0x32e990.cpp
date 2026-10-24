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

// Function: entry_0032e990
// Address: 0x32e990 - 0x32e9a8
void entry_0032e990_0x32e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032e990_0x32e990");
#endif

    ctx->pc = 0x32e990u;

    // 0x32e990: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32e990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32e994: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x32e994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x32e998: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32e998u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32e99c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32e99cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32e9a0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x32E9A0u;
    SET_GPR_U32(ctx, 31, 0x32E9A8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x32E9A0u, 0x32E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E9A8u;
}
