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

// Function: entry_0017d4f8
// Address: 0x17d4f8 - 0x17d534
void entry_0017d4f8_0x17d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d4f8_0x17d4f8");
#endif

    switch (ctx->pc) {
        case 0x17d52cu: goto label_17d52c;
        default: break;
    }

    ctx->pc = 0x17d4f8u;

    // 0x17d4f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d4fc: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d4fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d500: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d504: 0x30420041  andi        $v0, $v0, 0x41
    ctx->pc = 0x17d504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65);
    // 0x17d508: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x17D508u;
    {
        const bool branch_taken_0x17d508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d508) {
            ctx->pc = 0x17D684u;
            return;
        }
    }
    ctx->pc = 0x17D510u;
    // 0x17d510: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d514: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17d514u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17d518: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17d518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17d51c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d51cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d520: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d524: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D524u;
    SET_GPR_U32(ctx, 31, 0x17D52Cu);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D524u, 0x17D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D52Cu;
label_17d52c:
    // 0x17d52c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x17D52Cu;
    {
        const bool branch_taken_0x17d52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d52c) {
            ctx->pc = 0x17D684u;
            return;
        }
    }
    ctx->pc = 0x17D534u;
}
