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

// Function: entry_001a0b40
// Address: 0x1a0b40 - 0x1a0b70
void entry_001a0b40_0x1a0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0b40_0x1a0b40");
#endif

    ctx->pc = 0x1a0b40u;

    // 0x1a0b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0b44: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0b44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0b48: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a0b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0b4c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1a0b4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0b50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0b54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a0b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a0b58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0B58u;
    {
        const bool branch_taken_0x1a0b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0b58) {
            ctx->pc = 0x1A0B70u;
            return;
        }
    }
    ctx->pc = 0x1A0B60u;
    // 0x1a0b60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a0b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0b64: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a0b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0b68: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1a0b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1a0b6c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1a0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x1a0b70u;
}
