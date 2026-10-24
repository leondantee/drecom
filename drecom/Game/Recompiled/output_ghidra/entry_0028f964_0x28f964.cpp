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

// Function: entry_0028f964
// Address: 0x28f964 - 0x28f9c0
void entry_0028f964_0x28f964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f964_0x28f964");
#endif

    ctx->pc = 0x28f964u;

    // 0x28f964: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28f964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x28f968: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28f968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f96c: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f970: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28f970u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28f974: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28f974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28f978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f97c: 0x0  nop
    ctx->pc = 0x28f97cu;
    // NOP
    // 0x28f980: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x28f980u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28f984: 0x3c174000  lui         $s7, 0x4000
    ctx->pc = 0x28f984u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16384 << 16));
    // 0x28f988: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x28f988u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f98c: 0x0  nop
    ctx->pc = 0x28f98cu;
    // NOP
    // 0x28f990: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28f990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f994: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28f994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28f998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f99c: 0x0  nop
    ctx->pc = 0x28f99cu;
    // NOP
    // 0x28f9a0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x28f9a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28f9a4: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F9A4u;
    {
        const bool branch_taken_0x28f9a4 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x28f9a4) {
            ctx->pc = 0x28F9C0u;
            return;
        }
    }
    ctx->pc = 0x28F9ACu;
    // 0x28f9ac: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28f9acu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f9b0: 0x0  nop
    ctx->pc = 0x28f9b0u;
    // NOP
    // 0x28f9b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f9b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f9b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28F9B8u;
    {
        const bool branch_taken_0x28f9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f9b8) {
            ctx->pc = 0x28F9DCu;
            return;
        }
    }
    ctx->pc = 0x28F9C0u;
}
