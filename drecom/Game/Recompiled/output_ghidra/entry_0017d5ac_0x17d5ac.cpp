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

// Function: entry_0017d5ac
// Address: 0x17d5ac - 0x17d5c4
void entry_0017d5ac_0x17d5ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d5ac_0x17d5ac");
#endif

    ctx->pc = 0x17d5acu;

    // 0x17d5ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17d5acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17d5b0: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x17d5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x17d5b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d5b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d5b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d5bc: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D5BCu;
    SET_GPR_U32(ctx, 31, 0x17D5C4u);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D5BCu, 0x17D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D5C4u;
}
