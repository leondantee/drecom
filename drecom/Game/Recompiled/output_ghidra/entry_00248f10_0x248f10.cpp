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

// Function: entry_00248f10
// Address: 0x248f10 - 0x248fa4
void entry_00248f10_0x248f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248f10_0x248f10");
#endif

    ctx->pc = 0x248f10u;

    // 0x248f10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248f18: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x248f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248f1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f20: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x248f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248f24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x248f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x248f28: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x248f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x248f2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f30: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x248f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x248f34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x248f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x248f38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x248f38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248f3c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x248f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x248f40: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x248F40u;
    {
        const bool branch_taken_0x248f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248f40) {
            ctx->pc = 0x249038u;
            return;
        }
    }
    ctx->pc = 0x248F48u;
    // 0x248f48: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f4c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x248f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248f50: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x248f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248f54: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x248f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x248f58: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x248f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x248f5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248f60: 0x0  nop
    ctx->pc = 0x248f60u;
    // NOP
    // 0x248f64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248f68: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x248f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x248f6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248f74: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x248f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248f78: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x248f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x248f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248f80: 0x0  nop
    ctx->pc = 0x248f80u;
    // NOP
    // 0x248f84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x248f84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248f88: 0x0  nop
    ctx->pc = 0x248f88u;
    // NOP
    // 0x248f8c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x248F8Cu;
    {
        const bool branch_taken_0x248f8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248f8c) {
            ctx->pc = 0x248FA4u;
            return;
        }
    }
    ctx->pc = 0x248F94u;
    // 0x248f94: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248f98: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x248f98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x248f9c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x248f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x248fa0: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x248fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x248fa4u;
}
