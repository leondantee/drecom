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

// Function: set_eff_fire_damage
// Address: 0x21c5c0 - 0x21c800
void set_eff_fire_damage_0x21c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_fire_damage_0x21c5c0");
#endif

    switch (ctx->pc) {
        case 0x21c6a4u: goto label_21c6a4;
        case 0x21c6bcu: goto label_21c6bc;
        case 0x21c6d8u: goto label_21c6d8;
        case 0x21c6f4u: goto label_21c6f4;
        case 0x21c754u: goto label_21c754;
        case 0x21c760u: goto label_21c760;
        case 0x21c7c0u: goto label_21c7c0;
        case 0x21c7ccu: goto label_21c7cc;
        default: break;
    }

    ctx->pc = 0x21c5c0u;

    // 0x21c5c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21c5c4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x21c5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x21c5c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21c5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21c5cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21c5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21c5d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21c5d4: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x21c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x21c5d8: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x21c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x21c5dc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x21c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x21c5e0: 0xafa70078  sw          $a3, 0x78($sp)
    ctx->pc = 0x21c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
    // 0x21c5e4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21c5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21c5e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21c5ec: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x21C5ECu;
    {
        const bool branch_taken_0x21c5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21c5ec) {
            ctx->pc = 0x21C67Cu;
            goto label_21c67c;
        }
    }
    ctx->pc = 0x21C5F4u;
    // 0x21c5f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c5f8: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x21C5F8u;
    {
        const bool branch_taken_0x21c5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21c5f8) {
            ctx->pc = 0x21C65Cu;
            goto label_21c65c;
        }
    }
    ctx->pc = 0x21C600u;
    // 0x21c600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c604: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21C604u;
    {
        const bool branch_taken_0x21c604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21c604) {
            ctx->pc = 0x21C63Cu;
            goto label_21c63c;
        }
    }
    ctx->pc = 0x21C60Cu;
    // 0x21c60c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C60Cu;
    {
        const bool branch_taken_0x21c60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c60c) {
            ctx->pc = 0x21C61Cu;
            goto label_21c61c;
        }
    }
    ctx->pc = 0x21C614u;
    // 0x21c614: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x21C614u;
    {
        const bool branch_taken_0x21c614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c614) {
            ctx->pc = 0x21C698u;
            goto label_21c698;
        }
    }
    ctx->pc = 0x21C61Cu;
label_21c61c:
    // 0x21c61c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x21c61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21c620: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x21c620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x21c624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c628: 0x0  nop
    ctx->pc = 0x21c628u;
    // NOP
    // 0x21c62c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21c62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x21c630: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x21c630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c634: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21C634u;
    {
        const bool branch_taken_0x21c634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c634) {
            ctx->pc = 0x21C698u;
            goto label_21c698;
        }
    }
    ctx->pc = 0x21C63Cu;
label_21c63c:
    // 0x21c63c: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x21c63cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21c640: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x21c640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x21c644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c648: 0x0  nop
    ctx->pc = 0x21c648u;
    // NOP
    // 0x21c64c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21c64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x21c650: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x21c650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21c654: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21C654u;
    {
        const bool branch_taken_0x21c654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c654) {
            ctx->pc = 0x21C698u;
            goto label_21c698;
        }
    }
    ctx->pc = 0x21C65Cu;
label_21c65c:
    // 0x21c65c: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x21c65cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21c660: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x21c660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
    // 0x21c664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c668: 0x0  nop
    ctx->pc = 0x21c668u;
    // NOP
    // 0x21c66c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21c66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x21c670: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x21c670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21c674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21C674u;
    {
        const bool branch_taken_0x21c674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c674) {
            ctx->pc = 0x21C698u;
            goto label_21c698;
        }
    }
    ctx->pc = 0x21C67Cu;
label_21c67c:
    // 0x21c67c: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x21c67cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21c680: 0x3c034409  lui         $v1, 0x4409
    ctx->pc = 0x21c680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17417 << 16));
    // 0x21c684: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x21c684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x21c688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c68c: 0x0  nop
    ctx->pc = 0x21c68cu;
    // NOP
    // 0x21c690: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21c690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x21c694: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x21c694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_21c698:
    // 0x21c698: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x21c698u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c69c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x21C69Cu;
    {
        const bool branch_taken_0x21c69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c69c) {
            ctx->pc = 0x21C7D8u;
            goto label_21c7d8;
        }
    }
    ctx->pc = 0x21C6A4u;
label_21c6a4:
    // 0x21c6a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x21c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21c6a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x21c6a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c6ac: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x21c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21c6b0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x21c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x21c6b4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C6B4u;
    SET_GPR_U32(ctx, 31, 0x21C6BCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C6B4u, 0x21C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6BCu;
label_21c6bc:
    // 0x21c6bc: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x21c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c6c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c6c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c6c4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x21c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c6c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c6c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c6cc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x21c6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21c6d0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C6D0u;
    SET_GPR_U32(ctx, 31, 0x21C6D8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C6D0u, 0x21C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6D8u;
label_21c6d8:
    // 0x21c6d8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x21c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c6dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c6dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c6e0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x21c6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c6e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c6e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c6e8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21c6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21c6ec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C6ECu;
    SET_GPR_U32(ctx, 31, 0x21C6F4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C6ECu, 0x21C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6F4u;
label_21c6f4:
    // 0x21c6f4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x21c6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c6f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c6f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c6fc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x21c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c700: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c704: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x21c704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x21c708: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21c708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21c70c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c710: 0x0  nop
    ctx->pc = 0x21c710u;
    // NOP
    // 0x21c714: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x21c714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x21c718: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x21c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21c71c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21C71Cu;
    {
        const bool branch_taken_0x21c71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c71c) {
            ctx->pc = 0x21C768u;
            goto label_21c768;
        }
    }
    ctx->pc = 0x21C724u;
    // 0x21c724: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x21c724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x21c728: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21c72c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c730: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x21c730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x21c734: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21c734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c738: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21c738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21c73c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x21c73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21c740: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c740u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c744: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x21c744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21c748: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21c748u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c74c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C74Cu;
    SET_GPR_U32(ctx, 31, 0x21C754u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C74Cu, 0x21C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C754u;
label_21c754:
    // 0x21c754: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c754u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c758: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C758u;
    SET_GPR_U32(ctx, 31, 0x21C760u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C758u, 0x21C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C760u;
label_21c760:
    // 0x21c760: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x21C760u;
    {
        const bool branch_taken_0x21c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c760) {
            ctx->pc = 0x21C7D0u;
            goto label_21c7d0;
        }
    }
    ctx->pc = 0x21C768u;
label_21c768:
    // 0x21c768: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x21c768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x21c76c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21c76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21c770: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c774: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x21c774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x21c778: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21c778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c77c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21c77cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21c780: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x21c780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21c784: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x21c784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21c788: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x21c788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21c78c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21c790: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x21c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x21c794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c798: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c79c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c7a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c7a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c7a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c7ac: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21c7acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c7b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c7b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c7b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x21c7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21c7b8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C7B8u;
    SET_GPR_U32(ctx, 31, 0x21C7C0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C7B8u, 0x21C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7C0u;
label_21c7c0:
    // 0x21c7c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c7c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c7c4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C7C4u;
    SET_GPR_U32(ctx, 31, 0x21C7CCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C7C4u, 0x21C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C7CCu;
label_21c7cc:
    // 0x21c7cc: 0x0  nop
    ctx->pc = 0x21c7ccu;
    // NOP
label_21c7d0:
    // 0x21c7d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21c7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21c7d4: 0x0  nop
    ctx->pc = 0x21c7d4u;
    // NOP
label_21c7d8:
    // 0x21c7d8: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x21c7d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x21c7dc: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x21C7DCu;
    {
        const bool branch_taken_0x21c7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c7dc) {
            ctx->pc = 0x21C6A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c6a4;
        }
    }
    ctx->pc = 0x21C7E4u;
    // 0x21c7e4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x21c7e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c7e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21c7e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c7ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21c7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c7f4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x21c7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21c7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21C7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C800u;
}
