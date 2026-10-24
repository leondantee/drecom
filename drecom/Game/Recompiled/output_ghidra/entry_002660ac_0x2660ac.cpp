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

// Function: entry_002660ac
// Address: 0x2660ac - 0x2660f0
void entry_002660ac_0x2660ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002660ac_0x2660ac");
#endif

    ctx->pc = 0x2660acu;

    // 0x2660ac: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x2660acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x2660b0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x2660b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2660b4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2660b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2660b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2660b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2660bc: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x2660bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x2660c0: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x2660c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
    // 0x2660c4: 0x8e030368  lw          $v1, 0x368($s0)
    ctx->pc = 0x2660c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2660c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2660c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2660cc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2660CCu;
    {
        const bool branch_taken_0x2660cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2660cc) {
            ctx->pc = 0x2660F0u;
            return;
        }
    }
    ctx->pc = 0x2660D4u;
    // 0x2660d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2660d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2660d8: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x2660d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2660dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2660dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2660e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2660e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2660e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2660e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2660e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2660E8u;
    SET_GPR_U32(ctx, 31, 0x2660F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2660E8u, 0x2660F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660F0u;
}
