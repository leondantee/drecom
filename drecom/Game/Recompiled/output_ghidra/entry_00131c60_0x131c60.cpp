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

// Function: entry_00131c60
// Address: 0x131c60 - 0x131c88
void entry_00131c60_0x131c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c60_0x131c60");
#endif

    ctx->pc = 0x131c60u;

    // 0x131c60: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x131c64: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131c68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131c6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c70: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x131c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131c74: 0x24040509  addiu       $a0, $zero, 0x509
    ctx->pc = 0x131c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x131c78: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x131c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x131c7c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131c7cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131c80: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131C80u;
    SET_GPR_U32(ctx, 31, 0x131C88u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131C80u, 0x131C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C88u;
}
