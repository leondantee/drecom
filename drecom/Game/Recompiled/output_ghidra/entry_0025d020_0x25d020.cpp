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

// Function: entry_0025d020
// Address: 0x25d020 - 0x25d048
void entry_0025d020_0x25d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d020_0x25d020");
#endif

    switch (ctx->pc) {
        case 0x25d040u: goto label_25d040;
        default: break;
    }

    ctx->pc = 0x25d020u;

    // 0x25d020: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25d020u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25d024: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x25d024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x25d028: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25d028u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25d02c: 0x32a500ff  andi        $a1, $s5, 0xFF
    ctx->pc = 0x25d02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x25d030: 0x8fb60168  lw          $s6, 0x168($sp)
    ctx->pc = 0x25d030u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25d034: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x25d034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x25d038: 0xc097e7c  jal         func_25F9F0
    ctx->pc = 0x25D038u;
    SET_GPR_U32(ctx, 31, 0x25D040u);
    ctx->pc = 0x25F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F9F0u, 0x25D038u, 0x25D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D040u;
label_25d040:
    // 0x25d040: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25d040u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d044: 0x0  nop
    ctx->pc = 0x25d044u;
    // NOP
    ctx->pc = 0x25d048u;
}
