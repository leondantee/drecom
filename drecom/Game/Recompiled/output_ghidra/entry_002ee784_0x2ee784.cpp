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

// Function: entry_002ee784
// Address: 0x2ee784 - 0x2ee7ac
void entry_002ee784_0x2ee784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee784_0x2ee784");
#endif

    ctx->pc = 0x2ee784u;

    // 0x2ee784: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee788: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ee788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee78c: 0x94620118  lhu         $v0, 0x118($v1)
    ctx->pc = 0x2ee78cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x2ee790: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2ee790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2ee794: 0xa4620118  sh          $v0, 0x118($v1)
    ctx->pc = 0x2ee794u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ee798: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee79c: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee79cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee7a0: 0x24550118  addiu       $s5, $v0, 0x118
    ctx->pc = 0x2ee7a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x2ee7a4: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x2ee7a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ee7a8: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x2ee7a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2ee7acu;
}
