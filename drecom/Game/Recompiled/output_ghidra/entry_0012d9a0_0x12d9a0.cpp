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

// Function: entry_0012d9a0
// Address: 0x12d9a0 - 0x12d9d0
void entry_0012d9a0_0x12d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d9a0_0x12d9a0");
#endif

    switch (ctx->pc) {
        case 0x12d9c8u: goto label_12d9c8;
        default: break;
    }

    ctx->pc = 0x12d9a0u;

    // 0x12d9a0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x12d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x12d9a4: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x12d9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x12d9a8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x12d9a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12d9ac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12d9b0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12d9b4: 0x24040505  addiu       $a0, $zero, 0x505
    ctx->pc = 0x12d9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x12d9b8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x12d9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12d9bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d9bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d9c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12D9C0u;
    SET_GPR_U32(ctx, 31, 0x12D9C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12D9C0u, 0x12D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D9C8u;
label_12d9c8:
    // 0x12d9c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12D9C8u;
    {
        const bool branch_taken_0x12d9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d9c8) {
            ctx->pc = 0x12D9FCu;
            return;
        }
    }
    ctx->pc = 0x12D9D0u;
}
