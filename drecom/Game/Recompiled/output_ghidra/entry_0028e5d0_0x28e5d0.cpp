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

// Function: entry_0028e5d0
// Address: 0x28e5d0 - 0x28e5fc
void entry_0028e5d0_0x28e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e5d0_0x28e5d0");
#endif

    switch (ctx->pc) {
        case 0x28e5e0u: goto label_28e5e0;
        default: break;
    }

    ctx->pc = 0x28e5d0u;

    // 0x28e5d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28e5d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e5d4: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28e5d4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e5d8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28E5D8u;
    SET_GPR_U32(ctx, 31, 0x28E5E0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28E5D8u, 0x28E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E5E0u;
label_28e5e0:
    // 0x28e5e0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x28e5e0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e5e4: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x28e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x28e5e8: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x28e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28e5ec: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x28e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x28e5f0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x28e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x28e5f4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x28e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x28e5f8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x28e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    ctx->pc = 0x28e5fcu;
}
