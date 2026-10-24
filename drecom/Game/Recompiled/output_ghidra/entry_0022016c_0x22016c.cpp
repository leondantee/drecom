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

// Function: entry_0022016c
// Address: 0x22016c - 0x220188
void entry_0022016c_0x22016c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022016c_0x22016c");
#endif

    ctx->pc = 0x22016cu;

    // 0x22016c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x22016cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220170: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x220170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x220174: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x220174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x220178: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x220178u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x22017c: 0x24530118  addiu       $s3, $v0, 0x118
    ctx->pc = 0x22017cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x220180: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x220180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x220184: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x220184u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x220188u;
}
