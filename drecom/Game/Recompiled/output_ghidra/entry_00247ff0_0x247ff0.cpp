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

// Function: entry_00247ff0
// Address: 0x247ff0 - 0x24806c
void entry_00247ff0_0x247ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247ff0_0x247ff0");
#endif

    ctx->pc = 0x247ff0u;

    // 0x247ff0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x247ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x247ff4: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x247ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247ff8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x247ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x247ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248000: 0x0  nop
    ctx->pc = 0x248000u;
    // NOP
    // 0x248004: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x248004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x248008: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x248008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x24800c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248010: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x248010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248014: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x248014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248018: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x248018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24801c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24801cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248020: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x248020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x248024: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x248024u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248028: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x248028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24802c: 0x0  nop
    ctx->pc = 0x24802cu;
    // NOP
    // 0x248030: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x248030u;
    {
        const bool branch_taken_0x248030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248030) {
            ctx->pc = 0x248080u;
            return;
        }
    }
    ctx->pc = 0x248038u;
    // 0x248038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24803c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248040: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x248040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x248044: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x248044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x248048: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x248048u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24804c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248050: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x248050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x248054: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x248054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x248058: 0x8462127e  lh          $v0, 0x127E($v1)
    ctx->pc = 0x248058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x24805c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24805cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x248060: 0xa462127e  sh          $v0, 0x127E($v1)
    ctx->pc = 0x248060u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x248064: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x248064u;
    {
        const bool branch_taken_0x248064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248064) {
            ctx->pc = 0x248080u;
            return;
        }
    }
    ctx->pc = 0x24806Cu;
}
