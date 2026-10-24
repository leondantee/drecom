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

// Function: entry_0032ea50
// Address: 0x32ea50 - 0x32ea68
void entry_0032ea50_0x32ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ea50_0x32ea50");
#endif

    ctx->pc = 0x32ea50u;

    // 0x32ea50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32ea50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32ea54: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x32ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x32ea58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32ea58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ea5c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32ea5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32ea60: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x32EA60u;
    SET_GPR_U32(ctx, 31, 0x32EA68u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x32EA60u, 0x32EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA68u;
}
