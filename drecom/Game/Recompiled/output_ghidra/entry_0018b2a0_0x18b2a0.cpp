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

// Function: entry_0018b2a0
// Address: 0x18b2a0 - 0x18b2cc
void entry_0018b2a0_0x18b2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b2a0_0x18b2a0");
#endif

    switch (ctx->pc) {
        case 0x18b2c0u: goto label_18b2c0;
        default: break;
    }

    ctx->pc = 0x18b2a0u;

    // 0x18b2a0: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x18b2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18b2a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b2a8: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x18b2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b2ac: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x18b2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x18b2b0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b2b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18b2b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b2b8: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B2B8u;
    SET_GPR_U32(ctx, 31, 0x18B2C0u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B2B8u, 0x18B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B2C0u;
label_18b2c0:
    // 0x18b2c0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x18b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x18b2c4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x18B2C4u;
    {
        const bool branch_taken_0x18b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b2c4) {
            ctx->pc = 0x18B498u;
            return;
        }
    }
    ctx->pc = 0x18B2CCu;
}
