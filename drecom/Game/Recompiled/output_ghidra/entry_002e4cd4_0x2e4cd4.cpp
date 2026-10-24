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

// Function: entry_002e4cd4
// Address: 0x2e4cd4 - 0x2e4d34
void entry_002e4cd4_0x2e4cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4cd4_0x2e4cd4");
#endif

    ctx->pc = 0x2e4cd4u;

    // 0x2e4cd4: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x2e4cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4cd8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e4cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4ce0: 0x0  nop
    ctx->pc = 0x2e4ce0u;
    // NOP
    // 0x2e4ce4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4ce8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2e4ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2e4cec: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2e4cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4cf0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e4cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4cf8: 0x0  nop
    ctx->pc = 0x2e4cf8u;
    // NOP
    // 0x2e4cfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4d00: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2e4d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2e4d04: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2e4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4d08: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e4d0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4d10: 0x0  nop
    ctx->pc = 0x2e4d10u;
    // NOP
    // 0x2e4d14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4d14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4d18: 0x0  nop
    ctx->pc = 0x2e4d18u;
    // NOP
    // 0x2e4d1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4D1Cu;
    {
        const bool branch_taken_0x2e4d1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4d1c) {
            ctx->pc = 0x2E4D34u;
            return;
        }
    }
    ctx->pc = 0x2E4D24u;
    // 0x2e4d24: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e4d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4d2c: 0x0  nop
    ctx->pc = 0x2e4d2cu;
    // NOP
    // 0x2e4d30: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2e4d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    ctx->pc = 0x2e4d34u;
}
