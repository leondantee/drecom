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

// Function: entry_0018b470
// Address: 0x18b470 - 0x18b498
void entry_0018b470_0x18b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b470_0x18b470");
#endif

    switch (ctx->pc) {
        case 0x18b490u: goto label_18b490;
        default: break;
    }

    ctx->pc = 0x18b470u;

    // 0x18b470: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18b470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b478: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x18b478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b47c: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18b47cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18b480: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18b480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b484: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18b484u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b488: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18B488u;
    SET_GPR_U32(ctx, 31, 0x18B490u);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18B488u, 0x18B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B490u;
label_18b490:
    // 0x18b490: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x18b490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x18b494: 0x0  nop
    ctx->pc = 0x18b494u;
    // NOP
    ctx->pc = 0x18b498u;
}
