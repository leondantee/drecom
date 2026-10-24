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

// Function: entry_001de390
// Address: 0x1de390 - 0x1de470
void entry_001de390_0x1de390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de390_0x1de390");
#endif

    switch (ctx->pc) {
        case 0x1de440u: goto label_1de440;
        default: break;
    }

    ctx->pc = 0x1de390u;

    // 0x1de390: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1de390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de394: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de398: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1de398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1de39c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1de39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1de3a0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1de3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1de3a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de3a8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1de3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de3ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de3b0: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x1de3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1de3b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1de3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1de3b8: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x1de3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1de3bc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1de3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1de3c0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1DE3C0u;
    {
        const bool branch_taken_0x1de3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de3c0) {
            ctx->pc = 0x1DE510u;
            return;
        }
    }
    ctx->pc = 0x1DE3C8u;
    // 0x1de3c8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1de3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de3cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de3ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de3d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1de3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1de3d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de3d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1de3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1de3dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de3e0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1de3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de3e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1de3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de3e8: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x1de3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1de3ec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1de3ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de3f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1de3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1de3f4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1de3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1de3f8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1de3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de3fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de3fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de400: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1de400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1de404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de408: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1de408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1de40c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1de40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1de410: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1de410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1de414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de418: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x1de418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de41c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1de41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1de420: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1de420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1de424: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x1de424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1de428: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1de428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1de42c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1de42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1de430: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1de430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1de434: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1de434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1de438: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DE438u;
    SET_GPR_U32(ctx, 31, 0x1DE440u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DE438u, 0x1DE440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE440u;
label_1de440:
    // 0x1de440: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1de444: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1de444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de448: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de44c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de450: 0x0  nop
    ctx->pc = 0x1de450u;
    // NOP
    // 0x1de454: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE454u;
    {
        const bool branch_taken_0x1de454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de454) {
            ctx->pc = 0x1DE470u;
            return;
        }
    }
    ctx->pc = 0x1DE45Cu;
    // 0x1de45c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1de45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de460: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1de460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1de464: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1de464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de468: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de468u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de46c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1de46cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1de470u;
}
