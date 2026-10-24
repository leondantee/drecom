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

// Function: entry_0012f910
// Address: 0x12f910 - 0x12f938
void entry_0012f910_0x12f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f910_0x12f910");
#endif

    ctx->pc = 0x12f910u;

    // 0x12f910: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f914: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12f914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f918: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12f918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12f91c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12f91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12f920: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12f920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f924: 0x24040506  addiu       $a0, $zero, 0x506
    ctx->pc = 0x12f924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x12f928: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12f928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12f92c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f92cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f930: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12F930u;
    SET_GPR_U32(ctx, 31, 0x12F938u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12F930u, 0x12F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F938u;
}
