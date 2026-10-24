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

// Function: Status_through_map_check
// Address: 0x3324e0 - 0x332538
void Status_through_map_check_0x3324e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Status_through_map_check_0x3324e0");
#endif

    ctx->pc = 0x3324e0u;

    // 0x3324e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3324e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3324e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3324e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3324e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x3324e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x3324ec: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3324ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3324f0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3324f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3324f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3324f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3324f8: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x3324f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x3324fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3324fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x332500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x332504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332508: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x332508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x33250c: 0xdc8265c0  ld          $v0, 0x65C0($a0)
    ctx->pc = 0x33250cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 26048)));
    // 0x332510: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x332510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x332514: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x332514u;
    {
        const bool branch_taken_0x332514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x332514) {
            ctx->pc = 0x332528u;
            goto label_332528;
        }
    }
    ctx->pc = 0x33251Cu;
    // 0x33251c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332520: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x332520u;
    {
        const bool branch_taken_0x332520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332520) {
            ctx->pc = 0x33252Cu;
            goto label_33252c;
        }
    }
    ctx->pc = 0x332528u;
label_332528:
    // 0x332528: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x332528u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33252c:
    // 0x33252c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33252cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x332530: 0x3e00008  jr          $ra
    ctx->pc = 0x332530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332538u;
}
