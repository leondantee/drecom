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

// Function: entry_0017b380
// Address: 0x17b380 - 0x17b438
void entry_0017b380_0x17b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b380_0x17b380");
#endif

    switch (ctx->pc) {
        case 0x17b394u: goto label_17b394;
        case 0x17b3acu: goto label_17b3ac;
        case 0x17b3d4u: goto label_17b3d4;
        case 0x17b3e8u: goto label_17b3e8;
        default: break;
    }

    ctx->pc = 0x17b380u;

    // 0x17b380: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x17b380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x17b384: 0x24502380  addiu       $s0, $v0, 0x2380
    ctx->pc = 0x17b384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9088));
    // 0x17b388: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b38c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x17B38Cu;
    SET_GPR_U32(ctx, 31, 0x17B394u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x17B394u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B394u) { return; }
    ctx->pc = 0x17B394u;
label_17b394:
    // 0x17b394: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b398: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17b398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b39c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x17b39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x17b3a0: 0xc42cdc94  lwc1        $f12, -0x236C($at)
    ctx->pc = 0x17b3a0u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17b3a4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x17B3A4u;
    SET_GPR_U32(ctx, 31, 0x17B3ACu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x17B3ACu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B3ACu) { return; }
    ctx->pc = 0x17B3ACu;
label_17b3ac:
    // 0x17b3ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x17b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17b3b0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x17b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x17b3b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17b3b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b3b8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b3bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17b3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17b3c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b3c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b3c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17b3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b3cc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17B3CCu;
    SET_GPR_U32(ctx, 31, 0x17B3D4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17B3D4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B3D4u) { return; }
    ctx->pc = 0x17B3D4u;
label_17b3d4:
    // 0x17b3d4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x17b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b3d8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x17b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b3dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17b3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b3e0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17B3E0u;
    SET_GPR_U32(ctx, 31, 0x17B3E8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17B3E8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17B3E8u) { return; }
    ctx->pc = 0x17B3E8u;
label_17b3e8:
    // 0x17b3e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17b3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17b3ec: 0x8c310af0  lw          $s1, 0xAF0($at)
    ctx->pc = 0x17b3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17b3f0: 0xc601013c  lwc1        $f1, 0x13C($s0)
    ctx->pc = 0x17b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b3f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b3f8: 0x0  nop
    ctx->pc = 0x17b3f8u;
    // NOP
    // 0x17b3fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x17b3fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b400: 0x0  nop
    ctx->pc = 0x17b400u;
    // NOP
    // 0x17b404: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x17B404u;
    {
        const bool branch_taken_0x17b404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b404) {
            ctx->pc = 0x17B470u;
            return;
        }
    }
    ctx->pc = 0x17B40Cu;
    // 0x17b40c: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x17b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x17b410: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B410u;
    {
        const bool branch_taken_0x17b410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b410) {
            ctx->pc = 0x17B438u;
            return;
        }
    }
    ctx->pc = 0x17B418u;
    // 0x17b418: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17b418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17b41c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x17b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x17b420: 0x262201a0  addiu       $v0, $s1, 0x1A0
    ctx->pc = 0x17b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x17b424: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17b424u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b428: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x17b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17b42c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17b430: 0xc62001b0  lwc1        $f0, 0x1B0($s1)
    ctx->pc = 0x17b430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b434: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x17b434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    ctx->pc = 0x17b438u;
}
