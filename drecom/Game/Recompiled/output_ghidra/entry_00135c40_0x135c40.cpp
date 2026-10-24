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

// Function: entry_00135c40
// Address: 0x135c40 - 0x135c78
void entry_00135c40_0x135c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135c40_0x135c40");
#endif

    ctx->pc = 0x135c40u;

    // 0x135c40: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x135C40u;
    {
        const bool branch_taken_0x135c40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c40) {
            ctx->pc = 0x135C94u;
            return;
        }
    }
    ctx->pc = 0x135C48u;
    // 0x135c48: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x135c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x135c4c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x135C4Cu;
    {
        const bool branch_taken_0x135c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c4c) {
            ctx->pc = 0x135C78u;
            return;
        }
    }
    ctx->pc = 0x135C54u;
    // 0x135c54: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x135c54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135c58: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x135c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x135c5c: 0x3c05fdff  lui         $a1, 0xFDFF
    ctx->pc = 0x135c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65023 << 16));
    // 0x135c60: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x135c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x135c64: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x135c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x135c68: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x135c68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x135c6c: 0xa2000097  sb          $zero, 0x97($s0)
    ctx->pc = 0x135c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x135c70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135C70u;
    {
        const bool branch_taken_0x135c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c70) {
            ctx->pc = 0x135C94u;
            return;
        }
    }
    ctx->pc = 0x135C78u;
}
