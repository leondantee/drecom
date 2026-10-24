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

// Function: entry_0029a308
// Address: 0x29a308 - 0x29a3f4
void entry_0029a308_0x29a308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a308_0x29a308");
#endif

    switch (ctx->pc) {
        case 0x29a3d8u: goto label_29a3d8;
        default: break;
    }

    ctx->pc = 0x29a308u;

    // 0x29a308: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x29a308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x29a30c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29a30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29a310: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x29a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a314: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x29a314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x29a318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a31c: 0x0  nop
    ctx->pc = 0x29a31cu;
    // NOP
    // 0x29a320: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29a320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a324: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x29a324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a328: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x29a328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x29a32c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29a32cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a330: 0x0  nop
    ctx->pc = 0x29a330u;
    // NOP
    // 0x29a334: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29a334u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29a338: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x29a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x29a33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a340: 0x0  nop
    ctx->pc = 0x29a340u;
    // NOP
    // 0x29a344: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a348: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x29a348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x29a34c: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x29a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x29a350: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29a350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29a354: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x29a354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a358: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x29a358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x29a35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a360: 0x0  nop
    ctx->pc = 0x29a360u;
    // NOP
    // 0x29a364: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29a364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a368: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x29a368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a36c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x29a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x29a370: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29a370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a374: 0x0  nop
    ctx->pc = 0x29a374u;
    // NOP
    // 0x29a378: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29a378u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29a37c: 0x3c023a80  lui         $v0, 0x3A80
    ctx->pc = 0x29a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14976 << 16));
    // 0x29a380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a384: 0x0  nop
    ctx->pc = 0x29a384u;
    // NOP
    // 0x29a388: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x29a388u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a38c: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x29a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x29a390: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x29a390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x29a394: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29a394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a398: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x29a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a39c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29a39cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29a3a0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x29a3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29a3a4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x29a3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x29a3a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29a3ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a3b0: 0x0  nop
    ctx->pc = 0x29a3b0u;
    // NOP
    // 0x29a3b4: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x29a3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x29a3b8: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x29a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x29a3bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29a3bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a3c0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x29a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x29a3c4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x29a3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x29a3c8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x29a3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29a3cc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x29a3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x29a3d0: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x29A3D0u;
    SET_GPR_U32(ctx, 31, 0x29A3D8u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x29A3D8u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A3D8u) { return; }
    ctx->pc = 0x29A3D8u;
label_29a3d8:
    // 0x29a3d8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29a3d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a3dc: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A3DCu;
    {
        const bool branch_taken_0x29a3dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a3dc) {
            ctx->pc = 0x29A3F4u;
            return;
        }
    }
    ctx->pc = 0x29A3E4u;
    // 0x29a3e4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x29a3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29a3e8: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x29a3e8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a3ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A3ECu;
    {
        const bool branch_taken_0x29a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a3ec) {
            ctx->pc = 0x29A3F8u;
            return;
        }
    }
    ctx->pc = 0x29A3F4u;
}
