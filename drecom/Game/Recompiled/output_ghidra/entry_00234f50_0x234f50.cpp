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

// Function: entry_00234f50
// Address: 0x234f50 - 0x234f7c
void entry_00234f50_0x234f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234f50_0x234f50");
#endif

    ctx->pc = 0x234f50u;

    // 0x234f50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234f54: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x234f54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x234f58: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x234f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x234f5c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x234f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x234f60: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x234F60u;
    {
        const bool branch_taken_0x234f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x234f60) {
            ctx->pc = 0x234FB0u;
            return;
        }
    }
    ctx->pc = 0x234F68u;
    // 0x234f68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234f6c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234F6Cu;
    {
        const bool branch_taken_0x234f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x234f6c) {
            ctx->pc = 0x234F7Cu;
            return;
        }
    }
    ctx->pc = 0x234F74u;
    // 0x234f74: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x234F74u;
    {
        const bool branch_taken_0x234f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234f74) {
            ctx->pc = 0x234F7Cu;
            return;
        }
    }
    ctx->pc = 0x234F7Cu;
}
