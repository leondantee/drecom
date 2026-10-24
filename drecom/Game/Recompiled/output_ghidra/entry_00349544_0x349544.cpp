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

// Function: entry_00349544
// Address: 0x349544 - 0x349674
void entry_00349544_0x349544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349544_0x349544");
#endif

    switch (ctx->pc) {
        case 0x349570u: goto label_349570;
        case 0x34958cu: goto label_34958c;
        case 0x3495a4u: goto label_3495a4;
        case 0x3495b0u: goto label_3495b0;
        case 0x349670u: goto label_349670;
        default: break;
    }

    ctx->pc = 0x349544u;

    // 0x349544: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x349544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349548: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34954c: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x34954cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x349550: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x349550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x349554: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x349554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x349558: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x349558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34955c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34955cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x349560: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x349560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x349564: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x349564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x349568: 0xc05c848  jal         func_172120
    ctx->pc = 0x349568u;
    SET_GPR_U32(ctx, 31, 0x349570u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x349568u, 0x349570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349570u;
label_349570:
    // 0x349570: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x349570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x349574: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349578: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x349578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34957c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x34957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349580: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x349580u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x349584: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x349584u;
    SET_GPR_U32(ctx, 31, 0x34958Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x349584u, 0x34958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34958Cu;
label_34958c:
    // 0x34958c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349590: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x349590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x349594: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x349594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349598: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349598u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34959c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34959Cu;
    SET_GPR_U32(ctx, 31, 0x3495A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34959Cu, 0x3495A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495A4u;
label_3495a4:
    // 0x3495a4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3495a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3495a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3495A8u;
    SET_GPR_U32(ctx, 31, 0x3495B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3495A8u, 0x3495B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495B0u;
label_3495b0:
    // 0x3495b0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3495b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3495b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3495b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3495b8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x3495b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3495bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3495bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3495c0: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x3495c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3495c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3495c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3495c8: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x3495c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x3495cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3495ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3495d0: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x3495d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3495d4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3495d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3495d8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3495d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3495dc: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x3495dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3495e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3495e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3495e4: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x3495e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x3495e8: 0x8fb00098  lw          $s0, 0x98($sp)
    ctx->pc = 0x3495e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3495ec: 0x26051330  addiu       $a1, $s0, 0x1330
    ctx->pc = 0x3495ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x3495f0: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x3495f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x3495f4: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x3495f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x3495f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3495f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3495fc: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3495fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349600: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x349604: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x349604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x349608: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34960c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34960cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349610: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x349610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x349614: 0x34836666  ori         $v1, $a0, 0x6666
    ctx->pc = 0x349614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x349618: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x349618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34961c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x34961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349620: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x349624: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x349624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x349628: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34962c: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x34962cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x349630: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x349630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x349634: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x349634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x349638: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x349638u;
    {
        const bool branch_taken_0x349638 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x349638) {
            ctx->pc = 0x349674u;
            return;
        }
    }
    ctx->pc = 0x349640u;
    // 0x349640: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349644: 0x94620a00  lhu         $v0, 0xA00($v1)
    ctx->pc = 0x349644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x349648: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x349648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34964c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x34964cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x349650: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x349650u;
    {
        const bool branch_taken_0x349650 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x349650) {
            ctx->pc = 0x349674u;
            return;
        }
    }
    ctx->pc = 0x349658u;
    // 0x349658: 0x3c054316  lui         $a1, 0x4316
    ctx->pc = 0x349658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17174 << 16));
    // 0x34965c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x34965cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x349660: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x349660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349664: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x349664u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x349668: 0xc0d56ac  jal         func_355AB0
    ctx->pc = 0x349668u;
    SET_GPR_U32(ctx, 31, 0x349670u);
    ctx->pc = 0x355AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355AB0u, 0x349668u, 0x349670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349670u;
label_349670:
    // 0x349670: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x349670u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x349674u;
}
