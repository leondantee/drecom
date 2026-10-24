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

// Function: entry_0033d930
// Address: 0x33d930 - 0x33d99c
void entry_0033d930_0x33d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d930_0x33d930");
#endif

    ctx->pc = 0x33d930u;

    // 0x33d930: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x33d930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x33d934: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33d934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33d938: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d93c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x33d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x33d940: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d944: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x33d944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33d948: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d94c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33d94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33d950: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d954: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33d954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33d958: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d95c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x33d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x33d960: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d964: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x33d964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x33d968: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33d968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d96c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x33d96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x33d970: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33d970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33d974: 0x8e430130  lw          $v1, 0x130($s2)
    ctx->pc = 0x33d974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x33d978: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x33d978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x33d97c: 0x247101b0  addiu       $s1, $v1, 0x1B0
    ctx->pc = 0x33d97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x33d980: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x33d980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x33d984: 0x2c610080  sltiu       $at, $v1, 0x80
    ctx->pc = 0x33d984u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x33d988: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D988u;
    {
        const bool branch_taken_0x33d988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d988) {
            ctx->pc = 0x33D99Cu;
            return;
        }
    }
    ctx->pc = 0x33D990u;
    // 0x33d990: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x33d990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x33d994: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x33d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x33d998: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x33d998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    ctx->pc = 0x33d99cu;
}
