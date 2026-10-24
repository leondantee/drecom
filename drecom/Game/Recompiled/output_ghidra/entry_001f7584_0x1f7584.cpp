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

// Function: entry_001f7584
// Address: 0x1f7584 - 0x1f7618
void entry_001f7584_0x1f7584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7584_0x1f7584");
#endif

    ctx->pc = 0x1f7584u;

    // 0x1f7584: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7588: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f758c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1f758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7590: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7594: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f7594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7598: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f7598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f759c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f75a0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f75a4: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1f75a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1f75a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f75a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f75ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f75acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f75b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f75b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f75b4: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1F75B4u;
    {
        const bool branch_taken_0x1f75b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f75b4) {
            ctx->pc = 0x1F76ACu;
            return;
        }
    }
    ctx->pc = 0x1F75BCu;
    // 0x1f75bc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f75c0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f75c4: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x1f75c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f75c8: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x1f75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x1f75cc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1f75ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1f75d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f75d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f75d4: 0x0  nop
    ctx->pc = 0x1f75d4u;
    // NOP
    // 0x1f75d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f75d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f75dc: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1f75dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1f75e0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f75e4: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x1f75e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f75e8: 0xc4c10028  lwc1        $f1, 0x28($a2)
    ctx->pc = 0x1f75e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f75ec: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1f75ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x1f75f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f75f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f75f4: 0x0  nop
    ctx->pc = 0x1f75f4u;
    // NOP
    // 0x1f75f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f75f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f75fc: 0x0  nop
    ctx->pc = 0x1f75fcu;
    // NOP
    // 0x1f7600: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7600u;
    {
        const bool branch_taken_0x1f7600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7600) {
            ctx->pc = 0x1F7618u;
            return;
        }
    }
    ctx->pc = 0x1F7608u;
    // 0x1f7608: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f760c: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x1f760cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x1f7610: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1f7610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1f7614: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x1f7614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f7618u;
}
