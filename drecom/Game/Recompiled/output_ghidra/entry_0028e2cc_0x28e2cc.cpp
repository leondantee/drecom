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

// Function: entry_0028e2cc
// Address: 0x28e2cc - 0x28e3dc
void entry_0028e2cc_0x28e2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e2cc_0x28e2cc");
#endif

    ctx->pc = 0x28e2ccu;

    // 0x28e2cc: 0x26024970  addiu       $v0, $s0, 0x4970
    ctx->pc = 0x28e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18800));
    // 0x28e2d0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x28e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x28e2d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28e2d8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x28e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x28e2dc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28e2e0: 0x3442103b  ori         $v0, $v0, 0x103B
    ctx->pc = 0x28e2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x28e2e4: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x28e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x28e2e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28e2ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28e2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28e2f0: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x28e2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x28e2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e2f8: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x28e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28e2fc: 0x24670018  addiu       $a3, $v1, 0x18
    ctx->pc = 0x28e2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x28e300: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x28e300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28e304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e308: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28e308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28e30c: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x28e30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x28e310: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x28e310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x28e314: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x28e314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28e318: 0xa0e20004  sb          $v0, 0x4($a3)
    ctx->pc = 0x28e318u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x28e31c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28e320: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x28e320u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x28e324: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28e328: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x28e328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x28e32c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x28e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x28e330: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x28e330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x28e334: 0xfea30008  sd          $v1, 0x8($s5)
    ctx->pc = 0x28e334u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x28e338: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28e338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28e33c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x28e340: 0x3c038800  lui         $v1, 0x8800
    ctx->pc = 0x28e340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34816 << 16));
    // 0x28e344: 0x34623b14  ori         $v0, $v1, 0x3B14
    ctx->pc = 0x28e344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15124);
    // 0x28e348: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x28e348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x28e34c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e350: 0x94222834  lhu         $v0, 0x2834($at)
    ctx->pc = 0x28e350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622834u));
    // 0x28e354: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e358: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e35c: 0x94222830  lhu         $v0, 0x2830($at)
    ctx->pc = 0x28e35cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622830u));
    // 0x28e360: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e364: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x28e364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e368: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x28e368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x28e36c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e370: 0x94222836  lhu         $v0, 0x2836($at)
    ctx->pc = 0x28e370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622836u));
    // 0x28e374: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28e374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e378: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e37c: 0x94222832  lhu         $v0, 0x2832($at)
    ctx->pc = 0x28e37cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622832u));
    // 0x28e380: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28e380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e384: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28e384u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e388: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x28e388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x28e38c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28e390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e394: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x28E394u;
    {
        const bool branch_taken_0x28e394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e394) {
            ctx->pc = 0x28E500u;
            return;
        }
    }
    ctx->pc = 0x28E39Cu;
    // 0x28e39c: 0x24130100  addiu       $s3, $zero, 0x100
    ctx->pc = 0x28e39cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28e3a0: 0x241400e0  addiu       $s4, $zero, 0xE0
    ctx->pc = 0x28e3a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x28e3a4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28e3a4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e3a8: 0x0  nop
    ctx->pc = 0x28e3a8u;
    // NOP
    // 0x28e3ac: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28e3acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28e3b0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x28e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x28e3b4: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x28e3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x28e3b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e3bc: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x28e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x28e3c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E3C0u;
    {
        const bool branch_taken_0x28e3c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28e3c0) {
            ctx->pc = 0x28E3DCu;
            return;
        }
    }
    ctx->pc = 0x28E3C8u;
    // 0x28e3c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e3cc: 0x0  nop
    ctx->pc = 0x28e3ccu;
    // NOP
    // 0x28e3d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e3d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28e3d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E3D4u;
    {
        const bool branch_taken_0x28e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e3d4) {
            ctx->pc = 0x28E3F8u;
            return;
        }
    }
    ctx->pc = 0x28E3DCu;
}
