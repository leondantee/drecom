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

// Function: entry_0031524c
// Address: 0x31524c - 0x315268
void entry_0031524c_0x31524c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031524c_0x31524c");
#endif

    ctx->pc = 0x31524cu;

    // 0x31524c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31524cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315250: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x315250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x315254: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315258: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x315258u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x31525c: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x31525cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x315260: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x315260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x315264: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x315264u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x315268u;
}
