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

// Function: entry_0028e4d4
// Address: 0x28e4d4 - 0x28e500
void entry_0028e4d4_0x28e4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e4d4_0x28e4d4");
#endif

    switch (ctx->pc) {
        case 0x28e4e4u: goto label_28e4e4;
        default: break;
    }

    ctx->pc = 0x28e4d4u;

    // 0x28e4d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28e4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28e4d8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x28e4d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28e4dc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28E4DCu;
    SET_GPR_U32(ctx, 31, 0x28E4E4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28E4DCu, 0x28E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4E4u;
label_28e4e4:
    // 0x28e4e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28e4e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e4e8: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x28e4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x28e4ec: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x28e4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x28e4f0: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x28e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x28e4f4: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x28e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x28e4f8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x28E4F8u;
    {
        const bool branch_taken_0x28e4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e4f8) {
            ctx->pc = 0x28E5FCu;
            return;
        }
    }
    ctx->pc = 0x28E500u;
}
