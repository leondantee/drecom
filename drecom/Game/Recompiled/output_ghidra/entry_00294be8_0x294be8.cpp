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

// Function: entry_00294be8
// Address: 0x294be8 - 0x294c18
void entry_00294be8_0x294be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294be8_0x294be8");
#endif

    ctx->pc = 0x294be8u;

    // 0x294be8: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x294be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x294bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294bf0: 0x0  nop
    ctx->pc = 0x294bf0u;
    // NOP
    // 0x294bf4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x294bf4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x294bf8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x294bf8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294bfc: 0x0  nop
    ctx->pc = 0x294bfcu;
    // NOP
    // 0x294c00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x294c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x294c04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x294c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x294c08: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x294c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x294c0c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x294c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x294c10: 0xac205b88  sw          $zero, 0x5B88($at)
    ctx->pc = 0x294c10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x625B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x625B88u, _value); } while (0);
    // 0x294c14: 0x0  nop
    ctx->pc = 0x294c14u;
    // NOP
    ctx->pc = 0x294c18u;
}
