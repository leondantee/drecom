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

// Function: entry_001f65bc
// Address: 0x1f65bc - 0x1f66a4
void entry_001f65bc_0x1f65bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f65bc_0x1f65bc");
#endif

    switch (ctx->pc) {
        case 0x1f65e8u: goto label_1f65e8;
        case 0x1f6604u: goto label_1f6604;
        default: break;
    }

    ctx->pc = 0x1f65bcu;

    // 0x1f65bc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1f65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1f65c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f65c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f65c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f65c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f65c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f65c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f65cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f65d0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1f65d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f65d4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1f65d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f65d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f65d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f65dc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f65dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f65e0: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F65E0u;
    SET_GPR_U32(ctx, 31, 0x1F65E8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F65E0u, 0x1F65E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F65E8u;
label_1f65e8:
    // 0x1f65e8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1f65e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f65ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f65f0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f65f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f65f4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1f65f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f65f8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f65f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f65fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F65FCu;
    SET_GPR_U32(ctx, 31, 0x1F6604u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F65FCu, 0x1F6604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6604u;
label_1f6604:
    // 0x1f6604: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6608: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f6608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f660c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6610: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6614: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f6614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6618: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f661c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1f661cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6620: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6624: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1f6624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1f6628: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f662c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6630: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x1f6630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6634: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6638: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1f6638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f663c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f663cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6640: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1f6640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1f6644: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6648: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f664c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6650: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6654: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f6654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6658: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x1f6658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f665c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f665cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6660: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f6660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f6664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6668: 0x0  nop
    ctx->pc = 0x1f6668u;
    // NOP
    // 0x1f666c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f666cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6670: 0x0  nop
    ctx->pc = 0x1f6670u;
    // NOP
    // 0x1f6674: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1F6674u;
    {
        const bool branch_taken_0x1f6674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6674) {
            ctx->pc = 0x1F66A4u;
            return;
        }
    }
    ctx->pc = 0x1F667Cu;
    // 0x1f667c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6680: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6684: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1f6684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1f6688: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f6688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f668c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f668cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6690: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f6690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6694: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6698: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f6698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1f669c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F669Cu;
    {
        const bool branch_taken_0x1f669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f669c) {
            ctx->pc = 0x1F66C4u;
            return;
        }
    }
    ctx->pc = 0x1F66A4u;
}
