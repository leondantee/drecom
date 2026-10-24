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

// Function: entry_002a4f38
// Address: 0x2a4f38 - 0x2a51cc
void entry_002a4f38_0x2a4f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a4f38_0x2a4f38");
#endif

    switch (ctx->pc) {
        case 0x2a4f4cu: goto label_2a4f4c;
        case 0x2a4f70u: goto label_2a4f70;
        case 0x2a4f80u: goto label_2a4f80;
        case 0x2a4f8cu: goto label_2a4f8c;
        case 0x2a5018u: goto label_2a5018;
        case 0x2a5034u: goto label_2a5034;
        case 0x2a5040u: goto label_2a5040;
        case 0x2a5054u: goto label_2a5054;
        case 0x2a5114u: goto label_2a5114;
        case 0x2a514cu: goto label_2a514c;
        case 0x2a5188u: goto label_2a5188;
        case 0x2a51c4u: goto label_2a51c4;
        default: break;
    }

    ctx->pc = 0x2a4f38u;

    // 0x2a4f38: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a4f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f3c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a4f3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a4f40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a4f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a4f44: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A4F44u;
    SET_GPR_U32(ctx, 31, 0x2A4F4Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A4F44u, 0x2A4F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F4Cu;
label_2a4f4c:
    // 0x2a4f4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4f4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4f50: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f54: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f58: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f5c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a4f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a4f60: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a4f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a4f64: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a4f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a4f68: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A4F68u;
    SET_GPR_U32(ctx, 31, 0x2A4F70u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A4F68u, 0x2A4F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F70u;
label_2a4f70:
    // 0x2a4f70: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4f74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4f78: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A4F78u;
    SET_GPR_U32(ctx, 31, 0x2A4F80u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A4F78u, 0x2A4F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F80u;
label_2a4f80:
    // 0x2a4f80: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f84: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A4F84u;
    SET_GPR_U32(ctx, 31, 0x2A4F8Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A4F84u, 0x2A4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F8Cu;
label_2a4f8c:
    // 0x2a4f8c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f90: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2a4f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a4f94: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2a4f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4f98: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f9c: 0xc4a00184  lwc1        $f0, 0x184($a1)
    ctx->pc = 0x2a4f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4fa0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a4fa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a4fa4: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x2a4fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x2a4fa8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4fac: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2a4facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a4fb0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2a4fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4fb4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2a4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2a4fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a4fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4fbc: 0x0  nop
    ctx->pc = 0x2a4fbcu;
    // NOP
    // 0x2a4fc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a4fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a4fc4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2a4fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2a4fc8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4fcc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a4fd0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2a4fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4fd4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4fd8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a4fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4fdc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a4fdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4fe0: 0x0  nop
    ctx->pc = 0x2a4fe0u;
    // NOP
    // 0x2a4fe4: 0x45000148  bc1f        . + 4 + (0x148 << 2)
    ctx->pc = 0x2A4FE4u;
    {
        const bool branch_taken_0x2a4fe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4fe4) {
            ctx->pc = 0x2A5508u;
            return;
        }
    }
    ctx->pc = 0x2A4FECu;
    // 0x2a4fec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4ff0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ff4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a4ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a4ff8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ffc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5000: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a5000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a5004: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2a5004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a5008: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a500c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a500cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a5010: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A5010u;
    SET_GPR_U32(ctx, 31, 0x2A5018u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A5010u, 0x2A5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5018u;
label_2a5018:
    // 0x2a5018: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a5018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a501c: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2a501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2a5020: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x2A5020u;
    {
        const bool branch_taken_0x2a5020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5020) {
            ctx->pc = 0x2A51CCu;
            return;
        }
    }
    ctx->pc = 0x2A5028u;
    // 0x2a5028: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a5028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a502c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A502Cu;
    SET_GPR_U32(ctx, 31, 0x2A5034u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A502Cu, 0x2A5034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5034u;
label_2a5034:
    // 0x2a5034: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a5034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5038: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A5038u;
    SET_GPR_U32(ctx, 31, 0x2A5040u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5038u, 0x2A5040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5040u;
label_2a5040:
    // 0x2a5040: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5044: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5048: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5048u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a504c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A504Cu;
    SET_GPR_U32(ctx, 31, 0x2A5054u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A504Cu, 0x2A5054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5054u;
label_2a5054:
    // 0x2a5054: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a5054u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5058: 0x3c074200  lui         $a3, 0x4200
    ctx->pc = 0x2a5058u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16896 << 16));
    // 0x2a505c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a505cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5060: 0x0  nop
    ctx->pc = 0x2a5060u;
    // NOP
    // 0x2a5064: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2a5064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2a5068: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a5068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a506c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a506cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5070: 0x0  nop
    ctx->pc = 0x2a5070u;
    // NOP
    // 0x2a5074: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2a5074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2a5078: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a5078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a507c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a507cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5080: 0x0  nop
    ctx->pc = 0x2a5080u;
    // NOP
    // 0x2a5084: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2a5084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2a5088: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a5088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a508c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a508cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5090: 0x0  nop
    ctx->pc = 0x2a5090u;
    // NOP
    // 0x2a5094: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2a5094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2a5098: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a5098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a509c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a509cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a50a0: 0x0  nop
    ctx->pc = 0x2a50a0u;
    // NOP
    // 0x2a50a4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a50a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a50a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a50ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a50acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a50b0: 0x0  nop
    ctx->pc = 0x2a50b0u;
    // NOP
    // 0x2a50b4: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a50b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2a50b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a50b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a50bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a50bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a50c0: 0x0  nop
    ctx->pc = 0x2a50c0u;
    // NOP
    // 0x2a50c4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a50c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2a50c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a50cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a50ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a50d0: 0x0  nop
    ctx->pc = 0x2a50d0u;
    // NOP
    // 0x2a50d4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2a50d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2a50d8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a50dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a50dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a50e0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a50e4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a50e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a50e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a50e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a50ec: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a50ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a50f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a50f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a50f4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a50f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a50f8: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a50f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a50fc: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a50fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5100: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a5100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a5104: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2a5104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a5108: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a5108u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a510c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A510Cu;
    SET_GPR_U32(ctx, 31, 0x2A5114u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A510Cu, 0x2A5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5114u;
label_2a5114:
    // 0x2a5114: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a5114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5118: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a5118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a511c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a511cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5120: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a5124: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a5124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5128: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a5128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a512c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a512cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5130: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a5130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a5134: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a5134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5138: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a5138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a513c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a513cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a5140: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a5140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a5144: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A5144u;
    SET_GPR_U32(ctx, 31, 0x2A514Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5144u, 0x2A514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A514Cu;
label_2a514c:
    // 0x2a514c: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x2a514cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5150: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2a5150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2a5154: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a5154u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5158: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a515c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a515cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5160: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a5160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5164: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a5164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a5168: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a5168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a516c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a516cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5170: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a5170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5174: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a5174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a5178: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2a5178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a517c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a517cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5180: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A5180u;
    SET_GPR_U32(ctx, 31, 0x2A5188u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5180u, 0x2A5188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5188u;
label_2a5188:
    // 0x2a5188: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5188u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a518c: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a518cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5190: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a5190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a5194: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a5194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5198: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a519c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a519cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a51a0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a51a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a51a4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a51a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a51a8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a51a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a51ac: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a51acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a51b0: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a51b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a51b4: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a51b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a51b8: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a51b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a51bc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A51BCu;
    SET_GPR_U32(ctx, 31, 0x2A51C4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A51BCu, 0x2A51C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A51C4u;
label_2a51c4:
    // 0x2a51c4: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x2A51C4u;
    {
        const bool branch_taken_0x2a51c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a51c4) {
            ctx->pc = 0x2A5508u;
            return;
        }
    }
    ctx->pc = 0x2A51CCu;
}
