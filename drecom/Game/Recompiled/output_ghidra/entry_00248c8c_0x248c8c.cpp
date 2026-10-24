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

// Function: entry_00248c8c
// Address: 0x248c8c - 0x248d20
void entry_00248c8c_0x248c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248c8c_0x248c8c");
#endif

    ctx->pc = 0x248c8cu;

    // 0x248c8c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248c94: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x248c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248c98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248c9c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x248c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248ca0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x248ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x248ca4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x248ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x248ca8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248cac: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x248cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x248cb0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x248cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x248cb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x248cb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248cb8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x248cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x248cbc: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x248CBCu;
    {
        const bool branch_taken_0x248cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248cbc) {
            ctx->pc = 0x248DB4u;
            return;
        }
    }
    ctx->pc = 0x248CC4u;
    // 0x248cc4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248cc8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x248cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248ccc: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x248cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248cd0: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x248cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x248cd4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x248cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x248cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248cdc: 0x0  nop
    ctx->pc = 0x248cdcu;
    // NOP
    // 0x248ce0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248ce4: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x248ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x248ce8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248cec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248cf0: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x248cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248cf4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x248cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x248cf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248cfc: 0x0  nop
    ctx->pc = 0x248cfcu;
    // NOP
    // 0x248d00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x248d00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248d04: 0x0  nop
    ctx->pc = 0x248d04u;
    // NOP
    // 0x248d08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x248D08u;
    {
        const bool branch_taken_0x248d08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248d08) {
            ctx->pc = 0x248D20u;
            return;
        }
    }
    ctx->pc = 0x248D10u;
    // 0x248d10: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d14: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x248d14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x248d18: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x248d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x248d1c: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x248d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x248d20u;
}
