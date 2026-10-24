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

// Function: entry_001f592c
// Address: 0x1f592c - 0x1f59e0
void entry_001f592c_0x1f592c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f592c_0x1f592c");
#endif

    ctx->pc = 0x1f592cu;

    // 0x1f592c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5930: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5934: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f5934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f5938: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1f5938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f593c: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1F593Cu;
    {
        const bool branch_taken_0x1f593c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f593c) {
            ctx->pc = 0x1F5B6Cu;
            return;
        }
    }
    ctx->pc = 0x1F5944u;
    // 0x1f5944: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5948: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f594c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5950: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5954: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5958: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f5958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f595c: 0x0  nop
    ctx->pc = 0x1f595cu;
    // NOP
    // 0x1f5960: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F5960u;
    {
        const bool branch_taken_0x1f5960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5960) {
            ctx->pc = 0x1F5A58u;
            return;
        }
    }
    ctx->pc = 0x1F5968u;
    // 0x1f5968: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f596c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5970: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5974: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5978: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f597c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f597cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5980: 0x0  nop
    ctx->pc = 0x1f5980u;
    // NOP
    // 0x1f5984: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F5984u;
    {
        const bool branch_taken_0x1f5984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5984) {
            ctx->pc = 0x1F59E0u;
            return;
        }
    }
    ctx->pc = 0x1F598Cu;
    // 0x1f598c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5990: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5994: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f5994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5998: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f599c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f59a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f59a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f59a4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f59a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f59a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f59acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f59b0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f59b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f59b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59b8: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f59b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f59bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f59bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f59c0: 0x0  nop
    ctx->pc = 0x1f59c0u;
    // NOP
    // 0x1f59c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F59C4u;
    {
        const bool branch_taken_0x1f59c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f59c4) {
            ctx->pc = 0x1F59E0u;
            return;
        }
    }
    ctx->pc = 0x1F59CCu;
    // 0x1f59cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f59d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f59d4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f59d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f59d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59dc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f59dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1f59e0u;
}
