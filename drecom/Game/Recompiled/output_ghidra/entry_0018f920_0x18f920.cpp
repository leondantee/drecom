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

// Function: entry_0018f920
// Address: 0x18f920 - 0x18f958
void entry_0018f920_0x18f920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f920_0x18f920");
#endif

    switch (ctx->pc) {
        case 0x18f938u: goto label_18f938;
        default: break;
    }

    ctx->pc = 0x18f920u;

    // 0x18f920: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18f920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18f924: 0x8c33a600  lw          $s3, -0x5A00($at)
    ctx->pc = 0x18f924u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x53A600u));
    // 0x18f928: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18f928u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x18f92c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x18f92cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x18f930: 0xc06b018  jal         func_1AC060
    ctx->pc = 0x18F930u;
    SET_GPR_U32(ctx, 31, 0x18F938u);
    ctx->pc = 0x1AC060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC060u, 0x18F930u, 0x18F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F938u;
label_18f938:
    // 0x18f938: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18f938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18f93c: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x18f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x18f940: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x18f940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18f944: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18f944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18f948: 0xac23a600  sw          $v1, -0x5A00($at)
    ctx->pc = 0x18f948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A600u, _value); } while (0);
    // 0x18f94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f950: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x18F950u;
    {
        const bool branch_taken_0x18f950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f950) {
            ctx->pc = 0x18FA60u;
            return;
        }
    }
    ctx->pc = 0x18F958u;
}
