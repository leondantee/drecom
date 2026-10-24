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

// Function: caseD_0
// Address: 0x23f7cc - 0x23fa28
void caseD_0_0x23f7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x23f7cc");
#endif

    switch (ctx->pc) {
        case 0x23f804u: goto label_23f804;
        case 0x23fa04u: goto label_23fa04;
        default: break;
    }

    ctx->pc = 0x23f7ccu;

    // 0x23f7cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f7d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f7d4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23f7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f7d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f7d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f7dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f7e0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x23f7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x23f7e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f7e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f7ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23f7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23f7f0: 0x24060417  addiu       $a2, $zero, 0x417
    ctx->pc = 0x23f7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x23f7f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23f7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f7f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23f7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23f7fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23F7FCu;
    SET_GPR_U32(ctx, 31, 0x23F804u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23F7FCu, 0x23F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F804u;
label_23f804:
    // 0x23f804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f808: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f80c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f810: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23f810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23f814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f818: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f81c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f820: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23f820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23f824: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23f824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23f828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f82c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f830: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f834: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23f834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23f838: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23f838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23f83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f844: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f848: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23f848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23f84c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f850: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f854: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x23f858: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x23f858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x23f85c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23f85cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x23f860: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f864: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f868: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x23f868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23f86c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x23f86cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x23f870: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x23f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x23f874: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23f874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23f878: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23f878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x23f87c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f87cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f880: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f884: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f888: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x23f888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x23f88c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x23f88cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x23f890: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x23f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x23f894: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23f898: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23f898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x23f89c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f89cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f8a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f8a4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f8a8: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x23f8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x23f8ac: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f8acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f8b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f8b4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f8b8: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x23f8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x23f8bc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f8c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f8c4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f8c8: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x23f8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x23f8cc: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x23f8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x23f8d0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x23f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x23f8d4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23f8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23f8d8: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x23f8dc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f8e0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x23f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x23f8e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f8e8: 0x0  nop
    ctx->pc = 0x23f8e8u;
    // NOP
    // 0x23f8ec: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x23f8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x23f8f0: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x23f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x23f8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f8f8: 0x0  nop
    ctx->pc = 0x23f8f8u;
    // NOP
    // 0x23f8fc: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x23f8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x23f900: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f904: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f908: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x23f908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x23f90c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f90cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f910: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f914: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f918: 0x24500240  addiu       $s0, $v0, 0x240
    ctx->pc = 0x23f918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x23f91c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f920: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f924: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f928: 0x245006c0  addiu       $s0, $v0, 0x6C0
    ctx->pc = 0x23f928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x23f92c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23f92cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f934: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f938: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x23f938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x23f93c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f940: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f944: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23f944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x23f948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f94c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f950: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x23f950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x23f954: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x23f954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x23f958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f95c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f960: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f964: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x23f964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x23f968: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x23f968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x23f96c: 0x9462002e  lhu         $v0, 0x2E($v1)
    ctx->pc = 0x23f96cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x23f970: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x23f970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x23f974: 0xa462002e  sh          $v0, 0x2E($v1)
    ctx->pc = 0x23f974u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x23f978: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f97c: 0x245310b0  addiu       $s3, $v0, 0x10B0
    ctx->pc = 0x23f97cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x23f980: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x23f980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x23f984: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x23f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x23f988: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x23f988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23f98c: 0xae6200f0  sw          $v0, 0xF0($s3)
    ctx->pc = 0x23f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 2));
    // 0x23f990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f994: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f998: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x23f998u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x23f99c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f9a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x23f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23f9a4: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x23f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x23f9a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23f9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23f9ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x23f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x23f9b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f9b4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x23f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x23f9b8: 0x24523b60  addiu       $s2, $v0, 0x3B60
    ctx->pc = 0x23f9b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
    // 0x23f9bc: 0x26430150  addiu       $v1, $s2, 0x150
    ctx->pc = 0x23f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x23f9c0: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x23f9c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x23f9c4: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x23f9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x23f9c8: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x23f9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x23f9cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f9d0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f9d4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x23f9d8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x23f9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x23f9dc: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x23f9e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23f9e4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23f9e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23f9ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23f9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f9f0: 0x2404051e  addiu       $a0, $zero, 0x51E
    ctx->pc = 0x23f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
    // 0x23f9f4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23f9f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23f9f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23f9fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23F9FCu;
    SET_GPR_U32(ctx, 31, 0x23FA04u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23F9FCu, 0x23FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA04u;
label_23fa04:
    // 0x23fa04: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23fa08: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23fa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23fa0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23fa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23fa10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fa14: 0x24040517  addiu       $a0, $zero, 0x517
    ctx->pc = 0x23fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1303));
    // 0x23fa18: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23fa1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23fa1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23fa20: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23FA20u;
    SET_GPR_U32(ctx, 31, 0x23FA28u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23FA20u, 0x23FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA28u;
}
