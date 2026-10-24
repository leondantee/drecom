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

// Function: entry_0032b61c
// Address: 0x32b61c - 0x32b648
void entry_0032b61c_0x32b61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b61c_0x32b61c");
#endif

    switch (ctx->pc) {
        case 0x32b640u: goto label_32b640;
        default: break;
    }

    ctx->pc = 0x32b61cu;

    // 0x32b61c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x32b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x32b620: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x32b620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x32b624: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x32b624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32b628: 0x26620176  addiu       $v0, $s3, 0x176
    ctx->pc = 0x32b628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 374));
    // 0x32b62c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x32b62cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32b630: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32b630u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b634: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x32b634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x32b638: 0xc0ca3d8  jal         func_328F60
    ctx->pc = 0x32B638u;
    SET_GPR_U32(ctx, 31, 0x32B640u);
    ctx->pc = 0x328F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F60u, 0x32B638u, 0x32B640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B640u;
label_32b640:
    // 0x32b640: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x32B640u;
    {
        const bool branch_taken_0x32b640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b640) {
            ctx->pc = 0x32B6E0u;
            return;
        }
    }
    ctx->pc = 0x32B648u;
}
