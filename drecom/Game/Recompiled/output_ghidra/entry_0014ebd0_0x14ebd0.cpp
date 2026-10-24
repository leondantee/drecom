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

// Function: entry_0014ebd0
// Address: 0x14ebd0 - 0x14ec0c
void entry_0014ebd0_0x14ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ebd0_0x14ebd0");
#endif

    switch (ctx->pc) {
        case 0x14ebfcu: goto label_14ebfc;
        default: break;
    }

    ctx->pc = 0x14ebd0u;

    // 0x14ebd0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14ebd4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ebd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ebd8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14EBD8u;
    {
        const bool branch_taken_0x14ebd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ebd8) {
            ctx->pc = 0x14EC0Cu;
            return;
        }
    }
    ctx->pc = 0x14EBE0u;
    // 0x14ebe0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ebe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ebe4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ebe8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ebe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ebec: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x14ebecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14ebf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ebf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ebf4: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EBF4u;
    SET_GPR_U32(ctx, 31, 0x14EBFCu);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EBF4u, 0x14EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBFCu;
label_14ebfc:
    // 0x14ebfc: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x14ebfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14ec00: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ec04: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EC04u;
    SET_GPR_U32(ctx, 31, 0x14EC0Cu);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EC04u, 0x14EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC0Cu;
}
