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

// Function: entry_001c7450
// Address: 0x1c7450 - 0x1c748c
void entry_001c7450_0x1c7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7450_0x1c7450");
#endif

    ctx->pc = 0x1c7450u;

    // 0x1c7450: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7454: 0x94640a00  lhu         $a0, 0xA00($v1)
    ctx->pc = 0x1c7454u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x1c7458: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1c7458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1c745c: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1c745cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c7460: 0x146003c0  bnez        $v1, . + 4 + (0x3C0 << 2)
    ctx->pc = 0x1C7460u;
    {
        const bool branch_taken_0x1c7460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7460) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C7468u;
    // 0x1c7468: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1c7468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1c746c: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1c746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1c7470: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7470u;
    {
        const bool branch_taken_0x1c7470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7470) {
            ctx->pc = 0x1C748Cu;
            return;
        }
    }
    ctx->pc = 0x1C7478u;
    // 0x1c7478: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c747c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c7480: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1c7480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1c7484: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x1c7484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c7488: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x1c7488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
    ctx->pc = 0x1c748cu;
}
