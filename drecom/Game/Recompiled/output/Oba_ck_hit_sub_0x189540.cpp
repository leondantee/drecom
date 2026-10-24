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

// Function: Oba_ck_hit_sub
// Address: 0x189540 - 0x18a080
void Oba_ck_hit_sub_0x189540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oba_ck_hit_sub_0x189540");
#endif

    switch (ctx->pc) {
        case 0x189c50u: goto label_189c50;
        case 0x189d50u: goto label_189d50;
        case 0x189d64u: goto label_189d64;
        case 0x189d78u: goto label_189d78;
        case 0x189d8cu: goto label_189d8c;
        case 0x189fd0u: goto label_189fd0;
        case 0x18a050u: goto label_18a050;
        case 0x18a070u: goto label_18a070;
        default: break;
    }

    ctx->pc = 0x189540u;

    // 0x189540: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x189540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x189544: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x189544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x189548: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x189548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x18954c: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x18954cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x189550: 0xafa60108  sw          $a2, 0x108($sp)
    ctx->pc = 0x189550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 6));
    // 0x189554: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x189554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189558: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x189558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18955c: 0x8c8400f0  lw          $a0, 0xF0($a0)
    ctx->pc = 0x18955cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x189560: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x189560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x189564: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x189564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x189568: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x189568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x18956c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18956cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x189570: 0x146002bf  bnez        $v1, . + 4 + (0x2BF << 2)
    ctx->pc = 0x189570u;
    {
        const bool branch_taken_0x189570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189570) {
            ctx->pc = 0x18A070u;
            goto label_18a070;
        }
    }
    ctx->pc = 0x189578u;
    // 0x189578: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x189578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18957c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x18957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189580: 0x8c8400f0  lw          $a0, 0xF0($a0)
    ctx->pc = 0x189580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x189584: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x189584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x189588: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x189588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x18958c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x18958cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x189590: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x189590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x189594: 0x146002b6  bnez        $v1, . + 4 + (0x2B6 << 2)
    ctx->pc = 0x189594u;
    {
        const bool branch_taken_0x189594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189594) {
            ctx->pc = 0x18A070u;
            goto label_18a070;
        }
    }
    ctx->pc = 0x18959Cu;
    // 0x18959c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x18959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1895a0: 0x8c6400ec  lw          $a0, 0xEC($v1)
    ctx->pc = 0x1895a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x1895a4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1895a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1895a8: 0x8c6300ec  lw          $v1, 0xEC($v1)
    ctx->pc = 0x1895a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x1895ac: 0x108302b0  beq         $a0, $v1, . + 4 + (0x2B0 << 2)
    ctx->pc = 0x1895ACu;
    {
        const bool branch_taken_0x1895ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1895ac) {
            ctx->pc = 0x18A070u;
            goto label_18a070;
        }
    }
    ctx->pc = 0x1895B4u;
    // 0x1895b4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1895b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1895b8: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x1895b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1895bc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1895bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1895c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1895c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1895c4: 0x146002aa  bnez        $v1, . + 4 + (0x2AA << 2)
    ctx->pc = 0x1895C4u;
    {
        const bool branch_taken_0x1895c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1895c4) {
            ctx->pc = 0x18A070u;
            goto label_18a070;
        }
    }
    ctx->pc = 0x1895CCu;
    // 0x1895cc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1895ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1895d0: 0xc46100d8  lwc1        $f1, 0xD8($v1)
    ctx->pc = 0x1895d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1895d4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1895d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1895d8: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x1895d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1895dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1895dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1895e0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1895e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1895e4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1895e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1895e8: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1895e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1895ec: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1895ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1895f0: 0xc46100d8  lwc1        $f1, 0xD8($v1)
    ctx->pc = 0x1895f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1895f4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1895f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1895f8: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x1895f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1895fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1895fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189600: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x189600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189604: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x189604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189608: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x189608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18960c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x18960cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189610: 0x0  nop
    ctx->pc = 0x189610u;
    // NOP
    // 0x189614: 0x45010296  bc1t        . + 4 + (0x296 << 2)
    ctx->pc = 0x189614u;
    {
        const bool branch_taken_0x189614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189614) {
            ctx->pc = 0x18A070u;
            goto label_18a070;
        }
    }
    ctx->pc = 0x18961Cu;
    // 0x18961c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x18961cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189620: 0xc46100d8  lwc1        $f1, 0xD8($v1)
    ctx->pc = 0x189620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189624: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x189624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189628: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x189628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18962c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18962cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189630: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x189630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189634: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x189634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189638: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x189638u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18963c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x18963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189640: 0xc46100d8  lwc1        $f1, 0xD8($v1)
    ctx->pc = 0x189640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189644: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x189644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189648: 0xc46000e4  lwc1        $f0, 0xE4($v1)
    ctx->pc = 0x189648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18964c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18964cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189650: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x189650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189654: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x189654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189658: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x189658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18965c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x18965cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189660: 0x0  nop
    ctx->pc = 0x189660u;
    // NOP
    // 0x189664: 0x45000282  bc1f        . + 4 + (0x282 << 2)
    ctx->pc = 0x189664u;
    {
        const bool branch_taken_0x189664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189664) {
            ctx->pc = 0x18A070u;
            goto label_18a070;
        }
    }
    ctx->pc = 0x18966Cu;
    // 0x18966c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189670: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x189670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x189674: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x189674u;
    {
        const bool branch_taken_0x189674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189674) {
            ctx->pc = 0x18990Cu;
            goto label_18990c;
        }
    }
    ctx->pc = 0x18967Cu;
    // 0x18967c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189680: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x189680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189684: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189688: 0x0  nop
    ctx->pc = 0x189688u;
    // NOP
    // 0x18968c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18968cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189690: 0x0  nop
    ctx->pc = 0x189690u;
    // NOP
    // 0x189694: 0x4501008a  bc1t        . + 4 + (0x8A << 2)
    ctx->pc = 0x189694u;
    {
        const bool branch_taken_0x189694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189694) {
            ctx->pc = 0x1898C0u;
            goto label_1898c0;
        }
    }
    ctx->pc = 0x18969Cu;
    // 0x18969c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18969cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1896a0: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x1896a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1896a4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1896a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1896a8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1896a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1896ac: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1896acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1896b0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1896b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1896b4: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x1896b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1896b8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1896b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1896bc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1896bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1896c0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1896c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1896c4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1896c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1896c8: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x1896c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1896cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1896ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1896d0: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x1896d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1896d4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1896d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1896d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1896d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1896dc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1896dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1896e0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1896e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1896e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1896e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1896e8: 0x0  nop
    ctx->pc = 0x1896e8u;
    // NOP
    // 0x1896ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1896ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1896f0: 0x0  nop
    ctx->pc = 0x1896f0u;
    // NOP
    // 0x1896f4: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x1896F4u;
    {
        const bool branch_taken_0x1896f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1896f4) {
            ctx->pc = 0x189818u;
            goto label_189818;
        }
    }
    ctx->pc = 0x1896FCu;
    // 0x1896fc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1896fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189700: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x189700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189704: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x189704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189708: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18970c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x18970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189710: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189714: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x189714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189718: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x189718u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18971c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x18971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189720: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x189720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189724: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189728: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x189728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18972c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18972cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189730: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x189730u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x189734: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x189734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189738: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x189738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18973c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18973cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189740: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189748: 0x0  nop
    ctx->pc = 0x189748u;
    // NOP
    // 0x18974c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18974cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189750: 0x0  nop
    ctx->pc = 0x189750u;
    // NOP
    // 0x189754: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189754u;
    {
        const bool branch_taken_0x189754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189754) {
            ctx->pc = 0x189770u;
            goto label_189770;
        }
    }
    ctx->pc = 0x18975Cu;
    // 0x18975c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189760: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189764: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x189764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189768: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x189768u;
    {
        const bool branch_taken_0x189768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189768) {
            ctx->pc = 0x189918u;
            goto label_189918;
        }
    }
    ctx->pc = 0x189770u;
label_189770:
    // 0x189770: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189774: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189778: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18977c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18977cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189780: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x189780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189784: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189788: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18978c: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x18978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189790: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189790u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x189794: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x189794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189798: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18979c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18979cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1897a0: 0x0  nop
    ctx->pc = 0x1897a0u;
    // NOP
    // 0x1897a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1897a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1897a8: 0x0  nop
    ctx->pc = 0x1897a8u;
    // NOP
    // 0x1897ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1897ACu;
    {
        const bool branch_taken_0x1897ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1897ac) {
            ctx->pc = 0x1897C8u;
            goto label_1897c8;
        }
    }
    ctx->pc = 0x1897B4u;
    // 0x1897b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1897b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1897b8: 0x0  nop
    ctx->pc = 0x1897b8u;
    // NOP
    // 0x1897bc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1897bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1897c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1897C0u;
    {
        const bool branch_taken_0x1897c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1897c0) {
            ctx->pc = 0x189808u;
            goto label_189808;
        }
    }
    ctx->pc = 0x1897C8u;
label_1897c8:
    // 0x1897c8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1897c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1897cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1897ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1897d0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1897d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1897d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1897d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1897d8: 0x0  nop
    ctx->pc = 0x1897d8u;
    // NOP
    // 0x1897dc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1897DCu;
    {
        const bool branch_taken_0x1897dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1897dc) {
            ctx->pc = 0x1897F8u;
            goto label_1897f8;
        }
    }
    ctx->pc = 0x1897E4u;
    // 0x1897e4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1897e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1897e8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1897e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1897ec: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1897ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1897f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1897F0u;
    {
        const bool branch_taken_0x1897f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1897f0) {
            ctx->pc = 0x189800u;
            goto label_189800;
        }
    }
    ctx->pc = 0x1897F8u;
label_1897f8:
    // 0x1897f8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1897f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1897fc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1897fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_189800:
    // 0x189800: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x189800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189804: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x189804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_189808:
    // 0x189808: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x189808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18980c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18980cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189810: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x189810u;
    {
        const bool branch_taken_0x189810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189810) {
            ctx->pc = 0x189918u;
            goto label_189918;
        }
    }
    ctx->pc = 0x189818u;
label_189818:
    // 0x189818: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18981c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189820: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189824: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189828: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x189828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x18982c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189830: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189834: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x189834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189838: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189838u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18983c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18983cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189840: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189848: 0x0  nop
    ctx->pc = 0x189848u;
    // NOP
    // 0x18984c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18984cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189850: 0x0  nop
    ctx->pc = 0x189850u;
    // NOP
    // 0x189854: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189854u;
    {
        const bool branch_taken_0x189854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189854) {
            ctx->pc = 0x189870u;
            goto label_189870;
        }
    }
    ctx->pc = 0x18985Cu;
    // 0x18985c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18985cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189860: 0x0  nop
    ctx->pc = 0x189860u;
    // NOP
    // 0x189864: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x189864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x189868: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x189868u;
    {
        const bool branch_taken_0x189868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189868) {
            ctx->pc = 0x1898B0u;
            goto label_1898b0;
        }
    }
    ctx->pc = 0x189870u;
label_189870:
    // 0x189870: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189874: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x189874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189878: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x189878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18987c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18987cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189880: 0x0  nop
    ctx->pc = 0x189880u;
    // NOP
    // 0x189884: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x189884u;
    {
        const bool branch_taken_0x189884 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189884) {
            ctx->pc = 0x1898A0u;
            goto label_1898a0;
        }
    }
    ctx->pc = 0x18988Cu;
    // 0x18988c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189890: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189894: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x189894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x189898: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189898u;
    {
        const bool branch_taken_0x189898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189898) {
            ctx->pc = 0x1898A8u;
            goto label_1898a8;
        }
    }
    ctx->pc = 0x1898A0u;
label_1898a0:
    // 0x1898a0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1898a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1898a4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1898a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1898a8:
    // 0x1898a8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1898a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1898ac: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1898acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1898b0:
    // 0x1898b0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1898b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1898b4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1898b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1898b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1898B8u;
    {
        const bool branch_taken_0x1898b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1898b8) {
            ctx->pc = 0x189918u;
            goto label_189918;
        }
    }
    ctx->pc = 0x1898C0u;
label_1898c0:
    // 0x1898c0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1898c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1898c4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1898c8: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x1898c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1898cc: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1898ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1898d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1898d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1898d4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1898d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1898d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1898d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1898dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1898DCu;
    {
        const bool branch_taken_0x1898dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1898dc) {
            ctx->pc = 0x1898F8u;
            goto label_1898f8;
        }
    }
    ctx->pc = 0x1898E4u;
    // 0x1898e4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1898e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1898e8: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x1898e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1898ec: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1898ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1898f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1898F0u;
    {
        const bool branch_taken_0x1898f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1898f0) {
            ctx->pc = 0x189918u;
            goto label_189918;
        }
    }
    ctx->pc = 0x1898F8u;
label_1898f8:
    // 0x1898f8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1898f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1898fc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1898fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189900: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x189900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189904: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189904u;
    {
        const bool branch_taken_0x189904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189904) {
            ctx->pc = 0x189918u;
            goto label_189918;
        }
    }
    ctx->pc = 0x18990Cu;
label_18990c:
    // 0x18990c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189910: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189914: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x189914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_189918:
    // 0x189918: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18991c: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x18991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x189920: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x189920u;
    {
        const bool branch_taken_0x189920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189920) {
            ctx->pc = 0x189BB8u;
            goto label_189bb8;
        }
    }
    ctx->pc = 0x189928u;
    // 0x189928: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18992c: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x18992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189934: 0x0  nop
    ctx->pc = 0x189934u;
    // NOP
    // 0x189938: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x189938u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18993c: 0x0  nop
    ctx->pc = 0x18993cu;
    // NOP
    // 0x189940: 0x4501008a  bc1t        . + 4 + (0x8A << 2)
    ctx->pc = 0x189940u;
    {
        const bool branch_taken_0x189940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189940) {
            ctx->pc = 0x189B6Cu;
            goto label_189b6c;
        }
    }
    ctx->pc = 0x189948u;
    // 0x189948: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18994c: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x18994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189950: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189954: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189958: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x189958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18995c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189960: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x189960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189964: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x189964u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189968: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18996c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x18996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189970: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189974: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x189974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189978: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x189978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18997c: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x18997cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x189980: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189984: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x189984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x189988: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x18998c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x18998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189994: 0x0  nop
    ctx->pc = 0x189994u;
    // NOP
    // 0x189998: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18999c: 0x0  nop
    ctx->pc = 0x18999cu;
    // NOP
    // 0x1899a0: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x1899A0u;
    {
        const bool branch_taken_0x1899a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1899a0) {
            ctx->pc = 0x189AC4u;
            goto label_189ac4;
        }
    }
    ctx->pc = 0x1899A8u;
    // 0x1899a8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1899a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1899ac: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x1899acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1899b0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1899b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1899b4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1899b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1899b8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1899b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1899bc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1899bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1899c0: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x1899c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1899c4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1899c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1899c8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1899c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1899cc: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1899ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1899d0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1899d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1899d4: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x1899d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1899d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1899d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1899dc: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x1899dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1899e0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1899e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1899e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1899e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1899e8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1899e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1899ec: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1899ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1899f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1899f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1899f4: 0x0  nop
    ctx->pc = 0x1899f4u;
    // NOP
    // 0x1899f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1899f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1899fc: 0x0  nop
    ctx->pc = 0x1899fcu;
    // NOP
    // 0x189a00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189A00u;
    {
        const bool branch_taken_0x189a00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189a00) {
            ctx->pc = 0x189A1Cu;
            goto label_189a1c;
        }
    }
    ctx->pc = 0x189A08u;
    // 0x189a08: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189a0c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189a10: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189a14: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x189A14u;
    {
        const bool branch_taken_0x189a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a14) {
            ctx->pc = 0x189BC4u;
            goto label_189bc4;
        }
    }
    ctx->pc = 0x189A1Cu;
label_189a1c:
    // 0x189a1c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189a20: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189a24: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189a28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189a2c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189a30: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189a34: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189a38: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x189a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189a3c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189a3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x189a40: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189a44: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189a48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189a4c: 0x0  nop
    ctx->pc = 0x189a4cu;
    // NOP
    // 0x189a50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189a54: 0x0  nop
    ctx->pc = 0x189a54u;
    // NOP
    // 0x189a58: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189A58u;
    {
        const bool branch_taken_0x189a58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189a58) {
            ctx->pc = 0x189A74u;
            goto label_189a74;
        }
    }
    ctx->pc = 0x189A60u;
    // 0x189a60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189a64: 0x0  nop
    ctx->pc = 0x189a64u;
    // NOP
    // 0x189a68: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x189a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x189a6c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x189A6Cu;
    {
        const bool branch_taken_0x189a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a6c) {
            ctx->pc = 0x189AB4u;
            goto label_189ab4;
        }
    }
    ctx->pc = 0x189A74u;
label_189a74:
    // 0x189a74: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189a78: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x189a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189a7c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189a80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189a84: 0x0  nop
    ctx->pc = 0x189a84u;
    // NOP
    // 0x189a88: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x189A88u;
    {
        const bool branch_taken_0x189a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189a88) {
            ctx->pc = 0x189AA4u;
            goto label_189aa4;
        }
    }
    ctx->pc = 0x189A90u;
    // 0x189a90: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189a94: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189a98: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x189a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x189a9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189A9Cu;
    {
        const bool branch_taken_0x189a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a9c) {
            ctx->pc = 0x189AACu;
            goto label_189aac;
        }
    }
    ctx->pc = 0x189AA4u;
label_189aa4:
    // 0x189aa4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189aa8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x189aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_189aac:
    // 0x189aac: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x189aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ab0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x189ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_189ab4:
    // 0x189ab4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x189ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ab8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189abc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x189ABCu;
    {
        const bool branch_taken_0x189abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189abc) {
            ctx->pc = 0x189BC4u;
            goto label_189bc4;
        }
    }
    ctx->pc = 0x189AC4u;
label_189ac4:
    // 0x189ac4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189ac8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189acc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ad0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189ad4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189ad8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189adc: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189ae0: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x189ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ae4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189ae4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x189ae8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189aec: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x189aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189af4: 0x0  nop
    ctx->pc = 0x189af4u;
    // NOP
    // 0x189af8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189afc: 0x0  nop
    ctx->pc = 0x189afcu;
    // NOP
    // 0x189b00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189B00u;
    {
        const bool branch_taken_0x189b00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189b00) {
            ctx->pc = 0x189B1Cu;
            goto label_189b1c;
        }
    }
    ctx->pc = 0x189B08u;
    // 0x189b08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189b0c: 0x0  nop
    ctx->pc = 0x189b0cu;
    // NOP
    // 0x189b10: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x189b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x189b14: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x189B14u;
    {
        const bool branch_taken_0x189b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b14) {
            ctx->pc = 0x189B5Cu;
            goto label_189b5c;
        }
    }
    ctx->pc = 0x189B1Cu;
label_189b1c:
    // 0x189b1c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189b20: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x189b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189b24: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189b28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189b2c: 0x0  nop
    ctx->pc = 0x189b2cu;
    // NOP
    // 0x189b30: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x189B30u;
    {
        const bool branch_taken_0x189b30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189b30) {
            ctx->pc = 0x189B4Cu;
            goto label_189b4c;
        }
    }
    ctx->pc = 0x189B38u;
    // 0x189b38: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189b3c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b40: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x189b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x189b44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189B44u;
    {
        const bool branch_taken_0x189b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b44) {
            ctx->pc = 0x189B54u;
            goto label_189b54;
        }
    }
    ctx->pc = 0x189B4Cu;
label_189b4c:
    // 0x189b4c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b50: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x189b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_189b54:
    // 0x189b54: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x189b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b58: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x189b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_189b5c:
    // 0x189b5c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x189b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b60: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189b64: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x189B64u;
    {
        const bool branch_taken_0x189b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b64) {
            ctx->pc = 0x189BC4u;
            goto label_189bc4;
        }
    }
    ctx->pc = 0x189B6Cu;
label_189b6c:
    // 0x189b6c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x189b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189b70: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189b74: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x189b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x189b78: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x189b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x189b7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x189b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189b80: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x189b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x189b84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x189b88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189B88u;
    {
        const bool branch_taken_0x189b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b88) {
            ctx->pc = 0x189BA4u;
            goto label_189ba4;
        }
    }
    ctx->pc = 0x189B90u;
    // 0x189b90: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189b94: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x189b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b98: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189b9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x189B9Cu;
    {
        const bool branch_taken_0x189b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b9c) {
            ctx->pc = 0x189BC4u;
            goto label_189bc4;
        }
    }
    ctx->pc = 0x189BA4u;
label_189ba4:
    // 0x189ba4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189ba8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189bac: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189bb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189BB0u;
    {
        const bool branch_taken_0x189bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189bb0) {
            ctx->pc = 0x189BC4u;
            goto label_189bc4;
        }
    }
    ctx->pc = 0x189BB8u;
label_189bb8:
    // 0x189bb8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189bbc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189bc0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_189bc4:
    // 0x189bc4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189bc8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x189bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189bcc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189bd0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x189bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189bd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189bd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189bd8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x189bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x189bdc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189be0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x189be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189be4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189be8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x189be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189bec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189becu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189bf0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x189bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x189bf4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189bf8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189bfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x189bfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189c00: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x189c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x189c04: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189c08: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x189c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x189c0c: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x189C0Cu;
    {
        const bool branch_taken_0x189c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189c0c) {
            ctx->pc = 0x189D44u;
            goto label_189d44;
        }
    }
    ctx->pc = 0x189C14u;
    // 0x189c14: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189c18: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x189c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x189c1c: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x189C1Cu;
    {
        const bool branch_taken_0x189c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189c1c) {
            ctx->pc = 0x189D44u;
            goto label_189d44;
        }
    }
    ctx->pc = 0x189C24u;
    // 0x189c24: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x189c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c28: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x189c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189c2c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x189c2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189c30: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x189c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c34: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x189c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189c38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189c3c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x189c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x189c40: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x189c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x189c44: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x189c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x189c48: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x189C48u;
    SET_GPR_U32(ctx, 31, 0x189C50u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x189C48u, 0x189C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C50u;
label_189c50:
    // 0x189c50: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x189c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x189c54: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x189c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c58: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189c5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189c60: 0x0  nop
    ctx->pc = 0x189c60u;
    // NOP
    // 0x189c64: 0x45000102  bc1f        . + 4 + (0x102 << 2)
    ctx->pc = 0x189C64u;
    {
        const bool branch_taken_0x189c64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189c64) {
            ctx->pc = 0x18A070u;
            goto label_18a070;
        }
    }
    ctx->pc = 0x189C6Cu;
    // 0x189c6c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x189c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c70: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x189c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189c74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189c78: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x189c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x189c7c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x189c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189c84: 0x0  nop
    ctx->pc = 0x189c84u;
    // NOP
    // 0x189c88: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x189c88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189c8c: 0x0  nop
    ctx->pc = 0x189c8cu;
    // NOP
    // 0x189c90: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x189C90u;
    {
        const bool branch_taken_0x189c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189c90) {
            ctx->pc = 0x189CC0u;
            goto label_189cc0;
        }
    }
    ctx->pc = 0x189C98u;
    // 0x189c98: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189c9c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ca0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x189ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189ca4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189ca8: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x189ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x189cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189cb0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189cb4: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x189cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x189cb8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x189CB8u;
    {
        const bool branch_taken_0x189cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189cb8) {
            ctx->pc = 0x189D28u;
            goto label_189d28;
        }
    }
    ctx->pc = 0x189CC0u;
label_189cc0:
    // 0x189cc0: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x189cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189cc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x189cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x189cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189ccc: 0x0  nop
    ctx->pc = 0x189cccu;
    // NOP
    // 0x189cd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189cd4: 0x0  nop
    ctx->pc = 0x189cd4u;
    // NOP
    // 0x189cd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x189CD8u;
    {
        const bool branch_taken_0x189cd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189cd8) {
            ctx->pc = 0x189CF0u;
            goto label_189cf0;
        }
    }
    ctx->pc = 0x189CE0u;
    // 0x189ce0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x189ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x189ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189ce8: 0x0  nop
    ctx->pc = 0x189ce8u;
    // NOP
    // 0x189cec: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x189cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_189cf0:
    // 0x189cf0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x189cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189cf4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189cf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x189cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189cfc: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x189cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189d00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189d00u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x189d04: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189d08: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x189d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x189d0c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x189d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189d10: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189d14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x189d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189d18: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x189d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189d1c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189d1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x189d20: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189d24: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x189d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
label_189d28:
    // 0x189d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189d2c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189d30: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x189d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
    // 0x189d34: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189d38: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x189d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x189d3c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x189D3Cu;
    {
        const bool branch_taken_0x189d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189d3c) {
            ctx->pc = 0x189FD0u;
            goto label_189fd0;
        }
    }
    ctx->pc = 0x189D44u;
label_189d44:
    // 0x189d44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x189d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189d48: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x189D48u;
    SET_GPR_U32(ctx, 31, 0x189D50u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x189D50u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x189D50u) { return; }
    ctx->pc = 0x189D50u;
label_189d50:
    // 0x189d50: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189d54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x189d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x189d58: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x189d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x189d5c: 0xc040c44  jal         func_103110
    ctx->pc = 0x189D5Cu;
    SET_GPR_U32(ctx, 31, 0x189D64u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x189D64u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x189D64u) { return; }
    ctx->pc = 0x189D64u;
label_189d64:
    // 0x189d64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x189d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189d68: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x189d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189d6c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x189d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x189d70: 0xc040c00  jal         func_103000
    ctx->pc = 0x189D70u;
    SET_GPR_U32(ctx, 31, 0x189D78u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x189D78u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x189D78u) { return; }
    ctx->pc = 0x189D78u;
label_189d78:
    // 0x189d78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x189d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189d7c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x189d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189d80: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x189d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189d84: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x189D84u;
    SET_GPR_U32(ctx, 31, 0x189D8Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x189D8Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x189D8Cu) { return; }
    ctx->pc = 0x189D8Cu;
label_189d8c:
    // 0x189d8c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x189d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189d90: 0xc46100d0  lwc1        $f1, 0xD0($v1)
    ctx->pc = 0x189d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189d94: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x189d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189d98: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x189d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189d9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x189d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189da0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x189da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x189da4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x189da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189da8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189dac: 0x0  nop
    ctx->pc = 0x189dacu;
    // NOP
    // 0x189db0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189db4: 0x0  nop
    ctx->pc = 0x189db4u;
    // NOP
    // 0x189db8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189DB8u;
    {
        const bool branch_taken_0x189db8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189db8) {
            ctx->pc = 0x189DD4u;
            goto label_189dd4;
        }
    }
    ctx->pc = 0x189DC0u;
    // 0x189dc0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x189dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189dc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x189dc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x189dc8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x189dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x189dcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189DCCu;
    {
        const bool branch_taken_0x189dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189dcc) {
            ctx->pc = 0x189DDCu;
            goto label_189ddc;
        }
    }
    ctx->pc = 0x189DD4u;
label_189dd4:
    // 0x189dd4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x189dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189dd8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x189dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_189ddc:
    // 0x189ddc: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x189ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189de0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189de4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189de8: 0x0  nop
    ctx->pc = 0x189de8u;
    // NOP
    // 0x189dec: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x189DECu;
    {
        const bool branch_taken_0x189dec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189dec) {
            ctx->pc = 0x189E44u;
            goto label_189e44;
        }
    }
    ctx->pc = 0x189DF4u;
    // 0x189df4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x189df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189df8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189dfc: 0x0  nop
    ctx->pc = 0x189dfcu;
    // NOP
    // 0x189e00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189e04: 0x0  nop
    ctx->pc = 0x189e04u;
    // NOP
    // 0x189e08: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189E08u;
    {
        const bool branch_taken_0x189e08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189e08) {
            ctx->pc = 0x189E24u;
            goto label_189e24;
        }
    }
    ctx->pc = 0x189E10u;
    // 0x189e10: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x189e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x189e14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x189e18: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x189e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x189e1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189E1Cu;
    {
        const bool branch_taken_0x189e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e1c) {
            ctx->pc = 0x189E2Cu;
            goto label_189e2c;
        }
    }
    ctx->pc = 0x189E24u;
label_189e24:
    // 0x189e24: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x189e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e28: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x189e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_189e2c:
    // 0x189e2c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x189e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189e30: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x189e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189e38: 0x0  nop
    ctx->pc = 0x189e38u;
    // NOP
    // 0x189e3c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x189E3Cu;
    {
        const bool branch_taken_0x189e3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189e3c) {
            ctx->pc = 0x189E4Cu;
            goto label_189e4c;
        }
    }
    ctx->pc = 0x189E44u;
label_189e44:
    // 0x189e44: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x189E44u;
    {
        const bool branch_taken_0x189e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e44) {
            ctx->pc = 0x18A070u;
            goto label_18a070;
        }
    }
    ctx->pc = 0x189E4Cu;
label_189e4c:
    // 0x189e4c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x189e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189e54: 0x0  nop
    ctx->pc = 0x189e54u;
    // NOP
    // 0x189e58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189e5c: 0x0  nop
    ctx->pc = 0x189e5cu;
    // NOP
    // 0x189e60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189E60u;
    {
        const bool branch_taken_0x189e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189e60) {
            ctx->pc = 0x189E7Cu;
            goto label_189e7c;
        }
    }
    ctx->pc = 0x189E68u;
    // 0x189e68: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x189e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e6c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x189e6cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x189e70: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x189e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x189e74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189E74u;
    {
        const bool branch_taken_0x189e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e74) {
            ctx->pc = 0x189E84u;
            goto label_189e84;
        }
    }
    ctx->pc = 0x189E7Cu;
label_189e7c:
    // 0x189e7c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x189e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e80: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x189e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_189e84:
    // 0x189e84: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x189e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189e88: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x189e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189e8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189e90: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x189e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x189e94: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x189e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189e98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189e9c: 0x0  nop
    ctx->pc = 0x189e9cu;
    // NOP
    // 0x189ea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189ea4: 0x0  nop
    ctx->pc = 0x189ea4u;
    // NOP
    // 0x189ea8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189EA8u;
    {
        const bool branch_taken_0x189ea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189ea8) {
            ctx->pc = 0x189EC4u;
            goto label_189ec4;
        }
    }
    ctx->pc = 0x189EB0u;
    // 0x189eb0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x189eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189eb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x189eb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x189eb8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x189eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x189ebc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189EBCu;
    {
        const bool branch_taken_0x189ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189ebc) {
            ctx->pc = 0x189ECCu;
            goto label_189ecc;
        }
    }
    ctx->pc = 0x189EC4u;
label_189ec4:
    // 0x189ec4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x189ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ec8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x189ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_189ecc:
    // 0x189ecc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x189eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189ed0: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x189ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ed4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189ed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189ed8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x189ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x189edc: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x189edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189ee0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x189ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ee4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189ee8: 0x0  nop
    ctx->pc = 0x189ee8u;
    // NOP
    // 0x189eec: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x189EECu;
    {
        const bool branch_taken_0x189eec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189eec) {
            ctx->pc = 0x189F4Cu;
            goto label_189f4c;
        }
    }
    ctx->pc = 0x189EF4u;
    // 0x189ef4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x189ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189efc: 0x0  nop
    ctx->pc = 0x189efcu;
    // NOP
    // 0x189f00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x189f00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189f04: 0x0  nop
    ctx->pc = 0x189f04u;
    // NOP
    // 0x189f08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x189F08u;
    {
        const bool branch_taken_0x189f08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189f08) {
            ctx->pc = 0x189F20u;
            goto label_189f20;
        }
    }
    ctx->pc = 0x189F10u;
    // 0x189f10: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189f14: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x189f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x189f18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189F18u;
    {
        const bool branch_taken_0x189f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189f18) {
            ctx->pc = 0x189F2Cu;
            goto label_189f2c;
        }
    }
    ctx->pc = 0x189F20u;
label_189f20:
    // 0x189f20: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x189f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189f24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x189f24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x189f28: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x189f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_189f2c:
    // 0x189f2c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x189f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189f30: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189f34: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x189f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x189f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189f3c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189f40: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x189f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x189f44: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x189F44u;
    {
        const bool branch_taken_0x189f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189f44) {
            ctx->pc = 0x189F9Cu;
            goto label_189f9c;
        }
    }
    ctx->pc = 0x189F4Cu;
label_189f4c:
    // 0x189f4c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x189f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189f50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189f54: 0x0  nop
    ctx->pc = 0x189f54u;
    // NOP
    // 0x189f58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x189f58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189f5c: 0x0  nop
    ctx->pc = 0x189f5cu;
    // NOP
    // 0x189f60: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x189F60u;
    {
        const bool branch_taken_0x189f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189f60) {
            ctx->pc = 0x189F78u;
            goto label_189f78;
        }
    }
    ctx->pc = 0x189F68u;
    // 0x189f68: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x189f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189f6c: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x189f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x189f70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189F70u;
    {
        const bool branch_taken_0x189f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189f70) {
            ctx->pc = 0x189F84u;
            goto label_189f84;
        }
    }
    ctx->pc = 0x189F78u;
label_189f78:
    // 0x189f78: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x189f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189f7c: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x189f7cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x189f80: 0xe7a200ec  swc1        $f2, 0xEC($sp)
    ctx->pc = 0x189f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_189f84:
    // 0x189f84: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x189f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189f88: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189f8c: 0xe44100c8  swc1        $f1, 0xC8($v0)
    ctx->pc = 0x189f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x189f90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189f94: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189f98: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x189f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_189f9c:
    // 0x189f9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x189f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189fa0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189fa4: 0xe44100cc  swc1        $f1, 0xCC($v0)
    ctx->pc = 0x189fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
    // 0x189fa8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189fac: 0xe44100c4  swc1        $f1, 0xC4($v0)
    ctx->pc = 0x189facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x189fb0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x189fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189fb4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x189fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189fb8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189fbc: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x189fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x189fc0: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x189fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x189fc4: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x189fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x189fc8: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x189FC8u;
    SET_GPR_U32(ctx, 31, 0x189FD0u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x189FC8u, 0x189FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FD0u;
label_189fd0:
    // 0x189fd0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189fd4: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x189fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x189fd8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x189fdc: 0x8c222508  lw          $v0, 0x2508($at)
    ctx->pc = 0x189fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2508u));
    // 0x189fe0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x189fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189fe8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x189fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x189fec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x189fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x189ff0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x189ff0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x189ff4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x189ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189ff8: 0xdc6200f8  ld          $v0, 0xF8($v1)
    ctx->pc = 0x189ff8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x189ffc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x189ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18a000: 0xfc6200f8  sd          $v0, 0xF8($v1)
    ctx->pc = 0x18a000u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 248), GPR_U64(ctx, 2));
    // 0x18a004: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18a004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18a008: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x18a008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x18a00c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x18a00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x18a010: 0x8c222508  lw          $v0, 0x2508($at)
    ctx->pc = 0x18a010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2508u));
    // 0x18a014: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18a014u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a01c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x18a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x18a020: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x18a020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18a024: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x18a024u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x18a028: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x18a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18a02c: 0xdc6200f8  ld          $v0, 0xF8($v1)
    ctx->pc = 0x18a02cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x18a030: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18a034: 0xfc6200f8  sd          $v0, 0xF8($v1)
    ctx->pc = 0x18a034u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 248), GPR_U64(ctx, 2));
    // 0x18a038: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18a03c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x18a03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x18a040: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x18a040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x18a044: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x18a044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x18a048: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x18A048u;
    SET_GPR_U32(ctx, 31, 0x18A050u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x18A050u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18A050u) { return; }
    ctx->pc = 0x18A050u;
label_18a050:
    // 0x18a050: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x18a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18a054: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x18a054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18a058: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18a05c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x18a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x18a060: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x18a060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18a064: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x18a064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x18a068: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x18A068u;
    SET_GPR_U32(ctx, 31, 0x18A070u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x18A070u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18A070u) { return; }
    ctx->pc = 0x18A070u;
label_18a070:
    // 0x18a070: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x18a070u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a074: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x18a074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x18a078: 0x3e00008  jr          $ra
    ctx->pc = 0x18A078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A080u;
}
