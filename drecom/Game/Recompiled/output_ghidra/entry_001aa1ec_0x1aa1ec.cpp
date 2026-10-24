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

// Function: entry_001aa1ec
// Address: 0x1aa1ec - 0x1aa20c
void entry_001aa1ec_0x1aa1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa1ec_0x1aa1ec");
#endif

    ctx->pc = 0x1aa1ecu;

    // 0x1aa1ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aa1ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa1f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1f4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1aa1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1aa1f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1aa1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1fc: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x1aa1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1aa200: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1aa200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1aa204: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1aa204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1aa208: 0xac82020c  sw          $v0, 0x20C($a0)
    ctx->pc = 0x1aa208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 2));
    ctx->pc = 0x1aa20cu;
}
