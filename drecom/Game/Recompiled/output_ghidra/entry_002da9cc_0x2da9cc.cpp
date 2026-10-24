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

// Function: entry_002da9cc
// Address: 0x2da9cc - 0x2daa34
void entry_002da9cc_0x2da9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da9cc_0x2da9cc");
#endif

    ctx->pc = 0x2da9ccu;

    // 0x2da9cc: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2da9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da9d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2da9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2da9d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da9d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da9d8: 0x0  nop
    ctx->pc = 0x2da9d8u;
    // NOP
    // 0x2da9dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da9e0: 0x0  nop
    ctx->pc = 0x2da9e0u;
    // NOP
    // 0x2da9e4: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2DA9E4u;
    {
        const bool branch_taken_0x2da9e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da9e4) {
            ctx->pc = 0x2DAA50u;
            return;
        }
    }
    ctx->pc = 0x2DA9ECu;
    // 0x2da9ec: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2da9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da9f0: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2da9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2da9f4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2da9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2da9f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da9f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da9fc: 0x0  nop
    ctx->pc = 0x2da9fcu;
    // NOP
    // 0x2daa00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2daa00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2daa04: 0x0  nop
    ctx->pc = 0x2daa04u;
    // NOP
    // 0x2daa08: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2DAA08u;
    {
        const bool branch_taken_0x2daa08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2daa08) {
            ctx->pc = 0x2DAA34u;
            return;
        }
    }
    ctx->pc = 0x2DAA10u;
    // 0x2daa10: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2daa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daa14: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2daa14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2daa18: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2daa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2daa1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2daa1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa20: 0x0  nop
    ctx->pc = 0x2daa20u;
    // NOP
    // 0x2daa24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2daa24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2daa28: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2daa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2daa2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DAA2Cu;
    {
        const bool branch_taken_0x2daa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daa2c) {
            ctx->pc = 0x2DAA50u;
            return;
        }
    }
    ctx->pc = 0x2DAA34u;
}
