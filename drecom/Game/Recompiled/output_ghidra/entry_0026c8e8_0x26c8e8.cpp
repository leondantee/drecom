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

// Function: entry_0026c8e8
// Address: 0x26c8e8 - 0x26c914
void entry_0026c8e8_0x26c8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c8e8_0x26c8e8");
#endif

    switch (ctx->pc) {
        case 0x26c90cu: goto label_26c90c;
        default: break;
    }

    ctx->pc = 0x26c8e8u;

    // 0x26c8e8: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c8ec: 0x90c709df  lbu         $a3, 0x9DF($a2)
    ctx->pc = 0x26c8ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x26c8f0: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x26c8f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x26c8f4: 0x31030080  andi        $v1, $t0, 0x80
    ctx->pc = 0x26c8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
    // 0x26c8f8: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x26C8F8u;
    {
        const bool branch_taken_0x26c8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8f8) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C900u;
    // 0x26c900: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x26c900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x26c904: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x26C904u;
    SET_GPR_U32(ctx, 31, 0x26C90Cu);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x26C904u, 0x26C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C90Cu;
label_26c90c:
    // 0x26c90c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x26C90Cu;
    {
        const bool branch_taken_0x26c90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c90c) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C914u;
}
