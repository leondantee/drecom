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

// Function: entry_001f6060
// Address: 0x1f6060 - 0x1f6114
void entry_001f6060_0x1f6060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6060_0x1f6060");
#endif

    ctx->pc = 0x1f6060u;

    // 0x1f6060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6064: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6068: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f6068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f606c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1f606cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f6070: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x1F6070u;
    {
        const bool branch_taken_0x1f6070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6070) {
            ctx->pc = 0x1F62A0u;
            return;
        }
    }
    ctx->pc = 0x1F6078u;
    // 0x1f6078: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f607c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6080: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6084: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6088: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f608c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f608cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6090: 0x0  nop
    ctx->pc = 0x1f6090u;
    // NOP
    // 0x1f6094: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1F6094u;
    {
        const bool branch_taken_0x1f6094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6094) {
            ctx->pc = 0x1F618Cu;
            return;
        }
    }
    ctx->pc = 0x1F609Cu;
    // 0x1f609c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f60a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f60a4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f60a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f60a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60ac: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f60acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f60b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f60b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f60b4: 0x0  nop
    ctx->pc = 0x1f60b4u;
    // NOP
    // 0x1f60b8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F60B8u;
    {
        const bool branch_taken_0x1f60b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f60b8) {
            ctx->pc = 0x1F6114u;
            return;
        }
    }
    ctx->pc = 0x1F60C0u;
    // 0x1f60c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f60c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f60c8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f60c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f60cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f60ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60d0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f60d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f60d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f60d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f60d8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f60d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f60dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f60e4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f60e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f60e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f60ec: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f60ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f60f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f60f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f60f4: 0x0  nop
    ctx->pc = 0x1f60f4u;
    // NOP
    // 0x1f60f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F60F8u;
    {
        const bool branch_taken_0x1f60f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f60f8) {
            ctx->pc = 0x1F6114u;
            return;
        }
    }
    ctx->pc = 0x1F6100u;
    // 0x1f6100: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6104: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6108: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f6108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f610c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6110: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1f6114u;
}
