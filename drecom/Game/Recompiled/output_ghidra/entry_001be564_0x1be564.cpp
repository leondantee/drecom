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

// Function: entry_001be564
// Address: 0x1be564 - 0x1be5c0
void entry_001be564_0x1be564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be564_0x1be564");
#endif

    switch (ctx->pc) {
        case 0x1be578u: goto label_1be578;
        case 0x1be5a4u: goto label_1be5a4;
        default: break;
    }

    ctx->pc = 0x1be564u;

    // 0x1be564: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be568: 0x248312c0  addiu       $v1, $a0, 0x12C0
    ctx->pc = 0x1be568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x1be56c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1be56cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1be570: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1BE570u;
    SET_GPR_U32(ctx, 31, 0x1BE578u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1BE570u, 0x1BE578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE578u;
label_1be578:
    // 0x1be578: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1be578u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be57c: 0x14600063  bnez        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1BE57Cu;
    {
        const bool branch_taken_0x1be57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be57c) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE584u;
    // 0x1be584: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be588: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x1be588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x1be58c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1be58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1be590: 0x30660010  andi        $a2, $v1, 0x10
    ctx->pc = 0x1be590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1be594: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE594u;
    {
        const bool branch_taken_0x1be594 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be594) {
            ctx->pc = 0x1BE5C0u;
            return;
        }
    }
    ctx->pc = 0x1BE59Cu;
    // 0x1be59c: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1BE59Cu;
    SET_GPR_U32(ctx, 31, 0x1BE5A4u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1BE59Cu, 0x1BE5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE5A4u;
label_1be5a4:
    // 0x1be5a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1be5a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1be5a8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE5A8u;
    {
        const bool branch_taken_0x1be5a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be5a8) {
            ctx->pc = 0x1BE5C0u;
            return;
        }
    }
    ctx->pc = 0x1BE5B0u;
    // 0x1be5b0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be5b4: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x1be5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be5b8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1BE5B8u;
    {
        const bool branch_taken_0x1be5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be5b8) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE5C0u;
}
