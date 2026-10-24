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

// Function: entry_002990a0
// Address: 0x2990a0 - 0x2990e0
void entry_002990a0_0x2990a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002990a0_0x2990a0");
#endif

    switch (ctx->pc) {
        case 0x2990b4u: goto label_2990b4;
        case 0x2990c8u: goto label_2990c8;
        default: break;
    }

    ctx->pc = 0x2990a0u;

    // 0x2990a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2990a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2990a4: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x2990a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2990a8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2990a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2990ac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2990ACu;
    SET_GPR_U32(ctx, 31, 0x2990B4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2990B4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2990B4u) { return; }
    ctx->pc = 0x2990B4u;
label_2990b4:
    // 0x2990b4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2990b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2990b8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2990b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2990bc: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x2990bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2990c0: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x2990C0u;
    SET_GPR_U32(ctx, 31, 0x2990C8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x2990C0u, 0x2990C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2990C8u;
label_2990c8:
    // 0x2990c8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2990c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2990cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2990ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2990d0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2990d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2990d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2990D4u;
    {
        const bool branch_taken_0x2990d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2990d4) {
            ctx->pc = 0x2990E0u;
            return;
        }
    }
    ctx->pc = 0x2990DCu;
    // 0x2990dc: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x2990dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2990e0u;
}
