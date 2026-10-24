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

// Function: entry_0034c660
// Address: 0x34c660 - 0x34c7a8
void entry_0034c660_0x34c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c660_0x34c660");
#endif

    switch (ctx->pc) {
        case 0x34c708u: goto label_34c708;
        case 0x34c718u: goto label_34c718;
        case 0x34c764u: goto label_34c764;
        default: break;
    }

    ctx->pc = 0x34c660u;

    // 0x34c660: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c664: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34c664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34c668: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x34c668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c66c: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x34c66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c670: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34c670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34c674: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34c674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34c678: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c67c: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x34c67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x34c680: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x34c680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c684: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x34c684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x34c688: 0x3468999a  ori         $t0, $v1, 0x999A
    ctx->pc = 0x34c688u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x34c68c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x34c68cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c690: 0x0  nop
    ctx->pc = 0x34c690u;
    // NOP
    // 0x34c694: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34c694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34c698: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x34c698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x34c69c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x34c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c6a0: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x34c6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x34c6a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34c6a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c6a8: 0x0  nop
    ctx->pc = 0x34c6a8u;
    // NOP
    // 0x34c6ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34c6acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c6b0: 0x0  nop
    ctx->pc = 0x34c6b0u;
    // NOP
    // 0x34c6b4: 0x45010061  bc1t        . + 4 + (0x61 << 2)
    ctx->pc = 0x34C6B4u;
    {
        const bool branch_taken_0x34c6b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c6b4) {
            ctx->pc = 0x34C83Cu;
            return;
        }
    }
    ctx->pc = 0x34C6BCu;
    // 0x34c6bc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x34c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x34c6c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c6c4: 0x0  nop
    ctx->pc = 0x34c6c4u;
    // NOP
    // 0x34c6c8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34c6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34c6cc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c6d0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34c6d4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x34c6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c6d8: 0x3c063e19  lui         $a2, 0x3E19
    ctx->pc = 0x34c6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15897 << 16));
    // 0x34c6dc: 0x34c5999a  ori         $a1, $a2, 0x999A
    ctx->pc = 0x34c6dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
    // 0x34c6e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34c6e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c6e4: 0x0  nop
    ctx->pc = 0x34c6e4u;
    // NOP
    // 0x34c6e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34c6e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34c6ec: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x34c6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x34c6f0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x34c6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34c6f4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x34c6f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x34c6f8: 0x26280120  addiu       $t0, $s1, 0x120
    ctx->pc = 0x34c6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x34c6fc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x34c6fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x34c700: 0xc040c9e  jal         func_103278
    ctx->pc = 0x34C700u;
    SET_GPR_U32(ctx, 31, 0x34C708u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x34C708u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34C708u) { return; }
    ctx->pc = 0x34C708u;
label_34c708:
    // 0x34c708: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34c708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34c70c: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x34c70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x34c710: 0xc040c9e  jal         func_103278
    ctx->pc = 0x34C710u;
    SET_GPR_U32(ctx, 31, 0x34C718u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x34C718u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34C718u) { return; }
    ctx->pc = 0x34C718u;
label_34c718:
    // 0x34c718: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c718u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c71c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x34c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c720: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x34c720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x34c724: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34c724u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c728: 0x0  nop
    ctx->pc = 0x34c728u;
    // NOP
    // 0x34c72c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34c72cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34c730: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x34c730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x34c734: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x34c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c738: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x34c738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x34c73c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c73cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c740: 0x0  nop
    ctx->pc = 0x34c740u;
    // NOP
    // 0x34c744: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34c744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34c748: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x34c748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x34c74c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x34c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34c750: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x34c750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34c754: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x34c754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34c758: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x34c758u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c75c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x34C75Cu;
    SET_GPR_U32(ctx, 31, 0x34C764u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x34C75Cu, 0x34C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C764u;
label_34c764:
    // 0x34c764: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x34c764u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c768: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34c768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c76c: 0x94c510a4  lhu         $a1, 0x10A4($a2)
    ctx->pc = 0x34c76cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4260)));
    // 0x34c770: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x34c770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x34c774: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34c774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34c778: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34c77c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x34c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34c780: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x34c780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x34c784: 0x24635ac0  addiu       $v1, $v1, 0x5AC0
    ctx->pc = 0x34c784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23232));
    // 0x34c788: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34c788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34c78c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x34c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x34c790: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34C790u;
    {
        const bool branch_taken_0x34c790 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x34c790) {
            ctx->pc = 0x34C7A8u;
            return;
        }
    }
    ctx->pc = 0x34C798u;
    // 0x34c798: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c79c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x34c79cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x34c7a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34c7a4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x34c7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x34c7a8u;
}
