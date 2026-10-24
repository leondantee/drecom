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

// Function: entry_001c5474
// Address: 0x1c5474 - 0x1c54a4
void entry_001c5474_0x1c5474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5474_0x1c5474");
#endif

    ctx->pc = 0x1c5474u;

    // 0x1c5474: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5478: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c5478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c547c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c547cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c5480: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c5480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c5484: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5484u;
    {
        const bool branch_taken_0x1c5484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5484) {
            ctx->pc = 0x1C54A4u;
            return;
        }
    }
    ctx->pc = 0x1C548Cu;
    // 0x1c548c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c548cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5490: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c5490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c5494: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c5494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c5498: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c5498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c549c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c549cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c54a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c54a4u;
}
