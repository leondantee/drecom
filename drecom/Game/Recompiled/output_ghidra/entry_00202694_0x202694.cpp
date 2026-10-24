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

// Function: entry_00202694
// Address: 0x202694 - 0x20272c
void entry_00202694_0x202694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202694_0x202694");
#endif

    ctx->pc = 0x202694u;

    // 0x202694: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x202694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202698: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x202698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20269c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20269cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2026a0: 0x0  nop
    ctx->pc = 0x2026a0u;
    // NOP
    // 0x2026a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2026a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2026a8: 0xc4c0484c  lwc1        $f0, 0x484C($a2)
    ctx->pc = 0x2026a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2026ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2026acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2026b0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2026b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2026b4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x2026b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2026b8: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2026b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2026bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2026bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2026c0: 0x0  nop
    ctx->pc = 0x2026c0u;
    // NOP
    // 0x2026c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2026c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2026c8: 0xc4c04850  lwc1        $f0, 0x4850($a2)
    ctx->pc = 0x2026c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2026cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2026ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2026d0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2026d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2026d4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2026d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2026d8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2026d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2026dc: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x2026dcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2026e0: 0x0  nop
    ctx->pc = 0x2026e0u;
    // NOP
    // 0x2026e4: 0x0  nop
    ctx->pc = 0x2026e4u;
    // NOP
    // 0x2026e8: 0x3012  mflo        $a2
    ctx->pc = 0x2026e8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2026ec: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x2026ecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2026f0: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2026f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2026f4: 0x8fb300c4  lw          $s3, 0xC4($sp)
    ctx->pc = 0x2026f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2026f8: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x2026f8u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2026fc: 0x0  nop
    ctx->pc = 0x2026fcu;
    // NOP
    // 0x202700: 0x0  nop
    ctx->pc = 0x202700u;
    // NOP
    // 0x202704: 0xa012  mflo        $s4
    ctx->pc = 0x202704u;
    SET_GPR_U64(ctx, 20, ctx->lo);
    // 0x202708: 0xafb400c8  sw          $s4, 0xC8($sp)
    ctx->pc = 0x202708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 20));
    // 0x20270c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x20270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202710: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x202710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x202714: 0x938680d0  lbu         $a2, -0x7F30($gp)
    ctx->pc = 0x202714u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x202718: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x202718u;
    {
        const bool branch_taken_0x202718 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x202718) {
            ctx->pc = 0x20272Cu;
            return;
        }
    }
    ctx->pc = 0x202720u;
    // 0x202720: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x202720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202724: 0x24632100  addiu       $v1, $v1, 0x2100
    ctx->pc = 0x202724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8448));
    // 0x202728: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x202728u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20272cu;
}
