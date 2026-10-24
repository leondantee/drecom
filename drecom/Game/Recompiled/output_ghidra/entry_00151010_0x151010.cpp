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

// Function: entry_00151010
// Address: 0x151010 - 0x151030
void entry_00151010_0x151010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151010_0x151010");
#endif

    ctx->pc = 0x151010u;

    // 0x151010: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x151010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x151014: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151014u;
    {
        const bool branch_taken_0x151014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151014) {
            ctx->pc = 0x151030u;
            return;
        }
    }
    ctx->pc = 0x15101Cu;
    // 0x15101c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x15101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151020: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x151020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x151024: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x151024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x151028: 0x853025  or          $a2, $a0, $a1
    ctx->pc = 0x151028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15102c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x15102cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x151030u;
}
