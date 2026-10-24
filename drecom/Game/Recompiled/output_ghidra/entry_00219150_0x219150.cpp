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

// Function: entry_00219150
// Address: 0x219150 - 0x219178
void entry_00219150_0x219150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219150_0x219150");
#endif

    ctx->pc = 0x219150u;

    // 0x219150: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219154: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219154u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219158: 0x94620118  lhu         $v0, 0x118($v1)
    ctx->pc = 0x219158u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x21915c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x219160: 0xa4620118  sh          $v0, 0x118($v1)
    ctx->pc = 0x219160u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x219164: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219168: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x219168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21916c: 0x24550118  addiu       $s5, $v0, 0x118
    ctx->pc = 0x21916cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x219170: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x219170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x219174: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x219174u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x219178u;
}
