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

// Function: entry_0012d9d0
// Address: 0x12d9d0 - 0x12d9fc
void entry_0012d9d0_0x12d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d9d0_0x12d9d0");
#endif

    switch (ctx->pc) {
        case 0x12d9f8u: goto label_12d9f8;
        default: break;
    }

    ctx->pc = 0x12d9d0u;

    // 0x12d9d0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12d9d4: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x12d9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12d9d8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x12d9d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12d9dc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12d9e0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x12d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x12d9e4: 0x24040506  addiu       $a0, $zero, 0x506
    ctx->pc = 0x12d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x12d9e8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d9ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d9ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d9f0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12D9F0u;
    SET_GPR_U32(ctx, 31, 0x12D9F8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12D9F0u, 0x12D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D9F8u;
label_12d9f8:
    // 0x12d9f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12d9f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x12d9fcu;
}
