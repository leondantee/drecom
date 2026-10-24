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

// Function: entry_001a0ba0
// Address: 0x1a0ba0 - 0x1a0bd0
void entry_001a0ba0_0x1a0ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0ba0_0x1a0ba0");
#endif

    ctx->pc = 0x1a0ba0u;

    // 0x1a0ba0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0ba4: 0x94630014  lhu         $v1, 0x14($v1)
    ctx->pc = 0x1a0ba4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1a0ba8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a0ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0bac: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1a0bacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0bb0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0bb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0bb8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0BB8u;
    {
        const bool branch_taken_0x1a0bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0bb8) {
            ctx->pc = 0x1A0BD0u;
            return;
        }
    }
    ctx->pc = 0x1A0BC0u;
    // 0x1a0bc0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0bc4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1a0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a0bc8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1a0bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1a0bcc: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1a0bccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x1a0bd0u;
}
