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

// Function: e2d_ida5_type06
// Address: 0x2bf250 - 0x2bf3bc
void e2d_ida5_type06_0x2bf250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_ida5_type06_0x2bf250");
#endif

    switch (ctx->pc) {
        case 0x2bf2fcu: goto label_2bf2fc;
        default: break;
    }

    ctx->pc = 0x2bf250u;

    // 0x2bf250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf254: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bf254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bf258: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bf258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bf25c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf264: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf268: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bf268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bf26c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf274: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf278: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bf278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bf27c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf284: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf288: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bf288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bf28c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf298: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bf298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bf29c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bf29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bf2a0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bf2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bf2a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bf2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bf2a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bf2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf2b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bf2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bf2b4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bf2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bf2b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bf2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bf2bc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bf2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bf2c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bf2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bf2c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bf2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf2c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf2cc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bf2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bf2d0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bf2d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bf2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bf2d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bf2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bf2dc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bf2dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bf2e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bf2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bf2e4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bf2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bf2e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bf2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bf2ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf2f0: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2bf2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf2f4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BF2F4u;
    SET_GPR_U32(ctx, 31, 0x2BF2FCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BF2F4u, 0x2BF2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2FCu;
label_2bf2fc:
    // 0x2bf2fc: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bf2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bf300: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bf300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf304: 0x0  nop
    ctx->pc = 0x2bf304u;
    // NOP
    // 0x2bf308: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bf308u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bf30c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2bf30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2bf310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf314: 0x0  nop
    ctx->pc = 0x2bf314u;
    // NOP
    // 0x2bf318: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bf318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bf31c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf320: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bf320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bf324: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2bf324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2bf328: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2bf328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2bf32c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf32cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf330: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf334: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bf334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bf338: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x2bf338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x2bf33c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bf33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bf340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf344: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf348: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2bf348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2bf34c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2bf34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2bf350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf354: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf358: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2bf358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2bf35c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2bf35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2bf360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf364: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf368: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2bf368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2bf36c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2bf36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2bf370: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf374: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf378: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2bf378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2bf37c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2bf37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2bf380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf384: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf388: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2bf388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2bf38c: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2bf38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2bf390: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2bf390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2bf394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf398: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf39c: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2bf39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2bf3a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bf3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf3a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf3a8: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2bf3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bf3ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bf3acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf3b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bf3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bf3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF3BCu;
}
