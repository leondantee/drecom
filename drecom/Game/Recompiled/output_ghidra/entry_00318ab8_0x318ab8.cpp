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

// Function: entry_00318ab8
// Address: 0x318ab8 - 0x318b90
void entry_00318ab8_0x318ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318ab8_0x318ab8");
#endif

    ctx->pc = 0x318ab8u;

    // 0x318ab8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318abc: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x318abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318ac0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x318ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x318ac4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x318ac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318acc: 0x0  nop
    ctx->pc = 0x318accu;
    // NOP
    // 0x318ad0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318ad4: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x318ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x318ad8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318adc: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x318adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318ae0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x318ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x318ae4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x318ae8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318aec: 0x0  nop
    ctx->pc = 0x318aecu;
    // NOP
    // 0x318af0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318af4: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x318af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x318af8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318afc: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x318afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318b00: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x318b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x318b04: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x318b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x318b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318b0c: 0x0  nop
    ctx->pc = 0x318b0cu;
    // NOP
    // 0x318b10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318b14: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x318b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x318b18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x318b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318b1c: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x318b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318b20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318b24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318b28: 0x0  nop
    ctx->pc = 0x318b28u;
    // NOP
    // 0x318b2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318b2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318b30: 0x0  nop
    ctx->pc = 0x318b30u;
    // NOP
    // 0x318b34: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x318B34u;
    {
        const bool branch_taken_0x318b34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318b34) {
            ctx->pc = 0x318B90u;
            return;
        }
    }
    ctx->pc = 0x318B3Cu;
    // 0x318b3c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318b40: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x318b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318b44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318b48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318b4c: 0x0  nop
    ctx->pc = 0x318b4cu;
    // NOP
    // 0x318b50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318b54: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x318b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x318b58: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318b5c: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x318b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318b60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318b68: 0x0  nop
    ctx->pc = 0x318b68u;
    // NOP
    // 0x318b6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318b70: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x318b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x318b74: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x318b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318b78: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x318b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318b7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x318b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x318b80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318b84: 0x0  nop
    ctx->pc = 0x318b84u;
    // NOP
    // 0x318b88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318b8c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x318b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    ctx->pc = 0x318b90u;
}
