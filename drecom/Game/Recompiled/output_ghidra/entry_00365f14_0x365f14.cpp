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

// Function: entry_00365f14
// Address: 0x365f14 - 0x365f70
void entry_00365f14_0x365f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365f14_0x365f14");
#endif

    switch (ctx->pc) {
        case 0x365f1cu: goto label_365f1c;
        default: break;
    }

    ctx->pc = 0x365f14u;

    // 0x365f14: 0xc067694  jal         func_19DA50
    ctx->pc = 0x365F14u;
    SET_GPR_U32(ctx, 31, 0x365F1Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x365F14u, 0x365F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F1Cu;
label_365f1c:
    // 0x365f1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x365f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365f20: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x365f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x365f24: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x365F24u;
    {
        const bool branch_taken_0x365f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f24) {
            ctx->pc = 0x365F70u;
            return;
        }
    }
    ctx->pc = 0x365F2Cu;
    // 0x365f2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365f30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365f38: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x365f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x365f3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x365f40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x365f44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365f4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365f50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365f54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365f58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x365f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x365f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365f60: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x365f60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x365f64: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x365f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365f68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x365F68u;
    {
        const bool branch_taken_0x365f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f68) {
            ctx->pc = 0x365FACu;
            return;
        }
    }
    ctx->pc = 0x365F70u;
}
