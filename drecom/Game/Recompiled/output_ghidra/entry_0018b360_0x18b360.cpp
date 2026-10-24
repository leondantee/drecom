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

// Function: entry_0018b360
// Address: 0x18b360 - 0x18b38c
void entry_0018b360_0x18b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b360_0x18b360");
#endif

    switch (ctx->pc) {
        case 0x18b380u: goto label_18b380;
        default: break;
    }

    ctx->pc = 0x18b360u;

    // 0x18b360: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x18b360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18b364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b368: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x18b368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b36c: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x18b36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x18b370: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b374: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18b374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b378: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B378u;
    SET_GPR_U32(ctx, 31, 0x18B380u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B378u, 0x18B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B380u;
label_18b380:
    // 0x18b380: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x18b380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x18b384: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18B384u;
    {
        const bool branch_taken_0x18b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b384) {
            ctx->pc = 0x18B498u;
            return;
        }
    }
    ctx->pc = 0x18B38Cu;
}
