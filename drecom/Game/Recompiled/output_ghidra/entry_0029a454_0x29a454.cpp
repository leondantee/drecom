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

// Function: entry_0029a454
// Address: 0x29a454 - 0x29a478
void entry_0029a454_0x29a454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a454_0x29a454");
#endif

    switch (ctx->pc) {
        case 0x29a474u: goto label_29a474;
        default: break;
    }

    ctx->pc = 0x29a454u;

    // 0x29a454: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29a454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a458: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29a458u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29a45c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x29a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29a460: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x29a460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29a464: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x29a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a468: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x29a468u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a46c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29A46Cu;
    SET_GPR_U32(ctx, 31, 0x29A474u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29A474u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A474u) { return; }
    ctx->pc = 0x29A474u;
label_29a474:
    // 0x29a474: 0x0  nop
    ctx->pc = 0x29a474u;
    // NOP
    ctx->pc = 0x29a478u;
}
