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

// Function: entry_0021b058
// Address: 0x21b058 - 0x21b078
void entry_0021b058_0x21b058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b058_0x21b058");
#endif

    ctx->pc = 0x21b058u;

    // 0x21b058: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b05c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21b060: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21b060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21b064: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21b064u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21b068: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x21b068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21b06c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x21b06cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21b070: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x21b070u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x21b074: 0x0  nop
    ctx->pc = 0x21b074u;
    // NOP
    ctx->pc = 0x21b078u;
}
