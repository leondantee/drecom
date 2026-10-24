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

// Function: Em09_R1_mv0a
// Address: 0x348f30 - 0x349718
void Em09_R1_mv0a_0x348f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv0a_0x348f30");
#endif

    switch (ctx->pc) {
        case 0x348fd4u: goto label_348fd4;
        case 0x3490a8u: goto label_3490a8;
        case 0x3490b8u: goto label_3490b8;
        case 0x349118u: goto label_349118;
        case 0x34917cu: goto label_34917c;
        case 0x349188u: goto label_349188;
        case 0x3491c4u: goto label_3491c4;
        case 0x3491e0u: goto label_3491e0;
        case 0x3492c0u: goto label_3492c0;
        case 0x3492d0u: goto label_3492d0;
        case 0x3492dcu: goto label_3492dc;
        case 0x3493b4u: goto label_3493b4;
        case 0x3493dcu: goto label_3493dc;
        case 0x349404u: goto label_349404;
        case 0x349454u: goto label_349454;
        case 0x349468u: goto label_349468;
        case 0x349488u: goto label_349488;
        case 0x349570u: goto label_349570;
        case 0x34958cu: goto label_34958c;
        case 0x3495a4u: goto label_3495a4;
        case 0x3495b0u: goto label_3495b0;
        case 0x349670u: goto label_349670;
        case 0x349688u: goto label_349688;
        case 0x349694u: goto label_349694;
        default: break;
    }

    ctx->pc = 0x348f30u;

    // 0x348f30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x348f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x348f34: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x348f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x348f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x348f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x348f40: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x348f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x348f44: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x348f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348f48: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x348f48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x348f4c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x348f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x348f50: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x348f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x348f54: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x348f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348f58: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x348f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x348f5c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x348f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x348f60: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x348f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x348f64: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x348f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x348f68: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x348f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348f6c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x348f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x348f70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x348f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x348f74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x348f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348f78: 0x10830172  beq         $a0, $v1, . + 4 + (0x172 << 2)
    ctx->pc = 0x348F78u;
    {
        const bool branch_taken_0x348f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x348f78) {
            ctx->pc = 0x349544u;
            goto label_349544;
        }
    }
    ctx->pc = 0x348F80u;
    // 0x348f80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x348f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348f84: 0x10830093  beq         $a0, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x348F84u;
    {
        const bool branch_taken_0x348f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x348f84) {
            ctx->pc = 0x3491D4u;
            goto label_3491d4;
        }
    }
    ctx->pc = 0x348F8Cu;
    // 0x348f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348f90: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x348F90u;
    {
        const bool branch_taken_0x348f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x348f90) {
            ctx->pc = 0x3490A8u;
            goto label_3490a8;
        }
    }
    ctx->pc = 0x348F98u;
    // 0x348f98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x348F98u;
    {
        const bool branch_taken_0x348f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348f98) {
            ctx->pc = 0x348FA8u;
            goto label_348fa8;
        }
    }
    ctx->pc = 0x348FA0u;
    // 0x348fa0: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x348FA0u;
    {
        const bool branch_taken_0x348fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348fa0) {
            ctx->pc = 0x349700u;
            goto label_349700;
        }
    }
    ctx->pc = 0x348FA8u;
label_348fa8:
    // 0x348fa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348fac: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x348facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348fb0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x348fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x348fb4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x348fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348fb8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x348fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348fbc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x348fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x348fc0: 0x24061e03  addiu       $a2, $zero, 0x1E03
    ctx->pc = 0x348fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x348fc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x348fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348fc8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x348fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x348fcc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x348FCCu;
    SET_GPR_U32(ctx, 31, 0x348FD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x348FCCu, 0x348FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348FD4u;
label_348fd4:
    // 0x348fd4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x348fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348fd8: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x348fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x348fdc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x348fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x348fe0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x348fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x348fe4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x348fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x348fe8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x348fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x348fec: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x348fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348ff0: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x348ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x348ff4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x348ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x348ff8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x348ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x348ffc: 0x24710960  addiu       $s1, $v1, 0x960
    ctx->pc = 0x348ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x349000: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x349000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x349004: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x349004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349008: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x349008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34900c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34900cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x349010: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x349010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x349014: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x349014u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349018: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34901c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34901cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349020: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x349024: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349028: 0x3c053fc0  lui         $a1, 0x3FC0
    ctx->pc = 0x349028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16320 << 16));
    // 0x34902c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x34902cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349030: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x349030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349034: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x349034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x349038: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x349038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34903c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x349040: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x349040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x349044: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349048: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x349048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34904c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349050: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x349050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x349054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349058: 0x0  nop
    ctx->pc = 0x349058u;
    // NOP
    // 0x34905c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34905cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349060: 0x0  nop
    ctx->pc = 0x349060u;
    // NOP
    // 0x349064: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x349064u;
    {
        const bool branch_taken_0x349064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349064) {
            ctx->pc = 0x349080u;
            goto label_349080;
        }
    }
    ctx->pc = 0x34906Cu;
    // 0x34906c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x34906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x349070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349074: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349078: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34907c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34907cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_349080:
    // 0x349080: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349084: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349088: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x349088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34908c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x34908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x349090: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x349090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x349094: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x349094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x349098: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x349098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34909c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34909cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490a0: 0xc0d56ac  jal         func_355AB0
    ctx->pc = 0x3490A0u;
    SET_GPR_U32(ctx, 31, 0x3490A8u);
    ctx->pc = 0x355AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355AB0u, 0x3490A0u, 0x3490A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490A8u;
label_3490a8:
    // 0x3490a8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3490a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3490acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3490b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3490B0u;
    SET_GPR_U32(ctx, 31, 0x3490B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3490B0u, 0x3490B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490B8u;
label_3490b8:
    // 0x3490b8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3490b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490bc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3490bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3490c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3490c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3490c4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3490c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3490c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3490C8u;
    {
        const bool branch_taken_0x3490c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3490c8) {
            ctx->pc = 0x34910Cu;
            goto label_34910c;
        }
    }
    ctx->pc = 0x3490D0u;
    // 0x3490d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3490d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3490d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3490d8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x3490d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3490dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3490dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490e0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x3490e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3490e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3490e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3490e8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x3490e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x3490ec: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3490ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3490f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3490f4: 0x3c023f6b  lui         $v0, 0x3F6B
    ctx->pc = 0x3490f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16235 << 16));
    // 0x3490f8: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x3490f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x3490fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3490fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349100: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x349100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349104: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x349108: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x349108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_34910c:
    // 0x34910c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349110: 0xc05cd10  jal         func_173440
    ctx->pc = 0x349110u;
    SET_GPR_U32(ctx, 31, 0x349118u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349110u, 0x349118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349118u;
label_349118:
    // 0x349118: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34911c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x34911cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x349120: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x349120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x349124: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x349124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x349128: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x349128u;
    {
        const bool branch_taken_0x349128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349128) {
            ctx->pc = 0x34916Cu;
            goto label_34916c;
        }
    }
    ctx->pc = 0x349130u;
    // 0x349130: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349134: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349138: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x349138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34913c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349140: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349148: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x349148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34914c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349150: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349154: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x349154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349158: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x349158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34915c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34915cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349160: 0x0  nop
    ctx->pc = 0x349160u;
    // NOP
    // 0x349164: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x349164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x349168: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_34916c:
    // 0x34916c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34916cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349170: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349170u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x349174: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x349174u;
    SET_GPR_U32(ctx, 31, 0x34917Cu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x349174u, 0x34917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34917Cu;
label_34917c:
    // 0x34917c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34917cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349180: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x349180u;
    SET_GPR_U32(ctx, 31, 0x349188u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x349180u, 0x349188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349188u;
label_349188:
    // 0x349188: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34918c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34918cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x349190: 0x1060015b  beqz        $v1, . + 4 + (0x15B << 2)
    ctx->pc = 0x349190u;
    {
        const bool branch_taken_0x349190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349190) {
            ctx->pc = 0x349700u;
            goto label_349700;
        }
    }
    ctx->pc = 0x349198u;
    // 0x349198: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x349198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34919c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491a0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3491a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3491a4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3491a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491a8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3491a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3491acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3491b0: 0x24063c04  addiu       $a2, $zero, 0x3C04
    ctx->pc = 0x3491b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15364));
    // 0x3491b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3491b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3491b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3491b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3491bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3491BCu;
    SET_GPR_U32(ctx, 31, 0x3491C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3491BCu, 0x3491C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491C4u;
label_3491c4:
    // 0x3491c4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3491c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491c8: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x3491c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x3491cc: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x3491CCu;
    {
        const bool branch_taken_0x3491cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3491cc) {
            ctx->pc = 0x349700u;
            goto label_349700;
        }
    }
    ctx->pc = 0x3491D4u;
label_3491d4:
    // 0x3491d4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3491d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491d8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3491D8u;
    SET_GPR_U32(ctx, 31, 0x3491E0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3491D8u, 0x3491E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491E0u;
label_3491e0:
    // 0x3491e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3491e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3491e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3491e8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x3491e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3491ec: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3491ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491f0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x3491f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3491f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3491f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3491f8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x3491f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x3491fc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3491fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349200: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349204: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x349204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349208: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x349208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34920c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34920cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349210: 0x0  nop
    ctx->pc = 0x349210u;
    // NOP
    // 0x349214: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x349214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x349218: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34921c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349220: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349224: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x349224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34922c: 0x0  nop
    ctx->pc = 0x34922cu;
    // NOP
    // 0x349230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349234: 0x0  nop
    ctx->pc = 0x349234u;
    // NOP
    // 0x349238: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x349238u;
    {
        const bool branch_taken_0x349238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349238) {
            ctx->pc = 0x3492C0u;
            goto label_3492c0;
        }
    }
    ctx->pc = 0x349240u;
    // 0x349240: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349244: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349248: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x349248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x34924c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x34924cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x349250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x349250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349254: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x349254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349258: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34925c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34925cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x349260: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349264: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x349264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x349268: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x349268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x34926c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34926cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349270: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x349270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349274: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x349278: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x349278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x34927c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349280: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x349280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x349284: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x349284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x349288: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x349288u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x34928c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34928Cu;
    {
        const bool branch_taken_0x34928c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34928c) {
            ctx->pc = 0x3492C0u;
            goto label_3492c0;
        }
    }
    ctx->pc = 0x349294u;
    // 0x349294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349298: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34929c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x34929cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x3492a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3492a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492a4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3492a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492a8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3492a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3492ac: 0x24063c05  addiu       $a2, $zero, 0x3C05
    ctx->pc = 0x3492acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15365));
    // 0x3492b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3492b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3492b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3492b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3492b8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3492B8u;
    SET_GPR_U32(ctx, 31, 0x3492C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3492B8u, 0x3492C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492C0u;
label_3492c0:
    // 0x3492c0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3492c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3492c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3492c8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3492C8u;
    SET_GPR_U32(ctx, 31, 0x3492D0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3492C8u, 0x3492D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492D0u;
label_3492d0:
    // 0x3492d0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3492d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492d4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3492D4u;
    SET_GPR_U32(ctx, 31, 0x3492DCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3492D4u, 0x3492DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492DCu;
label_3492dc:
    // 0x3492dc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3492dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3492e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3492e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3492e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3492e8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3492E8u;
    {
        const bool branch_taken_0x3492e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3492e8) {
            ctx->pc = 0x349354u;
            goto label_349354;
        }
    }
    ctx->pc = 0x3492F0u;
    // 0x3492f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3492f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3492f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3492f8: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x3492f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3492fc: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3492fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x349300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349304: 0x0  nop
    ctx->pc = 0x349304u;
    // NOP
    // 0x349308: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x349308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34930c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349310: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x349310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349314: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x349314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349318: 0x0  nop
    ctx->pc = 0x349318u;
    // NOP
    // 0x34931c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x34931Cu;
    {
        const bool branch_taken_0x34931c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34931c) {
            ctx->pc = 0x349354u;
            goto label_349354;
        }
    }
    ctx->pc = 0x349324u;
    // 0x349324: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x349324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349328: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34932c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34932cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x349330: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x349330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x349334: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349338: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x349338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34933c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349340: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x349340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x349344: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349348: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x349348u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34934c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349350: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x349350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_349354:
    // 0x349354: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349358: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34935c: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x34935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349360: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349364: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x349364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34936c: 0x0  nop
    ctx->pc = 0x34936cu;
    // NOP
    // 0x349370: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
    ctx->pc = 0x349370u;
    {
        const bool branch_taken_0x349370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349370) {
            ctx->pc = 0x3494A8u;
            goto label_3494a8;
        }
    }
    ctx->pc = 0x349378u;
    // 0x349378: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x349378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34937c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349380: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x349380u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x349384: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349388: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x349388u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x34938c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x34938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x349390: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x349390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x349394: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x349394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x349398: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34939c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3493a0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x3493a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3493a4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3493a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3493a8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x3493a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x3493ac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x3493ACu;
    SET_GPR_U32(ctx, 31, 0x3493B4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x3493ACu, 0x3493B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3493B4u;
label_3493b4:
    // 0x3493b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3493B4u;
    {
        const bool branch_taken_0x3493b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3493b4) {
            ctx->pc = 0x3493E4u;
            goto label_3493e4;
        }
    }
    ctx->pc = 0x3493BCu;
    // 0x3493bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3493bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3493c0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3493c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3493c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3493c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3493c8: 0x24060406  addiu       $a2, $zero, 0x406
    ctx->pc = 0x3493c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    // 0x3493cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3493ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3493d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3493d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3493d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3493D4u;
    SET_GPR_U32(ctx, 31, 0x3493DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3493D4u, 0x3493DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3493DCu;
label_3493dc:
    // 0x3493dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3493DCu;
    {
        const bool branch_taken_0x3493dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3493dc) {
            ctx->pc = 0x349410u;
            goto label_349410;
        }
    }
    ctx->pc = 0x3493E4u;
label_3493e4:
    // 0x3493e4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3493e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3493e8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3493e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3493ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3493ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3493f0: 0x24060806  addiu       $a2, $zero, 0x806
    ctx->pc = 0x3493f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x3493f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3493f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3493f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3493f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3493fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3493FCu;
    SET_GPR_U32(ctx, 31, 0x349404u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3493FCu, 0x349404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349404u;
label_349404:
    // 0x349404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349408: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34940c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x34940cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_349410:
    // 0x349410: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349414: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x349414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349418: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x349418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34941c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34941cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x349420: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x349420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x349424: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x349424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x349428: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34942c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349430: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x349430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x349434: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x349434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x349438: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x349438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34943c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34943cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x349440: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349444: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x349444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x349448: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x349448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34944c: 0xc067844  jal         func_19E110
    ctx->pc = 0x34944Cu;
    SET_GPR_U32(ctx, 31, 0x349454u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x34944Cu, 0x349454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349454u;
label_349454:
    // 0x349454: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349458: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x349458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34945c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x34945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x349460: 0xc040c9e  jal         func_103278
    ctx->pc = 0x349460u;
    SET_GPR_U32(ctx, 31, 0x349468u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x349468u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x349468u) { return; }
    ctx->pc = 0x349468u;
label_349468:
    // 0x349468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34946c: 0x0  nop
    ctx->pc = 0x34946cu;
    // NOP
    // 0x349470: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x349470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x349474: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x349474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x349478: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x349478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34947c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x34947cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x349480: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x349480u;
    SET_GPR_U32(ctx, 31, 0x349488u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x349488u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x349488u) { return; }
    ctx->pc = 0x349488u;
label_349488:
    // 0x349488: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x349488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34948c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34948cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349490: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349494: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x349498: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x349498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34949c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3494a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3494a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3494a4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3494a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_3494a8:
    // 0x3494a8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3494a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3494ac: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x3494acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3494b0: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x3494b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x3494b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3494b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3494b8: 0x0  nop
    ctx->pc = 0x3494b8u;
    // NOP
    // 0x3494bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3494bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3494c0: 0x0  nop
    ctx->pc = 0x3494c0u;
    // NOP
    // 0x3494c4: 0x4500008e  bc1f        . + 4 + (0x8E << 2)
    ctx->pc = 0x3494C4u;
    {
        const bool branch_taken_0x3494c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3494c4) {
            ctx->pc = 0x349700u;
            goto label_349700;
        }
    }
    ctx->pc = 0x3494CCu;
    // 0x3494cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3494ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3494d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3494d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3494d4: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x3494d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3494d8: 0x14600089  bnez        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x3494D8u;
    {
        const bool branch_taken_0x3494d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3494d8) {
            ctx->pc = 0x349700u;
            goto label_349700;
        }
    }
    ctx->pc = 0x3494E0u;
    // 0x3494e0: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x3494e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3494e4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3494e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x3494e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3494e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3494ec: 0x0  nop
    ctx->pc = 0x3494ecu;
    // NOP
    // 0x3494f0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3494f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3494f4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3494f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3494f8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x3494f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3494fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3494fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349500: 0x0  nop
    ctx->pc = 0x349500u;
    // NOP
    // 0x349504: 0x4500007e  bc1f        . + 4 + (0x7E << 2)
    ctx->pc = 0x349504u;
    {
        const bool branch_taken_0x349504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349504) {
            ctx->pc = 0x349700u;
            goto label_349700;
        }
    }
    ctx->pc = 0x34950Cu;
    // 0x34950c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349510: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349514: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x349514u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x349518: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x349518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x34951c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349520: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x349520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x349524: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349528: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x349528u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34952c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349530: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x349530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x349534: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349538: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x349538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34953c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x34953Cu;
    {
        const bool branch_taken_0x34953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34953c) {
            ctx->pc = 0x349700u;
            goto label_349700;
        }
    }
    ctx->pc = 0x349544u;
label_349544:
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
            goto label_349674;
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
            goto label_349674;
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
label_349674:
    // 0x349674: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x349674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349678: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x349678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x34967c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34967cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x349680: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x349680u;
    SET_GPR_U32(ctx, 31, 0x349688u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x349680u, 0x349688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349688u;
label_349688:
    // 0x349688: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x349688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34968c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34968Cu;
    SET_GPR_U32(ctx, 31, 0x349694u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34968Cu, 0x349694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349694u;
label_349694:
    // 0x349694: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349698: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x349698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34969c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x34969Cu;
    {
        const bool branch_taken_0x34969c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34969c) {
            ctx->pc = 0x349700u;
            goto label_349700;
        }
    }
    ctx->pc = 0x3496A4u;
    // 0x3496a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3496a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3496ac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3496b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3496b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3496b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3496b8: 0x8fb10098  lw          $s1, 0x98($sp)
    ctx->pc = 0x3496b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496bc: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x3496bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3496c0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3496c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496c4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3496c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3496c8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3496ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3496d0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3496d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3496d8: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x3496d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3496dc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3496e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3496e4: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x3496e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x3496e8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3496e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3496ec: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3496ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3496f0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3496f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3496f4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3496f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3496f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3496f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3496fc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3496fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_349700:
    // 0x349700: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x349700u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34970c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x34970cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x349710: 0x3e00008  jr          $ra
    ctx->pc = 0x349710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349718u;
}
