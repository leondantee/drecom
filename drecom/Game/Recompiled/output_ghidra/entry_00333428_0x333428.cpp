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

// Function: entry_00333428
// Address: 0x333428 - 0x33344c
void entry_00333428_0x333428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333428_0x333428");
#endif

    switch (ctx->pc) {
        case 0x333440u: goto label_333440;
        default: break;
    }

    ctx->pc = 0x333428u;

    // 0x333428: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x333428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33342c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x33342cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x333430: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x333430u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333434: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x333434u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333438: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x333438u;
    SET_GPR_U32(ctx, 31, 0x333440u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x333438u, 0x333440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333440u;
label_333440:
    // 0x333440: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x333440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x333444: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x333444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x333448: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x333448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    ctx->pc = 0x33344cu;
}
