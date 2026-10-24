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

// Function: entry_001982ac
// Address: 0x1982ac - 0x198310
void entry_001982ac_0x1982ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001982ac_0x1982ac");
#endif

    ctx->pc = 0x1982acu;

    // 0x1982ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1982acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1982b0: 0x8c63133c  lw          $v1, 0x133C($v1)
    ctx->pc = 0x1982b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4924)));
    // 0x1982b4: 0x2c61012d  sltiu       $at, $v1, 0x12D
    ctx->pc = 0x1982b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)301) ? 1 : 0);
    // 0x1982b8: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1982B8u;
    {
        const bool branch_taken_0x1982b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1982b8) {
            ctx->pc = 0x198360u;
            return;
        }
    }
    ctx->pc = 0x1982C0u;
    // 0x1982c0: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x1982c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x1982c4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1982C4u;
    {
        const bool branch_taken_0x1982c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1982c4) {
            ctx->pc = 0x198310u;
            return;
        }
    }
    ctx->pc = 0x1982CCu;
    // 0x1982cc: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x1982ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1982d0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1982D0u;
    {
        const bool branch_taken_0x1982d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1982d0) {
            ctx->pc = 0x198310u;
            return;
        }
    }
    ctx->pc = 0x1982D8u;
    // 0x1982d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1982d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1982dc: 0xac60133c  sw          $zero, 0x133C($v1)
    ctx->pc = 0x1982dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4924), GPR_U32(ctx, 0));
    // 0x1982e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1982e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1982e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1982e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1982e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1982e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1982ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1982ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1982f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1982f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1982f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1982f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1982f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1982f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1982fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1982fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198300: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198304: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198304u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198308: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19830c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19830cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x198310u;
}
