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

// Function: entry_00218934
// Address: 0x218934 - 0x218950
void entry_00218934_0x218934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218934_0x218934");
#endif

    ctx->pc = 0x218934u;

    // 0x218934: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218938: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218938u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21893c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21893cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218940: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218940u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218944: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x218944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x218948: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x218948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21894c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x21894cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x218950u;
}
