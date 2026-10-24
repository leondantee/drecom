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

// Function: entry_001cecd0
// Address: 0x1cecd0 - 0x1ced14
void entry_001cecd0_0x1cecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cecd0_0x1cecd0");
#endif

    ctx->pc = 0x1cecd0u;

    // 0x1cecd0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cecd4: 0x94830a00  lhu         $v1, 0xA00($a0)
    ctx->pc = 0x1cecd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2560)));
    // 0x1cecd8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1cecd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1cecdc: 0x2883000f  slti        $v1, $a0, 0xF
    ctx->pc = 0x1cecdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1cece0: 0x146004ad  bnez        $v1, . + 4 + (0x4AD << 2)
    ctx->pc = 0x1CECE0u;
    {
        const bool branch_taken_0x1cece0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cece0) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CECE8u;
    // 0x1cece8: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1cece8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1cecec: 0x30a60040  andi        $a2, $a1, 0x40
    ctx->pc = 0x1cececu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x1cecf0: 0x10c004a9  beqz        $a2, . + 4 + (0x4A9 << 2)
    ctx->pc = 0x1CECF0u;
    {
        const bool branch_taken_0x1cecf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cecf0) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CECF8u;
    // 0x1cecf8: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1cecf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cecfc: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x1cecfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ced00: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x1ced00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x1ced04: 0x1101825  or          $v1, $t0, $s0
    ctx->pc = 0x1ced04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 16));
    // 0x1ced08: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1ced08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1ced0c: 0x100004a2  b           . + 4 + (0x4A2 << 2)
    ctx->pc = 0x1CED0Cu;
    {
        const bool branch_taken_0x1ced0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ced0c) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CED14u;
}
