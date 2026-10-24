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

// Function: entry_001b09c8
// Address: 0x1b09c8 - 0x1b0a20
void entry_001b09c8_0x1b09c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b09c8_0x1b09c8");
#endif

    switch (ctx->pc) {
        case 0x1b0a18u: goto label_1b0a18;
        default: break;
    }

    ctx->pc = 0x1b09c8u;

    // 0x1b09c8: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x1b09c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1b09cc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1b09ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b09d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b09d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b09d4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b09d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b09dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b09e0: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x1b09e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b09e4: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x1b09e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1b09e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1b09e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b09ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b09ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b09f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b09f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b09f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b09fc: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x1b09fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1b0a00: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1b0a00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b0a04: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1b0a04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1b0a08: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1b0a08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b0a0c: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1b0a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0a10: 0xc06c540  jal         func_1B1500
    ctx->pc = 0x1B0A10u;
    SET_GPR_U32(ctx, 31, 0x1B0A18u);
    ctx->pc = 0x1B1500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1500u, 0x1B0A10u, 0x1B0A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A18u;
label_1b0a18:
    // 0x1b0a18: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1b0a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1b0a1c: 0x0  nop
    ctx->pc = 0x1b0a1cu;
    // NOP
    ctx->pc = 0x1b0a20u;
}
