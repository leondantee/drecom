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

// Function: entry_00219408
// Address: 0x219408 - 0x219430
void entry_00219408_0x219408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219408_0x219408");
#endif

    ctx->pc = 0x219408u;

    // 0x219408: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21940c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21940cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219410: 0x94620118  lhu         $v0, 0x118($v1)
    ctx->pc = 0x219410u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x219414: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x219414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x219418: 0xa4620118  sh          $v0, 0x118($v1)
    ctx->pc = 0x219418u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x21941c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21941cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219420: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x219420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x219424: 0x24530118  addiu       $s3, $v0, 0x118
    ctx->pc = 0x219424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x219428: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x219428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21942c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x21942cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x219430u;
}
