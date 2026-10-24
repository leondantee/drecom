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

// Function: entry_00327020
// Address: 0x327020 - 0x32704c
void entry_00327020_0x327020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327020_0x327020");
#endif

    ctx->pc = 0x327020u;

    // 0x327020: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x327020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x327024: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327028: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x327028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32702c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x32702cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x327030: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x327030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x327034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327038: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x327038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32703c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x32703cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x327040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x327040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327044: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x327044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327048: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x327048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->pc = 0x32704cu;
}
