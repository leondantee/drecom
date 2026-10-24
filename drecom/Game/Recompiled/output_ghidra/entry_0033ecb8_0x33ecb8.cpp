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

// Function: entry_0033ecb8
// Address: 0x33ecb8 - 0x33ed84
void entry_0033ecb8_0x33ecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ecb8_0x33ecb8");
#endif

    ctx->pc = 0x33ecb8u;

    // 0x33ecb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ecbc: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x33ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ecc0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x33ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ecc4: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x33ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x33ecc8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x33ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x33eccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ecccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ecd0: 0x0  nop
    ctx->pc = 0x33ecd0u;
    // NOP
    // 0x33ecd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33ecd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33ecd8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x33ecd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33ecdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ece0: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x33ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ece4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x33ece4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ece8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x33ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x33ecec: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33ececu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33ecf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ecf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ecf4: 0x0  nop
    ctx->pc = 0x33ecf4u;
    // NOP
    // 0x33ecf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33ecf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ecfc: 0x0  nop
    ctx->pc = 0x33ecfcu;
    // NOP
    // 0x33ed00: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x33ED00u;
    {
        const bool branch_taken_0x33ed00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ed00) {
            ctx->pc = 0x33ED94u;
            return;
        }
    }
    ctx->pc = 0x33ED08u;
    // 0x33ed08: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x33ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x33ed0c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33ed0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33ed10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ed10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ed14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed18: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x33ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ed1c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33ed1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33ed20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed24: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x33ed24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x33ed28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33ed2c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x33ed2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x33ed30: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33ed30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33ed34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33ed34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33ed38: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x33ed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33ed3c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33ed3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33ed40: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x33ed40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33ed44: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x33ED44u;
    {
        const bool branch_taken_0x33ed44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ed44) {
            ctx->pc = 0x33ED84u;
            return;
        }
    }
    ctx->pc = 0x33ED4Cu;
    // 0x33ed4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ed50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed54: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x33ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33ed58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ed5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed60: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x33ed60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x33ed64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed68: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x33ed68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ed6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed70: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x33ed70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ed74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ed78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x33ed7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33ED7Cu;
    {
        const bool branch_taken_0x33ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ed7c) {
            ctx->pc = 0x33ED94u;
            return;
        }
    }
    ctx->pc = 0x33ED84u;
}
