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

// Function: entry_001bfcf0
// Address: 0x1bfcf0 - 0x1bfd40
void entry_001bfcf0_0x1bfcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfcf0_0x1bfcf0");
#endif

    switch (ctx->pc) {
        case 0x1bfd20u: goto label_1bfd20;
        case 0x1bfd38u: goto label_1bfd38;
        default: break;
    }

    ctx->pc = 0x1bfcf0u;

    // 0x1bfcf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfcf4: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1bfcf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1bfcf8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BFCF8u;
    {
        const bool branch_taken_0x1bfcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfcf8) {
            ctx->pc = 0x1BFD40u;
            return;
        }
    }
    ctx->pc = 0x1BFD00u;
    // 0x1bfd00: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bfd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd08: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bfd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfd0c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1bfd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1bfd10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfd14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bfd14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bfd18: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BFD18u;
    SET_GPR_U32(ctx, 31, 0x1BFD20u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BFD18u, 0x1BFD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD20u;
label_1bfd20:
    // 0x1bfd20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bfd24: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bfd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfd28: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1bfd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bfd2c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bfd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bfd30: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BFD30u;
    SET_GPR_U32(ctx, 31, 0x1BFD38u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BFD30u, 0x1BFD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD38u;
label_1bfd38:
    // 0x1bfd38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BFD38u;
    {
        const bool branch_taken_0x1bfd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd38) {
            ctx->pc = 0x1BFD78u;
            return;
        }
    }
    ctx->pc = 0x1BFD40u;
}
