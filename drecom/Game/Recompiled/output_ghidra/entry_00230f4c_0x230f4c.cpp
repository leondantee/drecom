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

// Function: entry_00230f4c
// Address: 0x230f4c - 0x230fa0
void entry_00230f4c_0x230f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230f4c_0x230f4c");
#endif

    ctx->pc = 0x230f4cu;

    // 0x230f4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230f50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f54: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x230f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230f58: 0x3c023cb2  lui         $v0, 0x3CB2
    ctx->pc = 0x230f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15538 << 16));
    // 0x230f5c: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x230f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x230f60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f64: 0x0  nop
    ctx->pc = 0x230f64u;
    // NOP
    // 0x230f68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x230f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230f6c: 0x0  nop
    ctx->pc = 0x230f6cu;
    // NOP
    // 0x230f70: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x230F70u;
    {
        const bool branch_taken_0x230f70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230f70) {
            ctx->pc = 0x230FA0u;
            return;
        }
    }
    ctx->pc = 0x230F78u;
    // 0x230f78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230f7c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x230f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f80: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x230f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x230f84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x230f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x230f88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x230f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230f8c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x230f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230f90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230f94: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x230f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x230f98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x230F98u;
    {
        const bool branch_taken_0x230f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230f98) {
            ctx->pc = 0x230FC0u;
            return;
        }
    }
    ctx->pc = 0x230FA0u;
}
