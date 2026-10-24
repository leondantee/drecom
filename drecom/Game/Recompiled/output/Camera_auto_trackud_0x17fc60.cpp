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

// Function: Camera_auto_trackud
// Address: 0x17fc60 - 0x180a38
void Camera_auto_trackud_0x17fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_auto_trackud_0x17fc60");
#endif

    switch (ctx->pc) {
        case 0x17fe90u: goto label_17fe90;
        case 0x180000u: goto label_180000;
        case 0x1800c4u: goto label_1800c4;
        case 0x180190u: goto label_180190;
        case 0x180268u: goto label_180268;
        case 0x180294u: goto label_180294;
        case 0x1802bcu: goto label_1802bc;
        case 0x1802dcu: goto label_1802dc;
        case 0x180304u: goto label_180304;
        case 0x180334u: goto label_180334;
        case 0x180354u: goto label_180354;
        case 0x180388u: goto label_180388;
        case 0x1804acu: goto label_1804ac;
        case 0x180688u: goto label_180688;
        case 0x1806b4u: goto label_1806b4;
        case 0x1806dcu: goto label_1806dc;
        case 0x180700u: goto label_180700;
        case 0x180728u: goto label_180728;
        case 0x180758u: goto label_180758;
        case 0x180778u: goto label_180778;
        case 0x1807acu: goto label_1807ac;
        case 0x1808f8u: goto label_1808f8;
        case 0x180a10u: goto label_180a10;
        case 0x180a24u: goto label_180a24;
        default: break;
    }

    ctx->pc = 0x17fc60u;

    // 0x17fc60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17fc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17fc64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x17fc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x17fc68: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x17fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x17fc6c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fc70: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x17fc70u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fc74: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x17fc74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17fc78: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17fc78u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17fc7c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17fc80: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x17fc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17fc84: 0x53940  sll         $a3, $a1, 5
    ctx->pc = 0x17fc84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17fc88: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x17fc88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x17fc8c: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x17fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x17fc90: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x17fc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17fc94: 0x90c30154  lbu         $v1, 0x154($a2)
    ctx->pc = 0x17fc94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x17fc98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x17fc98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17fc9c: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x17fc9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17fca0: 0x14200361  bnez        $at, . + 4 + (0x361 << 2)
    ctx->pc = 0x17FCA0u;
    {
        const bool branch_taken_0x17fca0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fca0) {
            ctx->pc = 0x180A28u;
            goto label_180a28;
        }
    }
    ctx->pc = 0x17FCA8u;
    // 0x17fca8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fcac: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x17fcacu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fcb0: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x17fcb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17fcb4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x17fcb4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x17fcb8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x17fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17fcbc: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x17fcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17fcc0: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x17fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x17fcc4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x17fcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x17fcc8: 0x24851380  addiu       $a1, $a0, 0x1380
    ctx->pc = 0x17fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x17fccc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x17fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17fcd0: 0x90660155  lbu         $a2, 0x155($v1)
    ctx->pc = 0x17fcd0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 341)));
    // 0x17fcd4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x17fcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17fcd8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x17fcd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17fcdc: 0x14200352  bnez        $at, . + 4 + (0x352 << 2)
    ctx->pc = 0x17FCDCu;
    {
        const bool branch_taken_0x17fcdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fcdc) {
            ctx->pc = 0x180A28u;
            goto label_180a28;
        }
    }
    ctx->pc = 0x17FCE4u;
    // 0x17fce4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fce8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x17fce8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fcec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17fcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17fcf0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17fcf0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17fcf4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fcf8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17fcfc: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x17fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17fd00: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17fd04: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x17fd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17fd08: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x17fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17fd0c: 0x8c630158  lw          $v1, 0x158($v1)
    ctx->pc = 0x17fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x17fd10: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x17fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x17fd14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17fd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17fd18: 0x14600100  bnez        $v1, . + 4 + (0x100 << 2)
    ctx->pc = 0x17FD18u;
    {
        const bool branch_taken_0x17fd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fd18) {
            ctx->pc = 0x18011Cu;
            goto label_18011c;
        }
    }
    ctx->pc = 0x17FD20u;
    // 0x17fd20: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fd24: 0x8425f138  lh          $a1, -0xEC8($at)
    ctx->pc = 0x17fd24u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fd28: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x17fd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x17fd2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17fd2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17fd30: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fd34: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x17fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17fd38: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x17fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17fd3c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x17fd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x17fd40: 0x24a30380  addiu       $v1, $a1, 0x380
    ctx->pc = 0x17fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x17fd44: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x17fd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17fd48: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x17fd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd4c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x17fd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17fd50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fd54: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17fd54u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fd58: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17fd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17fd5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17fd5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17fd60: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x17fd60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fd64: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x17fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17fd68: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x17fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17fd6c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x17fd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x17fd70: 0x24a20380  addiu       $v0, $a1, 0x380
    ctx->pc = 0x17fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 896));
    // 0x17fd74: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fd78: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17fd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd7c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x17fd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17fd80: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fd84: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17fd84u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fd88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17fd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17fd8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17fd8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17fd90: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fd94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17fd98: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x17fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fd9c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17fda0: 0x24430380  addiu       $v1, $v0, 0x380
    ctx->pc = 0x17fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17fda4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x17fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17fda8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x17fda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fdac: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x17fdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17fdb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17fdb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fdb8: 0x0  nop
    ctx->pc = 0x17fdb8u;
    // NOP
    // 0x17fdbc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x17fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x17fdc0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x17fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17fdc4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x17fdc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17fdc8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x17fdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x17fdcc: 0x24c2f140  addiu       $v0, $a2, -0xEC0
    ctx->pc = 0x17fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963520));
    // 0x17fdd0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17fdd0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47F140u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47F140u, _value); } while (0);
    // 0x17fdd4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fdd8: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17fdd8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fddc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17fddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17fde0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17fde0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17fde4: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17fde8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x17fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17fdec: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fdf0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17fdf4: 0x24460380  addiu       $a2, $v0, 0x380
    ctx->pc = 0x17fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17fdf8: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x17fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17fdfc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x17fdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe00: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x17fe00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17fe04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fe04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fe08: 0x8424f138  lh          $a0, -0xEC8($at)
    ctx->pc = 0x17fe08u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fe0c: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x17fe0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x17fe10: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x17fe10u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x17fe14: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x17fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17fe18: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x17fe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17fe1c: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x17fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17fe20: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17fe24: 0x24630380  addiu       $v1, $v1, 0x380
    ctx->pc = 0x17fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x17fe28: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x17fe28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17fe2c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x17fe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe30: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x17fe30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17fe34: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fe34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fe38: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x17fe38u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fe3c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17fe3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17fe40: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17fe40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17fe44: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17fe48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17fe4c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x17fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17fe50: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x17fe50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x17fe54: 0x24830380  addiu       $v1, $a0, 0x380
    ctx->pc = 0x17fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x17fe58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17fe5c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x17fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fe60: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x17fe60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17fe64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17fe68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17fe68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fe6c: 0x0  nop
    ctx->pc = 0x17fe6cu;
    // NOP
    // 0x17fe70: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x17fe70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x17fe74: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17fe78: 0x2464f180  addiu       $a0, $v1, -0xE80
    ctx->pc = 0x17fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963584));
    // 0x17fe7c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x17fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17fe80: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17fe84: 0x2466f140  addiu       $a2, $v1, -0xEC0
    ctx->pc = 0x17fe84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x17fe88: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x17FE88u;
    SET_GPR_U32(ctx, 31, 0x17FE90u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x17FE88u, 0x17FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE90u;
label_17fe90:
    // 0x17fe90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x17fe90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17fe94: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x17fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x17fe98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17fe98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fe9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fe9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fea0: 0xe420f18c  swc1        $f0, -0xE74($at)
    ctx->pc = 0x17fea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F18Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F18Cu, _value); } while (0); }
    // 0x17fea4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fea8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x17fea8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x17feac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17feacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17feb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17feb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17feb4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x17feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17feb8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17febc: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x17febcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17fec0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17fec4: 0x24641380  addiu       $a0, $v1, 0x1380
    ctx->pc = 0x17fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17fec8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x17fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17fecc: 0x90630154  lbu         $v1, 0x154($v1)
    ctx->pc = 0x17feccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x17fed0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x17fed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17fed4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17fed8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fedc: 0xac23f1d0  sw          $v1, -0xE30($at)
    ctx->pc = 0x17fedcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F1D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D0u, _value); } while (0);
    // 0x17fee0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fee4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x17fee4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fee8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x17fee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17feec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17feecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17fef0: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x17fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17fef4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x17fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17fef8: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x17fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17fefc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17ff00: 0x24630380  addiu       $v1, $v1, 0x380
    ctx->pc = 0x17ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x17ff04: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x17ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17ff08: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17ff08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17ff0c: 0x8c23f1d0  lw          $v1, -0xE30($at)
    ctx->pc = 0x17ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x17ff10: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x17ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17ff14: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x17ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17ff18: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17ff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ff1c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x17ff1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17ff20: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17ff20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17ff24: 0x8424f138  lh          $a0, -0xEC8($at)
    ctx->pc = 0x17ff24u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x47F138u));
    // 0x17ff28: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x17ff28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x17ff2c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17ff2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17ff30: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x17ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17ff34: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x17ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ff38: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17ff3c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17ff40: 0x24630380  addiu       $v1, $v1, 0x380
    ctx->pc = 0x17ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x17ff44: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x17ff44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17ff48: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17ff48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17ff4c: 0x8c25f1d0  lw          $a1, -0xE30($at)
    ctx->pc = 0x17ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x17ff50: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x17ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17ff54: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x17ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17ff58: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x17ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x17ff5c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ff60: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x17ff60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17ff64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17ff64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17ff68: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x17ff68u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x17ff6c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x17ff6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17ff70: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17ff70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17ff74: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x17ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17ff78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17ff7c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17ff7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17ff80: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17ff84: 0x24630380  addiu       $v1, $v1, 0x380
    ctx->pc = 0x17ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x17ff88: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x17ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17ff8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17ff8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17ff90: 0x8c23f1d0  lw          $v1, -0xE30($at)
    ctx->pc = 0x17ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x17ff94: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x17ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x17ff98: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17ff9c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17ffa0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ffa4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x17ffa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17ffa8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x17ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x17ffac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17ffacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ffb0: 0x0  nop
    ctx->pc = 0x17ffb0u;
    // NOP
    // 0x17ffb4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x17ffb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x17ffb8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x17ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17ffbc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x17ffbcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ffc0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17ffc4: 0x2463f160  addiu       $v1, $v1, -0xEA0
    ctx->pc = 0x17ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963552));
    // 0x17ffc8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x17ffc8u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47F160u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47F160u, _value); } while (0);
    // 0x17ffcc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17ffccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17ffd0: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x17ffd0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x17ffd4: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x17ffd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17ffd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17ffd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17ffdc: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x17ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17ffe0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17ffe4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17ffe8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17ffec: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x17ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x17fff0: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x17fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17fff4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fff8: 0x8c23f1d0  lw          $v1, -0xE30($at)
    ctx->pc = 0x17fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x17fffc: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_180000:
    // 0x180000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x180000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180004: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x180004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x180008: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x180008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18000c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18000cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x180010: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180014: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x180014u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x180018: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x180018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18001c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18001cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180020: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x180020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180028: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x180028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18002c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x18002cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x180030: 0x24820380  addiu       $v0, $a0, 0x380
    ctx->pc = 0x180030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x180034: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x180034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180038: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18003c: 0x8c22f1d0  lw          $v0, -0xE30($at)
    ctx->pc = 0x18003cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x180040: 0x24450005  addiu       $a1, $v0, 0x5
    ctx->pc = 0x180040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x180044: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x180044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x180048: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x180048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18004c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180050: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x180050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x180054: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180058: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x180058u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18005c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18005cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x180060: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x180060u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x180064: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x180064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180068: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x180068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18006c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18006cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180070: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180074: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x180074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x180078: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x180078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18007c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18007cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180080: 0x8c23f1d0  lw          $v1, -0xE30($at)
    ctx->pc = 0x180080u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x180084: 0x24620006  addiu       $v0, $v1, 0x6
    ctx->pc = 0x180084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x180088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x180088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18008c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x180090: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x180090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180094: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x180094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x180098: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x180098u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x18009c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18009cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1800a0: 0x0  nop
    ctx->pc = 0x1800a0u;
    // NOP
    // 0x1800a4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1800a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1800a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1800a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1800ac: 0x2444f1a0  addiu       $a0, $v0, -0xE60
    ctx->pc = 0x1800acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963616));
    // 0x1800b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1800b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1800b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1800b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1800b8: 0x2446f160  addiu       $a2, $v0, -0xEA0
    ctx->pc = 0x1800b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963552));
    // 0x1800bc: 0xc040c80  jal         func_103200
    ctx->pc = 0x1800BCu;
    SET_GPR_U32(ctx, 31, 0x1800C4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1800C4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1800C4u) { return; }
    ctx->pc = 0x1800C4u;
label_1800c4:
    // 0x1800c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1800c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1800c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1800c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1800cc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1800ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1800d0: 0xe420f1ac  swc1        $f0, -0xE54($at)
    ctx->pc = 0x1800d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1ACu, _value); } while (0); }
    // 0x1800d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1800d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1800d8: 0xac20f1c8  sw          $zero, -0xE38($at)
    ctx->pc = 0x1800d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F1C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1C8u, _value); } while (0);
    // 0x1800dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1800dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1800e0: 0xac20f1c0  sw          $zero, -0xE40($at)
    ctx->pc = 0x1800e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F1C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1C0u, _value); } while (0);
    // 0x1800e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1800e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1800e8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1800e8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1800ec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1800ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1800f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1800f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1800f4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1800f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1800f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1800f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1800fc: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1800fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180100: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x180100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x180104: 0x24a31380  addiu       $v1, $a1, 0x1380
    ctx->pc = 0x180104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4992));
    // 0x180108: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x180108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18010c: 0x8cc40158  lw          $a0, 0x158($a2)
    ctx->pc = 0x18010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
    // 0x180110: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x180110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x180114: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x180114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x180118: 0xacc30158  sw          $v1, 0x158($a2)
    ctx->pc = 0x180118u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 344), GPR_U32(ctx, 3));
label_18011c:
    // 0x18011c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18011cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180120: 0x8c24f1c0  lw          $a0, -0xE40($at)
    ctx->pc = 0x180120u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x180124: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x180124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x180128: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18012c: 0x8425f138  lh          $a1, -0xEC8($at)
    ctx->pc = 0x18012cu;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x47F138u));
    // 0x180130: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x180130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x180134: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x180134u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180138: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x180138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18013c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180140: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x180140u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180144: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x180144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x180148: 0x24831380  addiu       $v1, $a0, 0x1380
    ctx->pc = 0x180148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x18014c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x18014cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x180150: 0x90a30154  lbu         $v1, 0x154($a1)
    ctx->pc = 0x180150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x180154: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x180154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x180158: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x180158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18015c: 0x102000ee  beqz        $at, . + 4 + (0xEE << 2)
    ctx->pc = 0x18015Cu;
    {
        const bool branch_taken_0x18015c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18015c) {
            ctx->pc = 0x180518u;
            goto label_180518;
        }
    }
    ctx->pc = 0x180164u;
    // 0x180164: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180168: 0x8424f138  lh          $a0, -0xEC8($at)
    ctx->pc = 0x180168u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x47F138u));
    // 0x18016c: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x18016cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x180170: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x180170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x180174: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x180174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180178: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x180178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18017c: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x18017cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180180: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180184: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x180184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x180188: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x180188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18018c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18018cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_180190:
    // 0x180190: 0x8c24f1c0  lw          $a0, -0xE40($at)
    ctx->pc = 0x180190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963648)));
    // 0x180194: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x180194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x180198: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x180198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18019c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18019cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1801a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1801a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1801a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1801a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1801a8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1801a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1801ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1801acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1801b0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1801b0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1801b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1801b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1801b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1801b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1801bc: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1801bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1801c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1801c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1801c4: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x1801c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1801c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1801c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1801cc: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x1801ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1801d0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1801d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1801d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1801d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1801d8: 0x8c22f1c0  lw          $v0, -0xE40($at)
    ctx->pc = 0x1801d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x1801dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1801dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1801e0: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x1801e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1801e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1801e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1801e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1801e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1801ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1801ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1801f0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1801f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1801f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1801f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1801f8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1801f8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1801fc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1801fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180200: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x180200u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180204: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x180204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x180208: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x180208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18020c: 0x53940  sll         $a3, $a1, 5
    ctx->pc = 0x18020cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x180210: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x180210u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x180214: 0x24c30380  addiu       $v1, $a2, 0x380
    ctx->pc = 0x180214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
    // 0x180218: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x180218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18021c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18021cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180220: 0x8c23f1c0  lw          $v1, -0xE40($at)
    ctx->pc = 0x180220u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x180224: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x180224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180228: 0x24830006  addiu       $v1, $a0, 0x6
    ctx->pc = 0x180228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x18022c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x18022cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180230: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x180230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x180234: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x180234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180238: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x180238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18023c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x18023cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x180240: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x180240u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180244: 0x0  nop
    ctx->pc = 0x180244u;
    // NOP
    // 0x180248: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x180248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18024c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18024cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180250: 0x2464f190  addiu       $a0, $v1, -0xE70
    ctx->pc = 0x180250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x180254: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x180254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180258: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18025c: 0x2466f140  addiu       $a2, $v1, -0xEC0
    ctx->pc = 0x18025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x180260: 0xc040c80  jal         func_103200
    ctx->pc = 0x180260u;
    SET_GPR_U32(ctx, 31, 0x180268u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x180268u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180268u) { return; }
    ctx->pc = 0x180268u;
label_180268:
    // 0x180268: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x180268u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18026c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18026cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x180270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180274: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180278: 0xe420f19c  swc1        $f0, -0xE64($at)
    ctx->pc = 0x180278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F19Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F19Cu, _value); } while (0); }
    // 0x18027c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180280: 0x2464f190  addiu       $a0, $v1, -0xE70
    ctx->pc = 0x180280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x180284: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180288: 0x2465f190  addiu       $a1, $v1, -0xE70
    ctx->pc = 0x180288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x18028c: 0xc040c24  jal         func_103090
    ctx->pc = 0x18028Cu;
    SET_GPR_U32(ctx, 31, 0x180294u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x180294u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180294u) { return; }
    ctx->pc = 0x180294u;
label_180294:
    // 0x180294: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x180294u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x180298: 0x3c03433b  lui         $v1, 0x433B
    ctx->pc = 0x180298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17211 << 16));
    // 0x18029c: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x18029cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1802a0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1802a0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1802a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1802a8: 0x2464f190  addiu       $a0, $v1, -0xE70
    ctx->pc = 0x1802a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x1802ac: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1802acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1802b0: 0x2465f190  addiu       $a1, $v1, -0xE70
    ctx->pc = 0x1802b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x1802b4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1802B4u;
    SET_GPR_U32(ctx, 31, 0x1802BCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1802BCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1802BCu) { return; }
    ctx->pc = 0x1802BCu;
label_1802bc:
    // 0x1802bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1802bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1802c0: 0x2464f150  addiu       $a0, $v1, -0xEB0
    ctx->pc = 0x1802c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963536));
    // 0x1802c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1802c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1802c8: 0x2445f180  addiu       $a1, $v0, -0xE80
    ctx->pc = 0x1802c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
    // 0x1802cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1802ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1802d0: 0x2466f190  addiu       $a2, $v1, -0xE70
    ctx->pc = 0x1802d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x1802d4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1802D4u;
    SET_GPR_U32(ctx, 31, 0x1802DCu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1802DCu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1802DCu) { return; }
    ctx->pc = 0x1802DCu;
label_1802dc:
    // 0x1802dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1802dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1802e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1802e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1802e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1802e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1802e8: 0xe420f15c  swc1        $f0, -0xEA4($at)
    ctx->pc = 0x1802e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F15Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F15Cu, _value); } while (0); }
    // 0x1802ec: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1802ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1802f0: 0x24c4f150  addiu       $a0, $a2, -0xEB0
    ctx->pc = 0x1802f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963536));
    // 0x1802f4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1802f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1802f8: 0x2465f150  addiu       $a1, $v1, -0xEB0
    ctx->pc = 0x1802f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963536));
    // 0x1802fc: 0xc040c24  jal         func_103090
    ctx->pc = 0x1802FCu;
    SET_GPR_U32(ctx, 31, 0x180304u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x180304u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180304u) { return; }
    ctx->pc = 0x180304u;
label_180304:
    // 0x180304: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x180304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x180308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18030c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18030cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180310: 0xe420f15c  swc1        $f0, -0xEA4($at)
    ctx->pc = 0x180310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F15Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F15Cu, _value); } while (0); }
    // 0x180314: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x180314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x180318: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x180318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18031c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18031cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180320: 0x2444f150  addiu       $a0, $v0, -0xEB0
    ctx->pc = 0x180320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
    // 0x180324: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180328: 0x2445f150  addiu       $a1, $v0, -0xEB0
    ctx->pc = 0x180328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
    // 0x18032c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x18032Cu;
    SET_GPR_U32(ctx, 31, 0x180334u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x180334u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180334u) { return; }
    ctx->pc = 0x180334u;
label_180334:
    // 0x180334: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180338: 0x2464f150  addiu       $a0, $v1, -0xEB0
    ctx->pc = 0x180338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963536));
    // 0x18033c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180340: 0x2445f150  addiu       $a1, $v0, -0xEB0
    ctx->pc = 0x180340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
    // 0x180344: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180348: 0x2466f140  addiu       $a2, $v1, -0xEC0
    ctx->pc = 0x180348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x18034c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x18034Cu;
    SET_GPR_U32(ctx, 31, 0x180354u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x180354u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180354u) { return; }
    ctx->pc = 0x180354u;
label_180354:
    // 0x180354: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x180354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x180358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18035c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18035cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180360: 0xe420f15c  swc1        $f0, -0xEA4($at)
    ctx->pc = 0x180360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F15Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F15Cu, _value); } while (0); }
    // 0x180364: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180368: 0x2464f180  addiu       $a0, $v1, -0xE80
    ctx->pc = 0x180368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963584));
    // 0x18036c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18036cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180370: 0x2443f150  addiu       $v1, $v0, -0xEB0
    ctx->pc = 0x180370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
    // 0x180374: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x180374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x180378: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18037c: 0x2446f140  addiu       $a2, $v0, -0xEC0
    ctx->pc = 0x18037cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x180380: 0xc040c80  jal         func_103200
    ctx->pc = 0x180380u;
    SET_GPR_U32(ctx, 31, 0x180388u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x180388u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180388u) { return; }
    ctx->pc = 0x180388u;
label_180388:
    // 0x180388: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x180388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x18038c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x18038cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180390: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180394: 0xe420f18c  swc1        $f0, -0xE74($at)
    ctx->pc = 0x180394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F18Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F18Cu, _value); } while (0); }
    // 0x180398: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x180398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x18039c: 0x24a3f150  addiu       $v1, $a1, -0xEB0
    ctx->pc = 0x18039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
    // 0x1803a0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1803a0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x47F150u));
    // 0x1803a4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1803a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1803a8: 0x2483f140  addiu       $v1, $a0, -0xEC0
    ctx->pc = 0x1803a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    // 0x1803ac: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1803acu;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47F140u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47F140u, _value); } while (0);
    // 0x1803b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1803b4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1803b4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1803b8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1803b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1803bc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1803bcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1803c0: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x1803c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1803c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1803c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1803c8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1803c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1803cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1803ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1803d0: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1803d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1803d4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1803d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1803d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1803d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1803dc: 0x8c23f1c0  lw          $v1, -0xE40($at)
    ctx->pc = 0x1803dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x1803e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1803e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1803e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1803e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1803e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1803e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1803ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1803ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1803f0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1803f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1803f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1803f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1803f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1803f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1803fc: 0x8425f138  lh          $a1, -0xEC8($at)
    ctx->pc = 0x1803fcu;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x47F138u));
    // 0x180400: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x180400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x180404: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180404u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180408: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18040c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x18040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180410: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x180410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180414: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180418: 0x24630380  addiu       $v1, $v1, 0x380
    ctx->pc = 0x180418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x18041c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x18041cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180420: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180424: 0x8c23f1c0  lw          $v1, -0xE40($at)
    ctx->pc = 0x180424u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x180428: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x180428u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18042c: 0x24a30005  addiu       $v1, $a1, 0x5
    ctx->pc = 0x18042cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x180430: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x180430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180434: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x180434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x180438: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x180438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18043c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x180440: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180444: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180444u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180448: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x180448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18044c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x18044cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180450: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x180450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x180454: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180458: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x180458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18045c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18045cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180460: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x180460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x180464: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x180464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x180468: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18046c: 0x8c23f1c0  lw          $v1, -0xE40($at)
    ctx->pc = 0x18046cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x180470: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x180470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180474: 0x24650006  addiu       $a1, $v1, 0x6
    ctx->pc = 0x180474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x180478: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x180478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18047c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180480: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x180480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180484: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x180484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x180488: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x180488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18048c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18048cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180490: 0x0  nop
    ctx->pc = 0x180490u;
    // NOP
    // 0x180494: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x180494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x180498: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x180498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x18049c: 0x2484f140  addiu       $a0, $a0, -0xEC0
    ctx->pc = 0x18049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
    // 0x1804a0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1804a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1804a4: 0xc05f7ac  jal         func_17DEB0
    ctx->pc = 0x1804A4u;
    SET_GPR_U32(ctx, 31, 0x1804ACu);
    ctx->pc = 0x17DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DEB0u, 0x1804A4u, 0x1804ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1804ACu;
label_1804ac:
    // 0x1804ac: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1804acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1804b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1804b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1804b4: 0x0  nop
    ctx->pc = 0x1804b4u;
    // NOP
    // 0x1804b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1804b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1804bc: 0x0  nop
    ctx->pc = 0x1804bcu;
    // NOP
    // 0x1804c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1804C0u;
    {
        const bool branch_taken_0x1804c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1804c0) {
            ctx->pc = 0x1804DCu;
            goto label_1804dc;
        }
    }
    ctx->pc = 0x1804C8u;
    // 0x1804c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1804c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1804cc: 0x8c24f1c0  lw          $a0, -0xE40($at)
    ctx->pc = 0x1804ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47F1C0u));
    // 0x1804d0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1804d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1804d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1804d8: 0xac23f1c0  sw          $v1, -0xE40($at)
    ctx->pc = 0x1804d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F1C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1C0u, _value); } while (0);
label_1804dc:
    // 0x1804dc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1804dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1804e0: 0x2466f140  addiu       $a2, $v1, -0xEC0
    ctx->pc = 0x1804e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x1804e4: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x1804e4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x47F140u));
    // 0x1804e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1804e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1804ec: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1804ecu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1804f0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1804f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1804f4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1804f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1804f8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1804f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1804fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1804fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180500: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x180500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180504: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180508: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x180508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x18050c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180510: 0x248300b0  addiu       $v1, $a0, 0xB0
    ctx->pc = 0x180510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x180514: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x180514u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_180518:
    // 0x180518: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18051c: 0x8c23f1c8  lw          $v1, -0xE38($at)
    ctx->pc = 0x18051cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x180520: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x180520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x180524: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180528: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180528u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18052c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x18052cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180530: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x180530u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180534: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x180534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180538: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18053c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x18053cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180540: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180544: 0x24641380  addiu       $a0, $v1, 0x1380
    ctx->pc = 0x180544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180548: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x180548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18054c: 0x90630155  lbu         $v1, 0x155($v1)
    ctx->pc = 0x18054cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 341)));
    // 0x180550: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x180550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x180554: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x180554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x180558: 0x10200102  beqz        $at, . + 4 + (0x102 << 2)
    ctx->pc = 0x180558u;
    {
        const bool branch_taken_0x180558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x180558) {
            ctx->pc = 0x180964u;
            goto label_180964;
        }
    }
    ctx->pc = 0x180560u;
    // 0x180560: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180564: 0x8c22f1d0  lw          $v0, -0xE30($at)
    ctx->pc = 0x180564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x180568: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x180568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18056c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18056cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180570: 0x8c22f1c8  lw          $v0, -0xE38($at)
    ctx->pc = 0x180570u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x180574: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x180574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180578: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x180578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18057c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x18057cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180580: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180584: 0x8424f138  lh          $a0, -0xEC8($at)
    ctx->pc = 0x180584u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x47F138u));
    // 0x180588: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x180588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x18058c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18058cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180590: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x180590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180598: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x180598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18059c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1805a0: 0x24430380  addiu       $v1, $v0, 0x380
    ctx->pc = 0x1805a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1805a4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1805a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1805a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1805a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1805ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1805acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1805b0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1805b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1805b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1805b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1805b8: 0x8c23f1d0  lw          $v1, -0xE30($at)
    ctx->pc = 0x1805b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x1805bc: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1805bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1805c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1805c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1805c4: 0x8c22f1c8  lw          $v0, -0xE38($at)
    ctx->pc = 0x1805c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x1805c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1805c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1805cc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1805ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1805d0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1805d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1805d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1805d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1805d8: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1805d8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1805dc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1805dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1805e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1805e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1805e4: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1805e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1805e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1805e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1805ec: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1805ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1805f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1805f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1805f4: 0x24430380  addiu       $v1, $v0, 0x380
    ctx->pc = 0x1805f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1805f8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1805f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1805fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1805fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x180600: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x180600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180604: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x180604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x180608: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18060c: 0x8c24f1d0  lw          $a0, -0xE30($at)
    ctx->pc = 0x18060cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x180610: 0x24830006  addiu       $v1, $a0, 0x6
    ctx->pc = 0x180610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x180614: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180618: 0x8c22f1c8  lw          $v0, -0xE38($at)
    ctx->pc = 0x180618u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x18061c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18061cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180620: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x180620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180624: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x180624u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180628: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18062c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x18062cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x180630: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x180630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x180634: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x180634u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180638: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x180638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x18063c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x18063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x180640: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x180640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180644: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180648: 0x24430380  addiu       $v1, $v0, 0x380
    ctx->pc = 0x180648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x18064c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180650: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x180650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180654: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x180654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180658: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x180658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18065c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18065cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x180660: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180664: 0x0  nop
    ctx->pc = 0x180664u;
    // NOP
    // 0x180668: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x180668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18066c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18066cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180670: 0x2464f1b0  addiu       $a0, $v1, -0xE50
    ctx->pc = 0x180670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963632));
    // 0x180674: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x180674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180678: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18067c: 0x2466f160  addiu       $a2, $v1, -0xEA0
    ctx->pc = 0x18067cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963552));
    // 0x180680: 0xc040c80  jal         func_103200
    ctx->pc = 0x180680u;
    SET_GPR_U32(ctx, 31, 0x180688u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x180688u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180688u) { return; }
    ctx->pc = 0x180688u;
label_180688:
    // 0x180688: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x180688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18068c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18068cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x180690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x180690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180694: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180698: 0xe420f1bc  swc1        $f0, -0xE44($at)
    ctx->pc = 0x180698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1BCu, _value); } while (0); }
    // 0x18069c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18069cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1806a0: 0x2464f1b0  addiu       $a0, $v1, -0xE50
    ctx->pc = 0x1806a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963632));
    // 0x1806a4: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1806a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1806a8: 0x24c5f1b0  addiu       $a1, $a2, -0xE50
    ctx->pc = 0x1806a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963632));
    // 0x1806ac: 0xc040c24  jal         func_103090
    ctx->pc = 0x1806ACu;
    SET_GPR_U32(ctx, 31, 0x1806B4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1806B4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1806B4u) { return; }
    ctx->pc = 0x1806B4u;
label_1806b4:
    // 0x1806b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1806b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1806b8: 0x3c03433b  lui         $v1, 0x433B
    ctx->pc = 0x1806b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17211 << 16));
    // 0x1806bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1806bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1806c0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1806c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1806c4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1806c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1806c8: 0x24a4f1b0  addiu       $a0, $a1, -0xE50
    ctx->pc = 0x1806c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963632));
    // 0x1806cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1806ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1806d0: 0x2465f1b0  addiu       $a1, $v1, -0xE50
    ctx->pc = 0x1806d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963632));
    // 0x1806d4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1806D4u;
    SET_GPR_U32(ctx, 31, 0x1806DCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1806DCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1806DCu) { return; }
    ctx->pc = 0x1806DCu;
label_1806dc:
    // 0x1806dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1806dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1806e0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1806e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1806e4: 0x2464f170  addiu       $a0, $v1, -0xE90
    ctx->pc = 0x1806e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x1806e8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1806ec: 0x2445f1a0  addiu       $a1, $v0, -0xE60
    ctx->pc = 0x1806ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963616));
    // 0x1806f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1806f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1806f4: 0x2446f1b0  addiu       $a2, $v0, -0xE50
    ctx->pc = 0x1806f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963632));
    // 0x1806f8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1806F8u;
    SET_GPR_U32(ctx, 31, 0x180700u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x180700u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180700u) { return; }
    ctx->pc = 0x180700u;
label_180700:
    // 0x180700: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x180704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180708: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18070c: 0xe420f17c  swc1        $f0, -0xE84($at)
    ctx->pc = 0x18070cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F17Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F17Cu, _value); } while (0); }
    // 0x180710: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180714: 0x2464f170  addiu       $a0, $v1, -0xE90
    ctx->pc = 0x180714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x180718: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18071c: 0x2445f170  addiu       $a1, $v0, -0xE90
    ctx->pc = 0x18071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x180720: 0xc040c24  jal         func_103090
    ctx->pc = 0x180720u;
    SET_GPR_U32(ctx, 31, 0x180728u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x180728u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180728u) { return; }
    ctx->pc = 0x180728u;
label_180728:
    // 0x180728: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x180728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18072c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18072cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180730: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180734: 0xe420f17c  swc1        $f0, -0xE84($at)
    ctx->pc = 0x180734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F17Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F17Cu, _value); } while (0); }
    // 0x180738: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x180738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x18073c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18073cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x180740: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180744: 0x2444f170  addiu       $a0, $v0, -0xE90
    ctx->pc = 0x180744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x180748: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18074c: 0x2445f170  addiu       $a1, $v0, -0xE90
    ctx->pc = 0x18074cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x180750: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x180750u;
    SET_GPR_U32(ctx, 31, 0x180758u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x180758u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180758u) { return; }
    ctx->pc = 0x180758u;
label_180758:
    // 0x180758: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18075c: 0x2464f170  addiu       $a0, $v1, -0xE90
    ctx->pc = 0x18075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x180760: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180764: 0x2465f170  addiu       $a1, $v1, -0xE90
    ctx->pc = 0x180764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x180768: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x18076c: 0x24e6f160  addiu       $a2, $a3, -0xEA0
    ctx->pc = 0x18076cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963552));
    // 0x180770: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x180770u;
    SET_GPR_U32(ctx, 31, 0x180778u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x180778u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x180778u) { return; }
    ctx->pc = 0x180778u;
label_180778:
    // 0x180778: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x180778u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18077c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x18077cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x180780: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x180780u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180784: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180788: 0xe420f17c  swc1        $f0, -0xE84($at)
    ctx->pc = 0x180788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F17Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F17Cu, _value); } while (0); }
    // 0x18078c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18078cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180790: 0x2464f1a0  addiu       $a0, $v1, -0xE60
    ctx->pc = 0x180790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963616));
    // 0x180794: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x180798: 0x2465f170  addiu       $a1, $v1, -0xE90
    ctx->pc = 0x180798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x18079c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18079cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1807a0: 0x2466f160  addiu       $a2, $v1, -0xEA0
    ctx->pc = 0x1807a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963552));
    // 0x1807a4: 0xc040c80  jal         func_103200
    ctx->pc = 0x1807A4u;
    SET_GPR_U32(ctx, 31, 0x1807ACu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1807ACu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1807ACu) { return; }
    ctx->pc = 0x1807ACu;
label_1807ac:
    // 0x1807ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1807acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1807b0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1807b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1807b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1807b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1807b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1807b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1807bc: 0xe420f1ac  swc1        $f0, -0xE54($at)
    ctx->pc = 0x1807bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1ACu, _value); } while (0); }
    // 0x1807c0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1807c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1807c4: 0x24a3f170  addiu       $v1, $a1, -0xE90
    ctx->pc = 0x1807c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    // 0x1807c8: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1807c8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x47F170u));
    // 0x1807cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1807ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1807d0: 0x2463f160  addiu       $v1, $v1, -0xEA0
    ctx->pc = 0x1807d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963552));
    // 0x1807d4: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x1807d4u;
    do { __m128i _value = (GPR_VEC(ctx, 6)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47F160u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47F160u, _value); } while (0);
    // 0x1807d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1807d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1807dc: 0x8c23f1d0  lw          $v1, -0xE30($at)
    ctx->pc = 0x1807dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x1807e0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1807e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1807e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1807e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1807e8: 0x8c23f1c8  lw          $v1, -0xE38($at)
    ctx->pc = 0x1807e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x1807ec: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1807ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1807f0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1807f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1807f4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1807f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1807f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1807f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1807fc: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1807fcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180800: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x180800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180804: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180804u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180808: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x180808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18080c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x180810: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x180810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180814: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x180818: 0x24430380  addiu       $v1, $v0, 0x380
    ctx->pc = 0x180818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x18081c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x18081cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x180820: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x180820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x180824: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x180824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180828: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x180828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18082c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18082cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180830: 0x8c25f1d0  lw          $a1, -0xE30($at)
    ctx->pc = 0x180830u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x180834: 0x24a30005  addiu       $v1, $a1, 0x5
    ctx->pc = 0x180834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x180838: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18083c: 0x8c26f1c8  lw          $a2, -0xE38($at)
    ctx->pc = 0x18083cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x180840: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x180840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x180844: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x180844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180848: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x180848u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18084c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18084cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180850: 0x8424f138  lh          $a0, -0xEC8($at)
    ctx->pc = 0x180850u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x47F138u));
    // 0x180854: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x180854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x180858: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180858u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18085c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x18085cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180860: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x180860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x180864: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x180864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x180868: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18086c: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x18086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x180870: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x180870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180874: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x180874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x180878: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x180878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18087c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18087cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x180880: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180884: 0x8c25f1d0  lw          $a1, -0xE30($at)
    ctx->pc = 0x180884u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x47F1D0u));
    // 0x180888: 0x24a20006  addiu       $v0, $a1, 0x6
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x18088c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18088cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180890: 0x8c23f1c8  lw          $v1, -0xE38($at)
    ctx->pc = 0x180890u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x180894: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x180894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180898: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x180898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18089c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x18089cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1808a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1808a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1808a4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1808a4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1808a8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1808a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1808ac: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1808acu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1808b0: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x1808b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1808b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1808b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1808b8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1808b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1808bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1808bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1808c0: 0x24820380  addiu       $v0, $a0, 0x380
    ctx->pc = 0x1808c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x1808c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1808c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1808c8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1808c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1808cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1808ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1808d0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1808d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1808d4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1808d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1808d8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1808d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1808dc: 0x0  nop
    ctx->pc = 0x1808dcu;
    // NOP
    // 0x1808e0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1808e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1808e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1808e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1808e8: 0x2444f160  addiu       $a0, $v0, -0xEA0
    ctx->pc = 0x1808e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963552));
    // 0x1808ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1808ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1808f0: 0xc05f7ac  jal         func_17DEB0
    ctx->pc = 0x1808F0u;
    SET_GPR_U32(ctx, 31, 0x1808F8u);
    ctx->pc = 0x17DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DEB0u, 0x1808F0u, 0x1808F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1808F8u;
label_1808f8:
    // 0x1808f8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1808f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1808fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1808fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180900: 0x0  nop
    ctx->pc = 0x180900u;
    // NOP
    // 0x180904: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x180904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180908: 0x0  nop
    ctx->pc = 0x180908u;
    // NOP
    // 0x18090c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18090Cu;
    {
        const bool branch_taken_0x18090c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18090c) {
            ctx->pc = 0x180928u;
            goto label_180928;
        }
    }
    ctx->pc = 0x180914u;
    // 0x180914: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180918: 0x8c25f1c8  lw          $a1, -0xE38($at)
    ctx->pc = 0x180918u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x47F1C8u));
    // 0x18091c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x18091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x180920: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180924: 0xac24f1c8  sw          $a0, -0xE38($at)
    ctx->pc = 0x180924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x47F1C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1C8u, _value); } while (0);
label_180928:
    // 0x180928: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18092c: 0x2463f160  addiu       $v1, $v1, -0xEA0
    ctx->pc = 0x18092cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963552));
    // 0x180930: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x180930u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x47F160u));
    // 0x180934: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180938: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180938u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18093c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x18093cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180940: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180940u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180944: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x180944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180948: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x180948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18094c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x18094cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180950: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x180950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x180954: 0x24831380  addiu       $v1, $a0, 0x1380
    ctx->pc = 0x180954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x180958: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x180958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18095c: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x18095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x180960: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x180960u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_180964:
    // 0x180964: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180968: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180968u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18096c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x18096cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180970: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x180970u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180974: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x180974u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180978: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x180978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18097c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18097cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180980: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180984: 0x24641380  addiu       $a0, $v1, 0x1380
    ctx->pc = 0x180984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180988: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x180988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18098c: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x18098cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x180990: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x180990u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180994: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x180994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180998: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x180998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x18099c: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x18099cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x1809a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1809a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1809a4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1809a4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1809a8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1809a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1809ac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1809acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1809b0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1809b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1809b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1809b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1809b8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1809b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1809bc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1809bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1809c0: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1809c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1809c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1809c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1809c8: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x1809c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1809cc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1809ccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1809d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1809d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1809d4: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x1809d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1809d8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1809d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1809dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1809dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1809e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1809e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1809e4: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x1809e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x1809e8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1809e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1809ec: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x1809ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x1809f0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1809F0u;
    {
        const bool branch_taken_0x1809f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1809f0) {
            ctx->pc = 0x180A04u;
            goto label_180a04;
        }
    }
    ctx->pc = 0x1809F8u;
    // 0x1809f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1809f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1809fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1809fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180a00: 0xac6400b8  sw          $a0, 0xB8($v1)
    ctx->pc = 0x180a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 4));
label_180a04:
    // 0x180a04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x180a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180a08: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x180A08u;
    SET_GPR_U32(ctx, 31, 0x180A10u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x180A08u, 0x180A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A10u;
label_180a10:
    // 0x180a10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x180a10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x180a14: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x180a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180a18: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x180a18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x180a1c: 0xc05f910  jal         func_17E440
    ctx->pc = 0x180A1Cu;
    SET_GPR_U32(ctx, 31, 0x180A24u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x180A1Cu, 0x180A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A24u;
label_180a24:
    // 0x180a24: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x180a24u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_180a28:
    // 0x180a28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x180a28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180a2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x180a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x180a30: 0x3e00008  jr          $ra
    ctx->pc = 0x180A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A38u;
}
