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

// Function: entry_0035a6fc
// Address: 0x35a6fc - 0x35a754
void entry_0035a6fc_0x35a6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a6fc_0x35a6fc");
#endif

    switch (ctx->pc) {
        case 0x35a730u: goto label_35a730;
        case 0x35a73cu: goto label_35a73c;
        default: break;
    }

    ctx->pc = 0x35a6fcu;

    // 0x35a6fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a700: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35a700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35a704: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35a708: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x35a708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x35a70c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x35A70Cu;
    {
        const bool branch_taken_0x35a70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a70c) {
            ctx->pc = 0x35A754u;
            return;
        }
    }
    ctx->pc = 0x35A714u;
    // 0x35a714: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a718: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x35a718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x35a71c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35a71cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a720: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x35a720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35a724: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35a724u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a728: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35A728u;
    SET_GPR_U32(ctx, 31, 0x35A730u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35A728u, 0x35A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A730u;
label_35a730:
    // 0x35a730: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35a730u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35a734: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35A734u;
    SET_GPR_U32(ctx, 31, 0x35A73Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35A734u, 0x35A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A73Cu;
label_35a73c:
    // 0x35a73c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a740: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35a740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a744: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x35a744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35a748: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x35a748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35a74c: 0xc0d8840  jal         func_362100
    ctx->pc = 0x35A74Cu;
    SET_GPR_U32(ctx, 31, 0x35A754u);
    ctx->pc = 0x362100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362100u, 0x35A74Cu, 0x35A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A754u;
}
