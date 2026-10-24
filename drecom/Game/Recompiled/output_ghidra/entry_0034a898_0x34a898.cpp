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

// Function: entry_0034a898
// Address: 0x34a898 - 0x34a8ec
void entry_0034a898_0x34a898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a898_0x34a898");
#endif

    ctx->pc = 0x34a898u;

    // 0x34a898: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a89c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a8a0: 0x84630068  lh          $v1, 0x68($v1)
    ctx->pc = 0x34a8a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x34a8a4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x34A8A4u;
    {
        const bool branch_taken_0x34a8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a8a4) {
            ctx->pc = 0x34A8ECu;
            return;
        }
    }
    ctx->pc = 0x34A8ACu;
    // 0x34a8ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a8b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a8b8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x34a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x34a8bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a8c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a8cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a8d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34a8dc: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34a8e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a8e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a8e8: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34a8e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x34a8ecu;
}
