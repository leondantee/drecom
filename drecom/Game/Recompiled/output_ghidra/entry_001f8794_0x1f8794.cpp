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

// Function: entry_001f8794
// Address: 0x1f8794 - 0x1f8880
void entry_001f8794_0x1f8794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8794_0x1f8794");
#endif

    switch (ctx->pc) {
        case 0x1f87b4u: goto label_1f87b4;
        default: break;
    }

    ctx->pc = 0x1f8794u;

    // 0x1f8794: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8798: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f879c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f87a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f87a4: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f87a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f87a8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f87a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f87ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F87ACu;
    SET_GPR_U32(ctx, 31, 0x1F87B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F87ACu, 0x1F87B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F87B4u;
label_1f87b4:
    // 0x1f87b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f87b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f87b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f87bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f87c0: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x1f87c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f87c4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1f87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1f87c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1f87c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1f87cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f87ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f87d0: 0x0  nop
    ctx->pc = 0x1f87d0u;
    // NOP
    // 0x1f87d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f87d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f87d8: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1f87d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1f87dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f87e0: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x1f87e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f87e4: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x1f87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x1f87e8: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x1f87e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x1f87ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f87ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f87f0: 0x0  nop
    ctx->pc = 0x1f87f0u;
    // NOP
    // 0x1f87f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f87f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f87f8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f87f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x1f87fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f87fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8800: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x1f8800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8804: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x1f8804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x1f8808: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x1f8808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x1f880c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f880cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8810: 0x0  nop
    ctx->pc = 0x1f8810u;
    // NOP
    // 0x1f8814: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8818: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x1f8818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x1f881c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8820: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8824: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f8824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8828: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f882c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8830: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x1f8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8834: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f8834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f8838: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f8838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f883c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f883cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8840: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1f8840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1f8844: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1f8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f8848: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x1f8848u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f884c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F884Cu;
    {
        const bool branch_taken_0x1f884c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f884c) {
            ctx->pc = 0x1F8880u;
            return;
        }
    }
    ctx->pc = 0x1F8854u;
    // 0x1f8854: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8858: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f885c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f885cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8860: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8864: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1f8864u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f8868: 0x3c023d81  lui         $v0, 0x3D81
    ctx->pc = 0x1f8868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15745 << 16));
    // 0x1f886c: 0x3442fabc  ori         $v0, $v0, 0xFABC
    ctx->pc = 0x1f886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64188);
    // 0x1f8870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8874: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8878: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f887c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1f887cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    ctx->pc = 0x1f8880u;
}
