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

// Function: entry_001c1430
// Address: 0x1c1430 - 0x1c1480
void entry_001c1430_0x1c1430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1430_0x1c1430");
#endif

    switch (ctx->pc) {
        case 0x1c1460u: goto label_1c1460;
        case 0x1c1478u: goto label_1c1478;
        default: break;
    }

    ctx->pc = 0x1c1430u;

    // 0x1c1430: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1434: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c1434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c1438: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1438u;
    {
        const bool branch_taken_0x1c1438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1438) {
            ctx->pc = 0x1C1480u;
            return;
        }
    }
    ctx->pc = 0x1C1440u;
    // 0x1c1440: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1444: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1448: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c144c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1c144cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c1450: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c1450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1454: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1458: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C1458u;
    SET_GPR_U32(ctx, 31, 0x1C1460u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C1458u, 0x1C1460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1460u;
label_1c1460:
    // 0x1c1460: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1464: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c1464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1468: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1c1468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c146c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1c146cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c1470: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C1470u;
    SET_GPR_U32(ctx, 31, 0x1C1478u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C1470u, 0x1C1478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1478u;
label_1c1478:
    // 0x1c1478: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C1478u;
    {
        const bool branch_taken_0x1c1478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1478) {
            ctx->pc = 0x1C14B8u;
            return;
        }
    }
    ctx->pc = 0x1C1480u;
}
