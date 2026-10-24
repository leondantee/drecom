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

// Function: entry_002674c0
// Address: 0x2674c0 - 0x267518
void entry_002674c0_0x2674c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002674c0_0x2674c0");
#endif

    switch (ctx->pc) {
        case 0x2674d4u: goto label_2674d4;
        case 0x267510u: goto label_267510;
        default: break;
    }

    ctx->pc = 0x2674c0u;

    // 0x2674c0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2674c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2674c4: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2674c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2674c8: 0x8e460a68  lw          $a2, 0xA68($s2)
    ctx->pc = 0x2674c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2674cc: 0xc0767a0  jal         func_1D9E80
    ctx->pc = 0x2674CCu;
    SET_GPR_U32(ctx, 31, 0x2674D4u);
    ctx->pc = 0x1D9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E80u, 0x2674CCu, 0x2674D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2674D4u;
label_2674d4:
    // 0x2674d4: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x2674d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x2674d8: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x2674d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2674dc: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x2674dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2674e0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2674e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2674e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2674e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2674e8: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x2674e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x2674ec: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x2674ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x2674f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2674f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2674f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2674F4u;
    {
        const bool branch_taken_0x2674f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2674f4) {
            ctx->pc = 0x267518u;
            return;
        }
    }
    ctx->pc = 0x2674FCu;
    // 0x2674fc: 0x8e460a68  lw          $a2, 0xA68($s2)
    ctx->pc = 0x2674fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x267500: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267504: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x267504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x267508: 0xc0998dc  jal         func_266370
    ctx->pc = 0x267508u;
    SET_GPR_U32(ctx, 31, 0x267510u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x267508u, 0x267510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267510u;
label_267510:
    // 0x267510: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x267510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x267514: 0x0  nop
    ctx->pc = 0x267514u;
    // NOP
    ctx->pc = 0x267518u;
}
