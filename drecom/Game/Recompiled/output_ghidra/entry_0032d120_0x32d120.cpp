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

// Function: entry_0032d120
// Address: 0x32d120 - 0x32d150
void entry_0032d120_0x32d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d120_0x32d120");
#endif

    ctx->pc = 0x32d120u;

    // 0x32d120: 0x8e232828  lw          $v1, 0x2828($s1)
    ctx->pc = 0x32d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10280)));
    // 0x32d124: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x32d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x32d128: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32d128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d12c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d130: 0x0  nop
    ctx->pc = 0x32d130u;
    // NOP
    // 0x32d134: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d138: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x32d138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32d13c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d140: 0x0  nop
    ctx->pc = 0x32d140u;
    // NOP
    // 0x32d144: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d144u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d148: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x32d14c: 0x0  nop
    ctx->pc = 0x32d14cu;
    // NOP
    ctx->pc = 0x32d150u;
}
