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

// Function: entry_002cb1f8
// Address: 0x2cb1f8 - 0x2cb384
void entry_002cb1f8_0x2cb1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cb1f8_0x2cb1f8");
#endif

    switch (ctx->pc) {
        case 0x2cb210u: goto label_2cb210;
        case 0x2cb230u: goto label_2cb230;
        case 0x2cb240u: goto label_2cb240;
        case 0x2cb250u: goto label_2cb250;
        case 0x2cb288u: goto label_2cb288;
        case 0x2cb364u: goto label_2cb364;
        default: break;
    }

    ctx->pc = 0x2cb1f8u;

    // 0x2cb1f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1fc: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2cb1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb200: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb204: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cb204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb208: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CB208u;
    SET_GPR_U32(ctx, 31, 0x2CB210u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CB208u, 0x2CB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB210u;
label_2cb210:
    // 0x2cb210: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb218: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb21c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb220: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cb220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cb224: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cb224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cb228: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CB228u;
    SET_GPR_U32(ctx, 31, 0x2CB230u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CB228u, 0x2CB230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB230u;
label_2cb230:
    // 0x2cb230: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb234: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cb234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cb238: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CB238u;
    SET_GPR_U32(ctx, 31, 0x2CB240u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CB238u, 0x2CB240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB240u;
label_2cb240:
    // 0x2cb240: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cb240u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cb244: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb248: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CB248u;
    SET_GPR_U32(ctx, 31, 0x2CB250u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CB248u, 0x2CB250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB250u;
label_2cb250:
    // 0x2cb250: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cb250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cb254: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb258: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cb258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cb25c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2CB25Cu;
    {
        const bool branch_taken_0x2cb25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb25c) {
            ctx->pc = 0x2CB384u;
            return;
        }
    }
    ctx->pc = 0x2CB264u;
    // 0x2cb264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb268: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb26c: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2cb26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2cb270: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x2cb270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x2cb274: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2cb274u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb278: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb27c: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cb27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cb280: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CB280u;
    SET_GPR_U32(ctx, 31, 0x2CB288u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CB280u, 0x2CB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB288u;
label_2cb288:
    // 0x2cb288: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cb288u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cb28c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cb28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cb290: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2cb290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2cb294: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x2cb294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2cb298: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2cb298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cb29c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cb29cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cb2a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2a4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cb2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb2a8: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x2cb2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cb2ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2b0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2cb2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2b4: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2cb2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2cb2b8: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x2cb2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x2cb2bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2c0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2cb2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2c4: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2cb2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2cb2c8: 0xe5000044  swc1        $f0, 0x44($t0)
    ctx->pc = 0x2cb2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 68), bits); }
    // 0x2cb2cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cb2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb2d8: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2cb2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2cb2dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2e4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cb2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cb2e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2f0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2cb2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2cb2f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2fc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2cb2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2cb300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb304: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb308: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cb308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cb30c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb310: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb314: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2cb314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb318: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb31c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2cb31cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb320: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb324: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2cb324u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb328: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb32c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2cb32cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb330: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb334: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cb334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cb338: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb33c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb340: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2cb340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2cb344: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2cb344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2cb348: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2cb348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2cb34c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cb34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb350: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb354: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cb354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb358: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2cb358u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cb35c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CB35Cu;
    SET_GPR_U32(ctx, 31, 0x2CB364u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CB35Cu, 0x2CB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB364u;
label_2cb364:
    // 0x2cb364: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2cb364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cb368: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2cb368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2cb36c: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2cb36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2cb370: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2cb370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2cb374: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2cb374u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2cb378: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb37c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cb37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb380: 0xa4850058  sh          $a1, 0x58($a0)
    ctx->pc = 0x2cb380u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x2cb384u;
}
