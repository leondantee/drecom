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

// Function: entry_001a9d94
// Address: 0x1a9d94 - 0x1a9db8
void entry_001a9d94_0x1a9d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9d94_0x1a9d94");
#endif

    ctx->pc = 0x1a9d94u;

    // 0x1a9d94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d98: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x1a9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x1a9d9c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1a9d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1a9da0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9da4: 0x2404010b  addiu       $a0, $zero, 0x10B
    ctx->pc = 0x1a9da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    // 0x1a9da8: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x1a9da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x1a9dac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a9dacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9db0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1A9DB0u;
    SET_GPR_U32(ctx, 31, 0x1A9DB8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1A9DB0u, 0x1A9DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9DB8u;
}
