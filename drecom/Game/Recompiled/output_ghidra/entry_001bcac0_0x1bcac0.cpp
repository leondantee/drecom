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

// Function: entry_001bcac0
// Address: 0x1bcac0 - 0x1bcb6c
void entry_001bcac0_0x1bcac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcac0_0x1bcac0");
#endif

    ctx->pc = 0x1bcac0u;

    // 0x1bcac0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcac4: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x1bcac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcac8: 0x3c044240  lui         $a0, 0x4240
    ctx->pc = 0x1bcac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16960 << 16));
    // 0x1bcacc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bcaccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcad0: 0x0  nop
    ctx->pc = 0x1bcad0u;
    // NOP
    // 0x1bcad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bcad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcad8: 0x0  nop
    ctx->pc = 0x1bcad8u;
    // NOP
    // 0x1bcadc: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1BCADCu;
    {
        const bool branch_taken_0x1bcadc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcadc) {
            ctx->pc = 0x1BCBC0u;
            return;
        }
    }
    ctx->pc = 0x1BCAE4u;
    // 0x1bcae4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bcae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcae8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1bcae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x1bcaec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bcaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1bcaf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bcaf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcaf4: 0x0  nop
    ctx->pc = 0x1bcaf4u;
    // NOP
    // 0x1bcaf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bcaf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcafc: 0x0  nop
    ctx->pc = 0x1bcafcu;
    // NOP
    // 0x1bcb00: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1BCB00u;
    {
        const bool branch_taken_0x1bcb00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcb00) {
            ctx->pc = 0x1BCB6Cu;
            return;
        }
    }
    ctx->pc = 0x1BCB08u;
    // 0x1bcb08: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcb0c: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1bcb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcb10: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1bcb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1bcb14: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1bcb14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1bcb18: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bcb18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcb1c: 0x0  nop
    ctx->pc = 0x1bcb1cu;
    // NOP
    // 0x1bcb20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bcb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bcb24: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1bcb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
    // 0x1bcb28: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bcb28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcb2c: 0xc4e11b50  lwc1        $f1, 0x1B50($a3)
    ctx->pc = 0x1bcb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcb30: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1bcb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1bcb34: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x1bcb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1bcb38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bcb38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcb3c: 0x0  nop
    ctx->pc = 0x1bcb3cu;
    // NOP
    // 0x1bcb40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bcb40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcb44: 0x0  nop
    ctx->pc = 0x1bcb44u;
    // NOP
    // 0x1bcb48: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1BCB48u;
    {
        const bool branch_taken_0x1bcb48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcb48) {
            ctx->pc = 0x1BCBC0u;
            return;
        }
    }
    ctx->pc = 0x1BCB50u;
    // 0x1bcb50: 0x3c063fa6  lui         $a2, 0x3FA6
    ctx->pc = 0x1bcb50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16294 << 16));
    // 0x1bcb54: 0x34c56666  ori         $a1, $a2, 0x6666
    ctx->pc = 0x1bcb54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26214);
    // 0x1bcb58: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bcb58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcb5c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bcb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcb60: 0xe4e01b50  swc1        $f0, 0x1B50($a3)
    ctx->pc = 0x1bcb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 6992), bits); }
    // 0x1bcb64: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1BCB64u;
    {
        const bool branch_taken_0x1bcb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcb64) {
            ctx->pc = 0x1BCBC0u;
            return;
        }
    }
    ctx->pc = 0x1BCB6Cu;
}
