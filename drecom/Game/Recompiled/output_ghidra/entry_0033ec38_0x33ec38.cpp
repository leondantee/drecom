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

// Function: entry_0033ec38
// Address: 0x33ec38 - 0x33ecb8
void entry_0033ec38_0x33ec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ec38_0x33ec38");
#endif

    ctx->pc = 0x33ec38u;

    // 0x33ec38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ec3c: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x33ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ec40: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x33ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ec44: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x33ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x33ec48: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x33ec48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x33ec4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ec4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ec50: 0x0  nop
    ctx->pc = 0x33ec50u;
    // NOP
    // 0x33ec54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33ec54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33ec58: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x33ec58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33ec5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ec60: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x33ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ec64: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x33ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ec68: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x33ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x33ec6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33ec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33ec70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ec70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ec74: 0x0  nop
    ctx->pc = 0x33ec74u;
    // NOP
    // 0x33ec78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33ec78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ec7c: 0x0  nop
    ctx->pc = 0x33ec7cu;
    // NOP
    // 0x33ec80: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x33EC80u;
    {
        const bool branch_taken_0x33ec80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ec80) {
            ctx->pc = 0x33ED94u;
            return;
        }
    }
    ctx->pc = 0x33EC88u;
    // 0x33ec88: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x33ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x33ec8c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33ec8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33ec90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33ec90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ec94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x33ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ec98: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x33ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x33ec9c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33ec9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33eca0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x33eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33eca4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x33eca4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33eca8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33ecac: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x33ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x33ecb0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x33ECB0u;
    {
        const bool branch_taken_0x33ecb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ecb0) {
            ctx->pc = 0x33ED94u;
            return;
        }
    }
    ctx->pc = 0x33ECB8u;
}
