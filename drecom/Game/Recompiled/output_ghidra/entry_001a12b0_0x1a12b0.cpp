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

// Function: entry_001a12b0
// Address: 0x1a12b0 - 0x1a12e4
void entry_001a12b0_0x1a12b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a12b0_0x1a12b0");
#endif

    ctx->pc = 0x1a12b0u;

    // 0x1a12b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a12b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a12b4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a12b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a12b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a12bc: 0xa0640026  sb          $a0, 0x26($v1)
    ctx->pc = 0x1a12bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a12c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a12c4: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a12c8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a12c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a12cc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a12ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a12d0: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x1a12d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a12d4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a12d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a12d8: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x1a12d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a12dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A12DCu;
    {
        const bool branch_taken_0x1a12dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12dc) {
            ctx->pc = 0x1A1340u;
            return;
        }
    }
    ctx->pc = 0x1A12E4u;
}
