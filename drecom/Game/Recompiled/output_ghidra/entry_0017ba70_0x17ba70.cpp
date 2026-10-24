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

// Function: entry_0017ba70
// Address: 0x17ba70 - 0x17bacc
void entry_0017ba70_0x17ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ba70_0x17ba70");
#endif

    ctx->pc = 0x17ba70u;

    // 0x17ba70: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x17ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x17ba74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17ba74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17ba78: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x17ba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ba7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17ba7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17ba80: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x17ba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ba84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17ba84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17ba88: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17ba88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17ba8c: 0xc420ef10  lwc1        $f0, -0x10F0($at)
    ctx->pc = 0x17ba8cu;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ba90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17ba90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ba94: 0x0  nop
    ctx->pc = 0x17ba94u;
    // NOP
    // 0x17ba98: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x17BA98u;
    {
        const bool branch_taken_0x17ba98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ba98) {
            ctx->pc = 0x17BB88u;
            return;
        }
    }
    ctx->pc = 0x17BAA0u;
    // 0x17baa0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17baa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17baa8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17baac: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x17baacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17bab0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BAB0u;
    {
        const bool branch_taken_0x17bab0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17bab0) {
            ctx->pc = 0x17BACCu;
            return;
        }
    }
    ctx->pc = 0x17BAB8u;
    // 0x17bab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17babc: 0x0  nop
    ctx->pc = 0x17babcu;
    // NOP
    // 0x17bac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17bac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17bac4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17BAC4u;
    {
        const bool branch_taken_0x17bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bac4) {
            ctx->pc = 0x17BAE8u;
            return;
        }
    }
    ctx->pc = 0x17BACCu;
}
