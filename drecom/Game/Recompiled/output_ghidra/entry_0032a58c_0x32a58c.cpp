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

// Function: entry_0032a58c
// Address: 0x32a58c - 0x32a5f4
void entry_0032a58c_0x32a58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a58c_0x32a58c");
#endif

    ctx->pc = 0x32a58cu;

    // 0x32a58c: 0x866213a8  lh          $v0, 0x13A8($s3)
    ctx->pc = 0x32a58cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5032)));
    // 0x32a590: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32a590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32a594: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32a594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32a598: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32A598u;
    {
        const bool branch_taken_0x32a598 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32a598) {
            ctx->pc = 0x32A5F4u;
            return;
        }
    }
    ctx->pc = 0x32A5A0u;
    // 0x32a5a0: 0x866213a8  lh          $v0, 0x13A8($s3)
    ctx->pc = 0x32a5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5032)));
    // 0x32a5a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32a5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32a5a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32a5a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32a5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a5b0: 0x0  nop
    ctx->pc = 0x32a5b0u;
    // NOP
    // 0x32a5b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32a5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a5b8: 0x866213aa  lh          $v0, 0x13AA($s3)
    ctx->pc = 0x32a5b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5034)));
    // 0x32a5bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32a5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32a5c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32a5c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32a5c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a5c8: 0x0  nop
    ctx->pc = 0x32a5c8u;
    // NOP
    // 0x32a5cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a5ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a5d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32a5d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32a5d4: 0x82022820  lb          $v0, 0x2820($s0)
    ctx->pc = 0x32a5d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a5dc: 0x0  nop
    ctx->pc = 0x32a5dcu;
    // NOP
    // 0x32a5e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a5e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a5e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32a5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a5e8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x32a5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x32a5ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32A5ECu;
    {
        const bool branch_taken_0x32a5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a5ec) {
            ctx->pc = 0x32A600u;
            return;
        }
    }
    ctx->pc = 0x32A5F4u;
}
