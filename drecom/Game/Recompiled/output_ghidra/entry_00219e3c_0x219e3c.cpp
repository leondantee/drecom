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

// Function: entry_00219e3c
// Address: 0x219e3c - 0x219e58
void entry_00219e3c_0x219e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219e3c_0x219e3c");
#endif

    ctx->pc = 0x219e3cu;

    // 0x219e3c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219e40: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219e40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219e44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219e48: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219e48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219e4c: 0x247e0118  addiu       $fp, $v1, 0x118
    ctx->pc = 0x219e4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x219e50: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x219e50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x219e54: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x219e54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x219e58u;
}
