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

// Function: entry_002d5354
// Address: 0x2d5354 - 0x2d5380
void entry_002d5354_0x2d5354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5354_0x2d5354");
#endif

    ctx->pc = 0x2d5354u;

    // 0x2d5354: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5358: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2d5358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2d535c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d535cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d5360: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2d5360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2d5364: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5364u;
    {
        const bool branch_taken_0x2d5364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d5364) {
            ctx->pc = 0x2D5380u;
            return;
        }
    }
    ctx->pc = 0x2D536Cu;
    // 0x2d536c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2d536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d5370: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5370u;
    {
        const bool branch_taken_0x2d5370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d5370) {
            ctx->pc = 0x2D5380u;
            return;
        }
    }
    ctx->pc = 0x2D5378u;
    // 0x2d5378: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D5378u;
    {
        const bool branch_taken_0x2d5378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5378) {
            ctx->pc = 0x2D53ACu;
            return;
        }
    }
    ctx->pc = 0x2D5380u;
}
