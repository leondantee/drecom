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

// Function: entry_002daed4
// Address: 0x2daed4 - 0x2daf34
void entry_002daed4_0x2daed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002daed4_0x2daed4");
#endif

    ctx->pc = 0x2daed4u;

    // 0x2daed4: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x2daed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daed8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2daed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2daedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daee0: 0x0  nop
    ctx->pc = 0x2daee0u;
    // NOP
    // 0x2daee4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2daee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2daee8: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x2daee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x2daeec: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x2daeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daef0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2daef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2daef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daef8: 0x0  nop
    ctx->pc = 0x2daef8u;
    // NOP
    // 0x2daefc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2daefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2daf00: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2daf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2daf04: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x2daf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daf08: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2daf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2daf0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daf0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daf10: 0x0  nop
    ctx->pc = 0x2daf10u;
    // NOP
    // 0x2daf14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2daf14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2daf18: 0x0  nop
    ctx->pc = 0x2daf18u;
    // NOP
    // 0x2daf1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAF1Cu;
    {
        const bool branch_taken_0x2daf1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2daf1c) {
            ctx->pc = 0x2DAF34u;
            return;
        }
    }
    ctx->pc = 0x2DAF24u;
    // 0x2daf24: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2daf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2daf28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daf28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daf2c: 0x0  nop
    ctx->pc = 0x2daf2cu;
    // NOP
    // 0x2daf30: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2daf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    ctx->pc = 0x2daf34u;
}
