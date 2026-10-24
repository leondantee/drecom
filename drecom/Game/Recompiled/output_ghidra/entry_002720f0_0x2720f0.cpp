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

// Function: entry_002720f0
// Address: 0x2720f0 - 0x272128
void entry_002720f0_0x2720f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002720f0_0x2720f0");
#endif

    switch (ctx->pc) {
        case 0x272120u: goto label_272120;
        default: break;
    }

    ctx->pc = 0x2720f0u;

    // 0x2720f0: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x2720f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2720f4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2720f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2720f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2720f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2720fc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2720fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x272100: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272100u;
    {
        const bool branch_taken_0x272100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272100) {
            ctx->pc = 0x272128u;
            return;
        }
    }
    ctx->pc = 0x272108u;
    // 0x272108: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x272108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27210c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x27210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x272110: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x272110u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272114: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x272114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x272118: 0xc06c4d4  jal         func_1B1350
    ctx->pc = 0x272118u;
    SET_GPR_U32(ctx, 31, 0x272120u);
    ctx->pc = 0x1B1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1350u, 0x272118u, 0x272120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272120u;
label_272120:
    // 0x272120: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x272120u;
    {
        const bool branch_taken_0x272120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272120) {
            ctx->pc = 0x272154u;
            return;
        }
    }
    ctx->pc = 0x272128u;
}
