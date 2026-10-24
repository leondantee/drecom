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

// Function: entry_001c6214
// Address: 0x1c6214 - 0x1c6244
void entry_001c6214_0x1c6214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6214_0x1c6214");
#endif

    ctx->pc = 0x1c6214u;

    // 0x1c6214: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c6214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6218: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c6218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c621c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c621cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c6220: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c6220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c6224: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6224u;
    {
        const bool branch_taken_0x1c6224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6224) {
            ctx->pc = 0x1C6244u;
            return;
        }
    }
    ctx->pc = 0x1C622Cu;
    // 0x1c622c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6230: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c6230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c6234: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x1c6234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x1c6238: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c6238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c623c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c623cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6240: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c6240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c6244u;
}
