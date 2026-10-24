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

// Function: entry_00294400
// Address: 0x294400 - 0x2944f8
void entry_00294400_0x294400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294400_0x294400");
#endif

    ctx->pc = 0x294400u;

    // 0x294400: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294404: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294408: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x29440c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29440cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294410: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x294410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294414: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x294414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x294418: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x29441c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29441cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294420: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294424: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294428: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x294428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29442c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x29442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294430: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x294430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294434: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x294434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x294438: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x29443c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294440: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294448: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x294448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29444c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x29444cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x294450: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294454: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294458: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x29445c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29445cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294460: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x294460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294464: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x294464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294468: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x294468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29446c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x29446cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x294470: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294474: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294478: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x29447c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29447cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294480: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x294480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294484: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x294484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294488: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x294488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29448c: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x29448cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x294490: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294494: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294498: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x29449c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2944a0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2944a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2944a4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2944a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2944a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2944a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2944ac: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x2944acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x2944b0: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x2944b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x2944b4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2944b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2944b8: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2944b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2944bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2944bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2944c0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2944c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2944c4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2944c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2944c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2944c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2944cc: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2944ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2944d0: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x2944d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x2944d4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2944d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2944d8: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2944d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2944dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2944dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2944e0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x2944e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2944e4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2944e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2944e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2944e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2944ec: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2944ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2944f0: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x2944f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x2944f4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2944f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x2944f8u;
}
