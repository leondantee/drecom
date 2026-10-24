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

// Function: entry_00138c88
// Address: 0x138c88 - 0x138cb0
void entry_00138c88_0x138c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138c88_0x138c88");
#endif

    switch (ctx->pc) {
        case 0x138ca8u: goto label_138ca8;
        default: break;
    }

    ctx->pc = 0x138c88u;

    // 0x138c88: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x138c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x138c8c: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x138c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
    // 0x138c90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138c94: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x138c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138c98: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x138c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x138c9c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x138c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x138ca0: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x138CA0u;
    SET_GPR_U32(ctx, 31, 0x138CA8u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x138CA0u, 0x138CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138CA8u;
label_138ca8:
    // 0x138ca8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138cac: 0x0  nop
    ctx->pc = 0x138cacu;
    // NOP
    ctx->pc = 0x138cb0u;
}
