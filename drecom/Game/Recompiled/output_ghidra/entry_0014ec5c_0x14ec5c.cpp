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

// Function: entry_0014ec5c
// Address: 0x14ec5c - 0x14ec98
void entry_0014ec5c_0x14ec5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ec5c_0x14ec5c");
#endif

    switch (ctx->pc) {
        case 0x14ec88u: goto label_14ec88;
        default: break;
    }

    ctx->pc = 0x14ec5cu;

    // 0x14ec5c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x14ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14ec60: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ec60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ec64: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14EC64u;
    {
        const bool branch_taken_0x14ec64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ec64) {
            ctx->pc = 0x14EC98u;
            return;
        }
    }
    ctx->pc = 0x14EC6Cu;
    // 0x14ec6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ec6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ec70: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ec74: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ec74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ec78: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14ec78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14ec7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ec7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ec80: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EC80u;
    SET_GPR_U32(ctx, 31, 0x14EC88u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EC80u, 0x14EC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC88u;
label_14ec88:
    // 0x14ec88: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x14ec88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x14ec8c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14ec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ec90: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EC90u;
    SET_GPR_U32(ctx, 31, 0x14EC98u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EC90u, 0x14EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC98u;
}
