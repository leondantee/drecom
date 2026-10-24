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

// Function: entry_00270a9c
// Address: 0x270a9c - 0x270aec
void entry_00270a9c_0x270a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270a9c_0x270a9c");
#endif

    ctx->pc = 0x270a9cu;

    // 0x270a9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270aa0: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x270aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270aa4: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x270aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x270aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x270aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270aac: 0x0  nop
    ctx->pc = 0x270aacu;
    // NOP
    // 0x270ab0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x270ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x270ab4: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x270ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
    // 0x270ab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270abc: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x270abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270ac0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x270ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x270ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x270ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270ac8: 0x0  nop
    ctx->pc = 0x270ac8u;
    // NOP
    // 0x270acc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x270accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270ad0: 0x0  nop
    ctx->pc = 0x270ad0u;
    // NOP
    // 0x270ad4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x270AD4u;
    {
        const bool branch_taken_0x270ad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270ad4) {
            ctx->pc = 0x270AECu;
            return;
        }
    }
    ctx->pc = 0x270ADCu;
    // 0x270adc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x270adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x270ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x270ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270ae4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270ae8: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x270ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    ctx->pc = 0x270aecu;
}
