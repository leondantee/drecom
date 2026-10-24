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

// Function: entry_0012f8b0
// Address: 0x12f8b0 - 0x12f8e0
void entry_0012f8b0_0x12f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f8b0_0x12f8b0");
#endif

    switch (ctx->pc) {
        case 0x12f8d8u: goto label_12f8d8;
        default: break;
    }

    ctx->pc = 0x12f8b0u;

    // 0x12f8b0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f8b4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f8b8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12f8bc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12f8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12f8c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12f8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f8c4: 0x24040504  addiu       $a0, $zero, 0x504
    ctx->pc = 0x12f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x12f8c8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12f8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12f8cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f8ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f8d0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12F8D0u;
    SET_GPR_U32(ctx, 31, 0x12F8D8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12F8D0u, 0x12F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8D8u;
label_12f8d8:
    // 0x12f8d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12F8D8u;
    {
        const bool branch_taken_0x12f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f8d8) {
            ctx->pc = 0x12F938u;
            return;
        }
    }
    ctx->pc = 0x12F8E0u;
}
