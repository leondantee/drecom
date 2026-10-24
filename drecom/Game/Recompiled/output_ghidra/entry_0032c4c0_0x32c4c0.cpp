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

// Function: entry_0032c4c0
// Address: 0x32c4c0 - 0x32c530
void entry_0032c4c0_0x32c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c4c0_0x32c4c0");
#endif

    ctx->pc = 0x32c4c0u;

    // 0x32c4c0: 0x86c213a8  lh          $v0, 0x13A8($s6)
    ctx->pc = 0x32c4c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5032)));
    // 0x32c4c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x32c4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32c4c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32c4c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32c4cc: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x32C4CCu;
    {
        const bool branch_taken_0x32c4cc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x32c4cc) {
            ctx->pc = 0x32C530u;
            return;
        }
    }
    ctx->pc = 0x32C4D4u;
    // 0x32c4d4: 0x86c213a8  lh          $v0, 0x13A8($s6)
    ctx->pc = 0x32c4d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5032)));
    // 0x32c4d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32c4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32c4dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32c4dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32c4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c4e4: 0x0  nop
    ctx->pc = 0x32c4e4u;
    // NOP
    // 0x32c4e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32c4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32c4ec: 0x86c213aa  lh          $v0, 0x13AA($s6)
    ctx->pc = 0x32c4ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 5034)));
    // 0x32c4f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32c4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32c4f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32c4f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32c4f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c4fc: 0x0  nop
    ctx->pc = 0x32c4fcu;
    // NOP
    // 0x32c500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32c500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32c504: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32c504u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32c508: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32c508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32c50c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x32c50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x32c510: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x32c510u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32c514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c518: 0x0  nop
    ctx->pc = 0x32c518u;
    // NOP
    // 0x32c51c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32c51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32c520: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32c520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32c524: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x32c528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32C528u;
    {
        const bool branch_taken_0x32c528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c528) {
            ctx->pc = 0x32C53Cu;
            return;
        }
    }
    ctx->pc = 0x32C530u;
}
