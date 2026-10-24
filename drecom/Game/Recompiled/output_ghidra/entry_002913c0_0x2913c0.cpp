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

// Function: entry_002913c0
// Address: 0x2913c0 - 0x2913f8
void entry_002913c0_0x2913c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002913c0_0x2913c0");
#endif

    ctx->pc = 0x2913c0u;

    // 0x2913c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2913c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2913c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2913c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2913c8: 0x0  nop
    ctx->pc = 0x2913c8u;
    // NOP
    // 0x2913cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2913ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2913d0: 0x0  nop
    ctx->pc = 0x2913d0u;
    // NOP
    // 0x2913d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2913d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2913d8: 0xe42032a4  swc1        $f0, 0x32A4($at)
    ctx->pc = 0x2913d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232A4u, _value); } while (0); }
    // 0x2913dc: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2913DCu;
    {
        const bool branch_taken_0x2913dc = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x2913dc) {
            ctx->pc = 0x2913F8u;
            return;
        }
    }
    ctx->pc = 0x2913E4u;
    // 0x2913e4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2913e4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2913e8: 0x0  nop
    ctx->pc = 0x2913e8u;
    // NOP
    // 0x2913ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2913ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2913f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2913F0u;
    {
        const bool branch_taken_0x2913f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2913f0) {
            ctx->pc = 0x291414u;
            return;
        }
    }
    ctx->pc = 0x2913F8u;
}
