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

// Function: entry_00294864
// Address: 0x294864 - 0x294940
void entry_00294864_0x294864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294864_0x294864");
#endif

    ctx->pc = 0x294864u;

    // 0x294864: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x294864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x294868: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x294868u;
    {
        const bool branch_taken_0x294868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x294868) {
            ctx->pc = 0x2949CCu;
            return;
        }
    }
    ctx->pc = 0x294870u;
    // 0x294870: 0x261100e0  addiu       $s1, $s0, 0xE0
    ctx->pc = 0x294870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x294874: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x294874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294878: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x294878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29487c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29487cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294880: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x294880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x294884: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x294884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294888: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x294888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29488c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29488cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294890: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x294890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x294894: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x294894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294898: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x294898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29489c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29489cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2948a0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2948a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2948a4: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2948a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2948a8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2948a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2948ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2948acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2948b0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2948b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2948b4: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2948b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2948b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2948b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2948bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2948bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2948c0: 0x0  nop
    ctx->pc = 0x2948c0u;
    // NOP
    // 0x2948c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2948c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2948c8: 0x0  nop
    ctx->pc = 0x2948c8u;
    // NOP
    // 0x2948cc: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x2948CCu;
    {
        const bool branch_taken_0x2948cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2948cc) {
            ctx->pc = 0x294940u;
            return;
        }
    }
    ctx->pc = 0x2948D4u;
    // 0x2948d4: 0x8e120078  lw          $s2, 0x78($s0)
    ctx->pc = 0x2948d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2948d8: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x2948d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2948dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2948dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2948e0: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2948e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2948e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2948e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2948e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2948e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2948ec: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2948ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2948f0: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x2948f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2948f4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2948f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2948f8: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2948f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2948fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2948fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294900: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x294900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294904: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x294904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x294908: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x294908u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x29490c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29490cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294910: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294918: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x294918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29491c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x29491cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x294920: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x294920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x294924: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294928: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x29492c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294930: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x294930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294934: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x294934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x294938: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x294938u;
    {
        const bool branch_taken_0x294938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294938) {
            ctx->pc = 0x294CE8u;
            return;
        }
    }
    ctx->pc = 0x294940u;
}
