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

// Function: entry_00202024
// Address: 0x202024 - 0x202098
void entry_00202024_0x202024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202024_0x202024");
#endif

    ctx->pc = 0x202024u;

    // 0x202024: 0x8e020a70  lw          $v0, 0xA70($s0)
    ctx->pc = 0x202024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x202028: 0xc44001b0  lwc1        $f0, 0x1B0($v0)
    ctx->pc = 0x202028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20202c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20202cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x202030: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x202030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x202034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202038: 0x0  nop
    ctx->pc = 0x202038u;
    // NOP
    // 0x20203c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x20203cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x202040: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202044: 0xe440484c  swc1        $f0, 0x484C($v0)
    ctx->pc = 0x202044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18508), bits); }
    // 0x202048: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20204c: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x20204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x202050: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x202050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202054: 0xc460484c  lwc1        $f0, 0x484C($v1)
    ctx->pc = 0x202054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202058: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x202058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20205c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x20205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x202060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202064: 0x0  nop
    ctx->pc = 0x202064u;
    // NOP
    // 0x202068: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x202068u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20206c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202070: 0xe4404850  swc1        $f0, 0x4850($v0)
    ctx->pc = 0x202070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18512), bits); }
    // 0x202074: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202078: 0x9042485c  lbu         $v0, 0x485C($v0)
    ctx->pc = 0x202078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18524)));
    // 0x20207c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20207Cu;
    {
        const bool branch_taken_0x20207c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20207c) {
            ctx->pc = 0x202098u;
            return;
        }
    }
    ctx->pc = 0x202084u;
    // 0x202084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202088: 0x0  nop
    ctx->pc = 0x202088u;
    // NOP
    // 0x20208c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20208cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202090: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202090u;
    {
        const bool branch_taken_0x202090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202090) {
            ctx->pc = 0x2020B4u;
            return;
        }
    }
    ctx->pc = 0x202098u;
}
