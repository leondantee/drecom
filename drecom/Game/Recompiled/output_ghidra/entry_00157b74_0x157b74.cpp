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

// Function: entry_00157b74
// Address: 0x157b74 - 0x157c5c
void entry_00157b74_0x157b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157b74_0x157b74");
#endif

    ctx->pc = 0x157b74u;

    // 0x157b74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157b78: 0xc4214f1c  lwc1        $f1, 0x4F1C($at)
    ctx->pc = 0x157b78u;
    { uint32_t bits = FAST_READ32(0x3F4F1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157b7c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157b80: 0xc4204f18  lwc1        $f0, 0x4F18($at)
    ctx->pc = 0x157b80u;
    { uint32_t bits = FAST_READ32(0x3F4F18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157b84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x157b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x157b88: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x157b8c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x157b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x157b90: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x157b90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157b94: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157b98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x157b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157b9c: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x157ba0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157ba4: 0xc4214f1c  lwc1        $f1, 0x4F1C($at)
    ctx->pc = 0x157ba4u;
    { uint32_t bits = FAST_READ32(0x3F4F1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ba8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157bac: 0xc4204f18  lwc1        $f0, 0x4F18($at)
    ctx->pc = 0x157bacu;
    { uint32_t bits = FAST_READ32(0x3F4F18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157bb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157bb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157bb4: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x157bb8: 0x3c113f00  lui         $s1, 0x3F00
    ctx->pc = 0x157bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16128 << 16));
    // 0x157bbc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x157bbcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157bc0: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157bc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x157bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157bc8: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x157bcc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157bd0: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x157bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x157bd4: 0x2643f7d0  addiu       $v1, $s2, -0x830
    ctx->pc = 0x157bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965200));
    // 0x157bd8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x157bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x157bdc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157be0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157be4: 0xc4204f18  lwc1        $f0, 0x4F18($at)
    ctx->pc = 0x157be4u;
    { uint32_t bits = FAST_READ32(0x3F4F18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157be8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x157be8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157bec: 0x0  nop
    ctx->pc = 0x157becu;
    // NOP
    // 0x157bf0: 0x4501013f  bc1t        . + 4 + (0x13F << 2)
    ctx->pc = 0x157BF0u;
    {
        const bool branch_taken_0x157bf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x157bf0) {
            ctx->pc = 0x1580F0u;
            return;
        }
    }
    ctx->pc = 0x157BF8u;
    // 0x157bf8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157bfc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157c00: 0x2447f7d0  addiu       $a3, $v0, -0x830
    ctx->pc = 0x157c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157c04: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x157c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x157c08: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x157c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157c0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157c10: 0xc4204f1c  lwc1        $f0, 0x4F1C($at)
    ctx->pc = 0x157c10u;
    { uint32_t bits = FAST_READ32(0x3F4F1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157c18: 0x0  nop
    ctx->pc = 0x157c18u;
    // NOP
    // 0x157c1c: 0x45000134  bc1f        . + 4 + (0x134 << 2)
    ctx->pc = 0x157C1Cu;
    {
        const bool branch_taken_0x157c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157c1c) {
            ctx->pc = 0x1580F0u;
            return;
        }
    }
    ctx->pc = 0x157C24u;
    // 0x157c24: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157c28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x157c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x157c2c: 0x2485f760  addiu       $a1, $a0, -0x8A0
    ctx->pc = 0x157c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
    // 0x157c30: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x157c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x157c34: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157c38: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157c3c: 0xc4204f20  lwc1        $f0, 0x4F20($at)
    ctx->pc = 0x157c3cu;
    { uint32_t bits = FAST_READ32(0x3F4F20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157c40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157c44: 0x0  nop
    ctx->pc = 0x157c44u;
    // NOP
    // 0x157c48: 0x45000129  bc1f        . + 4 + (0x129 << 2)
    ctx->pc = 0x157C48u;
    {
        const bool branch_taken_0x157c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157c48) {
            ctx->pc = 0x1580F0u;
            return;
        }
    }
    ctx->pc = 0x157C50u;
    // 0x157c50: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x157c50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157c54: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x157C54u;
    {
        const bool branch_taken_0x157c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c54) {
            ctx->pc = 0x1580E0u;
            return;
        }
    }
    ctx->pc = 0x157C5Cu;
}
