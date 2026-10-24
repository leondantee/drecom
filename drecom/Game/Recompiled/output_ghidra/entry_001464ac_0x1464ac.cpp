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

// Function: entry_001464ac
// Address: 0x1464ac - 0x146500
void entry_001464ac_0x1464ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001464ac_0x1464ac");
#endif

    ctx->pc = 0x1464acu;

    // 0x1464ac: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1464acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1464b0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1464b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1464b4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1464B4u;
    {
        const bool branch_taken_0x1464b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1464b4) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x1464BCu;
    // 0x1464bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1464bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1464c0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1464c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1464c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1464c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1464cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1464d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1464d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1464d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1464dc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1464e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1464e4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1464e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1464ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1464ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1464f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1464f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1464f4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1464f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1464f8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1464F8u;
    {
        const bool branch_taken_0x1464f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1464f8) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x146500u;
}
