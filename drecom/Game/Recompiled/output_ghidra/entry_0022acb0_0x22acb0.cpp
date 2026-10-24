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

// Function: entry_0022acb0
// Address: 0x22acb0 - 0x22acd4
void entry_0022acb0_0x22acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022acb0_0x22acb0");
#endif

    ctx->pc = 0x22acb0u;

    // 0x22acb0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22acb4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22acb8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22acb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22acbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22acbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22acc0: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x22acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x22acc4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22acc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22acc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22accc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22ACCCu;
    SET_GPR_U32(ctx, 31, 0x22ACD4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22ACCCu, 0x22ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACD4u;
}
