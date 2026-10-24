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

// Function: entry_003539a4
// Address: 0x3539a4 - 0x353ab0
void entry_003539a4_0x3539a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003539a4_0x3539a4");
#endif

    ctx->pc = 0x3539a4u;

    // 0x3539a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3539a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3539a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3539ac: 0xc461007c  lwc1        $f1, 0x7C($v1)
    ctx->pc = 0x3539acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3539b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3539b4: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x3539b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3539b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3539b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3539bc: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x3539bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x3539c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3539c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3539c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3539c8: 0xc4610084  lwc1        $f1, 0x84($v1)
    ctx->pc = 0x3539c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3539cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3539d0: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x3539d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3539d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3539d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3539d8: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x3539d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x3539dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3539e0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3539e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3539e4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x3539e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x3539e8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3539e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3539ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3539ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3539f0: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x3539f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3539f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3539f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3539f8: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x3539f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x3539fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3539fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353a00: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x353a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353a04: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x353a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x353a08: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x353a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x353a0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353a10: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x353a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353a14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x353a18: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x353a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x353a1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353a20: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x353a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x353a24: 0x24703840  addiu       $s0, $v1, 0x3840
    ctx->pc = 0x353a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x353a28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353a2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353a30: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x353a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353a34: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x353a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353a38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353a38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353a3c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x353a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x353a40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353a44: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x353a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353a48: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x353a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353a4c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x353a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x353a50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353a54: 0x0  nop
    ctx->pc = 0x353a54u;
    // NOP
    // 0x353a58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x353a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x353a5c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x353a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x353a60: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x353a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353a64: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x353a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x353a68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353a6c: 0x0  nop
    ctx->pc = 0x353a6cu;
    // NOP
    // 0x353a70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x353a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x353a74: 0x0  nop
    ctx->pc = 0x353a74u;
    // NOP
    // 0x353a78: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x353A78u;
    {
        const bool branch_taken_0x353a78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x353a78) {
            ctx->pc = 0x353AB0u;
            return;
        }
    }
    ctx->pc = 0x353A80u;
    // 0x353a80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x353a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x353a84: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x353a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353a88: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x353a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x353a8c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x353a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x353a90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x353a90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353a94: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x353a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353a98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x353a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x353a9c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x353a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x353aa0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x353aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x353aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x353aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353aa8: 0x0  nop
    ctx->pc = 0x353aa8u;
    // NOP
    // 0x353aac: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x353aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->pc = 0x353ab0u;
}
