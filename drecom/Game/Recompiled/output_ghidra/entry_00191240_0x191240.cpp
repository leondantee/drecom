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

// Function: entry_00191240
// Address: 0x191240 - 0x191264
void entry_00191240_0x191240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191240_0x191240");
#endif

    switch (ctx->pc) {
        case 0x19124cu: goto label_19124c;
        default: break;
    }

    ctx->pc = 0x191240u;

    // 0x191240: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x191240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x191244: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x191244u;
    SET_GPR_U32(ctx, 31, 0x19124Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x191244u, 0x19124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19124Cu;
label_19124c:
    // 0x19124c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x19124cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x191250: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x191250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x191254: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x191254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191258: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191258u;
    {
        const bool branch_taken_0x191258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191258) {
            ctx->pc = 0x191264u;
            return;
        }
    }
    ctx->pc = 0x191260u;
    // 0x191260: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x191260u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x191264u;
}
