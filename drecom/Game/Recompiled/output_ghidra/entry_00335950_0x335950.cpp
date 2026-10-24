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

// Function: entry_00335950
// Address: 0x335950 - 0x335980
void entry_00335950_0x335950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335950_0x335950");
#endif

    switch (ctx->pc) {
        case 0x335974u: goto label_335974;
        default: break;
    }

    ctx->pc = 0x335950u;

    // 0x335950: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x335950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x335954: 0x345e0096  ori         $fp, $v0, 0x96
    ctx->pc = 0x335954u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)150);
    // 0x335958: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x335958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x33595c: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x33595cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x335960: 0x3402a800  ori         $v0, $zero, 0xA800
    ctx->pc = 0x335960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x335964: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x335964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335968: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x335968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33596c: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x33596Cu;
    SET_GPR_U32(ctx, 31, 0x335974u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x33596Cu, 0x335974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335974u;
label_335974:
    // 0x335974: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x335974u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x335978: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x335978u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x33597c: 0x0  nop
    ctx->pc = 0x33597cu;
    // NOP
    ctx->pc = 0x335980u;
}
