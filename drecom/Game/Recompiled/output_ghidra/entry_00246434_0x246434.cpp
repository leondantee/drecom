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

// Function: entry_00246434
// Address: 0x246434 - 0x246458
void entry_00246434_0x246434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246434_0x246434");
#endif

    ctx->pc = 0x246434u;

    // 0x246434: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246438: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x246438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24643c: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x24643cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x246440: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x246440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x246444: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x246444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x246448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24644c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x24644cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246450: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x246450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x246454: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x246454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x246458u;
}
