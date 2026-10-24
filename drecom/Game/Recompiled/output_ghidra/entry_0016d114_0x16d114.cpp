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

// Function: entry_0016d114
// Address: 0x16d114 - 0x16d160
void entry_0016d114_0x16d114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d114_0x16d114");
#endif

    ctx->pc = 0x16d114u;

    // 0x16d114: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x16d114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x16d118: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16d118u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16d11c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d120: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16d120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16d124: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d128: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16d12c: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x16d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16d130: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16d130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d134: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d138: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x16d138u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d13c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16d140: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16d140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16d144: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d148: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D148u;
    {
        const bool branch_taken_0x16d148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d148) {
            ctx->pc = 0x16D160u;
            return;
        }
    }
    ctx->pc = 0x16D150u;
    // 0x16d150: 0x8fb500a8  lw          $s5, 0xA8($sp)
    ctx->pc = 0x16d150u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16d154: 0x8fbe00b8  lw          $fp, 0xB8($sp)
    ctx->pc = 0x16d154u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16d158: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D158u;
    {
        const bool branch_taken_0x16d158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d158) {
            ctx->pc = 0x16D16Cu;
            return;
        }
    }
    ctx->pc = 0x16D160u;
}
