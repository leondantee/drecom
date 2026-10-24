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

// Function: entry_0020a548
// Address: 0x20a548 - 0x20a5ac
void entry_0020a548_0x20a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a548_0x20a548");
#endif

    ctx->pc = 0x20a548u;

    // 0x20a548: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a54c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x20a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20a550: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x20a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x20a554: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x20a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x20a558: 0xac6200f0  sw          $v0, 0xF0($v1)
    ctx->pc = 0x20a558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    // 0x20a55c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a560: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x20a560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20a564: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x20a564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x20a568: 0x24a6fff6  addiu       $a2, $a1, -0xA
    ctx->pc = 0x20a568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x20a56c: 0xac8600f4  sw          $a2, 0xF4($a0)
    ctx->pc = 0x20a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 6));
    // 0x20a570: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a574: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x20a574u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20a578: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x20a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x20a57c: 0x2443fff6  addiu       $v1, $v0, -0xA
    ctx->pc = 0x20a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x20a580: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x20a580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x20a584: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a588: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x20a588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x20a58c: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x20a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x20a590: 0x2c610100  sltiu       $at, $v1, 0x100
    ctx->pc = 0x20a590u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20a594: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A594u;
    {
        const bool branch_taken_0x20a594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a594) {
            ctx->pc = 0x20A5ACu;
            return;
        }
    }
    ctx->pc = 0x20A59Cu;
    // 0x20a59c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20a5a0: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a5a4: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x20a5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x20a5a8: 0xaca400f0  sw          $a0, 0xF0($a1)
    ctx->pc = 0x20a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 4));
    ctx->pc = 0x20a5acu;
}
