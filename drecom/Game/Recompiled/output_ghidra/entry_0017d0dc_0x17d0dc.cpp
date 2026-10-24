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

// Function: entry_0017d0dc
// Address: 0x17d0dc - 0x17d110
void entry_0017d0dc_0x17d0dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d0dc_0x17d0dc");
#endif

    ctx->pc = 0x17d0dcu;

    // 0x17d0dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d0e0: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d0e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d0e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d0e8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x17d0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x17d0ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D0ECu;
    {
        const bool branch_taken_0x17d0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d0ec) {
            ctx->pc = 0x17D110u;
            return;
        }
    }
    ctx->pc = 0x17D0F4u;
    // 0x17d0f4: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x17d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d0f8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d0fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17d0fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17d100: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x17d100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x17d104: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d104u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d108: 0xc0565a4  jal         func_159690
    ctx->pc = 0x17D108u;
    SET_GPR_U32(ctx, 31, 0x17D110u);
    ctx->pc = 0x159690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159690u, 0x17D108u, 0x17D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D110u;
}
