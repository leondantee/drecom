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

// Function: entry_0017d4c8
// Address: 0x17d4c8 - 0x17d4f8
void entry_0017d4c8_0x17d4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d4c8_0x17d4c8");
#endif

    ctx->pc = 0x17d4c8u;

    // 0x17d4c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d4cc: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d4ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d4d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d4d4: 0x30420024  andi        $v0, $v0, 0x24
    ctx->pc = 0x17d4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)36);
    // 0x17d4d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D4D8u;
    {
        const bool branch_taken_0x17d4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d4d8) {
            ctx->pc = 0x17D4F8u;
            return;
        }
    }
    ctx->pc = 0x17D4E0u;
    // 0x17d4e0: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d4e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17d4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17d4e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d4e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d4ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d4f0: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D4F0u;
    SET_GPR_U32(ctx, 31, 0x17D4F8u);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D4F0u, 0x17D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4F8u;
}
