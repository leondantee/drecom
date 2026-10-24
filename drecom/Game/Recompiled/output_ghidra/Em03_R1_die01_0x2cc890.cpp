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

// Function: Em03_R1_die01
// Address: 0x2cc890 - 0x2cd578
void Em03_R1_die01_0x2cc890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_die01_0x2cc890");
#endif

    switch (ctx->pc) {
        case 0x2cc91cu: goto label_2cc91c;
        case 0x2cc924u: goto label_2cc924;
        case 0x2cc9f0u: goto label_2cc9f0;
        case 0x2cca7cu: goto label_2cca7c;
        case 0x2ccab4u: goto label_2ccab4;
        case 0x2ccaecu: goto label_2ccaec;
        case 0x2ccb5cu: goto label_2ccb5c;
        case 0x2ccb98u: goto label_2ccb98;
        case 0x2ccbd0u: goto label_2ccbd0;
        case 0x2ccc50u: goto label_2ccc50;
        case 0x2ccc88u: goto label_2ccc88;
        case 0x2cccc0u: goto label_2cccc0;
        case 0x2ccd3cu: goto label_2ccd3c;
        case 0x2ccd74u: goto label_2ccd74;
        case 0x2ccdacu: goto label_2ccdac;
        case 0x2cce28u: goto label_2cce28;
        case 0x2cce60u: goto label_2cce60;
        case 0x2cce98u: goto label_2cce98;
        case 0x2ccf14u: goto label_2ccf14;
        case 0x2ccf4cu: goto label_2ccf4c;
        case 0x2ccf84u: goto label_2ccf84;
        case 0x2ccfc0u: goto label_2ccfc0;
        case 0x2cd004u: goto label_2cd004;
        case 0x2cd028u: goto label_2cd028;
        case 0x2cd074u: goto label_2cd074;
        case 0x2cd098u: goto label_2cd098;
        case 0x2cd0e4u: goto label_2cd0e4;
        case 0x2cd168u: goto label_2cd168;
        case 0x2cd194u: goto label_2cd194;
        case 0x2cd1acu: goto label_2cd1ac;
        case 0x2cd1ccu: goto label_2cd1cc;
        case 0x2cd1dcu: goto label_2cd1dc;
        case 0x2cd1e8u: goto label_2cd1e8;
        case 0x2cd2e4u: goto label_2cd2e4;
        case 0x2cd310u: goto label_2cd310;
        case 0x2cd328u: goto label_2cd328;
        case 0x2cd348u: goto label_2cd348;
        case 0x2cd358u: goto label_2cd358;
        case 0x2cd364u: goto label_2cd364;
        case 0x2cd408u: goto label_2cd408;
        case 0x2cd4b8u: goto label_2cd4b8;
        case 0x2cd4f0u: goto label_2cd4f0;
        case 0x2cd50cu: goto label_2cd50c;
        case 0x2cd53cu: goto label_2cd53c;
        case 0x2cd560u: goto label_2cd560;
        default: break;
    }

    ctx->pc = 0x2cc890u;

    // 0x2cc890: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cc890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cc894: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2cc894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2cc898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc8a0: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2cc8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2cc8a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc8a8: 0x90710002  lbu         $s1, 0x2($v1)
    ctx->pc = 0x2cc8a8u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2cc8ac: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x2cc8acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2cc8b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cc8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc8b4: 0x10a30323  beq         $a1, $v1, . + 4 + (0x323 << 2)
    ctx->pc = 0x2CC8B4u;
    {
        const bool branch_taken_0x2cc8b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cc8b4) {
            ctx->pc = 0x2CD544u;
            goto label_2cd544;
        }
    }
    ctx->pc = 0x2CC8BCu;
    // 0x2cc8bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cc8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cc8c0: 0x10a302d3  beq         $a1, $v1, . + 4 + (0x2D3 << 2)
    ctx->pc = 0x2CC8C0u;
    {
        const bool branch_taken_0x2cc8c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cc8c0) {
            ctx->pc = 0x2CD410u;
            goto label_2cd410;
        }
    }
    ctx->pc = 0x2CC8C8u;
    // 0x2cc8c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cc8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc8cc: 0x10a4027c  beq         $a1, $a0, . + 4 + (0x27C << 2)
    ctx->pc = 0x2CC8CCu;
    {
        const bool branch_taken_0x2cc8cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2cc8cc) {
            ctx->pc = 0x2CD2C0u;
            goto label_2cd2c0;
        }
    }
    ctx->pc = 0x2CC8D4u;
    // 0x2cc8d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cc8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc8d8: 0x10a3021a  beq         $a1, $v1, . + 4 + (0x21A << 2)
    ctx->pc = 0x2CC8D8u;
    {
        const bool branch_taken_0x2cc8d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cc8d8) {
            ctx->pc = 0x2CD144u;
            goto label_2cd144;
        }
    }
    ctx->pc = 0x2CC8E0u;
    // 0x2cc8e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC8E0u;
    {
        const bool branch_taken_0x2cc8e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc8e0) {
            ctx->pc = 0x2CC8F0u;
            goto label_2cc8f0;
        }
    }
    ctx->pc = 0x2CC8E8u;
    // 0x2cc8e8: 0x1000031d  b           . + 4 + (0x31D << 2)
    ctx->pc = 0x2CC8E8u;
    {
        const bool branch_taken_0x2cc8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc8e8) {
            ctx->pc = 0x2CD560u;
            goto label_2cd560;
        }
    }
    ctx->pc = 0x2CC8F0u;
label_2cc8f0:
    // 0x2cc8f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cc8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc8f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc8f8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cc8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc8fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc900: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cc900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc904: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cc904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cc908: 0x24060401  addiu       $a2, $zero, 0x401
    ctx->pc = 0x2cc908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x2cc90c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cc90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc910: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cc910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cc914: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CC914u;
    SET_GPR_U32(ctx, 31, 0x2CC91Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CC914u, 0x2CC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC91Cu;
label_2cc91c:
    // 0x2cc91c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CC91Cu;
    SET_GPR_U32(ctx, 31, 0x2CC924u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CC91Cu, 0x2CC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC924u;
label_2cc924:
    // 0x2cc924: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc928: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2cc928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2cc92c: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2cc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2cc930: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2cc930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cc934: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cc934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cc938: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc93c: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x2cc93cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cc940: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc944: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc948: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cc948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cc94c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2cc94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2cc950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc954: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cc954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc958: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2cc958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2cc95c: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x2cc95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x2cc960: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc964: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc968: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cc968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cc96c: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x2cc96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2cc970: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cc970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc974: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2cc974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cc978: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2cc978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2cc97c: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x2cc97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cc980: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x2cc980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2cc984: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x2cc984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x2cc988: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc98c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cc98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc990: 0xa48210a6  sh          $v0, 0x10A6($a0)
    ctx->pc = 0x2cc990u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc998: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc99c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cc99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cc9a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cc9a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc9a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cc9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc9a8: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x2cc9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x2cc9ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc9b0: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2cc9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9b4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cc9b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cc9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc9bc: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2cc9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9c0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2cc9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2cc9c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cc9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cc9c8: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2cc9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc9cc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2cc9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2cc9d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cc9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cc9d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cc9d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc9d8: 0x0  nop
    ctx->pc = 0x2cc9d8u;
    // NOP
    // 0x2cc9dc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2cc9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2cc9e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2cc9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cc9e4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2cc9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cc9e8: 0xc040c24  jal         func_103090
    ctx->pc = 0x2CC9E8u;
    SET_GPR_U32(ctx, 31, 0x2CC9F0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2CC9F0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CC9F0u) { return; }
    ctx->pc = 0x2CC9F0u;
label_2cc9f0:
    // 0x2cc9f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cc9f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cc9f4: 0x3c04c120  lui         $a0, 0xC120
    ctx->pc = 0x2cc9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
    // 0x2cc9f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cc9f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc9fc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cc9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cca00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cca00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cca04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cca08: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2cca08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2cca0c: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x2cca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x2cca10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cca10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cca14: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cca18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cca18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cca1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cca20: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cca24: 0x3c04c120  lui         $a0, 0xC120
    ctx->pc = 0x2cca24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
    // 0x2cca28: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cca28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cca2c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cca30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cca30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cca34: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cca38: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2cca38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2cca3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cca3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cca40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cca44: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cca48: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2cca48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2cca4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cca50: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2cca50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2cca54: 0x24700320  addiu       $s0, $v1, 0x320
    ctx->pc = 0x2cca54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
    // 0x2cca58: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2cca58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cca5c: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x2cca5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2cca60: 0x34640003  ori         $a0, $v1, 0x3
    ctx->pc = 0x2cca60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2cca64: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x2cca64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cca68: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2cca68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cca6c: 0x3062fff7  andi        $v0, $v1, 0xFFF7
    ctx->pc = 0x2cca6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2cca70: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cca70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cca74: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCA74u;
    SET_GPR_U32(ctx, 31, 0x2CCA7Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCA74u, 0x2CCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA7Cu;
label_2cca7c:
    // 0x2cca7c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2cca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2cca80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cca80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cca84: 0x0  nop
    ctx->pc = 0x2cca84u;
    // NOP
    // 0x2cca88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cca88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cca8c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2cca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2cca90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cca94: 0x0  nop
    ctx->pc = 0x2cca94u;
    // NOP
    // 0x2cca98: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cca98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cca9c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccaa0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccaa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccaa4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccaa8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ccaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ccaac: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCAACu;
    SET_GPR_U32(ctx, 31, 0x2CCAB4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCAACu, 0x2CCAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAB4u;
label_2ccab4:
    // 0x2ccab4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccab8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccabc: 0x0  nop
    ctx->pc = 0x2ccabcu;
    // NOP
    // 0x2ccac0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccac4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ccac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ccac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccacc: 0x0  nop
    ctx->pc = 0x2ccaccu;
    // NOP
    // 0x2ccad0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccad0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccad4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ccad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccad8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccadc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccae0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ccae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ccae4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCAE4u;
    SET_GPR_U32(ctx, 31, 0x2CCAECu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCAE4u, 0x2CCAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAECu;
label_2ccaec:
    // 0x2ccaec: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ccaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2ccaf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccaf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccaf4: 0x0  nop
    ctx->pc = 0x2ccaf4u;
    // NOP
    // 0x2ccaf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccaf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccafc: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2ccafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x2ccb00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ccb00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccb04: 0x0  nop
    ctx->pc = 0x2ccb04u;
    // NOP
    // 0x2ccb08: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccb08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccb0c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ccb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccb10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccb10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccb14: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2ccb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccb18: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x2ccb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2ccb1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccb20: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x2ccb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2ccb24: 0x247015e0  addiu       $s0, $v1, 0x15E0
    ctx->pc = 0x2ccb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x2ccb28: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccb2c: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2ccb2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ccb30: 0x34850003  ori         $a1, $a0, 0x3
    ctx->pc = 0x2ccb30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2ccb34: 0xa4450006  sh          $a1, 0x6($v0)
    ctx->pc = 0x2ccb34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ccb38: 0x96060140  lhu         $a2, 0x140($s0)
    ctx->pc = 0x2ccb38u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ccb3c: 0x30c2fff7  andi        $v0, $a2, 0xFFF7
    ctx->pc = 0x2ccb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65527);
    // 0x2ccb40: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2ccb40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccb44: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2ccb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2ccb48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ccb48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccb4c: 0x0  nop
    ctx->pc = 0x2ccb4cu;
    // NOP
    // 0x2ccb50: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2ccb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2ccb54: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCB54u;
    SET_GPR_U32(ctx, 31, 0x2CCB5Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCB54u, 0x2CCB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB5Cu;
label_2ccb5c:
    // 0x2ccb5c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ccb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2ccb60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccb64: 0x0  nop
    ctx->pc = 0x2ccb64u;
    // NOP
    // 0x2ccb68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccb68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccb6c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2ccb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2ccb70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ccb70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccb74: 0x0  nop
    ctx->pc = 0x2ccb74u;
    // NOP
    // 0x2ccb78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ccb78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccb7c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2ccb7cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2ccb80: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ccb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccb84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccb84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccb88: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccb8c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ccb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ccb90: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCB90u;
    SET_GPR_U32(ctx, 31, 0x2CCB98u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCB90u, 0x2CCB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB98u;
label_2ccb98:
    // 0x2ccb98: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccb9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccba0: 0x0  nop
    ctx->pc = 0x2ccba0u;
    // NOP
    // 0x2ccba4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccba8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2ccba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2ccbac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ccbacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccbb0: 0x0  nop
    ctx->pc = 0x2ccbb0u;
    // NOP
    // 0x2ccbb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccbb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccbb8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ccbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccbbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccbbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccbc0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccbc4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ccbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ccbc8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCBC8u;
    SET_GPR_U32(ctx, 31, 0x2CCBD0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCBC8u, 0x2CCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBD0u;
label_2ccbd0:
    // 0x2ccbd0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2ccbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2ccbd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccbd8: 0x0  nop
    ctx->pc = 0x2ccbd8u;
    // NOP
    // 0x2ccbdc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccbdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccbe0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ccbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ccbe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccbe8: 0x0  nop
    ctx->pc = 0x2ccbe8u;
    // NOP
    // 0x2ccbec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ccbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccbf0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2ccbf0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2ccbf4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ccbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccbf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccbf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccbfc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccc00: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ccc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2ccc04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccc08: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2ccc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2ccc0c: 0x24501770  addiu       $s0, $v0, 0x1770
    ctx->pc = 0x2ccc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x2ccc10: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccc14: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2ccc14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ccc18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ccc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ccc1c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2ccc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ccc20: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2ccc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ccc24: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CCC24u;
    {
        const bool branch_taken_0x2ccc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc24) {
            ctx->pc = 0x2CCCF0u;
            goto label_2cccf0;
        }
    }
    ctx->pc = 0x2CCC2Cu;
    // 0x2ccc2c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ccc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccc30: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2ccc30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2ccc34: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2ccc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2ccc38: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2ccc38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccc3c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2ccc3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ccc40: 0x3044fff7  andi        $a0, $v0, 0xFFF7
    ctx->pc = 0x2ccc40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ccc44: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x2ccc44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ccc48: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCC48u;
    SET_GPR_U32(ctx, 31, 0x2CCC50u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCC48u, 0x2CCC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC50u;
label_2ccc50:
    // 0x2ccc50: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccc54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccc54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccc58: 0x0  nop
    ctx->pc = 0x2ccc58u;
    // NOP
    // 0x2ccc5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccc5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccc60: 0x3c03c316  lui         $v1, 0xC316
    ctx->pc = 0x2ccc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49942 << 16));
    // 0x2ccc64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ccc64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccc68: 0x0  nop
    ctx->pc = 0x2ccc68u;
    // NOP
    // 0x2ccc6c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccc6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccc70: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ccc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccc74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccc74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccc78: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccc7c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ccc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ccc80: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCC80u;
    SET_GPR_U32(ctx, 31, 0x2CCC88u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCC80u, 0x2CCC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC88u;
label_2ccc88:
    // 0x2ccc88: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccc8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccc90: 0x0  nop
    ctx->pc = 0x2ccc90u;
    // NOP
    // 0x2ccc94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccc94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccc98: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2ccc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2ccc9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ccc9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccca0: 0x0  nop
    ctx->pc = 0x2ccca0u;
    // NOP
    // 0x2ccca4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccca8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ccca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cccac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cccacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cccb0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cccb4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cccb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cccb8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCCB8u;
    SET_GPR_U32(ctx, 31, 0x2CCCC0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCCB8u, 0x2CCCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCC0u;
label_2cccc0:
    // 0x2cccc0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cccc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cccc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cccc8: 0x0  nop
    ctx->pc = 0x2cccc8u;
    // NOP
    // 0x2ccccc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cccccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cccd0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2cccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2cccd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cccd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cccd8: 0x0  nop
    ctx->pc = 0x2cccd8u;
    // NOP
    // 0x2cccdc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cccdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccce0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ccce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccce4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccce8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cccec: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2cccf0:
    // 0x2cccf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cccf4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cccf8: 0x24501db0  addiu       $s0, $v0, 0x1DB0
    ctx->pc = 0x2cccf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7600));
    // 0x2cccfc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccd00: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x2ccd00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ccd04: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2ccd04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ccd08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ccd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ccd0c: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x2ccd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ccd10: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CCD10u;
    {
        const bool branch_taken_0x2ccd10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd10) {
            ctx->pc = 0x2CCDDCu;
            goto label_2ccddc;
        }
    }
    ctx->pc = 0x2CCD18u;
    // 0x2ccd18: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccd1c: 0x94440006  lhu         $a0, 0x6($v0)
    ctx->pc = 0x2ccd1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ccd20: 0x34830003  ori         $v1, $a0, 0x3
    ctx->pc = 0x2ccd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2ccd24: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x2ccd24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ccd28: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2ccd28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ccd2c: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2ccd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2ccd30: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2ccd30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ccd34: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCD34u;
    SET_GPR_U32(ctx, 31, 0x2CCD3Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCD34u, 0x2CCD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD3Cu;
label_2ccd3c:
    // 0x2ccd3c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2ccd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccd40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ccd40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccd44: 0x0  nop
    ctx->pc = 0x2ccd44u;
    // NOP
    // 0x2ccd48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccd48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccd4c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2ccd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2ccd50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ccd50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccd54: 0x0  nop
    ctx->pc = 0x2ccd54u;
    // NOP
    // 0x2ccd58: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccd58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccd5c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ccd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccd60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccd60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccd64: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ccd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccd68: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2ccd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2ccd6c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCD6Cu;
    SET_GPR_U32(ctx, 31, 0x2CCD74u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCD6Cu, 0x2CCD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD74u;
label_2ccd74:
    // 0x2ccd74: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2ccd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccd78: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ccd78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccd7c: 0x0  nop
    ctx->pc = 0x2ccd7cu;
    // NOP
    // 0x2ccd80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccd80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccd84: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2ccd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2ccd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccd8c: 0x0  nop
    ctx->pc = 0x2ccd8cu;
    // NOP
    // 0x2ccd90: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccd90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccd94: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ccd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccd98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccd98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccd9c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccda0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ccda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ccda4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCDA4u;
    SET_GPR_U32(ctx, 31, 0x2CCDACu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCDA4u, 0x2CCDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDACu;
label_2ccdac:
    // 0x2ccdac: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2ccdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccdb0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ccdb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccdb4: 0x0  nop
    ctx->pc = 0x2ccdb4u;
    // NOP
    // 0x2ccdb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccdb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccdbc: 0x3c06c316  lui         $a2, 0xC316
    ctx->pc = 0x2ccdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49942 << 16));
    // 0x2ccdc0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2ccdc0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccdc4: 0x0  nop
    ctx->pc = 0x2ccdc4u;
    // NOP
    // 0x2ccdc8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccdc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccdcc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ccdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccdd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccdd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccdd4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccdd8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ccdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2ccddc:
    // 0x2ccddc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccde0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2ccde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2ccde4: 0x24502580  addiu       $s0, $v0, 0x2580
    ctx->pc = 0x2ccde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x2ccde8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2ccde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccdec: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x2ccdecu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2ccdf0: 0x6102b  sltu        $v0, $zero, $a2
    ctx->pc = 0x2ccdf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ccdf4: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x2ccdf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ccdf8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2ccdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ccdfc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CCDFCu;
    {
        const bool branch_taken_0x2ccdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccdfc) {
            ctx->pc = 0x2CCEC8u;
            goto label_2ccec8;
        }
    }
    ctx->pc = 0x2CCE04u;
    // 0x2cce04: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cce04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cce08: 0x94640006  lhu         $a0, 0x6($v1)
    ctx->pc = 0x2cce08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cce0c: 0x34820003  ori         $v0, $a0, 0x3
    ctx->pc = 0x2cce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2cce10: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cce10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cce14: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cce14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cce18: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cce1c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cce1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cce20: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCE20u;
    SET_GPR_U32(ctx, 31, 0x2CCE28u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCE20u, 0x2CCE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE28u;
label_2cce28:
    // 0x2cce28: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cce28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cce2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cce2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cce30: 0x0  nop
    ctx->pc = 0x2cce30u;
    // NOP
    // 0x2cce34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cce34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cce38: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cce38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cce3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cce3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cce40: 0x0  nop
    ctx->pc = 0x2cce40u;
    // NOP
    // 0x2cce44: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cce44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cce48: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cce4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cce50: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cce54: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cce54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cce58: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCE58u;
    SET_GPR_U32(ctx, 31, 0x2CCE60u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCE58u, 0x2CCE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE60u;
label_2cce60:
    // 0x2cce60: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cce60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cce64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cce64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cce68: 0x0  nop
    ctx->pc = 0x2cce68u;
    // NOP
    // 0x2cce6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cce6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cce70: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2cce70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2cce74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cce74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cce78: 0x0  nop
    ctx->pc = 0x2cce78u;
    // NOP
    // 0x2cce7c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cce7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cce80: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cce84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cce88: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cce8c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cce90: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCE90u;
    SET_GPR_U32(ctx, 31, 0x2CCE98u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCE90u, 0x2CCE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE98u;
label_2cce98:
    // 0x2cce98: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cce9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cce9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccea0: 0x0  nop
    ctx->pc = 0x2ccea0u;
    // NOP
    // 0x2ccea4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccea8: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2ccea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2cceac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cceacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cceb0: 0x0  nop
    ctx->pc = 0x2cceb0u;
    // NOP
    // 0x2cceb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cceb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cceb8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccebc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccec0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccec4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ccec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2ccec8:
    // 0x2ccec8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccecc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cced0: 0x24502bc0  addiu       $s0, $v0, 0x2BC0
    ctx->pc = 0x2cced0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11200));
    // 0x2cced4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cced4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cced8: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cced8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ccedc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ccedcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ccee0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ccee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ccee4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ccee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ccee8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CCEE8u;
    {
        const bool branch_taken_0x2ccee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccee8) {
            ctx->pc = 0x2CCFB4u;
            goto label_2ccfb4;
        }
    }
    ctx->pc = 0x2CCEF0u;
    // 0x2ccef0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ccef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccef4: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2ccef4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2ccef8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2ccef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2ccefc: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2ccefcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccf00: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2ccf00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ccf04: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ccf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ccf08: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2ccf08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccf0c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCF0Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF14u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCF0Cu, 0x2CCF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF14u;
label_2ccf14:
    // 0x2ccf14: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccf18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccf18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccf1c: 0x0  nop
    ctx->pc = 0x2ccf1cu;
    // NOP
    // 0x2ccf20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccf20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccf24: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2ccf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2ccf28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccf28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccf2c: 0x0  nop
    ctx->pc = 0x2ccf2cu;
    // NOP
    // 0x2ccf30: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccf30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccf34: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ccf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccf38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccf38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccf3c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccf40: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ccf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ccf44: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCF44u;
    SET_GPR_U32(ctx, 31, 0x2CCF4Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCF44u, 0x2CCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF4Cu;
label_2ccf4c:
    // 0x2ccf4c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccf50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccf54: 0x0  nop
    ctx->pc = 0x2ccf54u;
    // NOP
    // 0x2ccf58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccf58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccf5c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2ccf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2ccf60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccf60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccf64: 0x0  nop
    ctx->pc = 0x2ccf64u;
    // NOP
    // 0x2ccf68: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccf68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccf6c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ccf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccf70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccf70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccf74: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccf78: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ccf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ccf7c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCF7Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF84u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCF7Cu, 0x2CCF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF84u;
label_2ccf84:
    // 0x2ccf84: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccf88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccf8c: 0x0  nop
    ctx->pc = 0x2ccf8cu;
    // NOP
    // 0x2ccf90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccf90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccf94: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2ccf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2ccf98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccf98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccf9c: 0x0  nop
    ctx->pc = 0x2ccf9cu;
    // NOP
    // 0x2ccfa0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccfa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccfa4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ccfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccfa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccfa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccfac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccfb0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ccfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2ccfb4:
    // 0x2ccfb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ccfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ccfb8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2CCFB8u;
    SET_GPR_U32(ctx, 31, 0x2CCFC0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2CCFB8u, 0x2CCFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFC0u;
label_2ccfc0:
    // 0x2ccfc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccfc4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ccfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ccfc8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ccfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ccfcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ccfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ccfd0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ccfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ccfd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ccfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ccfd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ccfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ccfdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ccfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ccfe0: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2ccfe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2ccfe4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2ccfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccfe8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccfec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ccfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ccff0: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x2ccff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2ccff4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2ccff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2ccff8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2ccff8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ccffc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2CCFFCu;
    SET_GPR_U32(ctx, 31, 0x2CD004u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2CCFFCu, 0x2CD004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD004u;
label_2cd004:
    // 0x2cd004: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd008: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2cd008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd00c: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x2cd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x2cd010: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2cd010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2cd014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd018: 0x0  nop
    ctx->pc = 0x2cd018u;
    // NOP
    // 0x2cd01c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd01cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd020: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD020u;
    SET_GPR_U32(ctx, 31, 0x2CD028u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD020u, 0x2CD028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD028u;
label_2cd028:
    // 0x2cd028: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd02c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2cd02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2cd030: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd034: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2cd034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd038: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2cd038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2cd03c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cd03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cd040: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2cd040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2cd044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cd048: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cd048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cd04c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2cd04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd050: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2cd050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2cd054: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd058: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd05c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2cd05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cd060: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x2cd060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2cd064: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2cd064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cd068: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2cd068u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd06c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2CD06Cu;
    SET_GPR_U32(ctx, 31, 0x2CD074u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2CD06Cu, 0x2CD074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD074u;
label_2cd074:
    // 0x2cd074: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd078: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2cd078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd07c: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x2cd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x2cd080: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2cd080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2cd084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd088: 0x0  nop
    ctx->pc = 0x2cd088u;
    // NOP
    // 0x2cd08c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd08cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd090: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD090u;
    SET_GPR_U32(ctx, 31, 0x2CD098u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD090u, 0x2CD098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD098u;
label_2cd098:
    // 0x2cd098: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd09c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2cd09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2cd0a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd0a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2cd0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd0a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2cd0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2cd0ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cd0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cd0b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2cd0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2cd0b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cd0b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cd0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cd0bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2cd0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2cd0c0: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2cd0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2cd0c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd0c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd0cc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2cd0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cd0d0: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x2cd0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2cd0d4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2cd0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cd0d8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2cd0d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd0dc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2CD0DCu;
    SET_GPR_U32(ctx, 31, 0x2CD0E4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2CD0DCu, 0x2CD0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0E4u;
label_2cd0e4:
    // 0x2cd0e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd0e8: 0x247110b0  addiu       $s1, $v1, 0x10B0
    ctx->pc = 0x2cd0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2cd0ec: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x2cd0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2cd0f0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2cd0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2cd0f4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2cd0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2cd0f8: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x2cd0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x2cd0fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd100: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2cd100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cd104: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2cd104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2cd108: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2cd108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2cd10c: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x2cd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x2cd110: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2cd110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2cd114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd118: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd11c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x2cd11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x2cd120: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x2cd120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x2cd124: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2cd124u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd128: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2cd128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd12c: 0xe4c001a4  swc1        $f0, 0x1A4($a2)
    ctx->pc = 0x2cd12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 420), bits); }
    // 0x2cd130: 0x3c083fa6  lui         $t0, 0x3FA6
    ctx->pc = 0x2cd130u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16294 << 16));
    // 0x2cd134: 0x35076666  ori         $a3, $t0, 0x6666
    ctx->pc = 0x2cd134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26214);
    // 0x2cd138: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2cd138u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd13c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd140: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x2cd140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
label_2cd144:
    // 0x2cd144: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd148: 0xc44100d8  lwc1        $f1, 0xD8($v0)
    ctx->pc = 0x2cd148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd14c: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x2cd14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
    // 0x2cd150: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cd150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cd154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd158: 0x0  nop
    ctx->pc = 0x2cd158u;
    // NOP
    // 0x2cd15c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd15cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd160: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD160u;
    SET_GPR_U32(ctx, 31, 0x2CD168u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD160u, 0x2CD168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD168u;
label_2cd168:
    // 0x2cd168: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd16c: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cd16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cd170: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd174: 0xc46100d0  lwc1        $f1, 0xD0($v1)
    ctx->pc = 0x2cd174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd178: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2cd178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2cd17c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cd17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cd180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd184: 0x0  nop
    ctx->pc = 0x2cd184u;
    // NOP
    // 0x2cd188: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd188u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd18c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD18Cu;
    SET_GPR_U32(ctx, 31, 0x2CD194u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD18Cu, 0x2CD194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD194u;
label_2cd194:
    // 0x2cd194: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd198: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cd198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cd19c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cd1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cd1a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CD1A4u;
    SET_GPR_U32(ctx, 31, 0x2CD1ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CD1A4u, 0x2CD1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1ACu;
label_2cd1ac:
    // 0x2cd1ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1b8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cd1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cd1bc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cd1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cd1c0: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cd1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cd1c4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CD1C4u;
    SET_GPR_U32(ctx, 31, 0x2CD1CCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CD1C4u, 0x2CD1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1CCu;
label_2cd1cc:
    // 0x2cd1cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd1d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd1d4: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CD1D4u;
    SET_GPR_U32(ctx, 31, 0x2CD1DCu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CD1D4u, 0x2CD1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1DCu;
label_2cd1dc:
    // 0x2cd1dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1e0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CD1E0u;
    SET_GPR_U32(ctx, 31, 0x2CD1E8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CD1E0u, 0x2CD1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1E8u;
label_2cd1e8:
    // 0x2cd1e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1ec: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2cd1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2cd1f0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cd1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cd1f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cd1f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd1f8: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2cd1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd1fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cd1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cd200: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2cd200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2cd204: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd208: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2cd208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2cd20c: 0x34653333  ori         $a1, $v1, 0x3333
    ctx->pc = 0x2cd20cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cd210: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2cd210u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd214: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2cd214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd218: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cd218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cd21c: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2cd21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2cd220: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd224: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2cd224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2cd228: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cd228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cd22c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cd22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd230: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2cd230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd234: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cd234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cd238: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2cd238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2cd23c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd240: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cd240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cd244: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2cd244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd248: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2cd248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2cd24c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cd24cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd250: 0x0  nop
    ctx->pc = 0x2cd250u;
    // NOP
    // 0x2cd254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cd254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd258: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cd258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cd25c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd260: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cd260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cd264: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cd264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd268: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd26c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2cd26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd270: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cd270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cd274: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2cd274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2cd278: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd27c: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2cd27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd280: 0x3c1041f0  lui         $s0, 0x41F0
    ctx->pc = 0x2cd280u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16880 << 16));
    // 0x2cd284: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2cd284u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd288: 0x0  nop
    ctx->pc = 0x2cd288u;
    // NOP
    // 0x2cd28c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cd28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd290: 0x0  nop
    ctx->pc = 0x2cd290u;
    // NOP
    // 0x2cd294: 0x450000b2  bc1f        . + 4 + (0xB2 << 2)
    ctx->pc = 0x2CD294u;
    {
        const bool branch_taken_0x2cd294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd294) {
            ctx->pc = 0x2CD560u;
            goto label_2cd560;
        }
    }
    ctx->pc = 0x2CD29Cu;
    // 0x2cd29c: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x2cd29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
    // 0x2cd2a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2cd2a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd2a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd2a8: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cd2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cd2ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cd2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd2b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd2b4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2cd2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cd2b8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2CD2B8u;
    {
        const bool branch_taken_0x2cd2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2b8) {
            ctx->pc = 0x2CD560u;
            goto label_2cd560;
        }
    }
    ctx->pc = 0x2CD2C0u;
label_2cd2c0:
    // 0x2cd2c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd2c4: 0xc44100d8  lwc1        $f1, 0xD8($v0)
    ctx->pc = 0x2cd2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd2c8: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x2cd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
    // 0x2cd2cc: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cd2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cd2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd2d4: 0x0  nop
    ctx->pc = 0x2cd2d4u;
    // NOP
    // 0x2cd2d8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd2d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd2dc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD2DCu;
    SET_GPR_U32(ctx, 31, 0x2CD2E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD2DCu, 0x2CD2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2E4u;
label_2cd2e4:
    // 0x2cd2e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd2e8: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cd2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cd2ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd2f0: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2cd2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd2f4: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2cd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2cd2f8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cd2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cd2fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd300: 0x0  nop
    ctx->pc = 0x2cd300u;
    // NOP
    // 0x2cd304: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd304u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd308: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD308u;
    SET_GPR_U32(ctx, 31, 0x2CD310u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD308u, 0x2CD310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD310u;
label_2cd310:
    // 0x2cd310: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd314: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cd314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cd318: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd31c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cd31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cd320: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CD320u;
    SET_GPR_U32(ctx, 31, 0x2CD328u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CD320u, 0x2CD328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD328u;
label_2cd328:
    // 0x2cd328: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd32c: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x2cd32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd330: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd334: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2cd334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cd338: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2cd338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2cd33c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cd33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cd340: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CD340u;
    SET_GPR_U32(ctx, 31, 0x2CD348u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CD340u, 0x2CD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD348u;
label_2cd348:
    // 0x2cd348: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd34c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd34cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd350: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CD350u;
    SET_GPR_U32(ctx, 31, 0x2CD358u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CD350u, 0x2CD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD358u;
label_2cd358:
    // 0x2cd358: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd35c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CD35Cu;
    SET_GPR_U32(ctx, 31, 0x2CD364u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CD35Cu, 0x2CD364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD364u;
label_2cd364:
    // 0x2cd364: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd368: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cd368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd36c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cd36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd370: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2cd370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2cd374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd378: 0x0  nop
    ctx->pc = 0x2cd378u;
    // NOP
    // 0x2cd37c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cd37cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd380: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2cd380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2cd384: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd388: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd38c: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2cd38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd390: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd394: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2cd394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd398: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cd398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cd39c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2cd39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2cd3a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd3a8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2cd3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd3ac: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x2cd3acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3b0: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x2cd3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd3b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cd3b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd3b8: 0x0  nop
    ctx->pc = 0x2cd3b8u;
    // NOP
    // 0x2cd3bc: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2CD3BCu;
    {
        const bool branch_taken_0x2cd3bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd3bc) {
            ctx->pc = 0x2CD3FCu;
            goto label_2cd3fc;
        }
    }
    ctx->pc = 0x2CD3C4u;
    // 0x2cd3c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd3cc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2cd3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd3d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3d4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2cd3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2cd3d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cd3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cd3dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3e0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cd3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cd3e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3e8: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2cd3e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2cd3ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2cd3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2cd3f0: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2cd3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cd3f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3f8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2cd3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2cd3fc:
    // 0x2cd3fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd400: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CD400u;
    SET_GPR_U32(ctx, 31, 0x2CD408u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CD400u, 0x2CD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD408u;
label_2cd408:
    // 0x2cd408: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2CD408u;
    {
        const bool branch_taken_0x2cd408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd408) {
            ctx->pc = 0x2CD560u;
            goto label_2cd560;
        }
    }
    ctx->pc = 0x2CD410u;
label_2cd410:
    // 0x2cd410: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd414: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x2cd414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd418: 0x3c023b0d  lui         $v0, 0x3B0D
    ctx->pc = 0x2cd418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15117 << 16));
    // 0x2cd41c: 0x3442fea2  ori         $v0, $v0, 0xFEA2
    ctx->pc = 0x2cd41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65186);
    // 0x2cd420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd424: 0x0  nop
    ctx->pc = 0x2cd424u;
    // NOP
    // 0x2cd428: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cd428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cd42c: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x2cd42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x2cd430: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd434: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x2cd434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd438: 0x3c023a5a  lui         $v0, 0x3A5A
    ctx->pc = 0x2cd438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14938 << 16));
    // 0x2cd43c: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x2cd43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x2cd440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd444: 0x0  nop
    ctx->pc = 0x2cd444u;
    // NOP
    // 0x2cd448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cd448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cd44c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x2cd44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x2cd450: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd454: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x2cd454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd458: 0x3c023b0d  lui         $v0, 0x3B0D
    ctx->pc = 0x2cd458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15117 << 16));
    // 0x2cd45c: 0x3442fea2  ori         $v0, $v0, 0xFEA2
    ctx->pc = 0x2cd45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65186);
    // 0x2cd460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd464: 0x0  nop
    ctx->pc = 0x2cd464u;
    // NOP
    // 0x2cd468: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cd468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cd46c: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x2cd46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x2cd470: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd474: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x2cd474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd47c: 0x0  nop
    ctx->pc = 0x2cd47cu;
    // NOP
    // 0x2cd480: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cd480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd484: 0x0  nop
    ctx->pc = 0x2cd484u;
    // NOP
    // 0x2cd488: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD488u;
    {
        const bool branch_taken_0x2cd488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd488) {
            ctx->pc = 0x2CD4ACu;
            goto label_2cd4ac;
        }
    }
    ctx->pc = 0x2CD490u;
    // 0x2cd490: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2cd490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cd494: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd498: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x2cd498u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x2cd49c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd4a0: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2cd4a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2cd4a4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x2cd4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2cd4a8: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2cd4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_2cd4ac:
    // 0x2cd4ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd4b0: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CD4B0u;
    SET_GPR_U32(ctx, 31, 0x2CD4B8u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CD4B0u, 0x2CD4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4B8u;
label_2cd4b8:
    // 0x2cd4b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd4bc: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2cd4bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2cd4c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cd4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cd4c4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2cd4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cd4c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd4cc: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2cd4ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cd4d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2cd4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2cd4d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cd4d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cd4d8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2cd4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2cd4dc: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CD4DCu;
    {
        const bool branch_taken_0x2cd4dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd4dc) {
            ctx->pc = 0x2CD560u;
            goto label_2cd560;
        }
    }
    ctx->pc = 0x2CD4E4u;
    // 0x2cd4e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2cd4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cd4e8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2CD4E8u;
    SET_GPR_U32(ctx, 31, 0x2CD4F0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2CD4E8u, 0x2CD4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD4F0u;
label_2cd4f0:
    // 0x2cd4f0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cd4f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cd4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd4f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd4fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd4fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd500: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2cd500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cd504: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2CD504u;
    SET_GPR_U32(ctx, 31, 0x2CD50Cu);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2CD504u, 0x2CD50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD50Cu;
label_2cd50c:
    // 0x2cd50c: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2cd50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2cd510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd514: 0x0  nop
    ctx->pc = 0x2cd514u;
    // NOP
    // 0x2cd518: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2cd518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2cd51c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cd51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cd520: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cd520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd524: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x2cd524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd528: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2cd528u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2cd52c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cd52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd530: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2cd530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cd534: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2CD534u;
    SET_GPR_U32(ctx, 31, 0x2CD53Cu);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2CD534u, 0x2CD53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD53Cu;
label_2cd53c:
    // 0x2cd53c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD53Cu;
    {
        const bool branch_taken_0x2cd53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd53c) {
            ctx->pc = 0x2CD560u;
            goto label_2cd560;
        }
    }
    ctx->pc = 0x2CD544u;
label_2cd544:
    // 0x2cd544: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd548: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2cd548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cd54c: 0x34430200  ori         $v1, $v0, 0x200
    ctx->pc = 0x2cd54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2cd550: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2cd550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2cd554: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd558: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CD558u;
    SET_GPR_U32(ctx, 31, 0x2CD560u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CD558u, 0x2CD560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD560u;
label_2cd560:
    // 0x2cd560: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2cd560u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd56c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2cd56cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cd570: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD578u;
}
