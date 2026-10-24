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

// Function: entry_0033d99c
// Address: 0x33d99c - 0x33da08
void entry_0033d99c_0x33d99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d99c_0x33d99c");
#endif

    ctx->pc = 0x33d99cu;

    // 0x33d99c: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x33d99cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x33d9a0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33d9a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d9a8: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x33d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x33d9ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d9b0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33d9b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d9b8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33d9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33d9bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d9c0: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33d9c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d9c8: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x33d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x33d9cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d9d0: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33d9d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d9d8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33d9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33d9dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d9e0: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x33d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x33d9e4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33d9e8: 0x24710240  addiu       $s1, $v1, 0x240
    ctx->pc = 0x33d9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x33d9ec: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x33d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x33d9f0: 0x2c610080  sltiu       $at, $v1, 0x80
    ctx->pc = 0x33d9f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x33d9f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D9F4u;
    {
        const bool branch_taken_0x33d9f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d9f4) {
            ctx->pc = 0x33DA08u;
            return;
        }
    }
    ctx->pc = 0x33D9FCu;
    // 0x33d9fc: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x33d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x33da00: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x33da00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x33da04: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x33da04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    ctx->pc = 0x33da08u;
}
