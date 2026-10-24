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

// Function: entry_0016c8e0
// Address: 0x16c8e0 - 0x16c92c
void entry_0016c8e0_0x16c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c8e0_0x16c8e0");
#endif

    ctx->pc = 0x16c8e0u;

    // 0x16c8e0: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x16c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x16c8e4: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16c8e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16c8e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c8ec: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16c8f0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c8f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16c8f8: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x16c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16c8fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16c8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16c900: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16c904: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x16c904u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c908: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c90c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16c910: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c914: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C914u;
    {
        const bool branch_taken_0x16c914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c914) {
            ctx->pc = 0x16C92Cu;
            return;
        }
    }
    ctx->pc = 0x16C91Cu;
    // 0x16c91c: 0x8fb500a8  lw          $s5, 0xA8($sp)
    ctx->pc = 0x16c91cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c920: 0x8fbe00b8  lw          $fp, 0xB8($sp)
    ctx->pc = 0x16c920u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16c924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C924u;
    {
        const bool branch_taken_0x16c924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c924) {
            ctx->pc = 0x16C938u;
            return;
        }
    }
    ctx->pc = 0x16C92Cu;
}
