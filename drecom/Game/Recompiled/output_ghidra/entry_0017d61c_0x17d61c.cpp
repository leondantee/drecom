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

// Function: entry_0017d61c
// Address: 0x17d61c - 0x17d63c
void entry_0017d61c_0x17d61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d61c_0x17d61c");
#endif

    switch (ctx->pc) {
        case 0x17d634u: goto label_17d634;
        default: break;
    }

    ctx->pc = 0x17d61cu;

    // 0x17d61c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17d61cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17d620: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x17d620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x17d624: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d628: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d62c: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D62Cu;
    SET_GPR_U32(ctx, 31, 0x17D634u);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D62Cu, 0x17D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D634u;
label_17d634:
    // 0x17d634: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17D634u;
    {
        const bool branch_taken_0x17d634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d634) {
            ctx->pc = 0x17D684u;
            return;
        }
    }
    ctx->pc = 0x17D63Cu;
}
