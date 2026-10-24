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

// Function: entry_003145a8
// Address: 0x3145a8 - 0x3145dc
void entry_003145a8_0x3145a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003145a8_0x3145a8");
#endif

    ctx->pc = 0x3145a8u;

    // 0x3145a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3145a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3145ac: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x3145acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x3145b0: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x3145b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x3145b4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3145b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3145b8: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x3145b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x3145bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3145bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3145c0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x3145c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x3145c4: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x3145c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x3145c8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3145c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3145cc: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x3145ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x3145d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3145d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3145d4: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x3145d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3145d8: 0x3271ffff  andi        $s1, $s3, 0xFFFF
    ctx->pc = 0x3145d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x3145dcu;
}
