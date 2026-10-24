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

// Function: entry_001904dc
// Address: 0x1904dc - 0x190514
void entry_001904dc_0x1904dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001904dc_0x1904dc");
#endif

    switch (ctx->pc) {
        case 0x1904f4u: goto label_1904f4;
        default: break;
    }

    ctx->pc = 0x1904dcu;

    // 0x1904dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1904dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1904e0: 0x8c30a600  lw          $s0, -0x5A00($at)
    ctx->pc = 0x1904e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A600u));
    // 0x1904e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1904e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1904e8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1904e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1904ec: 0xc06b018  jal         func_1AC060
    ctx->pc = 0x1904ECu;
    SET_GPR_U32(ctx, 31, 0x1904F4u);
    ctx->pc = 0x1AC060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC060u, 0x1904ECu, 0x1904F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1904F4u;
label_1904f4:
    // 0x1904f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1904f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1904f8: 0x8c23a600  lw          $v1, -0x5A00($at)
    ctx->pc = 0x1904f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A600u));
    // 0x1904fc: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1904fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x190500: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190504: 0xac22a600  sw          $v0, -0x5A00($at)
    ctx->pc = 0x190504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A600u, _value); } while (0);
    // 0x190508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19050c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x19050Cu;
    {
        const bool branch_taken_0x19050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19050c) {
            ctx->pc = 0x190628u;
            return;
        }
    }
    ctx->pc = 0x190514u;
}
