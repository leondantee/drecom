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

// Function: entry_00203184
// Address: 0x203184 - 0x20321c
void entry_00203184_0x203184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203184_0x203184");
#endif

    ctx->pc = 0x203184u;

    // 0x203184: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x203184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203188: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x203188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x20318c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20318cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203190: 0x0  nop
    ctx->pc = 0x203190u;
    // NOP
    // 0x203194: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x203194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x203198: 0xc4c0484c  lwc1        $f0, 0x484C($a2)
    ctx->pc = 0x203198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20319c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x20319cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2031a0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2031a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2031a4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x2031a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2031a8: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2031a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2031ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2031acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2031b0: 0x0  nop
    ctx->pc = 0x2031b0u;
    // NOP
    // 0x2031b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2031b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2031b8: 0xc4c04850  lwc1        $f0, 0x4850($a2)
    ctx->pc = 0x2031b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2031bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2031bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2031c0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2031c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2031c4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2031c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2031c8: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x2031c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2031cc: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x2031ccu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2031d0: 0x0  nop
    ctx->pc = 0x2031d0u;
    // NOP
    // 0x2031d4: 0x0  nop
    ctx->pc = 0x2031d4u;
    // NOP
    // 0x2031d8: 0x1812  mflo        $v1
    ctx->pc = 0x2031d8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2031dc: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2031dcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2031e0: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2031e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2031e4: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x2031e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2031e8: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x2031e8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2031ec: 0x0  nop
    ctx->pc = 0x2031ecu;
    // NOP
    // 0x2031f0: 0x0  nop
    ctx->pc = 0x2031f0u;
    // NOP
    // 0x2031f4: 0x3012  mflo        $a2
    ctx->pc = 0x2031f4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2031f8: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x2031f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x2031fc: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2031fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203200: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x203200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x203204: 0x938380d0  lbu         $v1, -0x7F30($gp)
    ctx->pc = 0x203204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x203208: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203208u;
    {
        const bool branch_taken_0x203208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x203208) {
            ctx->pc = 0x20321Cu;
            return;
        }
    }
    ctx->pc = 0x203210u;
    // 0x203210: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x203210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203214: 0x24632100  addiu       $v1, $v1, 0x2100
    ctx->pc = 0x203214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8448));
    // 0x203218: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x203218u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20321cu;
}
