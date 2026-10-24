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

// Function: Set_light_matrix_p
// Address: 0x171030 - 0x171f7c
void Set_light_matrix_p_0x171030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_light_matrix_p_0x171030");
#endif

    switch (ctx->pc) {
        case 0x1710c0u: goto label_1710c0;
        case 0x1710ccu: goto label_1710cc;
        case 0x1711b4u: goto label_1711b4;
        case 0x1711d4u: goto label_1711d4;
        case 0x171230u: goto label_171230;
        case 0x171368u: goto label_171368;
        case 0x171590u: goto label_171590;
        case 0x171660u: goto label_171660;
        case 0x1716fcu: goto label_1716fc;
        case 0x1717a0u: goto label_1717a0;
        case 0x1717b8u: goto label_1717b8;
        case 0x171828u: goto label_171828;
        case 0x17196cu: goto label_17196c;
        case 0x171b88u: goto label_171b88;
        case 0x171bb0u: goto label_171bb0;
        case 0x171bd8u: goto label_171bd8;
        case 0x171c94u: goto label_171c94;
        case 0x171ca8u: goto label_171ca8;
        case 0x171cbcu: goto label_171cbc;
        case 0x171d04u: goto label_171d04;
        case 0x171d24u: goto label_171d24;
        case 0x171dd4u: goto label_171dd4;
        case 0x171eccu: goto label_171ecc;
        case 0x171ef0u: goto label_171ef0;
        case 0x171f0cu: goto label_171f0c;
        default: break;
    }

    ctx->pc = 0x171030u;

    // 0x171030: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x171030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x171034: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x171034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x171038: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x171038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17103c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17103cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x171040: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x171040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x171044: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x171044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x171048: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x171048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17104c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17104cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x171050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x171054: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17105c: 0xafa40188  sw          $a0, 0x188($sp)
    ctx->pc = 0x17105cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 4));
    // 0x171060: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x171060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171064: 0x8c50005c  lw          $s0, 0x5C($v0)
    ctx->pc = 0x171064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x171068: 0xafb00158  sw          $s0, 0x158($sp)
    ctx->pc = 0x171068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 16));
    // 0x17106c: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x17106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x171070: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x171070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x171074: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x171074u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x171078: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x171078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x17107c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x17107cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171080: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x171080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x171084: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x171084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x171088: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x171088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x17108c: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x17108cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x171090: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171098: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x171098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17109c: 0xe480012c  swc1        $f0, 0x12C($a0)
    ctx->pc = 0x17109cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 300), bits); }
    // 0x1710a0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1710a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1710a4: 0x8c460130  lw          $a2, 0x130($v0)
    ctx->pc = 0x1710a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1710a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1710a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1710ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1710acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1710b0: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1710b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1710b4: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x1710b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x1710b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1710B8u;
    SET_GPR_U32(ctx, 31, 0x1710C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1710C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1710C0u) { return; }
    ctx->pc = 0x1710C0u;
label_1710c0:
    // 0x1710c0: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1710c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1710c4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1710C4u;
    SET_GPR_U32(ctx, 31, 0x1710CCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1710C4u, 0x1710CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710CCu;
label_1710cc:
    // 0x1710cc: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x1710ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1710d0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1710d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x1710d4: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1710d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1710d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1710d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1710dc: 0x0  nop
    ctx->pc = 0x1710dcu;
    // NOP
    // 0x1710e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1710e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1710e4: 0x0  nop
    ctx->pc = 0x1710e4u;
    // NOP
    // 0x1710e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1710E8u;
    {
        const bool branch_taken_0x1710e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1710e8) {
            ctx->pc = 0x171104u;
            goto label_171104;
        }
    }
    ctx->pc = 0x1710F0u;
    // 0x1710f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1710f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1710f4: 0x0  nop
    ctx->pc = 0x1710f4u;
    // NOP
    // 0x1710f8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1710f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1710fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1710FCu;
    {
        const bool branch_taken_0x1710fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1710fc) {
            ctx->pc = 0x17110Cu;
            goto label_17110c;
        }
    }
    ctx->pc = 0x171104u;
label_171104:
    // 0x171104: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x171104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171108: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x171108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_17110c:
    // 0x17110c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x17110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171110: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x171110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x171114: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171118: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17111c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x17111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171120: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x171120u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x171124: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x171124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x171128: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17112c: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x17112cu;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171130: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x171130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x171134: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x171134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171138: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17113c: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x17113cu;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171140: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x171140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171144: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x171144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171148: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x171148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17114c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x17114cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x171150: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x171150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171158: 0x0  nop
    ctx->pc = 0x171158u;
    // NOP
    // 0x17115c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17115cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171160: 0x0  nop
    ctx->pc = 0x171160u;
    // NOP
    // 0x171164: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x171164u;
    {
        const bool branch_taken_0x171164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171164) {
            ctx->pc = 0x171178u;
            goto label_171178;
        }
    }
    ctx->pc = 0x17116Cu;
    // 0x17116c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17116cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171170: 0x0  nop
    ctx->pc = 0x171170u;
    // NOP
    // 0x171174: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x171174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_171178:
    // 0x171178: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x171178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17117c: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x17117cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
    // 0x171180: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x171180u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171184: 0x0  nop
    ctx->pc = 0x171184u;
    // NOP
    // 0x171188: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x171188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17118c: 0x0  nop
    ctx->pc = 0x17118cu;
    // NOP
    // 0x171190: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x171190u;
    {
        const bool branch_taken_0x171190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171190) {
            ctx->pc = 0x1711A8u;
            goto label_1711a8;
        }
    }
    ctx->pc = 0x171198u;
    // 0x171198: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x171198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x17119c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17119cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1711a0: 0x0  nop
    ctx->pc = 0x1711a0u;
    // NOP
    // 0x1711a4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1711a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1711a8:
    // 0x1711a8: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x1711a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1711ac: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1711ACu;
    SET_GPR_U32(ctx, 31, 0x1711B4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1711ACu, 0x1711B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1711B4u;
label_1711b4:
    // 0x1711b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1711b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1711b8: 0xa7a3017e  sh          $v1, 0x17E($sp)
    ctx->pc = 0x1711b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 3));
    // 0x1711bc: 0x97a3017e  lhu         $v1, 0x17E($sp)
    ctx->pc = 0x1711bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1711c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1711c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1711c4: 0xa7a3017e  sh          $v1, 0x17E($sp)
    ctx->pc = 0x1711c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 3));
    // 0x1711c8: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x1711c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1711cc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1711ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1711d0: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x1711d0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1711d4:
    // 0x1711d4: 0x97a3017e  lhu         $v1, 0x17E($sp)
    ctx->pc = 0x1711d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1711d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1711d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1711dc: 0xaec3006c  sw          $v1, 0x6C($s6)
    ctx->pc = 0x1711dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 3));
    // 0x1711e0: 0x26c20090  addiu       $v0, $s6, 0x90
    ctx->pc = 0x1711e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x1711e4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1711e4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1711e8: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x1711e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x1711ec: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x1711ecu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1711f0: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1711f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1711f4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1711f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1711f8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1711F8u;
    {
        const bool branch_taken_0x1711f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1711f8) {
            ctx->pc = 0x1711D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1711d4;
        }
    }
    ctx->pc = 0x171200u;
    // 0x171200: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x171200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x171204: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x171204u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x171208: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x171208u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x17120c: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x17120cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x171210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171214: 0x0  nop
    ctx->pc = 0x171214u;
    // NOP
    // 0x171218: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x171218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x17121c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x17121cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x171220: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x171220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x171224: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x171224u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x171228: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x171228u;
    {
        const bool branch_taken_0x171228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171228) {
            ctx->pc = 0x171428u;
            goto label_171428;
        }
    }
    ctx->pc = 0x171230u;
label_171230:
    // 0x171230: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x171230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171234: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171238: 0x9422cc88  lhu         $v0, -0x3378($at)
    ctx->pc = 0x171238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x17123c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17123cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x171240: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x171240u;
    {
        const bool branch_taken_0x171240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x171240) {
            ctx->pc = 0x171270u;
            goto label_171270;
        }
    }
    ctx->pc = 0x171248u;
    // 0x171248: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17124c: 0x9437cc8a  lhu         $s7, -0x3376($at)
    ctx->pc = 0x17124cu;
    SET_GPR_ZE32(ctx, 23, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x171250: 0x32f0ffff  andi        $s0, $s7, 0xFFFF
    ctx->pc = 0x171250u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x171254: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x171254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171258: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17125c: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x17125cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x171260: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x171260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x171264: 0x10830078  beq         $a0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x171264u;
    {
        const bool branch_taken_0x171264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x171264) {
            ctx->pc = 0x171448u;
            goto label_171448;
        }
    }
    ctx->pc = 0x17126Cu;
    // 0x17126c: 0x0  nop
    ctx->pc = 0x17126cu;
    // NOP
label_171270:
    // 0x171270: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x171270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171274: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x171274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x171278: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x171278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17127c: 0x308300a0  andi        $v1, $a0, 0xA0
    ctx->pc = 0x17127cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)160);
    // 0x171280: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x171280u;
    {
        const bool branch_taken_0x171280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171280) {
            ctx->pc = 0x1712B8u;
            goto label_1712b8;
        }
    }
    ctx->pc = 0x171288u;
    // 0x171288: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x171288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17128c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x17128cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171290: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x171290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x171294: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x171294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171298: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17129c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x17129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1712a0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1712a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1712a4: 0x8ca3007c  lw          $v1, 0x7C($a1)
    ctx->pc = 0x1712a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x1712a8: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1712a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1712ac: 0x1480005a  bnez        $a0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1712ACu;
    {
        const bool branch_taken_0x1712ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1712ac) {
            ctx->pc = 0x171418u;
            goto label_171418;
        }
    }
    ctx->pc = 0x1712B4u;
    // 0x1712b4: 0x0  nop
    ctx->pc = 0x1712b4u;
    // NOP
label_1712b8:
    // 0x1712b8: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1712b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1712bc: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1712bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1712c0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1712c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1712c4: 0x30a300a0  andi        $v1, $a1, 0xA0
    ctx->pc = 0x1712c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)160);
    // 0x1712c8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1712C8u;
    {
        const bool branch_taken_0x1712c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1712c8) {
            ctx->pc = 0x171300u;
            goto label_171300;
        }
    }
    ctx->pc = 0x1712D0u;
    // 0x1712d0: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1712d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1712d4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1712d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1712d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1712d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1712dc: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1712dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1712e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1712e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1712e4: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x1712e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1712e8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1712e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1712ec: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x1712ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1712f0: 0x30650002  andi        $a1, $v1, 0x2
    ctx->pc = 0x1712f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1712f4: 0x14a00048  bnez        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1712F4u;
    {
        const bool branch_taken_0x1712f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1712f4) {
            ctx->pc = 0x171418u;
            goto label_171418;
        }
    }
    ctx->pc = 0x1712FCu;
    // 0x1712fc: 0x0  nop
    ctx->pc = 0x1712fcu;
    // NOP
label_171300:
    // 0x171300: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x171300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171304: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x171304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x171308: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17130c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x17130cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171310: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171314: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x171314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171318: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x171318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17131c: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x17131cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x171320: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x171320u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171324: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x171324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x171328: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x171328u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x17132c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17132cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171330: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x171330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171334: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x171334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171338: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x171338u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17133c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x17133cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x171340: 0x24c2bd00  addiu       $v0, $a2, -0x4300
    ctx->pc = 0x171340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x171344: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x171344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x171348: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x171348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17134c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x17134cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x171350: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x171350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171354: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x171354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x171358: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x171358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17135c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x17135cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x171360: 0xc05da44  jal         func_176910
    ctx->pc = 0x171360u;
    SET_GPR_U32(ctx, 31, 0x171368u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x171360u, 0x171368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171368u;
label_171368:
    // 0x171368: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x171368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x17136c: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x17136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171370: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171374: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171378: 0x0  nop
    ctx->pc = 0x171378u;
    // NOP
    // 0x17137c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17137Cu;
    {
        const bool branch_taken_0x17137c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17137c) {
            ctx->pc = 0x171398u;
            goto label_171398;
        }
    }
    ctx->pc = 0x171384u;
    // 0x171384: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171388: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x171388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x17138c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17138cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171390: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x171390u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x171394: 0x0  nop
    ctx->pc = 0x171394u;
    // NOP
label_171398:
    // 0x171398: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x171398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17139c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x17139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1713a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1713a4: 0x0  nop
    ctx->pc = 0x1713a4u;
    // NOP
    // 0x1713a8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1713A8u;
    {
        const bool branch_taken_0x1713a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1713a8) {
            ctx->pc = 0x1713D8u;
            goto label_1713d8;
        }
    }
    ctx->pc = 0x1713B0u;
    // 0x1713b0: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1713b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713b4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1713b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1713b8: 0x72809e28  paddub      $s3, $s4, $zero
    ctx->pc = 0x1713b8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1713bc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1713bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713c0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1713c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1713c4: 0x7220a628  paddub      $s4, $s1, $zero
    ctx->pc = 0x1713c4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1713c8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1713c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713cc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1713ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1713d0: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1713d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1713d4: 0x0  nop
    ctx->pc = 0x1713d4u;
    // NOP
label_1713d8:
    // 0x1713d8: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x1713d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1713dc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1713dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1713e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1713e4: 0x0  nop
    ctx->pc = 0x1713e4u;
    // NOP
    // 0x1713e8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1713E8u;
    {
        const bool branch_taken_0x1713e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1713e8) {
            ctx->pc = 0x171418u;
            goto label_171418;
        }
    }
    ctx->pc = 0x1713F0u;
    // 0x1713f0: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1713f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713f4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1713f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1713f8: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x1713f8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1713fc: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1713fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171400: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x171400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x171404: 0x72408e28  paddub      $s1, $s2, $zero
    ctx->pc = 0x171404u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x171408: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17140c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x17140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x171410: 0x72609628  paddub      $s2, $s3, $zero
    ctx->pc = 0x171410u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x171414: 0x0  nop
    ctx->pc = 0x171414u;
    // NOP
label_171418:
    // 0x171418: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x171418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17141c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x17141cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x171420: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x171420u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x171424: 0x0  nop
    ctx->pc = 0x171424u;
    // NOP
label_171428:
    // 0x171428: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x171428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17142c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17142cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171430: 0x9424cc8e  lhu         $a0, -0x3372($at)
    ctx->pc = 0x171430u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x171434: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x171434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x171438: 0xa3202a  slt         $a0, $a1, $v1
    ctx->pc = 0x171438u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17143c: 0x1480ff7c  bnez        $a0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x17143Cu;
    {
        const bool branch_taken_0x17143c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17143c) {
            ctx->pc = 0x171230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171230;
        }
    }
    ctx->pc = 0x171444u;
    // 0x171444: 0x0  nop
    ctx->pc = 0x171444u;
    // NOP
label_171448:
    // 0x171448: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x171448u;
    {
        const bool branch_taken_0x171448 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x171448) {
            ctx->pc = 0x171460u;
            goto label_171460;
        }
    }
    ctx->pc = 0x171450u;
    // 0x171450: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x171450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x171454: 0xafa50164  sw          $a1, 0x164($sp)
    ctx->pc = 0x171454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 5));
    // 0x171458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171458u;
    {
        const bool branch_taken_0x171458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171458) {
            ctx->pc = 0x171464u;
            goto label_171464;
        }
    }
    ctx->pc = 0x171460u;
label_171460:
    // 0x171460: 0xafb40164  sw          $s4, 0x164($sp)
    ctx->pc = 0x171460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 20));
label_171464:
    // 0x171464: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x171464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x171468: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x171468u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17146c: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17146Cu;
    {
        const bool branch_taken_0x17146c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x17146c) {
            ctx->pc = 0x171484u;
            goto label_171484;
        }
    }
    ctx->pc = 0x171474u;
    // 0x171474: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x171474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x171478: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x171478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x17147c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17147Cu;
    {
        const bool branch_taken_0x17147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17147c) {
            ctx->pc = 0x171488u;
            goto label_171488;
        }
    }
    ctx->pc = 0x171484u;
label_171484:
    // 0x171484: 0xafb10168  sw          $s1, 0x168($sp)
    ctx->pc = 0x171484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 17));
label_171488:
    // 0x171488: 0x8fb00168  lw          $s0, 0x168($sp)
    ctx->pc = 0x171488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x17148c: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x17148cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x171490: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x171490u;
    {
        const bool branch_taken_0x171490 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x171490) {
            ctx->pc = 0x1714A8u;
            goto label_1714a8;
        }
    }
    ctx->pc = 0x171498u;
    // 0x171498: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x171498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x17149c: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x17149cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x1714a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1714A0u;
    {
        const bool branch_taken_0x1714a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1714a0) {
            ctx->pc = 0x1714ACu;
            goto label_1714ac;
        }
    }
    ctx->pc = 0x1714A8u;
label_1714a8:
    // 0x1714a8: 0xafb2016c  sw          $s2, 0x16C($sp)
    ctx->pc = 0x1714a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 18));
label_1714ac:
    // 0x1714ac: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x1714acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x1714b0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1714b0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1714b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1714b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1714b8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1714b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1714bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1714bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1714c0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1714c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1714c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1714c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1714c8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1714c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1714cc: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1714ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1714d0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1714d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1714d4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1714d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1714d8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1714d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1714dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1714dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1714e0: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1714e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1714e4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1714e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1714e8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1714e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1714ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1714ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1714f0: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1714f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1714f4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1714f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1714f8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1714f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1714fc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1714fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x171500: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x171500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171504: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x171504u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171508: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17150c: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x17150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171510: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x171510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171514: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x171514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171518: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x171518u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17151c: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x17151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x171520: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x171520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x171524: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x171524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x171528: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x171528u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x17152c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x17152cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x171530: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x171530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x171534: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x171534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x171538: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17153c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x17153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171544: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x171544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171548: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x171548u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17154c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x17154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x171550: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x171550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171554: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x171554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x171558: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x171558u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x17155c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17155cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171560: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x171560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
    // 0x171564: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x171564u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47C930u));
    // 0x171568: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x171568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x17156c: 0x24430070  addiu       $v1, $v0, 0x70
    ctx->pc = 0x17156cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171570: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x171570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x171574: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x171574u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x171578: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x171578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x17157c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x17157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x171580: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x171580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x171584: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x171584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171588: 0xc05da30  jal         func_1768C0
    ctx->pc = 0x171588u;
    SET_GPR_U32(ctx, 31, 0x171590u);
    ctx->pc = 0x1768C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768C0u, 0x171588u, 0x171590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171590u;
label_171590:
    // 0x171590: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x171590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x171594: 0x942821  addu        $a1, $a0, $s4
    ctx->pc = 0x171594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x171598: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x171598u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17159c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1715a0: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1715a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1715a4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1715a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1715a8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1715a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1715ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1715acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1715b0: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1715b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1715b4: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1715b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1715b8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1715b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1715bc: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x1715bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1715c0: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x1715c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1715c4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1715c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1715c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1715c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1715cc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1715ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1715d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1715d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1715d4: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1715d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1715d8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1715d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1715dc: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x1715dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1715e0: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x1715e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1715e4: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x1715e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1715e8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1715e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1715ec: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1715ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1715f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1715f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1715f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1715f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1715f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1715f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1715fc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1715fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171604: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x171604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x171608: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x171608u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17160c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x17160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x171610: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x171610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171614: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x171614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x171618: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171618u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17161c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17161cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171620: 0x2462bd50  addiu       $v0, $v1, -0x42B0
    ctx->pc = 0x171620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950224));
    // 0x171624: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x171624u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47BD50u));
    // 0x171628: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x171628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x17162c: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x17162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171630: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x171630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x171634: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x171634u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x171638: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x171638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17163c: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x17163cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x171640: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x171640u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x171644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171648: 0x0  nop
    ctx->pc = 0x171648u;
    // NOP
    // 0x17164c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x17164cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x171650: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x171650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x171654: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x171654u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x171658: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x171658u;
    {
        const bool branch_taken_0x171658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171658) {
            ctx->pc = 0x171730u;
            goto label_171730;
        }
    }
    ctx->pc = 0x171660u;
label_171660:
    // 0x171660: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x171660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171664: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x171664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171668: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x171668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17166c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17166cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x171670: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171674: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x171674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17167c: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x17167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171680: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x171680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171684: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x171684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x171688: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x171688u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x17168c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x17168cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171690: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x171690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x171694: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x171694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x171698: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x171698u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17169c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1716a0: 0x2444bd00  addiu       $a0, $v0, -0x4300
    ctx->pc = 0x1716a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1716a4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1716a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1716a8: 0xc4a0008c  lwc1        $f0, 0x8C($a1)
    ctx->pc = 0x1716a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716ac: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1716acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1716b0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1716b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1716b4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1716b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1716b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1716b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1716bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1716bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1716c0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1716c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1716c4: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x1716c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1716c8: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x1716c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1716cc: 0x8cc7007c  lw          $a3, 0x7C($a2)
    ctx->pc = 0x1716ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x1716d0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1716d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1716d4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1716D4u;
    {
        const bool branch_taken_0x1716d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1716d4) {
            ctx->pc = 0x171728u;
            goto label_171728;
        }
    }
    ctx->pc = 0x1716DCu;
    // 0x1716dc: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x1716dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1716e0: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1716e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1716e4: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x1716e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1716e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1716e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1716ec: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1716ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1716f0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1716f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1716f4: 0xc05da44  jal         func_176910
    ctx->pc = 0x1716F4u;
    SET_GPR_U32(ctx, 31, 0x1716FCu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1716F4u, 0x1716FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716FCu;
label_1716fc:
    // 0x1716fc: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1716fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x171700: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x171700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171704: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171708: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17170c: 0x0  nop
    ctx->pc = 0x17170cu;
    // NOP
    // 0x171710: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x171710u;
    {
        const bool branch_taken_0x171710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171710) {
            ctx->pc = 0x171728u;
            goto label_171728;
        }
    }
    ctx->pc = 0x171718u;
    // 0x171718: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17171c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x17171cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x171720: 0x3214ffff  andi        $s4, $s0, 0xFFFF
    ctx->pc = 0x171720u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171724: 0x0  nop
    ctx->pc = 0x171724u;
    // NOP
label_171728:
    // 0x171728: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x171728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17172c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x17172cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_171730:
    // 0x171730: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x171730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171734: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x171734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x171738: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x171738u;
    {
        const bool branch_taken_0x171738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171738) {
            ctx->pc = 0x171660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171660;
        }
    }
    ctx->pc = 0x171740u;
    // 0x171740: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x171740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x171744: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x171744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171748: 0xa0430013  sb          $v1, 0x13($v0)
    ctx->pc = 0x171748u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x17174c: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x17174cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171750: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x171750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171754: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x171754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171758: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x171758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x17175c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x17175cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x171760: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x171760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x171764: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x171764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171768: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x171768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x17176c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17176cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171770: 0x2445bd00  addiu       $a1, $v0, -0x4300
    ctx->pc = 0x171770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171774: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x171774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x171778: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x171778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x17177c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x17177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x171780: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x171780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x171784: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x171784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x171788: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x171788u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x17178c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x17178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x171790: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x171790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x171794: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x171794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x171798: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x171798u;
    SET_GPR_U32(ctx, 31, 0x1717A0u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x1717A0u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1717A0u) { return; }
    ctx->pc = 0x1717A0u;
label_1717a0:
    // 0x1717a0: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1717a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1717a4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1717a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1717a8: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x1717a8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1717ac: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1717acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1717b0: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1717b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1717b4: 0x7080f628  paddub      $fp, $a0, $zero
    ctx->pc = 0x1717b4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1717b8:
    // 0x1717b8: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x1717b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1717bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1717bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1717c0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1717c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1717c4: 0x106001aa  beqz        $v1, . + 4 + (0x1AA << 2)
    ctx->pc = 0x1717C4u;
    {
        const bool branch_taken_0x1717c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1717c4) {
            ctx->pc = 0x171E70u;
            goto label_171e70;
        }
    }
    ctx->pc = 0x1717CCu;
    // 0x1717cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1717ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1717d0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1717d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1717d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1717d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1717d8: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x1717d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1717dc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1717dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1717e0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1717e0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1717e4: 0x96c40002  lhu         $a0, 0x2($s6)
    ctx->pc = 0x1717e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1717e8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1717e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1717ec: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1717ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1717f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1717f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1717f4: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x1717f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1717f8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1717f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1717fc: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x1717fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x171800: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x171800u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x171804: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x171804u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x171808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17180c: 0x0  nop
    ctx->pc = 0x17180cu;
    // NOP
    // 0x171810: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x171810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x171814: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x171814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x171818: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x171818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x17181c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17181cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x171820: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x171820u;
    {
        const bool branch_taken_0x171820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171820) {
            ctx->pc = 0x171A20u;
            goto label_171a20;
        }
    }
    ctx->pc = 0x171828u;
label_171828:
    // 0x171828: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x171828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17182c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17182cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171830: 0x9423cc88  lhu         $v1, -0x3378($at)
    ctx->pc = 0x171830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x171834: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x171834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x171838: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x171838u;
    {
        const bool branch_taken_0x171838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x171838) {
            ctx->pc = 0x171868u;
            goto label_171868;
        }
    }
    ctx->pc = 0x171840u;
    // 0x171840: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171844: 0x9423cc8a  lhu         $v1, -0x3376($at)
    ctx->pc = 0x171844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x171848: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x171848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17184c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x17184cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x171850: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x171850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171854: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171858: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x171858u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x17185c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x17185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x171860: 0x10830077  beq         $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x171860u;
    {
        const bool branch_taken_0x171860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x171860) {
            ctx->pc = 0x171A40u;
            goto label_171a40;
        }
    }
    ctx->pc = 0x171868u;
label_171868:
    // 0x171868: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x171868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17186c: 0x90a30012  lbu         $v1, 0x12($a1)
    ctx->pc = 0x17186cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x171870: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x171870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x171874: 0x308300a0  andi        $v1, $a0, 0xA0
    ctx->pc = 0x171874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)160);
    // 0x171878: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x171878u;
    {
        const bool branch_taken_0x171878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171878) {
            ctx->pc = 0x1718B0u;
            goto label_1718b0;
        }
    }
    ctx->pc = 0x171880u;
    // 0x171880: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x171880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171884: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x171884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171888: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x171888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17188c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17188cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171890: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171894: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x171894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171898: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x171898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17189c: 0x8ca3007c  lw          $v1, 0x7C($a1)
    ctx->pc = 0x17189cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x1718a0: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1718a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1718a4: 0x1480005c  bnez        $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1718A4u;
    {
        const bool branch_taken_0x1718a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1718a4) {
            ctx->pc = 0x171A18u;
            goto label_171a18;
        }
    }
    ctx->pc = 0x1718ACu;
    // 0x1718ac: 0x0  nop
    ctx->pc = 0x1718acu;
    // NOP
label_1718b0:
    // 0x1718b0: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1718b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1718b4: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1718b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1718b8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1718b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1718bc: 0x30a300a0  andi        $v1, $a1, 0xA0
    ctx->pc = 0x1718bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)160);
    // 0x1718c0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1718C0u;
    {
        const bool branch_taken_0x1718c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1718c0) {
            ctx->pc = 0x1718F8u;
            goto label_1718f8;
        }
    }
    ctx->pc = 0x1718C8u;
    // 0x1718c8: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1718c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1718cc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1718ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1718d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1718d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1718d4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1718d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1718d8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1718d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1718dc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1718dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1718e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1718e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1718e4: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x1718e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1718e8: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x1718e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1718ec: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1718ECu;
    {
        const bool branch_taken_0x1718ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1718ec) {
            ctx->pc = 0x171A18u;
            goto label_171a18;
        }
    }
    ctx->pc = 0x1718F4u;
    // 0x1718f4: 0x0  nop
    ctx->pc = 0x1718f4u;
    // NOP
label_1718f8:
    // 0x1718f8: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1718f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1718fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1718fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x171900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171904: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x171904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171908: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17190c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x17190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171910: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x171910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171914: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x171914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171918: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x171918u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17191c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x17191cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x171920: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x171920u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x171924: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x171924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171928: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x171928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17192c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x17192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171930: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x171930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x171934: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x171934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x171938: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x171938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x17193c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x17193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x171940: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x171940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171944: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x171944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x171948: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x171948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17194c: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x17194cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x171950: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x171950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x171954: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x171954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x171958: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x171958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17195c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x17195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x171960: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x171960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x171964: 0xc05da44  jal         func_176910
    ctx->pc = 0x171964u;
    SET_GPR_U32(ctx, 31, 0x17196Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x171964u, 0x17196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17196Cu;
label_17196c:
    // 0x17196c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x17196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x171970: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x171970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171974: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171978: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17197c: 0x0  nop
    ctx->pc = 0x17197cu;
    // NOP
    // 0x171980: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x171980u;
    {
        const bool branch_taken_0x171980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171980) {
            ctx->pc = 0x171998u;
            goto label_171998;
        }
    }
    ctx->pc = 0x171988u;
    // 0x171988: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17198c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x17198cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x171990: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x171990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171994: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x171994u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_171998:
    // 0x171998: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x171998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17199c: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x17199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1719a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1719a4: 0x0  nop
    ctx->pc = 0x1719a4u;
    // NOP
    // 0x1719a8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1719A8u;
    {
        const bool branch_taken_0x1719a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1719a8) {
            ctx->pc = 0x1719D8u;
            goto label_1719d8;
        }
    }
    ctx->pc = 0x1719B0u;
    // 0x1719b0: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1719b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719b4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1719b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1719b8: 0x72409e28  paddub      $s3, $s2, $zero
    ctx->pc = 0x1719b8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1719bc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1719bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719c0: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1719c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1719c4: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x1719c4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1719c8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1719c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719cc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1719ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1719d0: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1719d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1719d4: 0x0  nop
    ctx->pc = 0x1719d4u;
    // NOP
label_1719d8:
    // 0x1719d8: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1719d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1719dc: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1719dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1719e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1719e4: 0x0  nop
    ctx->pc = 0x1719e4u;
    // NOP
    // 0x1719e8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1719E8u;
    {
        const bool branch_taken_0x1719e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1719e8) {
            ctx->pc = 0x171A18u;
            goto label_171a18;
        }
    }
    ctx->pc = 0x1719F0u;
    // 0x1719f0: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1719f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719f4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1719f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1719f8: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x1719f8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1719fc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1719fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a00: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x171a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x171a04: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x171a04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x171a08: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a0c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x171a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x171a10: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x171a10u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x171a14: 0x0  nop
    ctx->pc = 0x171a14u;
    // NOP
label_171a18:
    // 0x171a18: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x171a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x171a1c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x171a1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_171a20:
    // 0x171a20: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x171a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171a24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171a28: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x171a28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x171a2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x171a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x171a30: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x171a30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171a34: 0x1460ff7c  bnez        $v1, . + 4 + (-0x84 << 2)
    ctx->pc = 0x171A34u;
    {
        const bool branch_taken_0x171a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171a34) {
            ctx->pc = 0x171828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171828;
        }
    }
    ctx->pc = 0x171A3Cu;
    // 0x171a3c: 0x0  nop
    ctx->pc = 0x171a3cu;
    // NOP
label_171a40:
    // 0x171a40: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x171A40u;
    {
        const bool branch_taken_0x171a40 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x171a40) {
            ctx->pc = 0x171A58u;
            goto label_171a58;
        }
    }
    ctx->pc = 0x171A48u;
    // 0x171a48: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x171a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x171a4c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x171a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x171a50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171A50u;
    {
        const bool branch_taken_0x171a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171a50) {
            ctx->pc = 0x171A60u;
            goto label_171a60;
        }
    }
    ctx->pc = 0x171A58u;
label_171a58:
    // 0x171a58: 0xafb40170  sw          $s4, 0x170($sp)
    ctx->pc = 0x171a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 20));
    // 0x171a5c: 0x0  nop
    ctx->pc = 0x171a5cu;
    // NOP
label_171a60:
    // 0x171a60: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x171a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x171a64: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x171a64u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x171a68: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x171A68u;
    {
        const bool branch_taken_0x171a68 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x171a68) {
            ctx->pc = 0x171A80u;
            goto label_171a80;
        }
    }
    ctx->pc = 0x171A70u;
    // 0x171a70: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x171a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x171a74: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x171a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x171a78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171A78u;
    {
        const bool branch_taken_0x171a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171a78) {
            ctx->pc = 0x171A88u;
            goto label_171a88;
        }
    }
    ctx->pc = 0x171A80u;
label_171a80:
    // 0x171a80: 0xafb10174  sw          $s1, 0x174($sp)
    ctx->pc = 0x171a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 17));
    // 0x171a84: 0x0  nop
    ctx->pc = 0x171a84u;
    // NOP
label_171a88:
    // 0x171a88: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x171a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x171a8c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x171a8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x171a90: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x171A90u;
    {
        const bool branch_taken_0x171a90 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x171a90) {
            ctx->pc = 0x171AA8u;
            goto label_171aa8;
        }
    }
    ctx->pc = 0x171A98u;
    // 0x171a98: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x171a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x171a9c: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x171a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x171aa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171AA0u;
    {
        const bool branch_taken_0x171aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171aa0) {
            ctx->pc = 0x171AB0u;
            goto label_171ab0;
        }
    }
    ctx->pc = 0x171AA8u;
label_171aa8:
    // 0x171aa8: 0xafb20178  sw          $s2, 0x178($sp)
    ctx->pc = 0x171aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 18));
    // 0x171aac: 0x0  nop
    ctx->pc = 0x171aacu;
    // NOP
label_171ab0:
    // 0x171ab0: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x171ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x171ab4: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x171ab4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x171ab8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x171ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x171abc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x171abcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x171ac0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x171ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171ac4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x171ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171ac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171acc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x171accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x171ad0: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x171ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x171ad4: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x171ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x171ad8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x171ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x171adc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x171adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x171ae0: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x171AE0u;
    {
        const bool branch_taken_0x171ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ae0) {
            ctx->pc = 0x171D2Cu;
            goto label_171d2c;
        }
    }
    ctx->pc = 0x171AE8u;
    // 0x171ae8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x171ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x171aec: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x171aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x171af0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x171af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x171af4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171af8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x171af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171b00: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x171b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171b04: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x171b04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171b08: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x171b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x171b0c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171b10: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x171b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x171b14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x171b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171b18: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x171b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171b1c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171b20: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x171b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171b24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x171b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171b28: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x171b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171b2c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x171b2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171b30: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x171b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x171b34: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x171b34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x171b38: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x171b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x171b3c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x171b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x171b40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x171b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171b44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171b48: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x171b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171b4c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x171b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171b50: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x171b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x171b54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x171b54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171b58: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x171b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x171b5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171b60: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x171b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171b64: 0x32e2ffff  andi        $v0, $s7, 0xFFFF
    ctx->pc = 0x171b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x171b68: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x171b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x171b6c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x171b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x171b70: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x171b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x171b74: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x171b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x171b78: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x171b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171b7c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x171b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x171b80: 0xc040c80  jal         func_103200
    ctx->pc = 0x171B80u;
    SET_GPR_U32(ctx, 31, 0x171B88u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x171B88u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171B88u) { return; }
    ctx->pc = 0x171B88u;
label_171b88:
    // 0x171b88: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x171b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171b8c: 0x32e2ffff  andi        $v0, $s7, 0xFFFF
    ctx->pc = 0x171b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x171b90: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x171b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x171b94: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x171b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x171b98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x171b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171b9c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x171b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x171ba0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x171ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171ba4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x171ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x171ba8: 0xc040c80  jal         func_103200
    ctx->pc = 0x171BA8u;
    SET_GPR_U32(ctx, 31, 0x171BB0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x171BB0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171BB0u) { return; }
    ctx->pc = 0x171BB0u;
label_171bb0:
    // 0x171bb0: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x171bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171bb4: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x171bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x171bb8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x171bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x171bbc: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x171bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x171bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171bc4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x171bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x171bc8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x171bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171bcc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x171bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x171bd0: 0xc040c80  jal         func_103200
    ctx->pc = 0x171BD0u;
    SET_GPR_U32(ctx, 31, 0x171BD8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x171BD8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171BD8u) { return; }
    ctx->pc = 0x171BD8u;
label_171bd8:
    // 0x171bd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171be0: 0x0  nop
    ctx->pc = 0x171be0u;
    // NOP
    // 0x171be4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x171be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x171be8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x171be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x171bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x171becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171bf0: 0x0  nop
    ctx->pc = 0x171bf0u;
    // NOP
    // 0x171bf4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x171bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x171bf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171c00: 0x0  nop
    ctx->pc = 0x171c00u;
    // NOP
    // 0x171c04: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x171c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x171c08: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x171c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x171c0c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x171c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x171c10: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x171c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171c14: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171c18: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x171c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171c1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x171c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171c20: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x171c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171c24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x171c24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171c28: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x171c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x171c2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171c30: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x171c30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x171c34: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x171c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x171c38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x171c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171c3c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171c40: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x171c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171c48: 0x24540070  addiu       $s4, $v0, 0x70
    ctx->pc = 0x171c48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171c4c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x171c4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171c50: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x171c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x171c54: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x171c54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x171c58: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x171c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x171c5c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x171c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x171c60: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x171c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171c64: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171c68: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x171c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171c6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x171c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171c70: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x171c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171c74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x171c74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171c78: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x171c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x171c7c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171c80: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x171c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x171c84: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x171c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x171c88: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x171c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x171c8c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x171C8Cu;
    SET_GPR_U32(ctx, 31, 0x171C94u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x171C94u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171C94u) { return; }
    ctx->pc = 0x171C94u;
label_171c94:
    // 0x171c94: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x171c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x171c98: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x171c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x171c9c: 0xc7ac0148  lwc1        $f12, 0x148($sp)
    ctx->pc = 0x171c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x171ca0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x171CA0u;
    SET_GPR_U32(ctx, 31, 0x171CA8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x171CA8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171CA8u) { return; }
    ctx->pc = 0x171CA8u;
label_171ca8:
    // 0x171ca8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x171ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x171cac: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x171cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x171cb0: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x171cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x171cb4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x171CB4u;
    SET_GPR_U32(ctx, 31, 0x171CBCu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x171CBCu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171CBCu) { return; }
    ctx->pc = 0x171CBCu;
label_171cbc:
    // 0x171cbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x171cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x171cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x171cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171cc4: 0x0  nop
    ctx->pc = 0x171cc4u;
    // NOP
    // 0x171cc8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x171cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x171ccc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171cd4: 0x0  nop
    ctx->pc = 0x171cd4u;
    // NOP
    // 0x171cd8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x171cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x171cdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171ce4: 0x0  nop
    ctx->pc = 0x171ce4u;
    // NOP
    // 0x171ce8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x171ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x171cec: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x171cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171cf0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x171cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x171cf4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x171cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x171cf8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x171cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x171cfc: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x171CFCu;
    SET_GPR_U32(ctx, 31, 0x171D04u);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x171D04u;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171D04u) { return; }
    ctx->pc = 0x171D04u;
label_171d04:
    // 0x171d04: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x171d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x171d08: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x171d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x171d0c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x171d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x171d10: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x171d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x171d14: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x171d14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x171d18: 0x2688bd50  addiu       $t0, $s4, -0x42B0
    ctx->pc = 0x171d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950224));
    // 0x171d1c: 0xc040ddc  jal         func_103770
    ctx->pc = 0x171D1Cu;
    SET_GPR_U32(ctx, 31, 0x171D24u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x171D24u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171D24u) { return; }
    ctx->pc = 0x171D24u;
label_171d24:
    // 0x171d24: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x171D24u;
    {
        const bool branch_taken_0x171d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171d24) {
            ctx->pc = 0x171E70u;
            goto label_171e70;
        }
    }
    ctx->pc = 0x171D2Cu;
label_171d2c:
    // 0x171d2c: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x171d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x171d30: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x171d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x171d34: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x171d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x171d38: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171d3c: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x171d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171d40: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x171d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171d44: 0x24470060  addiu       $a3, $v0, 0x60
    ctx->pc = 0x171d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171d48: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x171d48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x171d4c: 0x26a20070  addiu       $v0, $s5, 0x70
    ctx->pc = 0x171d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171d50: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171d50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171d54: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x171d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x171d58: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x171d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171d5c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x171d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x171d60: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x171d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x171d64: 0x24c4bd00  addiu       $a0, $a2, -0x4300
    ctx->pc = 0x171d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x171d68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x171d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x171d6c: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x171d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171d70: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x171d70u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x171d74: 0x26a20070  addiu       $v0, $s5, 0x70
    ctx->pc = 0x171d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171d78: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x171d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x171d7c: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x171d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x171d80: 0x123840  sll         $a3, $s2, 1
    ctx->pc = 0x171d80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x171d84: 0xf21021  addu        $v0, $a3, $s2
    ctx->pc = 0x171d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x171d88: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x171d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171d8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171d90: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x171d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171d94: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x171d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x171d98: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x171d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x171d9c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x171d9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171da0: 0x26a30070  addiu       $v1, $s5, 0x70
    ctx->pc = 0x171da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171da4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x171da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x171da8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x171da8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x171dac: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171db0: 0x2462c930  addiu       $v0, $v1, -0x36D0
    ctx->pc = 0x171db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953264));
    // 0x171db4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x171db4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x47C930u));
    // 0x171db8: 0x26a20070  addiu       $v0, $s5, 0x70
    ctx->pc = 0x171db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171dbc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x171dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171dc0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171dc4: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x171dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171dc8: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x171dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171dcc: 0xc05da30  jal         func_1768C0
    ctx->pc = 0x171DCCu;
    SET_GPR_U32(ctx, 31, 0x171DD4u);
    ctx->pc = 0x1768C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768C0u, 0x171DCCu, 0x171DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DD4u;
label_171dd4:
    // 0x171dd4: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x171dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x171dd8: 0x74b821  addu        $s7, $v1, $s4
    ctx->pc = 0x171dd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x171ddc: 0x178100  sll         $s0, $s7, 4
    ctx->pc = 0x171ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x171de0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x171de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x171de4: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x171de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x171de8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x171de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x171dec: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x171decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x171df0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x171df0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171df4: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x171df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x171df8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x171df8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x171dfc: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x171dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x171e00: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x171e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x171e04: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x171e04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171e08: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171e0c: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x171e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171e10: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x171e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171e14: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x171e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x171e18: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x171e18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171e1c: 0x26a30030  addiu       $v1, $s5, 0x30
    ctx->pc = 0x171e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x171e20: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x171e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x171e24: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x171e24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x171e28: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x171e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x171e2c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x171e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x171e30: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x171e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171e34: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171e38: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x171e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171e3c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x171e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171e40: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x171e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x171e44: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x171e44u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171e48: 0x26a30030  addiu       $v1, $s5, 0x30
    ctx->pc = 0x171e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x171e4c: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x171e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x171e50: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x171e50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x171e54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171e58: 0x2463bd50  addiu       $v1, $v1, -0x42B0
    ctx->pc = 0x171e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950224));
    // 0x171e5c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x171e5cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x47BD50u));
    // 0x171e60: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x171e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x171e64: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x171e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x171e68: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x171e68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x171e6c: 0x0  nop
    ctx->pc = 0x171e6cu;
    // NOP
label_171e70:
    // 0x171e70: 0x26c30090  addiu       $v1, $s6, 0x90
    ctx->pc = 0x171e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x171e74: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x171e74u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x171e78: 0x27c50010  addiu       $a1, $fp, 0x10
    ctx->pc = 0x171e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x171e7c: 0x70a0f628  paddub      $fp, $a1, $zero
    ctx->pc = 0x171e7cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x171e80: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x171e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x171e84: 0xa3202b  sltu        $a0, $a1, $v1
    ctx->pc = 0x171e84u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171e88: 0x1480fe4b  bnez        $a0, . + 4 + (-0x1B5 << 2)
    ctx->pc = 0x171E88u;
    {
        const bool branch_taken_0x171e88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x171e88) {
            ctx->pc = 0x1717B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1717b8;
        }
    }
    ctx->pc = 0x171E90u;
    // 0x171e90: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x171e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x171e94: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x171e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x171e98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x171e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x171e9c: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x171e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x171ea0: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x171EA0u;
    {
        const bool branch_taken_0x171ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ea0) {
            ctx->pc = 0x171F48u;
            goto label_171f48;
        }
    }
    ctx->pc = 0x171EA8u;
    // 0x171ea8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x171ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x171eac: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x171eacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x171eb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x171eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x171eb4: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x171eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x171eb8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x171eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x171ebc: 0x24650190  addiu       $a1, $v1, 0x190
    ctx->pc = 0x171ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x171ec0: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x171ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x171ec4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x171EC4u;
    SET_GPR_U32(ctx, 31, 0x171ECCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x171EC4u, 0x171ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171ECCu;
label_171ecc:
    // 0x171ecc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x171eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x171ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x171ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171ed4: 0x0  nop
    ctx->pc = 0x171ed4u;
    // NOP
    // 0x171ed8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x171ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x171edc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x171edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x171ee0: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x171ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x171ee4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x171ee4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x171ee8: 0xc040c24  jal         func_103090
    ctx->pc = 0x171EE8u;
    SET_GPR_U32(ctx, 31, 0x171EF0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x171EF0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171EF0u) { return; }
    ctx->pc = 0x171EF0u;
label_171ef0:
    // 0x171ef0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x171ef0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x171ef4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x171ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171ef8: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x171ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x171efc: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x171efcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x171f00: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x171f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x171f04: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x171f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x171f08: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x171f08u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_171f0c:
    // 0x171f0c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x171f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171f10: 0xe6c00070  swc1        $f0, 0x70($s6)
    ctx->pc = 0x171f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 112), bits); }
    // 0x171f14: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x171f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171f18: 0xe6c00074  swc1        $f0, 0x74($s6)
    ctx->pc = 0x171f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 116), bits); }
    // 0x171f1c: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x171f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171f20: 0xe6c00078  swc1        $f0, 0x78($s6)
    ctx->pc = 0x171f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 120), bits); }
    // 0x171f24: 0x26c50090  addiu       $a1, $s6, 0x90
    ctx->pc = 0x171f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x171f28: 0x70a0b628  paddub      $s6, $a1, $zero
    ctx->pc = 0x171f28u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x171f2c: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x171f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x171f30: 0x7080f628  paddub      $fp, $a0, $zero
    ctx->pc = 0x171f30u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x171f34: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x171f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x171f38: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x171f38u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171f3c: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x171F3Cu;
    {
        const bool branch_taken_0x171f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x171f3c) {
            ctx->pc = 0x171F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171f0c;
        }
    }
    ctx->pc = 0x171F44u;
    // 0x171f44: 0x0  nop
    ctx->pc = 0x171f44u;
    // NOP
label_171f48:
    // 0x171f48: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x171f48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x171f4c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x171f4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x171f50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x171f50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x171f54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x171f54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171f58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x171f58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171f5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x171f5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171f60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x171f60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171f64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171f68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171f70: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x171f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x171f74: 0x3e00008  jr          $ra
    ctx->pc = 0x171F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171F7Cu;
}
