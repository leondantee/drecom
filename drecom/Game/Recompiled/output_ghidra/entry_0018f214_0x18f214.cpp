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

// Function: entry_0018f214
// Address: 0x18f214 - 0x18f254
void entry_0018f214_0x18f214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f214_0x18f214");
#endif

    switch (ctx->pc) {
        case 0x18f238u: goto label_18f238;
        default: break;
    }

    ctx->pc = 0x18f214u;

    // 0x18f214: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x18f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f218: 0x94540118  lhu         $s4, 0x118($v0)
    ctx->pc = 0x18f218u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18f21c: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x18f21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x18f220: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x18f220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x18f224: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F224u;
    {
        const bool branch_taken_0x18f224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f224) {
            ctx->pc = 0x18F264u;
            return;
        }
    }
    ctx->pc = 0x18F22Cu;
    // 0x18f22c: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x18f22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f230: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x18F230u;
    SET_GPR_U32(ctx, 31, 0x18F238u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x18F230u, 0x18F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F238u;
label_18f238:
    // 0x18f238: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18f238u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18f23c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18f23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18f240: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x18f240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18f244: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F244u;
    {
        const bool branch_taken_0x18f244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f244) {
            ctx->pc = 0x18F254u;
            return;
        }
    }
    ctx->pc = 0x18F24Cu;
    // 0x18f24c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18f24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18f250: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18f250u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18f254u;
}
