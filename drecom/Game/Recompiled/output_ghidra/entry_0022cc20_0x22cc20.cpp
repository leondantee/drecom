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

// Function: entry_0022cc20
// Address: 0x22cc20 - 0x22cc48
void entry_0022cc20_0x22cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cc20_0x22cc20");
#endif

    switch (ctx->pc) {
        case 0x22cc44u: goto label_22cc44;
        default: break;
    }

    ctx->pc = 0x22cc20u;

    // 0x22cc20: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22cc24: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x22cc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22cc28: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22cc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22cc2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc30: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x22cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x22cc34: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22cc38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22cc38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22cc3c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22CC3Cu;
    SET_GPR_U32(ctx, 31, 0x22CC44u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22CC3Cu, 0x22CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC44u;
label_22cc44:
    // 0x22cc44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22cc44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x22cc48u;
}
