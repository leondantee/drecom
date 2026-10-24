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

// Function: entry_002d58f8
// Address: 0x2d58f8 - 0x2d5940
void entry_002d58f8_0x2d58f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d58f8_0x2d58f8");
#endif

    ctx->pc = 0x2d58f8u;

    // 0x2d58f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d58f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d58fc: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x2d58fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2d5900: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5904: 0x8c631348  lw          $v1, 0x1348($v1)
    ctx->pc = 0x2d5904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x2d5908: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2d5908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2d590c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D590Cu;
    {
        const bool branch_taken_0x2d590c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d590c) {
            ctx->pc = 0x2D5940u;
            return;
        }
    }
    ctx->pc = 0x2D5914u;
    // 0x2d5914: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2d5914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d5918: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2d5918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x2d591c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2d591cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2d5920: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2d5920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2d5924: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x2d5924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x2d5928: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2d5928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2d592c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2d592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2d5930: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2d5930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2d5934: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2d5934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2d5938: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D5938u;
    {
        const bool branch_taken_0x2d5938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5938) {
            ctx->pc = 0x2D5964u;
            return;
        }
    }
    ctx->pc = 0x2D5940u;
}
