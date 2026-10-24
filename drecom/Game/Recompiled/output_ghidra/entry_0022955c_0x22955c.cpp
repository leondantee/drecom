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

// Function: entry_0022955c
// Address: 0x22955c - 0x229604
void entry_0022955c_0x22955c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022955c_0x22955c");
#endif

    ctx->pc = 0x22955cu;

    // 0x22955c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22955cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229560: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229564: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229568: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x229568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22956c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229570: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229574: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x229574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229578: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x229578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22957c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22957cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229580: 0x0  nop
    ctx->pc = 0x229580u;
    // NOP
    // 0x229584: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229588: 0x0  nop
    ctx->pc = 0x229588u;
    // NOP
    // 0x22958c: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x22958Cu;
    {
        const bool branch_taken_0x22958c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22958c) {
            ctx->pc = 0x2296ECu;
            return;
        }
    }
    ctx->pc = 0x229594u;
    // 0x229594: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229598: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x229598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22959c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x22959cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2295a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2295a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2295a4: 0x0  nop
    ctx->pc = 0x2295a4u;
    // NOP
    // 0x2295a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2295a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2295ac: 0x0  nop
    ctx->pc = 0x2295acu;
    // NOP
    // 0x2295b0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2295B0u;
    {
        const bool branch_taken_0x2295b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2295b0) {
            ctx->pc = 0x229604u;
            return;
        }
    }
    ctx->pc = 0x2295B8u;
    // 0x2295b8: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x2295b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x2295bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2295bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2295c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2295c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2295c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2295c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2295c8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2295c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2295cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2295ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2295d0: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2295d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2295d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2295d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2295d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2295d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2295dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2295dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2295e0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2295E0u;
    {
        const bool branch_taken_0x2295e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2295e0) {
            ctx->pc = 0x2297C8u;
            return;
        }
    }
    ctx->pc = 0x2295E8u;
    // 0x2295e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2295e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2295ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2295ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2295f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2295f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2295f4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2295f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2295f8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2295f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2295fc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2295FCu;
    {
        const bool branch_taken_0x2295fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2295fc) {
            ctx->pc = 0x2297C8u;
            return;
        }
    }
    ctx->pc = 0x229604u;
}
