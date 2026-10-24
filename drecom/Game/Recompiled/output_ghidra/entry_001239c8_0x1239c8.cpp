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

// Function: entry_001239c8
// Address: 0x1239c8 - 0x123a58
void entry_001239c8_0x1239c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001239c8_0x1239c8");
#endif

    switch (ctx->pc) {
        case 0x123a18u: goto label_123a18;
        default: break;
    }

    ctx->pc = 0x1239c8u;

    // 0x1239c8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1239c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1239cc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1239ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1239d0: 0x24444ee0  addiu       $a0, $v0, 0x4EE0
    ctx->pc = 0x1239d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20192));
    // 0x1239d4: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1239d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1239d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1239d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1239dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1239dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1239e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1239e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1239e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1239e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1239e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1239e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1239ec: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x1239ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1239f0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1239f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1239f4: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x1239f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1239f8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1239f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1239fc: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x1239fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x123a00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x123a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x123a04: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x123a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x123a08: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x123a08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x123a0c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x123a0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x123a10: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x123A10u;
    SET_GPR_U32(ctx, 31, 0x123A18u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x123A10u, 0x123A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A18u;
label_123a18:
    // 0x123a18: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x123a18u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x123a1c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x123a20: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x123a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x123a24: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x123a24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x123a28: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x123a2c: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x123a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x123a30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x123a30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x123a34: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x123a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x123a38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x123a38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x123a3c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x123a40: 0x24450ae8  addiu       $a1, $v0, 0xAE8
    ctx->pc = 0x123a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x123a44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123a44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x123a48: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x123a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x123a4c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x123a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x123a50: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x123a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x123a54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x123a58u;
}
