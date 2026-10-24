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

// Function: entry_00311dac
// Address: 0x311dac - 0x311e30
void entry_00311dac_0x311dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311dac_0x311dac");
#endif

    switch (ctx->pc) {
        case 0x311e2cu: goto label_311e2c;
        default: break;
    }

    ctx->pc = 0x311dacu;

    // 0x311dac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x311dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311db0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x311db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311db4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x311db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x311db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x311db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x311dbc: 0x34422e00  ori         $v0, $v0, 0x2E00
    ctx->pc = 0x311dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11776);
    // 0x311dc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x311dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311dc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x311dc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x311dc8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x311dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x311dcc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x311dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x311dd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x311dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311dd4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x311dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x311dd8: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x311dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x311ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311de0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x311de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311de4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x311de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x311de8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x311de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x311dec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x311decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x311df0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x311df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x311df4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x311df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x311df8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x311df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x311dfc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x311dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311e00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x311e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x311e04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x311e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x311e08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x311e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x311e0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x311e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x311e10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x311e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x311e14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x311e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311e18: 0x453825  or          $a3, $v0, $a1
    ctx->pc = 0x311e18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x311e1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x311e1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311e20: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x311e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x311e24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x311E24u;
    SET_GPR_U32(ctx, 31, 0x311E2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x311E24u, 0x311E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E2Cu;
label_311e2c:
    // 0x311e2c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x311e2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x311e30u;
}
