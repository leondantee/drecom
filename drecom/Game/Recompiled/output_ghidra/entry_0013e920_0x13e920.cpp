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

// Function: entry_0013e920
// Address: 0x13e920 - 0x13e95c
void entry_0013e920_0x13e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e920_0x13e920");
#endif

    ctx->pc = 0x13e920u;

    // 0x13e920: 0x8fa91668  lw          $t1, 0x1668($sp)
    ctx->pc = 0x13e920u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13e924: 0x8d250020  lw          $a1, 0x20($t1)
    ctx->pc = 0x13e924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x13e928: 0xafa5167c  sw          $a1, 0x167C($sp)
    ctx->pc = 0x13e928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5756), GPR_U32(ctx, 5));
    // 0x13e92c: 0x8fa5167c  lw          $a1, 0x167C($sp)
    ctx->pc = 0x13e92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5756)));
    // 0x13e930: 0x28a10065  slti        $at, $a1, 0x65
    ctx->pc = 0x13e930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x13e934: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E934u;
    {
        const bool branch_taken_0x13e934 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e934) {
            ctx->pc = 0x13E95Cu;
            return;
        }
    }
    ctx->pc = 0x13E93Cu;
    // 0x13e93c: 0x8fa61668  lw          $a2, 0x1668($sp)
    ctx->pc = 0x13e93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13e940: 0x24c700c0  addiu       $a3, $a2, 0xC0
    ctx->pc = 0x13e940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x13e944: 0xafa71668  sw          $a3, 0x1668($sp)
    ctx->pc = 0x13e944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5736), GPR_U32(ctx, 7));
    // 0x13e948: 0x8fa8169c  lw          $t0, 0x169C($sp)
    ctx->pc = 0x13e948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5788)));
    // 0x13e94c: 0x25020040  addiu       $v0, $t0, 0x40
    ctx->pc = 0x13e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x13e950: 0xafa2169c  sw          $v0, 0x169C($sp)
    ctx->pc = 0x13e950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5788), GPR_U32(ctx, 2));
    // 0x13e954: 0x1000058a  b           . + 4 + (0x58A << 2)
    ctx->pc = 0x13E954u;
    {
        const bool branch_taken_0x13e954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e954) {
            ctx->pc = 0x13FF80u;
            return;
        }
    }
    ctx->pc = 0x13E95Cu;
}
