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

// Function: entry_002e2050
// Address: 0x2e2050 - 0x2e2080
void entry_002e2050_0x2e2050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2050_0x2e2050");
#endif

    ctx->pc = 0x2e2050u;

    // 0x2e2050: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2e2050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2e2054: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e2054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e2058: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e205c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2060: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2064: 0xe46002ac  swc1        $f0, 0x2AC($v1)
    ctx->pc = 0x2e2064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 684), bits); }
    // 0x2e2068: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2e2068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2e206c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e206cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e2070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2074: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2078: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e207c: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    ctx->pc = 0x2e2080u;
}
