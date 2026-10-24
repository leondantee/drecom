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

// Function: entry_002a0fd8
// Address: 0x2a0fd8 - 0x2a11ec
void entry_002a0fd8_0x2a0fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a0fd8_0x2a0fd8");
#endif

    switch (ctx->pc) {
        case 0x2a101cu: goto label_2a101c;
        case 0x2a1038u: goto label_2a1038;
        case 0x2a106cu: goto label_2a106c;
        case 0x2a108cu: goto label_2a108c;
        case 0x2a10a0u: goto label_2a10a0;
        case 0x2a10acu: goto label_2a10ac;
        case 0x2a10b8u: goto label_2a10b8;
        case 0x2a1160u: goto label_2a1160;
        case 0x2a11dcu: goto label_2a11dc;
        default: break;
    }

    ctx->pc = 0x2a0fd8u;

    // 0x2a0fd8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0fdc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a0fe0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2a0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a0fe4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2a0fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2a0fe8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a0fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a0fec: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2a0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2a0ff0: 0x3c033e8e  lui         $v1, 0x3E8E
    ctx->pc = 0x2a0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16014 << 16));
    // 0x2a0ff4: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2a0ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a0ff8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a0ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0ffc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1000: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a1000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1004: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a1008: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a1008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a100c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2a100cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2a1010: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x2a1010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
    // 0x2a1014: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A1014u;
    SET_GPR_U32(ctx, 31, 0x2A101Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A1014u, 0x2A101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A101Cu;
label_2a101c:
    // 0x2a101c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2a101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2a1020: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a1020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1024: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a1024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1028: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2a1028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a102c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a102cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a1030: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A1030u;
    SET_GPR_U32(ctx, 31, 0x2A1038u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A1030u, 0x2A1038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1038u;
label_2a1038:
    // 0x2a1038: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a1038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a103c: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a103cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a1040: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1044: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2a1044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1048: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x2a1048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x2a104c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a104cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1050: 0x0  nop
    ctx->pc = 0x2a1050u;
    // NOP
    // 0x2a1054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a1054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a1058: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a1058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2a105c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1060: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a1060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a1064: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A1064u;
    SET_GPR_U32(ctx, 31, 0x2A106Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A1064u, 0x2A106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A106Cu;
label_2a106c:
    // 0x2a106c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1070: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x2a1070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1074: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a1074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1078: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a107c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a107cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a1080: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a1080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a1084: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A1084u;
    SET_GPR_U32(ctx, 31, 0x2A108Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A1084u, 0x2A108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A108Cu;
label_2a108c:
    // 0x2a108c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a108cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1090: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1098: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A1098u;
    SET_GPR_U32(ctx, 31, 0x2A10A0u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A1098u, 0x2A10A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10A0u;
label_2a10a0:
    // 0x2a10a0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a10a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a10a4: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A10A4u;
    SET_GPR_U32(ctx, 31, 0x2A10ACu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A10A4u, 0x2A10ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10ACu;
label_2a10ac:
    // 0x2a10ac: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a10acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a10b0: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A10B0u;
    SET_GPR_U32(ctx, 31, 0x2A10B8u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A10B0u, 0x2A10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10B8u;
label_2a10b8:
    // 0x2a10b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a10b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a10bc: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2a10bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a10c0: 0x84c7127c  lh          $a3, 0x127C($a2)
    ctx->pc = 0x2a10c0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4732)));
    // 0x2a10c4: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x2a10c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a10c8: 0xa4c8127c  sh          $t0, 0x127C($a2)
    ctx->pc = 0x2a10c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4732), (uint16_t)GPR_U32(ctx, 8));
    // 0x2a10cc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a10ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a10d0: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2a10d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a10d4: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2a10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2a10d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a10d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a10dc: 0x0  nop
    ctx->pc = 0x2a10dcu;
    // NOP
    // 0x2a10e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a10e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a10e4: 0x0  nop
    ctx->pc = 0x2a10e4u;
    // NOP
    // 0x2a10e8: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x2A10E8u;
    {
        const bool branch_taken_0x2a10e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a10e8) {
            ctx->pc = 0x2A11ECu;
            return;
        }
    }
    ctx->pc = 0x2A10F0u;
    // 0x2a10f0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a10f4: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2a10f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a10f8: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x2a10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x2a10fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a10fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a1100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a1104: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2a1104u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1108: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a1108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a110c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a110cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1110: 0x0  nop
    ctx->pc = 0x2a1110u;
    // NOP
    // 0x2a1114: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x2A1114u;
    {
        const bool branch_taken_0x2a1114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1114) {
            ctx->pc = 0x2A11ECu;
            return;
        }
    }
    ctx->pc = 0x2A111Cu;
    // 0x2a111c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a111cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1120: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2a1120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2a1124: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a1124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a1128: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a1128u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a112c: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x2a112cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a1130: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x2A1130u;
    {
        const bool branch_taken_0x2a1130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1130) {
            ctx->pc = 0x2A11ECu;
            return;
        }
    }
    ctx->pc = 0x2A1138u;
    // 0x2a1138: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a113c: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x2a113cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x2a1140: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2a1140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a1144: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2a1144u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2a1148: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2a1148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a114c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A114Cu;
    {
        const bool branch_taken_0x2a114c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a114c) {
            ctx->pc = 0x2A11ECu;
            return;
        }
    }
    ctx->pc = 0x2A1154u;
    // 0x2a1154: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a1154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a1158: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A1158u;
    SET_GPR_U32(ctx, 31, 0x2A1160u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A1158u, 0x2A1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1160u;
label_2a1160:
    // 0x2a1160: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1164: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a1164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a1168: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a1168u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a116c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1170: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2a1170u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2a1174: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2a1174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2a1178: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a1178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a117c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a117cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1180: 0x0  nop
    ctx->pc = 0x2a1180u;
    // NOP
    // 0x2a1184: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a1184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a1188: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a1188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a118c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a118cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1190: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a1190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a1194: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a1194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a1198: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a1198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a119c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a11a0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x2a11a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a11a4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a11a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a11a8: 0x34a60007  ori         $a2, $a1, 0x7
    ctx->pc = 0x2a11a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x2a11ac: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x2a11acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a11b0: 0x8ce80130  lw          $t0, 0x130($a3)
    ctx->pc = 0x2a11b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x2a11b4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a11b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a11b8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2a11b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a11bc: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2a11bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a11c0: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x2a11c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a11c4: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x2a11c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a11c8: 0x25020080  addiu       $v0, $t0, 0x80
    ctx->pc = 0x2a11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x2a11cc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a11ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a11d0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a11d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a11d4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A11D4u;
    SET_GPR_U32(ctx, 31, 0x2A11DCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A11D4u, 0x2A11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A11DCu;
label_2a11dc:
    // 0x2a11dc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a11dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a11e0: 0x84a3127e  lh          $v1, 0x127E($a1)
    ctx->pc = 0x2a11e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x2a11e4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2a11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a11e8: 0xa4a4127e  sh          $a0, 0x127E($a1)
    ctx->pc = 0x2a11e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2a11ecu;
}
