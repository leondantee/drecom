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

// Function: entry_0025c280
// Address: 0x25c280 - 0x25c2a8
void entry_0025c280_0x25c280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c280_0x25c280");
#endif

    switch (ctx->pc) {
        case 0x25c2a0u: goto label_25c2a0;
        default: break;
    }

    ctx->pc = 0x25c280u;

    // 0x25c280: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x25c280u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25c284: 0x34830040  ori         $v1, $a0, 0x40
    ctx->pc = 0x25c284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x25c288: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25c288u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25c28c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x25c28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25c290: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c294: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25c294u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25c298: 0xc097e7c  jal         func_25F9F0
    ctx->pc = 0x25C298u;
    SET_GPR_U32(ctx, 31, 0x25C2A0u);
    ctx->pc = 0x25F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F9F0u, 0x25C298u, 0x25C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C2A0u;
label_25c2a0:
    // 0x25c2a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25c2a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25c2a4: 0x0  nop
    ctx->pc = 0x25c2a4u;
    // NOP
    ctx->pc = 0x25c2a8u;
}
