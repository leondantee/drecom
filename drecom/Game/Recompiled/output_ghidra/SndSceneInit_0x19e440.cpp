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

// Function: SndSceneInit
// Address: 0x19e440 - 0x19e4c4
void SndSceneInit_0x19e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndSceneInit_0x19e440");
#endif

    switch (ctx->pc) {
        case 0x19e460u: goto label_19e460;
        default: break;
    }

    ctx->pc = 0x19e440u;

    // 0x19e440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e448: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e44c: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e450: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x19e450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x19e454: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x19e454u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e458: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19E458u;
    {
        const bool branch_taken_0x19e458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e458) {
            ctx->pc = 0x19E4A8u;
            goto label_19e4a8;
        }
    }
    ctx->pc = 0x19E460u;
label_19e460:
    // 0x19e460: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x19e460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x19e464: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x19e464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e468: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e46c: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e470: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19e470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e474: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x19e474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x19e478: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x19e478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e47c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e480: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e480u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e488: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x19e488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x19e48c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x19e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19e490: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x19e490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e494: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e498: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e498u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e49c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e4a0: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x19e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x19e4a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19e4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19e4a8:
    // 0x19e4a8: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x19e4a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19e4ac: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19E4ACu;
    {
        const bool branch_taken_0x19e4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e4ac) {
            ctx->pc = 0x19E460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e460;
        }
    }
    ctx->pc = 0x19E4B4u;
    // 0x19e4b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e4b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19e4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19e4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19E4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E4C4u;
}
