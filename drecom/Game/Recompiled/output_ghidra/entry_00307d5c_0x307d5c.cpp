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

// Function: entry_00307d5c
// Address: 0x307d5c - 0x307dc0
void entry_00307d5c_0x307d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307d5c_0x307d5c");
#endif

    ctx->pc = 0x307d5cu;

    // 0x307d5c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d60: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x307d60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x307d64: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x307d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x307d68: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x307d68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x307d6c: 0x481004f  bgez        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x307D6Cu;
    {
        const bool branch_taken_0x307d6c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x307d6c) {
            ctx->pc = 0x307EACu;
            return;
        }
    }
    ctx->pc = 0x307D74u;
    // 0x307d74: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d78: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x307d78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x307d7c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x307d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307d80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x307d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x307d84: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x307D84u;
    {
        const bool branch_taken_0x307d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307d84) {
            ctx->pc = 0x307DC0u;
            return;
        }
    }
    ctx->pc = 0x307D8Cu;
    // 0x307d8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x307d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307d90: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d94: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x307d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x307d98: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d9c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x307d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x307da0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307da4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307da4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307da8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307dac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x307dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307db0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307db4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x307db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x307db8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x307DB8u;
    {
        const bool branch_taken_0x307db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307db8) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x307DC0u;
}
