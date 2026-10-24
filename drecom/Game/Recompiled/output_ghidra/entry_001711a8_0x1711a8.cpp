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

// Function: entry_001711a8
// Address: 0x1711a8 - 0x1711d4
void entry_001711a8_0x1711a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001711a8_0x1711a8");
#endif

    switch (ctx->pc) {
        case 0x1711b4u: goto label_1711b4;
        default: break;
    }

    ctx->pc = 0x1711a8u;

    // 0x1711a8: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x1711a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1711ac: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1711ACu;
    SET_GPR_U32(ctx, 31, 0x1711B4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1711ACu, 0x1711B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1711B4u;
label_1711b4:
    // 0x1711b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1711b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1711b8: 0xa7a3017e  sh          $v1, 0x17E($sp)
    ctx->pc = 0x1711b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 3));
    // 0x1711bc: 0x97a3017e  lhu         $v1, 0x17E($sp)
    ctx->pc = 0x1711bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1711c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1711c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1711c4: 0xa7a3017e  sh          $v1, 0x17E($sp)
    ctx->pc = 0x1711c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 3));
    // 0x1711c8: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x1711c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1711cc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1711ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1711d0: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x1711d0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1711d4u;
}
