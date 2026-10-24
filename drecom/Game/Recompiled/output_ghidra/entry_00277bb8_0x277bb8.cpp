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

// Function: entry_00277bb8
// Address: 0x277bb8 - 0x277c10
void entry_00277bb8_0x277bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277bb8_0x277bb8");
#endif

    ctx->pc = 0x277bb8u;

    // 0x277bb8: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x277bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277bbc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x277bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x277bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277bc4: 0x0  nop
    ctx->pc = 0x277bc4u;
    // NOP
    // 0x277bc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x277bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x277bcc: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x277bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x277bd0: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x277bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277bd4: 0x3c02c5a1  lui         $v0, 0xC5A1
    ctx->pc = 0x277bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50593 << 16));
    // 0x277bd8: 0x344258e1  ori         $v0, $v0, 0x58E1
    ctx->pc = 0x277bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22753);
    // 0x277bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277be0: 0x0  nop
    ctx->pc = 0x277be0u;
    // NOP
    // 0x277be4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277be8: 0x0  nop
    ctx->pc = 0x277be8u;
    // NOP
    // 0x277bec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x277BECu;
    {
        const bool branch_taken_0x277bec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277bec) {
            ctx->pc = 0x277C10u;
            return;
        }
    }
    ctx->pc = 0x277BF4u;
    // 0x277bf4: 0x3c02c5a1  lui         $v0, 0xC5A1
    ctx->pc = 0x277bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50593 << 16));
    // 0x277bf8: 0x344258e1  ori         $v0, $v0, 0x58E1
    ctx->pc = 0x277bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22753);
    // 0x277bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277c00: 0x0  nop
    ctx->pc = 0x277c00u;
    // NOP
    // 0x277c04: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x277c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x277c08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x277C08u;
    {
        const bool branch_taken_0x277c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277c08) {
            ctx->pc = 0x277C24u;
            return;
        }
    }
    ctx->pc = 0x277C10u;
}
