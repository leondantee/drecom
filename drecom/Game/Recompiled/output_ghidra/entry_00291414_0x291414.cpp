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

// Function: entry_00291414
// Address: 0x291414 - 0x29144c
void entry_00291414_0x291414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291414_0x291414");
#endif

    ctx->pc = 0x291414u;

    // 0x291414: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x291414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x291418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29141c: 0x0  nop
    ctx->pc = 0x29141cu;
    // NOP
    // 0x291420: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x291420u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x291424: 0x0  nop
    ctx->pc = 0x291424u;
    // NOP
    // 0x291428: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29142c: 0xe42032b0  swc1        $f0, 0x32B0($at)
    ctx->pc = 0x29142cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232B0u, _value); } while (0); }
    // 0x291430: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x291430u;
    {
        const bool branch_taken_0x291430 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x291430) {
            ctx->pc = 0x29144Cu;
            return;
        }
    }
    ctx->pc = 0x291438u;
    // 0x291438: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x291438u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29143c: 0x0  nop
    ctx->pc = 0x29143cu;
    // NOP
    // 0x291440: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291444: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291444u;
    {
        const bool branch_taken_0x291444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291444) {
            ctx->pc = 0x291468u;
            return;
        }
    }
    ctx->pc = 0x29144Cu;
}
