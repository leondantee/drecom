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

// Function: entry_0023090c
// Address: 0x23090c - 0x2309d8
void entry_0023090c_0x23090c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023090c_0x23090c");
#endif

    switch (ctx->pc) {
        case 0x23092cu: goto label_23092c;
        default: break;
    }

    ctx->pc = 0x23090cu;

    // 0x23090c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230910: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230914: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x230914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230918: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23091c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x23091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230920: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x230920u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230924: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x230924u;
    SET_GPR_U32(ctx, 31, 0x23092Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x230924u, 0x23092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23092Cu;
label_23092c:
    // 0x23092c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230930: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x230930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x230934: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230938: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x230938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23093c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x23093cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x230940: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x230940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x230944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230948: 0x0  nop
    ctx->pc = 0x230948u;
    // NOP
    // 0x23094c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23094cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230950: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x230950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x230954: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230958: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x230958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23095c: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x23095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x230960: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x230960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x230964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230968: 0x0  nop
    ctx->pc = 0x230968u;
    // NOP
    // 0x23096c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23096cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230970: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x230970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x230974: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230978: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x230978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23097c: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x23097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x230980: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x230980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x230984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230988: 0x0  nop
    ctx->pc = 0x230988u;
    // NOP
    // 0x23098c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23098cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230990: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x230990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x230994: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230998: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x230998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x23099c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x23099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2309a0: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x2309a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2309a4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2309A4u;
    {
        const bool branch_taken_0x2309a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2309a4) {
            ctx->pc = 0x2309D8u;
            return;
        }
    }
    ctx->pc = 0x2309ACu;
    // 0x2309ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2309acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2309b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2309b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309b4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2309b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2309b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2309b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309bc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2309bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2309c0: 0x3c023d81  lui         $v0, 0x3D81
    ctx->pc = 0x2309c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15745 << 16));
    // 0x2309c4: 0x3442fabc  ori         $v0, $v0, 0xFABC
    ctx->pc = 0x2309c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64188);
    // 0x2309c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2309c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2309cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2309ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2309d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2309d4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2309d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    ctx->pc = 0x2309d8u;
}
