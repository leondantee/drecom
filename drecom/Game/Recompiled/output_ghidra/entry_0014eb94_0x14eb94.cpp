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

// Function: entry_0014eb94
// Address: 0x14eb94 - 0x14ebd0
void entry_0014eb94_0x14eb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eb94_0x14eb94");
#endif

    switch (ctx->pc) {
        case 0x14ebc0u: goto label_14ebc0;
        default: break;
    }

    ctx->pc = 0x14eb94u;

    // 0x14eb94: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x14eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14eb98: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14eb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14eb9c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14EB9Cu;
    {
        const bool branch_taken_0x14eb9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb9c) {
            ctx->pc = 0x14EBD0u;
            return;
        }
    }
    ctx->pc = 0x14EBA4u;
    // 0x14eba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14eba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14eba8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ebac: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ebacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ebb0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14ebb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x14ebb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ebb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ebb8: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EBB8u;
    SET_GPR_U32(ctx, 31, 0x14EBC0u);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EBB8u, 0x14EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBC0u;
label_14ebc0:
    // 0x14ebc0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x14ebc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x14ebc4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ebc8: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EBC8u;
    SET_GPR_U32(ctx, 31, 0x14EBD0u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EBC8u, 0x14EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBD0u;
}
