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

// Function: entry_001504e4
// Address: 0x1504e4 - 0x150534
void entry_001504e4_0x1504e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001504e4_0x1504e4");
#endif

    switch (ctx->pc) {
        case 0x1504fcu: goto label_1504fc;
        case 0x150508u: goto label_150508;
        case 0x150514u: goto label_150514;
        case 0x150520u: goto label_150520;
        default: break;
    }

    ctx->pc = 0x1504e4u;

    // 0x1504e4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x1504e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x1504e8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1504e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1504ec: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x1504ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x1504f0: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x1504f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1504f4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1504F4u;
    SET_GPR_U32(ctx, 31, 0x1504FCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1504F4u, 0x1504FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504FCu;
label_1504fc:
    // 0x1504fc: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x1504fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x150500: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x150500u;
    SET_GPR_U32(ctx, 31, 0x150508u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x150500u, 0x150508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150508u;
label_150508:
    // 0x150508: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150508u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15050c: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x15050Cu;
    SET_GPR_U32(ctx, 31, 0x150514u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x15050Cu, 0x150514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150514u;
label_150514:
    // 0x150514: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150514u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150518: 0xc05c04c  jal         func_170130
    ctx->pc = 0x150518u;
    SET_GPR_U32(ctx, 31, 0x150520u);
    ctx->pc = 0x170130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170130u, 0x150518u, 0x150520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150520u;
label_150520:
    // 0x150520: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x150520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x150524: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x150524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x150528: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x150528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x15052c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15052Cu;
    {
        const bool branch_taken_0x15052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15052c) {
            ctx->pc = 0x150544u;
            return;
        }
    }
    ctx->pc = 0x150534u;
}
