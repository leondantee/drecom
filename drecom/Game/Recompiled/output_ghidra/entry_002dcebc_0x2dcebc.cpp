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

// Function: entry_002dcebc
// Address: 0x2dcebc - 0x2dcef8
void entry_002dcebc_0x2dcebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dcebc_0x2dcebc");
#endif

    switch (ctx->pc) {
        case 0x2dced0u: goto label_2dced0;
        default: break;
    }

    ctx->pc = 0x2dcebcu;

    // 0x2dcebc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2dcebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcec0: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x2dcec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2dcec4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2dcec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dcec8: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x2DCEC8u;
    SET_GPR_U32(ctx, 31, 0x2DCED0u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x2DCEC8u, 0x2DCED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCED0u;
label_2dced0:
    // 0x2dced0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dced0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2dced4: 0x9023edae  lbu         $v1, -0x1252($at)
    ctx->pc = 0x2dced4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x2dced8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCED8u;
    {
        const bool branch_taken_0x2dced8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dced8) {
            ctx->pc = 0x2DCEF8u;
            return;
        }
    }
    ctx->pc = 0x2DCEE0u;
    // 0x2dcee0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2dcee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcee4: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dcee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dcee8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DCEE8u;
    {
        const bool branch_taken_0x2dcee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcee8) {
            ctx->pc = 0x2DCEF8u;
            return;
        }
    }
    ctx->pc = 0x2DCEF0u;
    // 0x2dcef0: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DCEF0u;
    SET_GPR_U32(ctx, 31, 0x2DCEF8u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DCEF0u, 0x2DCEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCEF8u;
}
