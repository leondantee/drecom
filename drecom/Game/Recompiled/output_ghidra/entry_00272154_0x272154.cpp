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

// Function: entry_00272154
// Address: 0x272154 - 0x272188
void entry_00272154_0x272154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272154_0x272154");
#endif

    switch (ctx->pc) {
        case 0x272180u: goto label_272180;
        default: break;
    }

    ctx->pc = 0x272154u;

    // 0x272154: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x272154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x272158: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x272158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27215c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x27215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x272160: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272160u;
    {
        const bool branch_taken_0x272160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272160) {
            ctx->pc = 0x272188u;
            return;
        }
    }
    ctx->pc = 0x272168u;
    // 0x272168: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x272168u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27216c: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x27216cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x272170: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x272170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x272174: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x272174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x272178: 0xc06c4d4  jal         func_1B1350
    ctx->pc = 0x272178u;
    SET_GPR_U32(ctx, 31, 0x272180u);
    ctx->pc = 0x1B1350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1350u, 0x272178u, 0x272180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272180u;
label_272180:
    // 0x272180: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x272180u;
    {
        const bool branch_taken_0x272180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272180) {
            ctx->pc = 0x2721B8u;
            return;
        }
    }
    ctx->pc = 0x272188u;
}
