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

// Function: Trans_scr_parts
// Address: 0x13bd60 - 0x13bf58
void Trans_scr_parts_0x13bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trans_scr_parts_0x13bd60");
#endif

    switch (ctx->pc) {
        case 0x13bda0u: goto label_13bda0;
        case 0x13bdd4u: goto label_13bdd4;
        case 0x13bdf0u: goto label_13bdf0;
        case 0x13bdfcu: goto label_13bdfc;
        default: break;
    }

    ctx->pc = 0x13bd60u;

    // 0x13bd60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13bd64: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x13bd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x13bd68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13bd6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13bd70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13bd74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bd78: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x13bd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x13bd7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x13bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13bd80: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x13bd80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x13bd84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x13bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13bd88: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x13bd88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x13bd8c: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x13bd8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13bd90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bd94: 0x8423fd6a  lh          $v1, -0x296($at)
    ctx->pc = 0x13bd94u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD6Au));
    // 0x13bd98: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x13bd98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13bd9c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x13bd9cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_13bda0:
    // 0x13bda0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x13bda0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13bda4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13bda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13bda8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x13bda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x13bdac: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x13BDACu;
    {
        const bool branch_taken_0x13bdac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bdac) {
            ctx->pc = 0x13BF28u;
            goto label_13bf28;
        }
    }
    ctx->pc = 0x13BDB4u;
    // 0x13bdb4: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x13bdb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13bdb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bdbc: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13bdc0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x13bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13bdc4: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13bdc8: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x13bdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x13bdcc: 0xc040c00  jal         func_103000
    ctx->pc = 0x13BDCCu;
    SET_GPR_U32(ctx, 31, 0x13BDD4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x13BDD4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13BDD4u) { return; }
    ctx->pc = 0x13BDD4u;
label_13bdd4:
    // 0x13bdd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bdd8: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13bddc: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x13bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x13bde0: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x13bde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x13bde4: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x13bde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x13bde8: 0xc040c00  jal         func_103000
    ctx->pc = 0x13BDE8u;
    SET_GPR_U32(ctx, 31, 0x13BDF0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x13BDF0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13BDF0u) { return; }
    ctx->pc = 0x13BDF0u;
label_13bdf0:
    // 0x13bdf0: 0xc62c00ac  lwc1        $f12, 0xAC($s1)
    ctx->pc = 0x13bdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13bdf4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x13BDF4u;
    SET_GPR_U32(ctx, 31, 0x13BDFCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x13BDF4u, 0x13BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDFCu;
label_13bdfc:
    // 0x13bdfc: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x13bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x13be00: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x13be00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x13be04: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13be04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13be08: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x13be08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x13be0c: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x13be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13be10: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13be10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13be14: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x13be14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13be18: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BE18u;
    {
        const bool branch_taken_0x13be18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13be18) {
            ctx->pc = 0x13BE28u;
            goto label_13be28;
        }
    }
    ctx->pc = 0x13BE20u;
    // 0x13be20: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13be20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13be24: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x13be24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_13be28:
    // 0x13be28: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x13be2c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x13be2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x13be30: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x13be30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x13be34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13be34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13be38: 0x8c24fd60  lw          $a0, -0x2A0($at)
    ctx->pc = 0x13be38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFD60u));
    // 0x13be3c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x13be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x13be40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13be40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13be44: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13BE44u;
    {
        const bool branch_taken_0x13be44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be44) {
            ctx->pc = 0x13BEB8u;
            goto label_13beb8;
        }
    }
    ctx->pc = 0x13BE4Cu;
    // 0x13be4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x13be4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x13be50: 0xc421cc6c  lwc1        $f1, -0x3394($at)
    ctx->pc = 0x13be50u;
    { uint32_t bits = FAST_READ32(0x47CC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13be54: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BE54u;
    {
        const bool branch_taken_0x13be54 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x13be54) {
            ctx->pc = 0x13BE70u;
            goto label_13be70;
        }
    }
    ctx->pc = 0x13BE5Cu;
    // 0x13be5c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x13be5cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13be60: 0x0  nop
    ctx->pc = 0x13be60u;
    // NOP
    // 0x13be64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13be64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13be68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13BE68u;
    {
        const bool branch_taken_0x13be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13be68) {
            ctx->pc = 0x13BE8Cu;
            goto label_13be8c;
        }
    }
    ctx->pc = 0x13BE70u;
label_13be70:
    // 0x13be70: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x13be70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x13be74: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x13be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x13be78: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13be78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13be7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13be7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13be80: 0x0  nop
    ctx->pc = 0x13be80u;
    // NOP
    // 0x13be84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13be84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13be88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13be88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13be8c:
    // 0x13be8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13be8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13be90: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x13be90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x13be94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13be94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13be98: 0x0  nop
    ctx->pc = 0x13be98u;
    // NOP
    // 0x13be9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13be9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13bea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13bea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bea4: 0x0  nop
    ctx->pc = 0x13bea4u;
    // NOP
    // 0x13bea8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13BEA8u;
    {
        const bool branch_taken_0x13bea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bea8) {
            ctx->pc = 0x13BEB8u;
            goto label_13beb8;
        }
    }
    ctx->pc = 0x13BEB0u;
    // 0x13beb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13beb4: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x13beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_13beb8:
    // 0x13beb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13beb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bebc: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x13bebcu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bec0: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BEC0u;
    {
        const bool branch_taken_0x13bec0 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x13bec0) {
            ctx->pc = 0x13BEDCu;
            goto label_13bedc;
        }
    }
    ctx->pc = 0x13BEC8u;
    // 0x13bec8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x13bec8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13becc: 0x0  nop
    ctx->pc = 0x13beccu;
    // NOP
    // 0x13bed0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13bed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13bed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13BED4u;
    {
        const bool branch_taken_0x13bed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bed4) {
            ctx->pc = 0x13BEF8u;
            goto label_13bef8;
        }
    }
    ctx->pc = 0x13BEDCu;
label_13bedc:
    // 0x13bedc: 0x122042  srl         $a0, $s2, 1
    ctx->pc = 0x13bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x13bee0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x13bee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x13bee4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x13bee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13bee8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13bee8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13beec: 0x0  nop
    ctx->pc = 0x13beecu;
    // NOP
    // 0x13bef0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13bef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13bef4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13bef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13bef8:
    // 0x13bef8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13bef8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13befc: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x13befcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x13bf00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13bf00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bf04: 0x0  nop
    ctx->pc = 0x13bf04u;
    // NOP
    // 0x13bf08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13bf08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13bf0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13bf0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bf10: 0x0  nop
    ctx->pc = 0x13bf10u;
    // NOP
    // 0x13bf14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13BF14u;
    {
        const bool branch_taken_0x13bf14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13bf14) {
            ctx->pc = 0x13BF28u;
            goto label_13bf28;
        }
    }
    ctx->pc = 0x13BF1Cu;
    // 0x13bf1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bf20: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x13bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x13bf24: 0x0  nop
    ctx->pc = 0x13bf24u;
    // NOP
label_13bf28:
    // 0x13bf28: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x13bf28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13bf2c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13bf2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13bf30: 0x1660ff9b  bnez        $s3, . + 4 + (-0x65 << 2)
    ctx->pc = 0x13BF30u;
    {
        const bool branch_taken_0x13bf30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bf30) {
            ctx->pc = 0x13BDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bda0;
        }
    }
    ctx->pc = 0x13BF38u;
    // 0x13bf38: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x13bf38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bf3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13bf3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bf40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bf40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bf44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bf44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bf48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bf48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bf4c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13bf4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x13BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BF58u;
}
