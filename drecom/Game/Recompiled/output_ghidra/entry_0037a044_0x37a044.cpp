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

// Function: entry_0037a044
// Address: 0x37a044 - 0x37a05c
void entry_0037a044_0x37a044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a044_0x37a044");
#endif

    ctx->pc = 0x37a044u;

    // 0x37a044: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37a044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a048: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x37a048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37a04c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37a04cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a050: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37a050u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a054: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37A054u;
    SET_GPR_U32(ctx, 31, 0x37A05Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37A054u, 0x37A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A05Cu;
}
