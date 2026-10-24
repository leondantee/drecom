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

// Function: entry_001ab4c4
// Address: 0x1ab4c4 - 0x1ab4e0
void entry_001ab4c4_0x1ab4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab4c4_0x1ab4c4");
#endif

    ctx->pc = 0x1ab4c4u;

    // 0x1ab4c4: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x1ab4c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ab4c8: 0x3242001f  andi        $v0, $s2, 0x1F
    ctx->pc = 0x1ab4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x1ab4cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB4CCu;
    {
        const bool branch_taken_0x1ab4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4cc) {
            ctx->pc = 0x1AB4E0u;
            return;
        }
    }
    ctx->pc = 0x1AB4D4u;
    // 0x1ab4d4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ab4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ab4d8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1ab4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1ab4dc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1ab4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ab4e0u;
}
