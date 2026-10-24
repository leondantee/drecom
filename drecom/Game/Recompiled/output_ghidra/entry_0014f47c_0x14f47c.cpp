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

// Function: entry_0014f47c
// Address: 0x14f47c - 0x14f498
void entry_0014f47c_0x14f47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f47c_0x14f47c");
#endif

    ctx->pc = 0x14f47cu;

    // 0x14f47c: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x14f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
    // 0x14f480: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x14f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x14f484: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x14f484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x14f488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f48c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f48cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f490: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F490u;
    {
        const bool branch_taken_0x14f490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f490) {
            ctx->pc = 0x14F4ACu;
            return;
        }
    }
    ctx->pc = 0x14F498u;
}
