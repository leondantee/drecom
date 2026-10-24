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

// Function: entry_001383b8
// Address: 0x1383b8 - 0x1383e0
void entry_001383b8_0x1383b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001383b8_0x1383b8");
#endif

    switch (ctx->pc) {
        case 0x1383d8u: goto label_1383d8;
        default: break;
    }

    ctx->pc = 0x1383b8u;

    // 0x1383b8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1383b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1383bc: 0x24424e98  addiu       $v0, $v0, 0x4E98
    ctx->pc = 0x1383bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20120));
    // 0x1383c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1383c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1383c4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1383c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1383c8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1383c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1383cc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1383ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1383d0: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x1383D0u;
    SET_GPR_U32(ctx, 31, 0x1383D8u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x1383D0u, 0x1383D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1383D8u;
label_1383d8:
    // 0x1383d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1383d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1383dc: 0x0  nop
    ctx->pc = 0x1383dcu;
    // NOP
    ctx->pc = 0x1383e0u;
}
