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

// Function: entry_002db5b4
// Address: 0x2db5b4 - 0x2db604
void entry_002db5b4_0x2db5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db5b4_0x2db5b4");
#endif

    switch (ctx->pc) {
        case 0x2db5bcu: goto label_2db5bc;
        default: break;
    }

    ctx->pc = 0x2db5b4u;

    // 0x2db5b4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB5B4u;
    SET_GPR_U32(ctx, 31, 0x2DB5BCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB5B4u, 0x2DB5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB5BCu;
label_2db5bc:
    // 0x2db5bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db5c0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2db5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2db5c4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB5C4u;
    {
        const bool branch_taken_0x2db5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db5c4) {
            ctx->pc = 0x2DB604u;
            return;
        }
    }
    ctx->pc = 0x2DB5CCu;
    // 0x2db5cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db5d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db5d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db5dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db5e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db5ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db5f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db5fc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DB5FCu;
    {
        const bool branch_taken_0x2db5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5fc) {
            ctx->pc = 0x2DB604u;
            return;
        }
    }
    ctx->pc = 0x2DB604u;
}
