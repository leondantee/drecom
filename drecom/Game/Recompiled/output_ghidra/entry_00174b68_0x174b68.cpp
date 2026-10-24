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

// Function: entry_00174b68
// Address: 0x174b68 - 0x174b88
void entry_00174b68_0x174b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174b68_0x174b68");
#endif

    switch (ctx->pc) {
        case 0x174b84u: goto label_174b84;
        default: break;
    }

    ctx->pc = 0x174b68u;

    // 0x174b68: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x174b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x174b6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x174b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x174b70: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x174b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174b74: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x174b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x174b78: 0x344707c0  ori         $a3, $v0, 0x7C0
    ctx->pc = 0x174b78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1984);
    // 0x174b7c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174B7Cu;
    SET_GPR_U32(ctx, 31, 0x174B84u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174B7Cu, 0x174B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B84u;
label_174b84:
    // 0x174b84: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x174b84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x174b88u;
}
