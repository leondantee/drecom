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

// Function: entry_00371cc0
// Address: 0x371cc0 - 0x371d60
void entry_00371cc0_0x371cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371cc0_0x371cc0");
#endif

    ctx->pc = 0x371cc0u;

    // 0x371cc0: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x371cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x371cc4: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x371cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x371cc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x371cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x371ccc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x371cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371cd0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x371cd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371cd4: 0x0  nop
    ctx->pc = 0x371cd4u;
    // NOP
    // 0x371cd8: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x371CD8u;
    {
        const bool branch_taken_0x371cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371cd8) {
            ctx->pc = 0x371DB0u;
            return;
        }
    }
    ctx->pc = 0x371CE0u;
    // 0x371ce0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x371ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371ce4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x371ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x371ce8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x371ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371cec: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x371cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371cf0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x371cf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x371cf4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x371cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x371cf8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x371cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371cfc: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x371cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x371d00: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x371d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x371d04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371d08: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x371d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371d0c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x371d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371d10: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x371d10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x371d14: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x371d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x371d18: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x371d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x371d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371d20: 0x0  nop
    ctx->pc = 0x371d20u;
    // NOP
    // 0x371d24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x371d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x371d28: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x371d2c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x371d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371d30: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x371d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x371d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371d38: 0x0  nop
    ctx->pc = 0x371d38u;
    // NOP
    // 0x371d3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x371d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371d40: 0x0  nop
    ctx->pc = 0x371d40u;
    // NOP
    // 0x371d44: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x371D44u;
    {
        const bool branch_taken_0x371d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371d44) {
            ctx->pc = 0x371D60u;
            return;
        }
    }
    ctx->pc = 0x371D4Cu;
    // 0x371d4c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x371d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x371d50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371d54: 0x0  nop
    ctx->pc = 0x371d54u;
    // NOP
    // 0x371d58: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x371d5c: 0x0  nop
    ctx->pc = 0x371d5cu;
    // NOP
    ctx->pc = 0x371d60u;
}
