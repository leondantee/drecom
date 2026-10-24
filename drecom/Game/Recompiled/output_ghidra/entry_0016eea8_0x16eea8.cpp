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

// Function: entry_0016eea8
// Address: 0x16eea8 - 0x16eedc
void entry_0016eea8_0x16eea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eea8_0x16eea8");
#endif

    switch (ctx->pc) {
        case 0x16eed4u: goto label_16eed4;
        default: break;
    }

    ctx->pc = 0x16eea8u;

    // 0x16eea8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x16eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x16eeac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16EEACu;
    {
        const bool branch_taken_0x16eeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eeac) {
            ctx->pc = 0x16EEDCu;
            return;
        }
    }
    ctx->pc = 0x16EEB4u;
    // 0x16eeb4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x16eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x16eeb8: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x16eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16eebc: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x16eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x16eec0: 0xae0401f8  sw          $a0, 0x1F8($s0)
    ctx->pc = 0x16eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 4));
    // 0x16eec4: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x16eec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x16eec8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x16eec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x16eecc: 0xc05bdb8  jal         func_16F6E0
    ctx->pc = 0x16EECCu;
    SET_GPR_U32(ctx, 31, 0x16EED4u);
    ctx->pc = 0x16F6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F6E0u, 0x16EECCu, 0x16EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EED4u;
label_16eed4:
    // 0x16eed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16EED4u;
    {
        const bool branch_taken_0x16eed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eed4) {
            ctx->pc = 0x16EEE8u;
            return;
        }
    }
    ctx->pc = 0x16EEDCu;
}
