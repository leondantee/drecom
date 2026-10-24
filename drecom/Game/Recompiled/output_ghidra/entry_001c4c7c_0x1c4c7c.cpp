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

// Function: entry_001c4c7c
// Address: 0x1c4c7c - 0x1c4cec
void entry_001c4c7c_0x1c4c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4c7c_0x1c4c7c");
#endif

    ctx->pc = 0x1c4c7cu;

    // 0x1c4c7c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c80: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x1c4c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x1c4c84: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C4C84u;
    {
        const bool branch_taken_0x1c4c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c84) {
            ctx->pc = 0x1C4CECu;
            return;
        }
    }
    ctx->pc = 0x1C4C8Cu;
    // 0x1c4c8c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4c90: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c4c90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c4c94: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C4C94u;
    {
        const bool branch_taken_0x1c4c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c94) {
            ctx->pc = 0x1C4CECu;
            return;
        }
    }
    ctx->pc = 0x1C4C9Cu;
    // 0x1c4c9c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4ca0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c4ca4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c4ca8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c4ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c4cac: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C4CACu;
    {
        const bool branch_taken_0x1c4cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4cac) {
            ctx->pc = 0x1C4CECu;
            return;
        }
    }
    ctx->pc = 0x1C4CB4u;
    // 0x1c4cb4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c4cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c4cb8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4cbc: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c4cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c4cc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c4cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4cc4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4cc8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c4cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c4ccc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4cd0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c4cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4cd4: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1c4cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4cd8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c4cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c4cdc: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c4ce0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c4ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c4ce4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c4ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c4ce8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c4ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c4cecu;
}
