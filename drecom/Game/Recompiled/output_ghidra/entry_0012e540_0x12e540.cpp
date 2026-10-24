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

// Function: entry_0012e540
// Address: 0x12e540 - 0x12e580
void entry_0012e540_0x12e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e540_0x12e540");
#endif

    ctx->pc = 0x12e540u;

    // 0x12e540: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e544: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12e544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12e548: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12e548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12e54c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12e54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12e550: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12E550u;
    {
        const bool branch_taken_0x12e550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e550) {
            ctx->pc = 0x12E580u;
            return;
        }
    }
    ctx->pc = 0x12E558u;
    // 0x12e558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e55c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e560: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x12e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x12e564: 0xa0430c60  sb          $v1, 0xC60($v0)
    ctx->pc = 0x12e564u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3168), (uint8_t)GPR_U32(ctx, 3));
    // 0x12e568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e56c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e570: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x12e570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x12e574: 0xa0430cf0  sb          $v1, 0xCF0($v0)
    ctx->pc = 0x12e574u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3312), (uint8_t)GPR_U32(ctx, 3));
    // 0x12e578: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12E578u;
    {
        const bool branch_taken_0x12e578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e578) {
            ctx->pc = 0x12E5A0u;
            return;
        }
    }
    ctx->pc = 0x12E580u;
}
