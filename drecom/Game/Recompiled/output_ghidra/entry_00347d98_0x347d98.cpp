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

// Function: entry_00347d98
// Address: 0x347d98 - 0x347f38
void entry_00347d98_0x347d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347d98_0x347d98");
#endif

    switch (ctx->pc) {
        case 0x347da8u: goto label_347da8;
        case 0x347db8u: goto label_347db8;
        case 0x347dd0u: goto label_347dd0;
        case 0x347ddcu: goto label_347ddc;
        case 0x347f20u: goto label_347f20;
        default: break;
    }

    ctx->pc = 0x347d98u;

    // 0x347d98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x347d9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x347da0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x347DA0u;
    SET_GPR_U32(ctx, 31, 0x347DA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x347DA0u, 0x347DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DA8u;
label_347da8:
    // 0x347da8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x347da8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x347dac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347db0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x347DB0u;
    SET_GPR_U32(ctx, 31, 0x347DB8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x347DB0u, 0x347DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DB8u;
label_347db8:
    // 0x347db8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x347db8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x347dbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347dc0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x347dc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x347dc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x347dc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x347dc8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x347DC8u;
    SET_GPR_U32(ctx, 31, 0x347DD0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x347DC8u, 0x347DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DD0u;
label_347dd0:
    // 0x347dd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347dd4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x347DD4u;
    SET_GPR_U32(ctx, 31, 0x347DDCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x347DD4u, 0x347DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DDCu;
label_347ddc:
    // 0x347ddc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347de0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x347de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x347de4: 0x106001c2  beqz        $v1, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x347DE4u;
    {
        const bool branch_taken_0x347de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347de4) {
            ctx->pc = 0x3484F0u;
            return;
        }
    }
    ctx->pc = 0x347DECu;
    // 0x347dec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347df0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x347df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x347df4: 0x245036b0  addiu       $s0, $v0, 0x36B0
    ctx->pc = 0x347df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x347df8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x347df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x347dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e00: 0x0  nop
    ctx->pc = 0x347e00u;
    // NOP
    // 0x347e04: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x347e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x347e08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x347e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x347e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e10: 0x0  nop
    ctx->pc = 0x347e10u;
    // NOP
    // 0x347e14: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x347e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x347e18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x347e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x347e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e20: 0x0  nop
    ctx->pc = 0x347e20u;
    // NOP
    // 0x347e24: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x347e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x347e28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e2c: 0x0  nop
    ctx->pc = 0x347e2cu;
    // NOP
    // 0x347e30: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x347e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x347e34: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x347e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x347e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e3c: 0x0  nop
    ctx->pc = 0x347e3cu;
    // NOP
    // 0x347e40: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x347e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x347e44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e48: 0x0  nop
    ctx->pc = 0x347e48u;
    // NOP
    // 0x347e4c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x347e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x347e50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x347e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x347e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e58: 0x0  nop
    ctx->pc = 0x347e58u;
    // NOP
    // 0x347e5c: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x347e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x347e60: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x347e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x347e64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x347e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x347e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e6c: 0x0  nop
    ctx->pc = 0x347e6cu;
    // NOP
    // 0x347e70: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x347e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x347e74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e78: 0x0  nop
    ctx->pc = 0x347e78u;
    // NOP
    // 0x347e7c: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x347e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x347e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e84: 0x0  nop
    ctx->pc = 0x347e84u;
    // NOP
    // 0x347e88: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x347e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x347e8c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347e90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x347e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347e94: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x347e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x347e98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x347e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x347e9c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x347e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x347ea0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347ea4: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x347ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x347ea8: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x347ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
    // 0x347eac: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x347eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x347eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347eb4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347eb8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x347eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x347ebc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x347ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x347ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347ec4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347ec8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x347ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x347ecc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x347eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x347ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347ed4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347ed8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x347ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x347edc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x347edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x347ee0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347ee4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x347ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x347ee8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x347ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x347eec: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347ef0: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x347ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x347ef4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x347ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347ef8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347efc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x347efcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x347f00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x347f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x347f0c: 0x24060a29  addiu       $a2, $zero, 0xA29
    ctx->pc = 0x347f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2601));
    // 0x347f10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x347f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347f14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x347f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x347f18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x347F18u;
    SET_GPR_U32(ctx, 31, 0x347F20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x347F18u, 0x347F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F20u;
label_347f20:
    // 0x347f20: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x347f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x347f24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347f28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f2c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x347f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x347f30: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x347F30u;
    {
        const bool branch_taken_0x347f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347f30) {
            ctx->pc = 0x3484F0u;
            return;
        }
    }
    ctx->pc = 0x347F38u;
}
