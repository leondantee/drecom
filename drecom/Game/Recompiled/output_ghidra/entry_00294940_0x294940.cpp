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

// Function: entry_00294940
// Address: 0x294940 - 0x2949cc
void entry_00294940_0x294940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294940_0x294940");
#endif

    ctx->pc = 0x294940u;

    // 0x294940: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x294940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294944: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x294944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x294948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29494c: 0x0  nop
    ctx->pc = 0x29494cu;
    // NOP
    // 0x294950: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x294950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294954: 0x0  nop
    ctx->pc = 0x294954u;
    // NOP
    // 0x294958: 0x450000e3  bc1f        . + 4 + (0xE3 << 2)
    ctx->pc = 0x294958u;
    {
        const bool branch_taken_0x294958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x294958) {
            ctx->pc = 0x294CE8u;
            return;
        }
    }
    ctx->pc = 0x294960u;
    // 0x294960: 0x8e120078  lw          $s2, 0x78($s0)
    ctx->pc = 0x294960u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x294964: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x294964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x294968: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29496c: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x29496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294974: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x294974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294978: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x294978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x29497c: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x29497cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x294980: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294984: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294988: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29498c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x29498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294990: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x294990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x294994: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x294994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x294998: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29499c: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x29499cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2949a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2949a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2949a4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2949a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2949a8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2949a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2949ac: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x2949acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2949b0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2949b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2949b4: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2949b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2949b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2949b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2949bc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2949bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2949c0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2949c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2949c4: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2949C4u;
    {
        const bool branch_taken_0x2949c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2949c4) {
            ctx->pc = 0x294CE8u;
            return;
        }
    }
    ctx->pc = 0x2949CCu;
}
