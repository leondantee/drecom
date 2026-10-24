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

// Function: entry_0018b2cc
// Address: 0x18b2cc - 0x18b304
void entry_0018b2cc_0x18b2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b2cc_0x18b2cc");
#endif

    switch (ctx->pc) {
        case 0x18b2f8u: goto label_18b2f8;
        default: break;
    }

    ctx->pc = 0x18b2ccu;

    // 0x18b2cc: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x18b2ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x18b2d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18b2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b2d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18B2D4u;
    {
        const bool branch_taken_0x18b2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b2d4) {
            ctx->pc = 0x18B304u;
            return;
        }
    }
    ctx->pc = 0x18B2DCu;
    // 0x18b2dc: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x18b2dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18b2e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b2e4: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x18b2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b2e8: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x18b2e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x18b2ec: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b2f0: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18B2F0u;
    SET_GPR_U32(ctx, 31, 0x18B2F8u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18B2F0u, 0x18B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B2F8u;
label_18b2f8:
    // 0x18b2f8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x18b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x18b2fc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x18B2FCu;
    {
        const bool branch_taken_0x18b2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b2fc) {
            ctx->pc = 0x18B498u;
            return;
        }
    }
    ctx->pc = 0x18B304u;
}
