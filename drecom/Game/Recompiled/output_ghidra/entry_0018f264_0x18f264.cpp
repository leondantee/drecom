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

// Function: entry_0018f264
// Address: 0x18f264 - 0x18f28c
void entry_0018f264_0x18f264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f264_0x18f264");
#endif

    switch (ctx->pc) {
        case 0x18f270u: goto label_18f270;
        default: break;
    }

    ctx->pc = 0x18f264u;

    // 0x18f264: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x18f264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f268: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x18F268u;
    SET_GPR_U32(ctx, 31, 0x18F270u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x18F268u, 0x18F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F270u;
label_18f270:
    // 0x18f270: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18f270u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18f274: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18f274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18f278: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x18f278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18f27c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F27Cu;
    {
        const bool branch_taken_0x18f27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f27c) {
            ctx->pc = 0x18F28Cu;
            return;
        }
    }
    ctx->pc = 0x18F284u;
    // 0x18f284: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18f284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18f288: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18f288u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18f28cu;
}
