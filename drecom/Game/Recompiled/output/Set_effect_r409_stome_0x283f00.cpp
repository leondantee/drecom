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

// Function: Set_effect_r409_stome
// Address: 0x283f00 - 0x2840bc
void Set_effect_r409_stome_0x283f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_r409_stome_0x283f00");
#endif

    switch (ctx->pc) {
        case 0x283f2cu: goto label_283f2c;
        case 0x283f38u: goto label_283f38;
        case 0x283facu: goto label_283fac;
        case 0x283fc0u: goto label_283fc0;
        case 0x283fd4u: goto label_283fd4;
        case 0x284070u: goto label_284070;
        case 0x284090u: goto label_284090;
        default: break;
    }

    ctx->pc = 0x283f00u;

    // 0x283f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283f04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x283f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x283f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283f0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x283f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x283f10: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x283f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x283f14: 0x34049300  ori         $a0, $zero, 0x9300
    ctx->pc = 0x283f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37632);
    // 0x283f18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x283f18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283f1c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x283f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283f20: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283f20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283f24: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x283F24u;
    SET_GPR_U32(ctx, 31, 0x283F2Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x283F24u, 0x283F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283F2Cu;
label_283f2c:
    // 0x283f2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x283f2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x283f30: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x283F30u;
    SET_GPR_U32(ctx, 31, 0x283F38u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x283F30u, 0x283F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283F38u;
label_283f38:
    // 0x283f38: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x283f38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x283f3c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x283f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x283f40: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x283f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x283f44: 0x12030058  beq         $s0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x283F44u;
    {
        const bool branch_taken_0x283f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x283f44) {
            ctx->pc = 0x2840A8u;
            goto label_2840a8;
        }
    }
    ctx->pc = 0x283F4Cu;
    // 0x283f4c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x283f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x283f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283f54: 0x0  nop
    ctx->pc = 0x283f54u;
    // NOP
    // 0x283f58: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x283f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x283f5c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x283f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x283f60: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x283f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x283f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283f68: 0x0  nop
    ctx->pc = 0x283f68u;
    // NOP
    // 0x283f6c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x283f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x283f70: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x283f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x283f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283f78: 0x0  nop
    ctx->pc = 0x283f78u;
    // NOP
    // 0x283f7c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x283f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x283f80: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x283f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x283f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283f88: 0x0  nop
    ctx->pc = 0x283f88u;
    // NOP
    // 0x283f8c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x283f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x283f90: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x283f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x283f94: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x283f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x283f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283f9c: 0x0  nop
    ctx->pc = 0x283f9cu;
    // NOP
    // 0x283fa0: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x283fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x283fa4: 0xc067648  jal         func_19D920
    ctx->pc = 0x283FA4u;
    SET_GPR_U32(ctx, 31, 0x283FACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x283FA4u, 0x283FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FACu;
label_283fac:
    // 0x283fac: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x283facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283fb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x283fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283fb4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x283fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x283fb8: 0xc067648  jal         func_19D920
    ctx->pc = 0x283FB8u;
    SET_GPR_U32(ctx, 31, 0x283FC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x283FB8u, 0x283FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FC0u;
label_283fc0:
    // 0x283fc0: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x283fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283fc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x283fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283fc8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x283fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x283fcc: 0xc067648  jal         func_19D920
    ctx->pc = 0x283FCCu;
    SET_GPR_U32(ctx, 31, 0x283FD4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x283FCCu, 0x283FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FD4u;
label_283fd4:
    // 0x283fd4: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x283fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283fd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x283fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283fdc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x283fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x283fe0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x283fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x283fe4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x283fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283fe8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x283fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x283fec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x283fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x283ff0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x283ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283ff4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x283ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x283ff8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x283ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x283ffc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x283ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284000: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x284000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x284004: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x284004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x284008: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x284008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x28400c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28400cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284010: 0x0  nop
    ctx->pc = 0x284010u;
    // NOP
    // 0x284014: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x284014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x284018: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x284018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x28401c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x28401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x284020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284024: 0x0  nop
    ctx->pc = 0x284024u;
    // NOP
    // 0x284028: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x284028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x28402c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28402cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x284030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284034: 0x0  nop
    ctx->pc = 0x284034u;
    // NOP
    // 0x284038: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x284038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x28403c: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x28403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x284040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284044: 0x0  nop
    ctx->pc = 0x284044u;
    // NOP
    // 0x284048: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x284048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x28404c: 0x3c023e38  lui         $v0, 0x3E38
    ctx->pc = 0x28404cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15928 << 16));
    // 0x284050: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x284050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x284054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284058: 0x0  nop
    ctx->pc = 0x284058u;
    // NOP
    // 0x28405c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x28405cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x284060: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x284060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x284064: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x284064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x284068: 0xc067648  jal         func_19D920
    ctx->pc = 0x284068u;
    SET_GPR_U32(ctx, 31, 0x284070u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x284068u, 0x284070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284070u;
label_284070:
    // 0x284070: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x284070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x284074: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x284074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x284078: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x284078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28407c: 0x0  nop
    ctx->pc = 0x28407cu;
    // NOP
    // 0x284080: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284084: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x284084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x284088: 0xc067648  jal         func_19D920
    ctx->pc = 0x284088u;
    SET_GPR_U32(ctx, 31, 0x284090u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x284088u, 0x284090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284090u;
label_284090:
    // 0x284090: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x284090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x284094: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x284094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x284098: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x284098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28409c: 0x0  nop
    ctx->pc = 0x28409cu;
    // NOP
    // 0x2840a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2840a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2840a4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2840a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_2840a8:
    // 0x2840a8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2840a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2840ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2840acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2840b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2840b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2840b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2840B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2840B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2840BCu;
}
