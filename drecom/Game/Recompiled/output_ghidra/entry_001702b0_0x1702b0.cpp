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

// Function: entry_001702b0
// Address: 0x1702b0 - 0x1702d8
void entry_001702b0_0x1702b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001702b0_0x1702b0");
#endif

    switch (ctx->pc) {
        case 0x1702bcu: goto label_1702bc;
        default: break;
    }

    ctx->pc = 0x1702b0u;

    // 0x1702b0: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x1702b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1702b4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1702B4u;
    SET_GPR_U32(ctx, 31, 0x1702BCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1702B4u, 0x1702BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702BCu;
label_1702bc:
    // 0x1702bc: 0xa7a2017e  sh          $v0, 0x17E($sp)
    ctx->pc = 0x1702bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 2));
    // 0x1702c0: 0x97a8017e  lhu         $t0, 0x17E($sp)
    ctx->pc = 0x1702c0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1702c4: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1702c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1702c8: 0xa7a2017e  sh          $v0, 0x17E($sp)
    ctx->pc = 0x1702c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 2));
    // 0x1702cc: 0x8fb50188  lw          $s5, 0x188($sp)
    ctx->pc = 0x1702ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1702d0: 0x8ea80058  lw          $t0, 0x58($s5)
    ctx->pc = 0x1702d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x1702d4: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x1702d4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1702d8u;
}
