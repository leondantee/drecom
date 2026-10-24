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

// Function: entry_003303c8
// Address: 0x3303c8 - 0x3308cc
void entry_003303c8_0x3303c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003303c8_0x3303c8");
#endif

    switch (ctx->pc) {
        case 0x330590u: goto label_330590;
        case 0x3305b0u: goto label_3305b0;
        case 0x3305ecu: goto label_3305ec;
        case 0x330608u: goto label_330608;
        case 0x330648u: goto label_330648;
        case 0x330668u: goto label_330668;
        case 0x3306a4u: goto label_3306a4;
        case 0x3306c4u: goto label_3306c4;
        case 0x330710u: goto label_330710;
        case 0x330790u: goto label_330790;
        case 0x3307d4u: goto label_3307d4;
        case 0x330808u: goto label_330808;
        case 0x330898u: goto label_330898;
        case 0x3308c4u: goto label_3308c4;
        default: break;
    }

    ctx->pc = 0x3303c8u;

    // 0x3303c8: 0x2ae20004  slti        $v0, $s7, 0x4
    ctx->pc = 0x3303c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3303cc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3303CCu;
    {
        const bool branch_taken_0x3303cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3303cc) {
            ctx->pc = 0x330370u;
            return;
        }
    }
    ctx->pc = 0x3303D4u;
    // 0x3303d4: 0x8e636610  lw          $v1, 0x6610($s3)
    ctx->pc = 0x3303d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
    // 0x3303d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3303d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3303dc: 0x0  nop
    ctx->pc = 0x3303dcu;
    // NOP
    // 0x3303e0: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x3303e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3303e4: 0xc7ac0180  lwc1        $f12, 0x180($sp)
    ctx->pc = 0x3303e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3303e8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x3303e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3303ec: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x3303ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x3303f0: 0x8e626610  lw          $v0, 0x6610($s3)
    ctx->pc = 0x3303f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
    // 0x3303f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3303f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3303f8: 0x0  nop
    ctx->pc = 0x3303f8u;
    // NOP
    // 0x3303fc: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x3303fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330400: 0xc7ac0190  lwc1        $f12, 0x190($sp)
    ctx->pc = 0x330400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x330404: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x330404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x330408: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x330408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x33040c: 0x8e666610  lw          $a2, 0x6610($s3)
    ctx->pc = 0x33040cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
    // 0x330410: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x330410u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x330414: 0x0  nop
    ctx->pc = 0x330414u;
    // NOP
    // 0x330418: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x330418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33041c: 0xc7ac01a0  lwc1        $f12, 0x1A0($sp)
    ctx->pc = 0x33041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x330420: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x330420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x330424: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x330424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x330428: 0x8e676610  lw          $a3, 0x6610($s3)
    ctx->pc = 0x330428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
    // 0x33042c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x33042cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x330430: 0x0  nop
    ctx->pc = 0x330430u;
    // NOP
    // 0x330434: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x330434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330438: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp)
    ctx->pc = 0x330438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33043c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x33043cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x330440: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x330440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x330444: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x330444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
    // 0x330448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33044c: 0x0  nop
    ctx->pc = 0x33044cu;
    // NOP
    // 0x330450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330454: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x330454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330458: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33045c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x33045cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x330460: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x330460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
    // 0x330464: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x330468: 0x0  nop
    ctx->pc = 0x330468u;
    // NOP
    // 0x33046c: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x33046cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330470: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x330470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330474: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x330478: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x330478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x33047c: 0x8e636614  lw          $v1, 0x6614($s3)
    ctx->pc = 0x33047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
    // 0x330480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330484: 0x0  nop
    ctx->pc = 0x330484u;
    // NOP
    // 0x330488: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33048c: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x33048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330490: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x330490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x330494: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x330494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x330498: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x330498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
    // 0x33049c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33049cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3304a0: 0x0  nop
    ctx->pc = 0x3304a0u;
    // NOP
    // 0x3304a4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x3304a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3304a8: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x3304a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3304ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3304acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3304b0: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x3304b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x3304b4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3304b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3304b8: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x3304b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x3304bc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x3304bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x3304c0: 0x3c088800  lui         $t0, 0x8800
    ctx->pc = 0x3304c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34816 << 16));
    // 0x3304c4: 0x35033b14  ori         $v1, $t0, 0x3B14
    ctx->pc = 0x3304c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15124);
    // 0x3304c8: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x3304c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x3304cc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3304ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x3304d0: 0x8fa70264  lw          $a3, 0x264($sp)
    ctx->pc = 0x3304d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x3304d4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3304d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3304d8: 0x34460040  ori         $a2, $v0, 0x40
    ctx->pc = 0x3304d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3304dc: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x3304dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x3304e0: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x3304e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x3304e4: 0x34c38000  ori         $v1, $a2, 0x8000
    ctx->pc = 0x3304e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x3304e8: 0x8fa70264  lw          $a3, 0x264($sp)
    ctx->pc = 0x3304e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x3304ec: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x3304ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3304f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3304f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3304f4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3304f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3304f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3304f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3304fc: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x3304fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x330500: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x330500u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x330504: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x330504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x330508: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x330508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33050c: 0x8fa80264  lw          $t0, 0x264($sp)
    ctx->pc = 0x33050cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x330510: 0x25030014  addiu       $v1, $t0, 0x14
    ctx->pc = 0x330510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x330514: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x330514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x330518: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x330518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33051c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x33051cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x330520: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x330520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x330524: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x330524u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x330528: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x330528u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x33052c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x33052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x330530: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x330530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x330534: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x330534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x330538: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x330538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33053c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x33053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x330540: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x330540u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x330544: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x330544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x330548: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x330548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33054c: 0x39400  sll         $s2, $v1, 16
    ctx->pc = 0x33054cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x330550: 0xd23825  or          $a3, $a2, $s2
    ctx->pc = 0x330550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x330554: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x330554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x330558: 0x24c3002c  addiu       $v1, $a2, 0x2C
    ctx->pc = 0x330558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
    // 0x33055c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x33055cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x330560: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x330560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x330564: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x330564u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x330568: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x330568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33056c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33056cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x330570: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x330570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x330574: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x330574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x330578: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x330578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x33057c: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x33057cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x330580: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x330580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x330584: 0xc7ac0180  lwc1        $f12, 0x180($sp)
    ctx->pc = 0x330584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x330588: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x330588u;
    SET_GPR_U32(ctx, 31, 0x330590u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330588u, 0x330590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330590u;
label_330590:
    // 0x330590: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x330590u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x330594: 0x24c37000  addiu       $v1, $a2, 0x7000
    ctx->pc = 0x330594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x330598: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x330598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33059c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x33059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x3305a0: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x3305a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3305a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3305a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3305a8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x3305A8u;
    SET_GPR_U32(ctx, 31, 0x3305B0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x3305A8u, 0x3305B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305B0u;
label_3305b0:
    // 0x3305b0: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x3305b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3305b4: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x3305b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x3305b8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3305b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3305bc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x3305bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3305c0: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x3305c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3305c4: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x3305c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x3305c8: 0x24430018  addiu       $v1, $v0, 0x18
    ctx->pc = 0x3305c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3305cc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3305ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x3305d0: 0x3406fffb  ori         $a2, $zero, 0xFFFB
    ctx->pc = 0x3305d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3305d4: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x3305d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x3305d8: 0x2443001c  addiu       $v1, $v0, 0x1C
    ctx->pc = 0x3305d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x3305dc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3305dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x3305e0: 0xc7ac0190  lwc1        $f12, 0x190($sp)
    ctx->pc = 0x3305e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3305e4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x3305E4u;
    SET_GPR_U32(ctx, 31, 0x3305ECu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x3305E4u, 0x3305ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305ECu;
label_3305ec:
    // 0x3305ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3305ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3305f0: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x3305f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x3305f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3305f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3305f8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x3305f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x3305fc: 0xc7ac0194  lwc1        $f12, 0x194($sp)
    ctx->pc = 0x3305fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x330600: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x330600u;
    SET_GPR_U32(ctx, 31, 0x330608u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330600u, 0x330608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330608u;
label_330608:
    // 0x330608: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x330608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33060c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x33060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x330610: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x330610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x330614: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x330614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x330618: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x330618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33061c: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x33061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x330620: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x330620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x330624: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x330624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x330628: 0x3406fffb  ori         $a2, $zero, 0xFFFB
    ctx->pc = 0x330628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x33062c: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x33062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x330630: 0x24620028  addiu       $v0, $v1, 0x28
    ctx->pc = 0x330630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x330634: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x330634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x330638: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x330638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33063c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33063cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x330640: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x330640u;
    SET_GPR_U32(ctx, 31, 0x330648u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330640u, 0x330648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330648u;
label_330648:
    // 0x330648: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x330648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33064c: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x33064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x330650: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x330650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x330654: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x330654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x330658: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x330658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33065c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x33065cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x330660: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x330660u;
    SET_GPR_U32(ctx, 31, 0x330668u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330660u, 0x330668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330668u;
label_330668:
    // 0x330668: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x330668u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33066c: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x33066cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x330670: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x330670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x330674: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x330674u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330678: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x330678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33067c: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x33067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x330680: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x330680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x330684: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x330684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x330688: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x330688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x33068c: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x33068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x330690: 0x24660034  addiu       $a2, $v1, 0x34
    ctx->pc = 0x330690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x330694: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x330694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x330698: 0xc7ac01b0  lwc1        $f12, 0x1B0($sp)
    ctx->pc = 0x330698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33069c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x33069Cu;
    SET_GPR_U32(ctx, 31, 0x3306A4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x33069Cu, 0x3306A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3306A4u;
label_3306a4:
    // 0x3306a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3306a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3306a8: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x3306a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3306ac: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3306acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3306b0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3306b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x3306b4: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x3306b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3306b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3306b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3306bc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x3306BCu;
    SET_GPR_U32(ctx, 31, 0x3306C4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x3306BCu, 0x3306C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3306C4u;
label_3306c4:
    // 0x3306c4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3306c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3306c8: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x3306c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x3306cc: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x3306ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3306d0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3306d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3306d4: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x3306d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3306d8: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x3306d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x3306dc: 0x2447003c  addiu       $a3, $v0, 0x3C
    ctx->pc = 0x3306dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x3306e0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3306e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3306e4: 0x3406fffb  ori         $a2, $zero, 0xFFFB
    ctx->pc = 0x3306e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3306e8: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x3306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x3306ec: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x3306ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3306f0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3306f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x3306f4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x3306f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x3306f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3306f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3306fc: 0x2443e7a8  addiu       $v1, $v0, -0x1858
    ctx->pc = 0x3306fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
    // 0x330700: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x330700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x330704: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x330704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x330708: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x330708u;
    SET_GPR_U32(ctx, 31, 0x330710u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x330710u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x330710u) { return; }
    ctx->pc = 0x330710u;
label_330710:
    // 0x330710: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x330710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x330714: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x330714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x330718: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x330718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x33071c: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x33071cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x330720: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x330720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x330724: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x330724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x330728: 0xdd420018  ld          $v0, 0x18($t2)
    ctx->pc = 0x330728u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x33072c: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x33072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x330730: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x330730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x330734: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x330734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x330738: 0xdd420018  ld          $v0, 0x18($t2)
    ctx->pc = 0x330738u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x33073c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x33073cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x330740: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x330740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x330744: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x330744u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x330748: 0x3597c  dsll32      $t3, $v1, 5
    ctx->pc = 0x330748u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 5));
    // 0x33074c: 0x3c07fff8  lui         $a3, 0xFFF8
    ctx->pc = 0x33074cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65528 << 16));
    // 0x330750: 0x34e3001f  ori         $v1, $a3, 0x1F
    ctx->pc = 0x330750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)31);
    // 0x330754: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x330754u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x330758: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x330758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33075c: 0x61c38  dsll        $v1, $a2, 16
    ctx->pc = 0x33075cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 16);
    // 0x330760: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x330760u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x330764: 0x1074825  or          $t1, $t0, $a3
    ctx->pc = 0x330764u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x330768: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x330768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x33076c: 0x4b1825  or          $v1, $v0, $t3
    ctx->pc = 0x33076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x330770: 0xfd430018  sd          $v1, 0x18($t2)
    ctx->pc = 0x330770u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 3));
    // 0x330774: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x330774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x330778: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x330778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x33077c: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x33077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x330780: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x330780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x330784: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x330784u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x330788: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x330788u;
    SET_GPR_U32(ctx, 31, 0x330790u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x330788u, 0x330790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330790u;
label_330790:
    // 0x330790: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x330790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x330794: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x330794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x330798: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x330798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    // 0x33079c: 0x26a30028  addiu       $v1, $s5, 0x28
    ctx->pc = 0x33079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x3307a0: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x3307a0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3307a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3307a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3307a8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3307a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x3307ac: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3307acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3307b0: 0x34661043  ori         $a2, $v1, 0x1043
    ctx->pc = 0x3307b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x3307b4: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x3307b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
    // 0x3307b8: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x3307b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3307bc: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x3307bcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
    // 0x3307c0: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x3307c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3307c4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x3307c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3307c8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x3307c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x3307cc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3307CCu;
    SET_GPR_U32(ctx, 31, 0x3307D4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3307CCu, 0x3307D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3307D4u;
label_3307d4:
    // 0x3307d4: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x3307d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3307d8: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x3307d8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3307dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3307dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3307e0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3307e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x3307e4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3307e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3307e8: 0x34661048  ori         $a2, $v1, 0x1048
    ctx->pc = 0x3307e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x3307ec: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x3307ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
    // 0x3307f0: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x3307f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
    // 0x3307f4: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x3307f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3307f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3307f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3307fc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x3307fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x330800: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x330800u;
    SET_GPR_U32(ctx, 31, 0x330808u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x330800u, 0x330808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330808u;
label_330808:
    // 0x330808: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x330808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x33080c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x33080cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x330810: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x330810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x330814: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x330814u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x330818: 0x3c090400  lui         $t1, 0x400
    ctx->pc = 0x330818u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1024 << 16));
    // 0x33081c: 0x35221009  ori         $v0, $t1, 0x1009
    ctx->pc = 0x33081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4105);
    // 0x330820: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x330820u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x330824: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x330824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x330828: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x330828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x33082c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x33082cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x330830: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x330830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x330834: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x330834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x330838: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x330838u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33083c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x33083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x330840: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x330840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x330844: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x330844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x330848: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x330848u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x33084c: 0x61bb8  dsll        $v1, $a2, 14
    ctx->pc = 0x33084cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 14);
    // 0x330850: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x330850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x330854: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x330854u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x330858: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x330858u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x33085c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x33085cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x330860: 0x61638  dsll        $v0, $a2, 24
    ctx->pc = 0x330860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 24);
    // 0x330864: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x330864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x330868: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x330868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33086c: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x33086cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x330870: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x330870u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x330874: 0x618bc  dsll32      $v1, $a2, 2
    ctx->pc = 0x330874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 2));
    // 0x330878: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x330878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x33087c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x33087cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x330880: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x330880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x330884: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x330884u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x330888: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x330888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x33088c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x33088cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x330890: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x330890u;
    SET_GPR_U32(ctx, 31, 0x330898u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x330890u, 0x330898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330898u;
label_330898:
    // 0x330898: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x330898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x33089c: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x33089cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3308a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3308a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3308a4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3308a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x3308a8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3308a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3308ac: 0x3443103f  ori         $v1, $v0, 0x103F
    ctx->pc = 0x3308acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x3308b0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3308b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x3308b4: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x3308b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3308b8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x3308b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x3308bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3308BCu;
    SET_GPR_U32(ctx, 31, 0x3308C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3308BCu, 0x3308C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3308C4u;
label_3308c4:
    // 0x3308c4: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x3308c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3308c8: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x3308c8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3308ccu;
}
