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

// Function: entry_003383c8
// Address: 0x3383c8 - 0x338424
void entry_003383c8_0x3383c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003383c8_0x3383c8");
#endif

    switch (ctx->pc) {
        case 0x338408u: goto label_338408;
        default: break;
    }

    ctx->pc = 0x3383c8u;

    // 0x3383c8: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x3383c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x3383cc: 0x9022c98e  lbu         $v0, -0x3672($at)
    ctx->pc = 0x3383ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x3383d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3383d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3383d4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3383d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3383d8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3383D8u;
    {
        const bool branch_taken_0x3383d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3383d8) {
            ctx->pc = 0x3383A0u;
            return;
        }
    }
    ctx->pc = 0x3383E0u;
    // 0x3383e0: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x3383e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x3383e4: 0x9022c98e  lbu         $v0, -0x3672($at)
    ctx->pc = 0x3383e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x3383e8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3383e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3383ec: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x3383ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x3383f0: 0x2444c78e  addiu       $a0, $v0, -0x3872
    ctx->pc = 0x3383f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952846));
    // 0x3383f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3383f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3383f8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x3383f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x3383fc: 0x244784b0  addiu       $a3, $v0, -0x7B50
    ctx->pc = 0x3383fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
    // 0x338400: 0xc046774  jal         func_119DD0
    ctx->pc = 0x338400u;
    SET_GPR_U32(ctx, 31, 0x338408u);
    ctx->pc = 0x119DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119DD0u, 0x338400u, 0x338408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338408u;
label_338408:
    // 0x338408: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x338408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x33840c: 0x2472c98f  addiu       $s2, $v1, -0x3671
    ctx->pc = 0x33840cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953359));
    // 0x338410: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x338410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x338414: 0x2470c78e  addiu       $s0, $v1, -0x3872
    ctx->pc = 0x338414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952846));
    // 0x338418: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x338418u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33841c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33841Cu;
    {
        const bool branch_taken_0x33841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33841c) {
            ctx->pc = 0x338460u;
            return;
        }
    }
    ctx->pc = 0x338424u;
}
