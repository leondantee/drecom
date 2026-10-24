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

// Function: entry_00340490
// Address: 0x340490 - 0x3404fc
void entry_00340490_0x340490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340490_0x340490");
#endif

    switch (ctx->pc) {
        case 0x34049cu: goto label_34049c;
        case 0x3404b8u: goto label_3404b8;
        case 0x3404f4u: goto label_3404f4;
        default: break;
    }

    ctx->pc = 0x340490u;

    // 0x340490: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340494: 0xc0d02a8  jal         func_340AA0
    ctx->pc = 0x340494u;
    SET_GPR_U32(ctx, 31, 0x34049Cu);
    ctx->pc = 0x340AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340AA0u, 0x340494u, 0x34049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34049Cu;
label_34049c:
    // 0x34049c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x34049cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3404a0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3404A0u;
    {
        const bool branch_taken_0x3404a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3404a0) {
            ctx->pc = 0x34050Cu;
            return;
        }
    }
    ctx->pc = 0x3404A8u;
    // 0x3404a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3404a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404ac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3404acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3404b0: 0xc0d0074  jal         func_3401D0
    ctx->pc = 0x3404B0u;
    SET_GPR_U32(ctx, 31, 0x3404B8u);
    ctx->pc = 0x3401D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3401D0u, 0x3404B0u, 0x3404B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3404B8u;
label_3404b8:
    // 0x3404b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3404b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404bc: 0x8c431298  lw          $v1, 0x1298($v0)
    ctx->pc = 0x3404bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x3404c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3404c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404c4: 0x8c421294  lw          $v0, 0x1294($v0)
    ctx->pc = 0x3404c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4756)));
    // 0x3404c8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3404c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3404cc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x3404CCu;
    {
        const bool branch_taken_0x3404cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3404cc) {
            ctx->pc = 0x3404FCu;
            return;
        }
    }
    ctx->pc = 0x3404D4u;
    // 0x3404d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3404d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404d8: 0xac401298  sw          $zero, 0x1298($v0)
    ctx->pc = 0x3404d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4760), GPR_U32(ctx, 0));
    // 0x3404dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3404dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3404e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3404e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404e4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3404e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3404e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3404e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3404ec: 0xc0d00d4  jal         func_340350
    ctx->pc = 0x3404ECu;
    SET_GPR_U32(ctx, 31, 0x3404F4u);
    ctx->pc = 0x340350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340350u, 0x3404ECu, 0x3404F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3404F4u;
label_3404f4:
    // 0x3404f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3404F4u;
    {
        const bool branch_taken_0x3404f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3404f4) {
            ctx->pc = 0x34050Cu;
            return;
        }
    }
    ctx->pc = 0x3404FCu;
}
