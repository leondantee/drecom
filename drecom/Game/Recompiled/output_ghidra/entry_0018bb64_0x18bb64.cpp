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

// Function: entry_0018bb64
// Address: 0x18bb64 - 0x18bb90
void entry_0018bb64_0x18bb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bb64_0x18bb64");
#endif

    ctx->pc = 0x18bb64u;

    // 0x18bb64: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18bb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18bb68: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x18bb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x18bb6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18BB6Cu;
    {
        const bool branch_taken_0x18bb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb6c) {
            ctx->pc = 0x18BB90u;
            return;
        }
    }
    ctx->pc = 0x18BB74u;
    // 0x18bb74: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x18bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18bb78: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x18bb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x18bb7c: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x18bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x18bb80: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x18bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18bb84: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x18bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x18bb88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18bb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18bb8c: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x18bb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    ctx->pc = 0x18bb90u;
}
