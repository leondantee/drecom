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

// Function: Turn_dest_Y
// Address: 0x1725a0 - 0x172b60
void Turn_dest_Y_0x1725a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Turn_dest_Y_0x1725a0");
#endif

    switch (ctx->pc) {
        case 0x172650u: goto label_172650;
        case 0x1726a4u: goto label_1726a4;
        case 0x172918u: goto label_172918;
        default: break;
    }

    ctx->pc = 0x1725a0u;

    // 0x1725a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1725a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1725a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1725a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1725a8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1725a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1725ac: 0xe7ac0068  swc1        $f12, 0x68($sp)
    ctx->pc = 0x1725acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1725b0: 0xe7ad0070  swc1        $f13, 0x70($sp)
    ctx->pc = 0x1725b0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1725b4: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1725b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x1725b8: 0xe7ae0080  swc1        $f14, 0x80($sp)
    ctx->pc = 0x1725b8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1725bc: 0xe7af0088  swc1        $f15, 0x88($sp)
    ctx->pc = 0x1725bcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1725c0: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1725c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x1725c4: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x1725c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x1725c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1725c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1725cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1725ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1725d0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1725d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1725d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1725d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1725d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1725d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1725dc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1725dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1725e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1725e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1725e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1725e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1725e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1725e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1725ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1725ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1725f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1725f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1725f4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1725f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1725f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1725f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1725fc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1725fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172600: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x172600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x172604: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x172604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172608: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17260c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x17260cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x172610: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x172610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x172614: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x172614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172618: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17261c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x172620: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x172620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172624: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x172624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x172628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17262c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x17262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x172630: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x172630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x172634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172638: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x172638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17263c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17263cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x172640: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x172640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x172644: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x172644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x172648: 0xc067594  jal         func_19D650
    ctx->pc = 0x172648u;
    SET_GPR_U32(ctx, 31, 0x172650u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x172648u, 0x172650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172650u;
label_172650:
    // 0x172650: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x172650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x172654: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172658: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x172658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17265c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x17265cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x172660: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x172660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172664: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x172664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x172668: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x172668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17266c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17266cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172670: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x172670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172674: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x172674u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172678: 0x0  nop
    ctx->pc = 0x172678u;
    // NOP
    // 0x17267c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x17267Cu;
    {
        const bool branch_taken_0x17267c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17267c) {
            ctx->pc = 0x1726E8u;
            goto label_1726e8;
        }
    }
    ctx->pc = 0x172684u;
    // 0x172684: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x172684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172688: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x172688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17268c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x17268cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x172690: 0x0  nop
    ctx->pc = 0x172690u;
    // NOP
    // 0x172694: 0x0  nop
    ctx->pc = 0x172694u;
    // NOP
    // 0x172698: 0x0  nop
    ctx->pc = 0x172698u;
    // NOP
    // 0x17269c: 0xc045330  jal         func_114CC0
    ctx->pc = 0x17269Cu;
    SET_GPR_U32(ctx, 31, 0x1726A4u);
    ctx->pc = 0x114CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CC0u, 0x17269Cu, 0x1726A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726A4u;
label_1726a4:
    // 0x1726a4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1726a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1726a8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1726a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1726ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1726acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1726b0: 0x0  nop
    ctx->pc = 0x1726b0u;
    // NOP
    // 0x1726b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1726b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1726b8: 0x0  nop
    ctx->pc = 0x1726b8u;
    // NOP
    // 0x1726bc: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1726BCu;
    {
        const bool branch_taken_0x1726bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1726bc) {
            ctx->pc = 0x17273Cu;
            goto label_17273c;
        }
    }
    ctx->pc = 0x1726C4u;
    // 0x1726c4: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1726c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1726c8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1726c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1726cc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1726ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1726d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1726d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1726d4: 0x0  nop
    ctx->pc = 0x1726d4u;
    // NOP
    // 0x1726d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1726d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1726dc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1726dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1726e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1726E0u;
    {
        const bool branch_taken_0x1726e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1726e0) {
            ctx->pc = 0x17273Cu;
            goto label_17273c;
        }
    }
    ctx->pc = 0x1726E8u;
label_1726e8:
    // 0x1726e8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1726e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1726ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1726ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1726f0: 0x0  nop
    ctx->pc = 0x1726f0u;
    // NOP
    // 0x1726f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1726f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1726f8: 0x0  nop
    ctx->pc = 0x1726f8u;
    // NOP
    // 0x1726fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1726FCu;
    {
        const bool branch_taken_0x1726fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1726fc) {
            ctx->pc = 0x172720u;
            goto label_172720;
        }
    }
    ctx->pc = 0x172704u;
    // 0x172704: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x172704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x172708: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x17270c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17270cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172710: 0x0  nop
    ctx->pc = 0x172710u;
    // NOP
    // 0x172714: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x172714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x172718: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172718u;
    {
        const bool branch_taken_0x172718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172718) {
            ctx->pc = 0x172734u;
            goto label_172734;
        }
    }
    ctx->pc = 0x172720u;
label_172720:
    // 0x172720: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x172720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x172724: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17272c: 0x0  nop
    ctx->pc = 0x17272cu;
    // NOP
    // 0x172730: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x172730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_172734:
    // 0x172734: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x172734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172738: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x172738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_17273c:
    // 0x17273c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x17273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172740: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x172740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172744: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172748: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17274c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x17274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172750: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x172750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x172754: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17275c: 0x0  nop
    ctx->pc = 0x17275cu;
    // NOP
    // 0x172760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172764: 0x0  nop
    ctx->pc = 0x172764u;
    // NOP
    // 0x172768: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172768u;
    {
        const bool branch_taken_0x172768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172768) {
            ctx->pc = 0x17278Cu;
            goto label_17278c;
        }
    }
    ctx->pc = 0x172770u;
    // 0x172770: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172774: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x172774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x172778: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x17277c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17277cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172780: 0x0  nop
    ctx->pc = 0x172780u;
    // NOP
    // 0x172784: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172788: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_17278c:
    // 0x17278c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x17278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172790: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x172790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x172794: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17279c: 0x0  nop
    ctx->pc = 0x17279cu;
    // NOP
    // 0x1727a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1727a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1727a4: 0x0  nop
    ctx->pc = 0x1727a4u;
    // NOP
    // 0x1727a8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1727A8u;
    {
        const bool branch_taken_0x1727a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1727a8) {
            ctx->pc = 0x1727CCu;
            goto label_1727cc;
        }
    }
    ctx->pc = 0x1727B0u;
    // 0x1727b0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1727b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1727b4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1727b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1727b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1727b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1727bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1727bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1727c0: 0x0  nop
    ctx->pc = 0x1727c0u;
    // NOP
    // 0x1727c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1727c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1727c8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1727c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1727cc:
    // 0x1727cc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1727ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1727d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1727d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1727d4: 0x0  nop
    ctx->pc = 0x1727d4u;
    // NOP
    // 0x1727d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1727d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1727dc: 0x0  nop
    ctx->pc = 0x1727dcu;
    // NOP
    // 0x1727e0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1727E0u;
    {
        const bool branch_taken_0x1727e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1727e0) {
            ctx->pc = 0x172800u;
            goto label_172800;
        }
    }
    ctx->pc = 0x1727E8u;
    // 0x1727e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1727e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1727ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1727ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1727f0: 0x0  nop
    ctx->pc = 0x1727f0u;
    // NOP
    // 0x1727f4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1727f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1727f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1727F8u;
    {
        const bool branch_taken_0x1727f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1727f8) {
            ctx->pc = 0x172810u;
            goto label_172810;
        }
    }
    ctx->pc = 0x172800u;
label_172800:
    // 0x172800: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x172800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x172804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172808: 0x0  nop
    ctx->pc = 0x172808u;
    // NOP
    // 0x17280c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17280cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_172810:
    // 0x172810: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x172810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172814: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x172814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x172818: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17281c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17281cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172820: 0x0  nop
    ctx->pc = 0x172820u;
    // NOP
    // 0x172824: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172828: 0x0  nop
    ctx->pc = 0x172828u;
    // NOP
    // 0x17282c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17282Cu;
    {
        const bool branch_taken_0x17282c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17282c) {
            ctx->pc = 0x172844u;
            goto label_172844;
        }
    }
    ctx->pc = 0x172834u;
    // 0x172834: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172838: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x172838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17283c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17283Cu;
    {
        const bool branch_taken_0x17283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17283c) {
            ctx->pc = 0x172850u;
            goto label_172850;
        }
    }
    ctx->pc = 0x172844u;
label_172844:
    // 0x172844: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172848: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172848u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17284c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x17284cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_172850:
    // 0x172850: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x172850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172854: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x172854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172858: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17285c: 0x0  nop
    ctx->pc = 0x17285cu;
    // NOP
    // 0x172860: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172860u;
    {
        const bool branch_taken_0x172860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172860) {
            ctx->pc = 0x172878u;
            goto label_172878;
        }
    }
    ctx->pc = 0x172868u;
    // 0x172868: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x172868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17286c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x17286cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x172870: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x172870u;
    {
        const bool branch_taken_0x172870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172870) {
            ctx->pc = 0x1728B8u;
            goto label_1728b8;
        }
    }
    ctx->pc = 0x172878u;
label_172878:
    // 0x172878: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17287c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17287cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172880: 0x0  nop
    ctx->pc = 0x172880u;
    // NOP
    // 0x172884: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172888: 0x0  nop
    ctx->pc = 0x172888u;
    // NOP
    // 0x17288c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17288Cu;
    {
        const bool branch_taken_0x17288c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17288c) {
            ctx->pc = 0x1728A4u;
            goto label_1728a4;
        }
    }
    ctx->pc = 0x172894u;
    // 0x172894: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172898: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x172898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x17289c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17289Cu;
    {
        const bool branch_taken_0x17289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17289c) {
            ctx->pc = 0x1728B0u;
            goto label_1728b0;
        }
    }
    ctx->pc = 0x1728A4u;
label_1728a4:
    // 0x1728a4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1728a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1728a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1728ac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1728acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1728b0:
    // 0x1728b0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1728b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728b4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1728b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1728b8:
    // 0x1728b8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1728b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728bc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1728bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1728c0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1728c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1728c4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1728c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1728c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1728cc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1728ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1728d0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1728d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728d4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1728d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1728d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1728d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1728dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1728dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1728e0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1728e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1728e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1728e8: 0x0  nop
    ctx->pc = 0x1728e8u;
    // NOP
    // 0x1728ec: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1728ECu;
    {
        const bool branch_taken_0x1728ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1728ec) {
            ctx->pc = 0x17295Cu;
            goto label_17295c;
        }
    }
    ctx->pc = 0x1728F4u;
    // 0x1728f4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1728f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728f8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1728f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1728fc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1728fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172900: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x172900u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x172904: 0x0  nop
    ctx->pc = 0x172904u;
    // NOP
    // 0x172908: 0x0  nop
    ctx->pc = 0x172908u;
    // NOP
    // 0x17290c: 0x0  nop
    ctx->pc = 0x17290cu;
    // NOP
    // 0x172910: 0xc045330  jal         func_114CC0
    ctx->pc = 0x172910u;
    SET_GPR_U32(ctx, 31, 0x172918u);
    ctx->pc = 0x114CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CC0u, 0x172910u, 0x172918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172918u;
label_172918:
    // 0x172918: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x172918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x17291c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x17291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172924: 0x0  nop
    ctx->pc = 0x172924u;
    // NOP
    // 0x172928: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17292c: 0x0  nop
    ctx->pc = 0x17292cu;
    // NOP
    // 0x172930: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x172930u;
    {
        const bool branch_taken_0x172930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172930) {
            ctx->pc = 0x1729B0u;
            goto label_1729b0;
        }
    }
    ctx->pc = 0x172938u;
    // 0x172938: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x172938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17293c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x17293cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x172940: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172948: 0x0  nop
    ctx->pc = 0x172948u;
    // NOP
    // 0x17294c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17294cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172950: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x172950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x172954: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x172954u;
    {
        const bool branch_taken_0x172954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172954) {
            ctx->pc = 0x1729B0u;
            goto label_1729b0;
        }
    }
    ctx->pc = 0x17295Cu;
label_17295c:
    // 0x17295c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x17295cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172960: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172964: 0x0  nop
    ctx->pc = 0x172964u;
    // NOP
    // 0x172968: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17296c: 0x0  nop
    ctx->pc = 0x17296cu;
    // NOP
    // 0x172970: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172970u;
    {
        const bool branch_taken_0x172970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172970) {
            ctx->pc = 0x172994u;
            goto label_172994;
        }
    }
    ctx->pc = 0x172978u;
    // 0x172978: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x172978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x17297c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x17297cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172984: 0x0  nop
    ctx->pc = 0x172984u;
    // NOP
    // 0x172988: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x172988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17298c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17298Cu;
    {
        const bool branch_taken_0x17298c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17298c) {
            ctx->pc = 0x1729A8u;
            goto label_1729a8;
        }
    }
    ctx->pc = 0x172994u;
label_172994:
    // 0x172994: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x172994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x172998: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x17299c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17299cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1729a0: 0x0  nop
    ctx->pc = 0x1729a0u;
    // NOP
    // 0x1729a4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1729a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1729a8:
    // 0x1729a8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1729a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1729ac: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1729acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1729b0:
    // 0x1729b0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1729b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1729b4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1729b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1729b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1729b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1729bc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1729bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1729c0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1729c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1729c4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1729c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1729c8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1729c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1729cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1729ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1729d0: 0x0  nop
    ctx->pc = 0x1729d0u;
    // NOP
    // 0x1729d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1729d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1729d8: 0x0  nop
    ctx->pc = 0x1729d8u;
    // NOP
    // 0x1729dc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1729DCu;
    {
        const bool branch_taken_0x1729dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1729dc) {
            ctx->pc = 0x172A00u;
            goto label_172a00;
        }
    }
    ctx->pc = 0x1729E4u;
    // 0x1729e4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1729e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1729e8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1729e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1729ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1729ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1729f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1729f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1729f4: 0x0  nop
    ctx->pc = 0x1729f4u;
    // NOP
    // 0x1729f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1729f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1729fc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1729fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_172a00:
    // 0x172a00: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a04: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x172a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x172a08: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a10: 0x0  nop
    ctx->pc = 0x172a10u;
    // NOP
    // 0x172a14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172a18: 0x0  nop
    ctx->pc = 0x172a18u;
    // NOP
    // 0x172a1c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x172A1Cu;
    {
        const bool branch_taken_0x172a1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172a1c) {
            ctx->pc = 0x172A40u;
            goto label_172a40;
        }
    }
    ctx->pc = 0x172A24u;
    // 0x172a24: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a28: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x172a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x172a2c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a34: 0x0  nop
    ctx->pc = 0x172a34u;
    // NOP
    // 0x172a38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x172a38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x172a3c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_172a40:
    // 0x172a40: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a48: 0x0  nop
    ctx->pc = 0x172a48u;
    // NOP
    // 0x172a4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172a4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172a50: 0x0  nop
    ctx->pc = 0x172a50u;
    // NOP
    // 0x172a54: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x172A54u;
    {
        const bool branch_taken_0x172a54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172a54) {
            ctx->pc = 0x172A74u;
            goto label_172a74;
        }
    }
    ctx->pc = 0x172A5Cu;
    // 0x172a5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x172a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x172a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a64: 0x0  nop
    ctx->pc = 0x172a64u;
    // NOP
    // 0x172a68: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x172a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x172a6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x172A6Cu;
    {
        const bool branch_taken_0x172a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172a6c) {
            ctx->pc = 0x172A84u;
            goto label_172a84;
        }
    }
    ctx->pc = 0x172A74u;
label_172a74:
    // 0x172a74: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x172a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x172a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a7c: 0x0  nop
    ctx->pc = 0x172a7cu;
    // NOP
    // 0x172a80: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x172a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_172a84:
    // 0x172a84: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x172a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172a88: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x172a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x172a8c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a94: 0x0  nop
    ctx->pc = 0x172a94u;
    // NOP
    // 0x172a98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172a98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172a9c: 0x0  nop
    ctx->pc = 0x172a9cu;
    // NOP
    // 0x172aa0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172AA0u;
    {
        const bool branch_taken_0x172aa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172aa0) {
            ctx->pc = 0x172AB8u;
            goto label_172ab8;
        }
    }
    ctx->pc = 0x172AA8u;
    // 0x172aa8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172aac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x172aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x172ab0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172AB0u;
    {
        const bool branch_taken_0x172ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ab0) {
            ctx->pc = 0x172AC4u;
            goto label_172ac4;
        }
    }
    ctx->pc = 0x172AB8u;
label_172ab8:
    // 0x172ab8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172abc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172abcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172ac0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x172ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_172ac4:
    // 0x172ac4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x172ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172ac8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x172ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172acc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172ad0: 0x0  nop
    ctx->pc = 0x172ad0u;
    // NOP
    // 0x172ad4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172AD4u;
    {
        const bool branch_taken_0x172ad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172ad4) {
            ctx->pc = 0x172AECu;
            goto label_172aec;
        }
    }
    ctx->pc = 0x172ADCu;
    // 0x172adc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x172adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172ae0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x172ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x172ae4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x172AE4u;
    {
        const bool branch_taken_0x172ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ae4) {
            ctx->pc = 0x172B2Cu;
            goto label_172b2c;
        }
    }
    ctx->pc = 0x172AECu;
label_172aec:
    // 0x172aec: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172af4: 0x0  nop
    ctx->pc = 0x172af4u;
    // NOP
    // 0x172af8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172afc: 0x0  nop
    ctx->pc = 0x172afcu;
    // NOP
    // 0x172b00: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172B00u;
    {
        const bool branch_taken_0x172b00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172b00) {
            ctx->pc = 0x172B18u;
            goto label_172b18;
        }
    }
    ctx->pc = 0x172B08u;
    // 0x172b08: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b0c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x172b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x172b10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172B10u;
    {
        const bool branch_taken_0x172b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b10) {
            ctx->pc = 0x172B24u;
            goto label_172b24;
        }
    }
    ctx->pc = 0x172B18u;
label_172b18:
    // 0x172b18: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x172b1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x172b20: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x172b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_172b24:
    // 0x172b24: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x172b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b28: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x172b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_172b2c:
    // 0x172b2c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b30: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x172b34: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172b38: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x172b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x172b40: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x172b44: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b48: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x172b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x172b4c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x172b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x172b50: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x172b50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b54: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x172b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x172b58: 0x3e00008  jr          $ra
    ctx->pc = 0x172B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172B60u;
}
