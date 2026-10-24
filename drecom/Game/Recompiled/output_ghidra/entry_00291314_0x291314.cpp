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

// Function: entry_00291314
// Address: 0x291314 - 0x2913a4
void entry_00291314_0x291314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291314_0x291314");
#endif

    ctx->pc = 0x291314u;

    // 0x291314: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x291314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x291318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29131c: 0x0  nop
    ctx->pc = 0x29131cu;
    // NOP
    // 0x291320: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x291320u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x291324: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291328: 0xe4203290  swc1        $f0, 0x3290($at)
    ctx->pc = 0x291328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x623290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x623290u, _value); } while (0); }
    // 0x29132c: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x29132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x291330: 0x21023  negu        $v0, $v0
    ctx->pc = 0x291330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x291334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291338: 0x0  nop
    ctx->pc = 0x291338u;
    // NOP
    // 0x29133c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29133cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291340: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x291340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x291344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291348: 0x0  nop
    ctx->pc = 0x291348u;
    // NOP
    // 0x29134c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29134cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x291350: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291354: 0xe4203294  swc1        $f0, 0x3294($at)
    ctx->pc = 0x291354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x623294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x623294u, _value); } while (0); }
    // 0x291358: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x291358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x29135c: 0x22023  negu        $a0, $v0
    ctx->pc = 0x29135cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x291360: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x291360u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291364: 0x0  nop
    ctx->pc = 0x291364u;
    // NOP
    // 0x291368: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29136c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x29136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x291370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291374: 0x0  nop
    ctx->pc = 0x291374u;
    // NOP
    // 0x291378: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x291378u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29137c: 0x0  nop
    ctx->pc = 0x29137cu;
    // NOP
    // 0x291380: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291384: 0xe42032a0  swc1        $f0, 0x32A0($at)
    ctx->pc = 0x291384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232A0u, _value); } while (0); }
    // 0x291388: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x291388u;
    {
        const bool branch_taken_0x291388 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x291388) {
            ctx->pc = 0x2913A4u;
            return;
        }
    }
    ctx->pc = 0x291390u;
    // 0x291390: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x291390u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291394: 0x0  nop
    ctx->pc = 0x291394u;
    // NOP
    // 0x291398: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29139c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29139Cu;
    {
        const bool branch_taken_0x29139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29139c) {
            ctx->pc = 0x2913C0u;
            return;
        }
    }
    ctx->pc = 0x2913A4u;
}
