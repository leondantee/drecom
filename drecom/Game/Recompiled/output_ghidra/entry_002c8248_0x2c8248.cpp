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

// Function: entry_002c8248
// Address: 0x2c8248 - 0x2c8408
void entry_002c8248_0x2c8248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8248_0x2c8248");
#endif

    switch (ctx->pc) {
        case 0x2c8324u: goto label_2c8324;
        case 0x2c8390u: goto label_2c8390;
        case 0x2c839cu: goto label_2c839c;
        case 0x2c83f8u: goto label_2c83f8;
        case 0x2c8404u: goto label_2c8404;
        default: break;
    }

    ctx->pc = 0x2c8248u;

    // 0x2c8248: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c824c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2c824cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2c8250: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x2C8250u;
    {
        const bool branch_taken_0x2c8250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8250) {
            ctx->pc = 0x2C8408u;
            return;
        }
    }
    ctx->pc = 0x2C8258u;
    // 0x2c8258: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c825c: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2c825cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2c8260: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c8260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c8264: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x2c8264u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c8268: 0x14800067  bnez        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2C8268u;
    {
        const bool branch_taken_0x2c8268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8268) {
            ctx->pc = 0x2C8408u;
            return;
        }
    }
    ctx->pc = 0x2C8270u;
    // 0x2c8270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c8270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8274: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8278: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c8278u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c827c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8280: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c8280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8284: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8288: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c8288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c828c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8290: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c8290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8294: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8298: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c8298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c829c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2c829cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c82a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c82a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c82a8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2c82a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c82ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c82acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c82b0: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x2c82b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2c82b4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c82b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c82b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c82bc: 0x0  nop
    ctx->pc = 0x2c82bcu;
    // NOP
    // 0x2c82c0: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x2c82c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x2c82c4: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x2c82c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x2c82c8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c82cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c82ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c82d0: 0x0  nop
    ctx->pc = 0x2c82d0u;
    // NOP
    // 0x2c82d4: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x2c82d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x2c82d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c82dc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c82dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c82e0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c82e4: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x2c82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x2c82e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c82e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c82ec: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c82ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c82f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c82f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c82f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c82f8: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x2c82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c82fc: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2c82fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2c8300: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x2c8300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x2c8304: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2c8304u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c8308: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c830c: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2c830cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2c8310: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x2c8310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x2c8314: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2c8314u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c8318: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2c8318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c831c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C831Cu;
    SET_GPR_U32(ctx, 31, 0x2C8324u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C831Cu, 0x2C8324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8324u;
label_2c8324:
    // 0x2c8324: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2c8324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2c8328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c832c: 0x0  nop
    ctx->pc = 0x2c832cu;
    // NOP
    // 0x2c8330: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2c8330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c8334: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c8334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c8338: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c8338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c833c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c833cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8340: 0x0  nop
    ctx->pc = 0x2c8340u;
    // NOP
    // 0x2c8344: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c8344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c8348: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c8348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c834c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c834cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8350: 0x0  nop
    ctx->pc = 0x2c8350u;
    // NOP
    // 0x2c8354: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2c8354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c8358: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c835c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c8360: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c8360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c8364: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c8364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c8368: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c8368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c836c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c8370: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c8370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c8374: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c8374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c8378: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c8378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c837c: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c837cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c8380: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c8380u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8384: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c8384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c8388: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C8388u;
    SET_GPR_U32(ctx, 31, 0x2C8390u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C8388u, 0x2C8390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8390u;
label_2c8390:
    // 0x2c8390: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c8390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c8394: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C8394u;
    SET_GPR_U32(ctx, 31, 0x2C839Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C8394u, 0x2C839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C839Cu;
label_2c839c:
    // 0x2c839c: 0x3c03c220  lui         $v1, 0xC220
    ctx->pc = 0x2c839cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49696 << 16));
    // 0x2c83a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c83a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c83a4: 0x0  nop
    ctx->pc = 0x2c83a4u;
    // NOP
    // 0x2c83a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2c83a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c83ac: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2c83acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2c83b0: 0x3473999a  ori         $s3, $v1, 0x999A
    ctx->pc = 0x2c83b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2c83b4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2c83b4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c83b8: 0x0  nop
    ctx->pc = 0x2c83b8u;
    // NOP
    // 0x2c83bc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c83bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c83c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c83c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c83c4: 0x8c700130  lw          $s0, 0x130($v1)
    ctx->pc = 0x2c83c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2c83c8: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x2c83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2c83cc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2c83ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c83d0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2c83d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2c83d4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2c83d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c83d8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2c83d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2c83dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c83dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c83e0: 0xa33824  and         $a3, $a1, $v1
    ctx->pc = 0x2c83e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2c83e4: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c83e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c83e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c83e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c83ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c83ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c83f0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C83F0u;
    SET_GPR_U32(ctx, 31, 0x2C83F8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C83F0u, 0x2C83F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C83F8u;
label_2c83f8:
    // 0x2c83f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c83f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c83fc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C83FCu;
    SET_GPR_U32(ctx, 31, 0x2C8404u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C83FCu, 0x2C8404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8404u;
label_2c8404:
    // 0x2c8404: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2c8404u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2c8408u;
}
