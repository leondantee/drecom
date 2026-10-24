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

// Function: entry_0017d3e0
// Address: 0x17d3e0 - 0x17d434
void entry_0017d3e0_0x17d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d3e0_0x17d3e0");
#endif

    switch (ctx->pc) {
        case 0x17d400u: goto label_17d400;
        default: break;
    }

    ctx->pc = 0x17d3e0u;

    // 0x17d3e0: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d3e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d3e8: 0x24022c1a  addiu       $v0, $zero, 0x2C1A
    ctx->pc = 0x17d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11290));
    // 0x17d3ec: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d3f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d3f4: 0x2445ec70  addiu       $a1, $v0, -0x1390
    ctx->pc = 0x17d3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x17d3f8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D3F8u;
    SET_GPR_U32(ctx, 31, 0x17D400u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D3F8u, 0x17D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D400u;
label_17d400:
    // 0x17d400: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d404: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d408: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d40c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x17d40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x17d410: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D410u;
    {
        const bool branch_taken_0x17d410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d410) {
            ctx->pc = 0x17D434u;
            return;
        }
    }
    ctx->pc = 0x17D418u;
    // 0x17d418: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d41c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17d41cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17d420: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x17d420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17d424: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d424u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d428: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d42c: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D42Cu;
    SET_GPR_U32(ctx, 31, 0x17D434u);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D42Cu, 0x17D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D434u;
}
