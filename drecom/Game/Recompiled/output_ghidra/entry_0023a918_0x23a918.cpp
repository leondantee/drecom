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

// Function: entry_0023a918
// Address: 0x23a918 - 0x23aa80
void entry_0023a918_0x23a918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a918_0x23a918");
#endif

    switch (ctx->pc) {
        case 0x23a9d8u: goto label_23a9d8;
        case 0x23aa5cu: goto label_23aa5c;
        case 0x23aa64u: goto label_23aa64;
        default: break;
    }

    ctx->pc = 0x23a918u;

    // 0x23a918: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a91c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x23a91cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x23a920: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23a920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23a924: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23a924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23a928: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x23A928u;
    {
        const bool branch_taken_0x23a928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a928) {
            ctx->pc = 0x23AB30u;
            return;
        }
    }
    ctx->pc = 0x23A930u;
    // 0x23a930: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x23a930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x23a934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a938: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a93c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a940: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23a944: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23a948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a94c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a950: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a954: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23a954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23a958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a95c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a960: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x23a960u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a964: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a968: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23a96c: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23a970: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x23a970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x23a974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a978: 0x0  nop
    ctx->pc = 0x23a978u;
    // NOP
    // 0x23a97c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x23a97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23a980: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23a980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23a984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a988: 0x0  nop
    ctx->pc = 0x23a988u;
    // NOP
    // 0x23a98c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x23a98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x23a990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a994: 0x0  nop
    ctx->pc = 0x23a994u;
    // NOP
    // 0x23a998: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x23a998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23a99c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23a9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a9a4: 0x0  nop
    ctx->pc = 0x23a9a4u;
    // NOP
    // 0x23a9a8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x23a9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x23a9ac: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x23a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x23a9b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a9b4: 0x0  nop
    ctx->pc = 0x23a9b4u;
    // NOP
    // 0x23a9b8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x23a9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23a9bc: 0xa7a00034  sh          $zero, 0x34($sp)
    ctx->pc = 0x23a9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x23a9c0: 0xa3a00036  sb          $zero, 0x36($sp)
    ctx->pc = 0x23a9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a9c4: 0xa3a00037  sb          $zero, 0x37($sp)
    ctx->pc = 0x23a9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a9c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23a9cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23a9d0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23A9D0u;
    SET_GPR_U32(ctx, 31, 0x23A9D8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23A9D0u, 0x23A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A9D8u;
label_23a9d8:
    // 0x23a9d8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23A9D8u;
    {
        const bool branch_taken_0x23a9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a9d8) {
            ctx->pc = 0x23AB30u;
            return;
        }
    }
    ctx->pc = 0x23A9E0u;
    // 0x23a9e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a9e4: 0x0  nop
    ctx->pc = 0x23a9e4u;
    // NOP
    // 0x23a9e8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x23a9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23a9ec: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23a9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a9f4: 0x0  nop
    ctx->pc = 0x23a9f4u;
    // NOP
    // 0x23a9f8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23a9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23a9fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aa00: 0x0  nop
    ctx->pc = 0x23aa00u;
    // NOP
    // 0x23aa04: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x23aa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23aa08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23aa0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23aa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aa10: 0x0  nop
    ctx->pc = 0x23aa10u;
    // NOP
    // 0x23aa14: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x23aa14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x23aa18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23aa1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23aa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23aa20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23aa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23aa24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23aa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23aa28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23aa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23aa2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23aa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23aa30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23aa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23aa34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23aa38: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23aa38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23aa3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23aa40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23aa44: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x23aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23aa48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23aa48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23aa4c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23aa4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23aa50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23aa50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23aa54: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23AA54u;
    SET_GPR_U32(ctx, 31, 0x23AA5Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23AA54u, 0x23AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA5Cu;
label_23aa5c:
    // 0x23aa5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AA5Cu;
    SET_GPR_U32(ctx, 31, 0x23AA64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AA5Cu, 0x23AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA64u;
label_23aa64:
    // 0x23aa64: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23AA64u;
    {
        const bool branch_taken_0x23aa64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23aa64) {
            ctx->pc = 0x23AA80u;
            return;
        }
    }
    ctx->pc = 0x23AA6Cu;
    // 0x23aa6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23aa6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23aa70: 0x0  nop
    ctx->pc = 0x23aa70u;
    // NOP
    // 0x23aa74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23aa74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23aa78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23AA78u;
    {
        const bool branch_taken_0x23aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aa78) {
            ctx->pc = 0x23AA9Cu;
            return;
        }
    }
    ctx->pc = 0x23AA80u;
}
