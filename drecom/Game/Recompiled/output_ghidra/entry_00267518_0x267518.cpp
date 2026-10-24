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

// Function: entry_00267518
// Address: 0x267518 - 0x267548
void entry_00267518_0x267518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267518_0x267518");
#endif

    ctx->pc = 0x267518u;

    // 0x267518: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x267518u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
    // 0x26751c: 0x8e030368  lw          $v1, 0x368($s0)
    ctx->pc = 0x26751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x267520: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x267520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x267524: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x267524u;
    {
        const bool branch_taken_0x267524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267524) {
            ctx->pc = 0x267548u;
            return;
        }
    }
    ctx->pc = 0x26752Cu;
    // 0x26752c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26752cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267530: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x267530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x267534: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x267534u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267538: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x267538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26753c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26753cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x267540: 0xc0965d0  jal         func_259740
    ctx->pc = 0x267540u;
    SET_GPR_U32(ctx, 31, 0x267548u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x267540u, 0x267548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267548u;
}
