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

// Function: Camera_spiral_init
// Address: 0x1837a0 - 0x183928
void Camera_spiral_init_0x1837a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_spiral_init_0x1837a0");
#endif

    switch (ctx->pc) {
        case 0x183808u: goto label_183808;
        case 0x183894u: goto label_183894;
        case 0x1838c8u: goto label_1838c8;
        case 0x183908u: goto label_183908;
        default: break;
    }

    ctx->pc = 0x1837a0u;

    // 0x1837a0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1837a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x1837a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1837a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1837a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1837a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1837ac: 0xafa401f8  sw          $a0, 0x1F8($sp)
    ctx->pc = 0x1837acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 4));
    // 0x1837b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1837b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1837b4: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x1837b4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1837b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1837b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1837bc: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x1837bcu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1837c0: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x1837c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1837c4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1837c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1837c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1837c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1837cc: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1837CCu;
    {
        const bool branch_taken_0x1837cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1837cc) {
            ctx->pc = 0x183838u;
            goto label_183838;
        }
    }
    ctx->pc = 0x1837D4u;
    // 0x1837d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1837d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1837d8: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1837d8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1837dc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1837dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1837e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1837e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1837e4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1837e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1837e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1837e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1837ec: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1837ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1837f0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1837f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1837f4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1837f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1837f8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1837f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1837fc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1837fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x183800: 0xc05f728  jal         func_17DCA0
    ctx->pc = 0x183800u;
    SET_GPR_U32(ctx, 31, 0x183808u);
    ctx->pc = 0x17DCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DCA0u, 0x183800u, 0x183808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183808u;
label_183808:
    // 0x183808: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x183808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x18380c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18380cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183810: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x183810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x183814: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x183814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183818: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183818u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18381c: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x18381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x183820: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183824: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x183824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x183828: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x183828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x18382c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18382cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183830: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x183830u;
    {
        const bool branch_taken_0x183830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183830) {
            ctx->pc = 0x1838BCu;
            goto label_1838bc;
        }
    }
    ctx->pc = 0x183838u;
label_183838:
    // 0x183838: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x183838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x18383c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18383cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183840: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x183840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x183844: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x183844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x183848: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183848u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18384c: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x18384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x183850: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183850u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183854: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x183854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x183858: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x183858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x18385c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18385cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183860: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183864: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x183864u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x183868: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x183868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18386c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18386cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x183870: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x183870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183878: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x183878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18387c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x18387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x183880: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x183880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x183884: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x183884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183888: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18388c: 0xc05f728  jal         func_17DCA0
    ctx->pc = 0x18388Cu;
    SET_GPR_U32(ctx, 31, 0x183894u);
    ctx->pc = 0x17DCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DCA0u, 0x18388Cu, 0x183894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183894u;
label_183894:
    // 0x183894: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x183894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x183898: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183898u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18389c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x18389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1838a0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1838a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1838a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1838a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1838a8: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x1838a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1838ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1838acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1838b0: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x1838b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1838b4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1838b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1838b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1838b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1838bc:
    // 0x1838bc: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x1838bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1838c0: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x1838C0u;
    SET_GPR_U32(ctx, 31, 0x1838C8u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x1838C0u, 0x1838C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838C8u;
label_1838c8:
    // 0x1838c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1838c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1838cc: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1838ccu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1838d0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1838d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1838d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1838d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1838d8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1838d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1838dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1838dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1838e0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1838e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1838e4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1838e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1838e8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1838e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1838ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1838ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1838f0: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1838f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1838f4: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x1838f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1838f8: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1838f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1838fc: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x1838fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x183900: 0xc060e4c  jal         func_183930
    ctx->pc = 0x183900u;
    SET_GPR_U32(ctx, 31, 0x183908u);
    ctx->pc = 0x183930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183930u, 0x183900u, 0x183908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183908u;
label_183908:
    // 0x183908: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x183908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x18390c: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x18390cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x183910: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x183910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x183914: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x183914u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18391c: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x18391cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x183920: 0x3e00008  jr          $ra
    ctx->pc = 0x183920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183928u;
}
