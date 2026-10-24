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

// Function: entry_0021f3d4
// Address: 0x21f3d4 - 0x21f3f8
void entry_0021f3d4_0x21f3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f3d4_0x21f3d4");
#endif

    ctx->pc = 0x21f3d4u;

    // 0x21f3d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f3d8: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f3dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f3e0: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x21f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f3e4: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x21f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x21f3e8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x21f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x21f3ec: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x21f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21f3f0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x21f3f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21f3f4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x21f3f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x21f3f8u;
}
