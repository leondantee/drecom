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

// Function: entry_003137e8
// Address: 0x3137e8 - 0x313810
void entry_003137e8_0x3137e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003137e8_0x3137e8");
#endif

    ctx->pc = 0x3137e8u;

    // 0x3137e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3137e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3137ec: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x3137ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x3137f0: 0x94620118  lhu         $v0, 0x118($v1)
    ctx->pc = 0x3137f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x3137f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3137f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3137f8: 0xa4620118  sh          $v0, 0x118($v1)
    ctx->pc = 0x3137f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x3137fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3137fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x313800: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x313800u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x313804: 0x24530118  addiu       $s3, $v0, 0x118
    ctx->pc = 0x313804u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x313808: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x313808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31380c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x31380cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x313810u;
}
