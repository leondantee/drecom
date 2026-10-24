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

// Function: entry_0013c4d8
// Address: 0x13c4d8 - 0x13c538
void entry_0013c4d8_0x13c4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c4d8_0x13c4d8");
#endif

    switch (ctx->pc) {
        case 0x13c50cu: goto label_13c50c;
        case 0x13c520u: goto label_13c520;
        case 0x13c530u: goto label_13c530;
        default: break;
    }

    ctx->pc = 0x13c4d8u;

    // 0x13c4d8: 0x8e1100a0  lw          $s1, 0xA0($s0)
    ctx->pc = 0x13c4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x13c4dc: 0x8e330008  lw          $s3, 0x8($s1)
    ctx->pc = 0x13c4dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13c4e0: 0x8e34000c  lw          $s4, 0xC($s1)
    ctx->pc = 0x13c4e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13c4e4: 0x32634000  andi        $v1, $s3, 0x4000
    ctx->pc = 0x13c4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16384);
    // 0x13c4e8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x13C4E8u;
    {
        const bool branch_taken_0x13c4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c4e8) {
            ctx->pc = 0x13C538u;
            return;
        }
    }
    ctx->pc = 0x13C4F0u;
    // 0x13c4f0: 0x329500ff  andi        $s5, $s4, 0xFF
    ctx->pc = 0x13c4f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x13c4f4: 0x16a00010  bnez        $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x13C4F4u;
    {
        const bool branch_taken_0x13c4f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c4f4) {
            ctx->pc = 0x13C538u;
            return;
        }
    }
    ctx->pc = 0x13C4FCu;
    // 0x13c4fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13c4fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13c500: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x13c500u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13c504: 0xc04f790  jal         func_13DE40
    ctx->pc = 0x13C504u;
    SET_GPR_U32(ctx, 31, 0x13C50Cu);
    ctx->pc = 0x13DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE40u, 0x13C504u, 0x13C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C50Cu;
label_13c50c:
    // 0x13c50c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x13c50cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13c510: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13c510u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13c514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13c514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13c518: 0xc04f744  jal         func_13DD10
    ctx->pc = 0x13C518u;
    SET_GPR_U32(ctx, 31, 0x13C520u);
    ctx->pc = 0x13DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD10u, 0x13C518u, 0x13C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C520u;
label_13c520:
    // 0x13c520: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13c520u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13c524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13c524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c528: 0xc04f744  jal         func_13DD10
    ctx->pc = 0x13C528u;
    SET_GPR_U32(ctx, 31, 0x13C530u);
    ctx->pc = 0x13DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD10u, 0x13C528u, 0x13C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C530u;
label_13c530:
    // 0x13c530: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13c530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c534: 0xa2030101  sb          $v1, 0x101($s0)
    ctx->pc = 0x13c534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 257), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13c538u;
}
