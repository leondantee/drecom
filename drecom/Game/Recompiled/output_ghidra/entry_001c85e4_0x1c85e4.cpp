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

// Function: entry_001c85e4
// Address: 0x1c85e4 - 0x1c8620
void entry_001c85e4_0x1c85e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c85e4_0x1c85e4");
#endif

    ctx->pc = 0x1c85e4u;

    // 0x1c85e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c85e8: 0x8c451b60  lw          $a1, 0x1B60($v0)
    ctx->pc = 0x1c85e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x1c85ec: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C85ECu;
    {
        const bool branch_taken_0x1c85ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c85ec) {
            ctx->pc = 0x1C8620u;
            return;
        }
    }
    ctx->pc = 0x1C85F4u;
    // 0x1c85f4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c85f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c85f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c85fc: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1c85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x1c8600: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1c8600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c8604: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1c8604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1c8608: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c860c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c8610: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1c8610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1c8614: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8618: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c8618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c861c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1c861cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c8620u;
}
