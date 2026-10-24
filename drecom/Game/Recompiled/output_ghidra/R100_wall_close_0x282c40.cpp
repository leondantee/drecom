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

// Function: R100_wall_close
// Address: 0x282c40 - 0x282e60
void R100_wall_close_0x282c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R100_wall_close_0x282c40");
#endif

    switch (ctx->pc) {
        case 0x282c98u: goto label_282c98;
        case 0x282cacu: goto label_282cac;
        case 0x282cb8u: goto label_282cb8;
        case 0x282ce0u: goto label_282ce0;
        case 0x282d00u: goto label_282d00;
        case 0x282d08u: goto label_282d08;
        case 0x282d24u: goto label_282d24;
        case 0x282d50u: goto label_282d50;
        case 0x282db4u: goto label_282db4;
        case 0x282dc0u: goto label_282dc0;
        case 0x282de0u: goto label_282de0;
        case 0x282df8u: goto label_282df8;
        case 0x282e04u: goto label_282e04;
        case 0x282e10u: goto label_282e10;
        case 0x282e1cu: goto label_282e1c;
        case 0x282e48u: goto label_282e48;
        default: break;
    }

    ctx->pc = 0x282c40u;

    // 0x282c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282c44: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x282c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x282c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282c50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282c54: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x282c54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x282c58: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x282c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x282c5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x282c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x282c60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282c64: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x282c64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x282c68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282c6c: 0x8c31f9e0  lw          $s1, -0x620($at)
    ctx->pc = 0x282c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x282c70: 0x3c02c4af  lui         $v0, 0xC4AF
    ctx->pc = 0x282c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50351 << 16));
    // 0x282c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282c78: 0x0  nop
    ctx->pc = 0x282c78u;
    // NOP
    // 0x282c7c: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x282c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x282c80: 0x2404040c  addiu       $a0, $zero, 0x40C
    ctx->pc = 0x282c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x282c84: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x282c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x282c88: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x282c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282c8c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x282c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282c90: 0xc067c24  jal         func_19F090
    ctx->pc = 0x282C90u;
    SET_GPR_U32(ctx, 31, 0x282C98u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x282C90u, 0x282C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C98u;
label_282c98:
    // 0x282c98: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x282c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x282c9c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x282c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x282ca0: 0x24452e60  addiu       $a1, $v0, 0x2E60
    ctx->pc = 0x282ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11872));
    // 0x282ca4: 0xc0848cc  jal         func_212330
    ctx->pc = 0x282CA4u;
    SET_GPR_U32(ctx, 31, 0x282CACu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x282CA4u, 0x282CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CACu;
label_282cac:
    // 0x282cac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x282cacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282cb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x282CB0u;
    {
        const bool branch_taken_0x282cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282cb0) {
            ctx->pc = 0x282CE8u;
            goto label_282ce8;
        }
    }
    ctx->pc = 0x282CB8u;
label_282cb8:
    // 0x282cb8: 0xc6210124  lwc1        $f1, 0x124($s1)
    ctx->pc = 0x282cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282cbc: 0x3c02c0f8  lui         $v0, 0xC0F8
    ctx->pc = 0x282cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49400 << 16));
    // 0x282cc0: 0x3442e38e  ori         $v0, $v0, 0xE38E
    ctx->pc = 0x282cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58254);
    // 0x282cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282cc8: 0x0  nop
    ctx->pc = 0x282cc8u;
    // NOP
    // 0x282ccc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x282cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282cd0: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x282cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x282cd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x282cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282cd8: 0xc084964  jal         func_212590
    ctx->pc = 0x282CD8u;
    SET_GPR_U32(ctx, 31, 0x282CE0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x282CD8u, 0x282CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282CE0u;
label_282ce0:
    // 0x282ce0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x282ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x282ce4: 0x0  nop
    ctx->pc = 0x282ce4u;
    // NOP
label_282ce8:
    // 0x282ce8: 0x2e0200b4  sltiu       $v0, $s0, 0xB4
    ctx->pc = 0x282ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)180) ? 1 : 0);
    // 0x282cec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x282CECu;
    {
        const bool branch_taken_0x282cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282cec) {
            ctx->pc = 0x282CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282cb8;
        }
    }
    ctx->pc = 0x282CF4u;
    // 0x282cf4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x282cf4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282cf8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x282CF8u;
    {
        const bool branch_taken_0x282cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282cf8) {
            ctx->pc = 0x282DC8u;
            goto label_282dc8;
        }
    }
    ctx->pc = 0x282D00u;
label_282d00:
    // 0x282d00: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282D00u;
    SET_GPR_U32(ctx, 31, 0x282D08u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282D00u, 0x282D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D08u;
label_282d08:
    // 0x282d08: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x282d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x282d0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282d10: 0x0  nop
    ctx->pc = 0x282d10u;
    // NOP
    // 0x282d14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x282d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282d18: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x282d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x282d1c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282D1Cu;
    SET_GPR_U32(ctx, 31, 0x282D24u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282D1Cu, 0x282D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D24u;
label_282d24:
    // 0x282d24: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x282d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x282d28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282d2c: 0x0  nop
    ctx->pc = 0x282d2cu;
    // NOP
    // 0x282d30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282d30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282d34: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x282d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x282d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282d3c: 0x0  nop
    ctx->pc = 0x282d3cu;
    // NOP
    // 0x282d40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282d44: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x282d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x282d48: 0xc06765c  jal         func_19D970
    ctx->pc = 0x282D48u;
    SET_GPR_U32(ctx, 31, 0x282D50u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x282D48u, 0x282D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D50u;
label_282d50:
    // 0x282d50: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x282d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x282d54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282d58: 0x0  nop
    ctx->pc = 0x282d58u;
    // NOP
    // 0x282d5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x282d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x282d60: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x282d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x282d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282d68: 0x0  nop
    ctx->pc = 0x282d68u;
    // NOP
    // 0x282d6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x282d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x282d70: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x282d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x282d74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x282d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x282d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282d7c: 0x0  nop
    ctx->pc = 0x282d7cu;
    // NOP
    // 0x282d80: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x282d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x282d84: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x282d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x282d88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x282d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x282d8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x282d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x282d90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x282d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x282d94: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x282d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x282d98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x282d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x282d9c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x282d9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x282da0: 0x2404042c  addiu       $a0, $zero, 0x42C
    ctx->pc = 0x282da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1068));
    // 0x282da4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x282da4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282da8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x282da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x282dac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x282DACu;
    SET_GPR_U32(ctx, 31, 0x282DB4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x282DACu, 0x282DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DB4u;
label_282db4:
    // 0x282db4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x282db4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x282db8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x282DB8u;
    SET_GPR_U32(ctx, 31, 0x282DC0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x282DB8u, 0x282DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DC0u;
label_282dc0:
    // 0x282dc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x282dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x282dc4: 0x0  nop
    ctx->pc = 0x282dc4u;
    // NOP
label_282dc8:
    // 0x282dc8: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x282dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x282dcc: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x282DCCu;
    {
        const bool branch_taken_0x282dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282dcc) {
            ctx->pc = 0x282D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282d00;
        }
    }
    ctx->pc = 0x282DD4u;
    // 0x282dd4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x282dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x282dd8: 0xc084900  jal         func_212400
    ctx->pc = 0x282DD8u;
    SET_GPR_U32(ctx, 31, 0x282DE0u);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x282DD8u, 0x282DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DE0u;
label_282de0:
    // 0x282de0: 0x2404040d  addiu       $a0, $zero, 0x40D
    ctx->pc = 0x282de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    // 0x282de4: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x282de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x282de8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x282de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282dec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x282decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282df0: 0xc067c24  jal         func_19F090
    ctx->pc = 0x282DF0u;
    SET_GPR_U32(ctx, 31, 0x282DF8u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x282DF0u, 0x282DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DF8u;
label_282df8:
    // 0x282df8: 0x240400c1  addiu       $a0, $zero, 0xC1
    ctx->pc = 0x282df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x282dfc: 0xc067f18  jal         func_19FC60
    ctx->pc = 0x282DFCu;
    SET_GPR_U32(ctx, 31, 0x282E04u);
    ctx->pc = 0x19FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC60u, 0x282DFCu, 0x282E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E04u;
label_282e04:
    // 0x282e04: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x282e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282e08: 0xc067c50  jal         func_19F140
    ctx->pc = 0x282E08u;
    SET_GPR_U32(ctx, 31, 0x282E10u);
    ctx->pc = 0x19F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F140u, 0x282E08u, 0x282E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E10u;
label_282e10:
    // 0x282e10: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x282e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x282e14: 0xc084964  jal         func_212590
    ctx->pc = 0x282E14u;
    SET_GPR_U32(ctx, 31, 0x282E1Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x282E14u, 0x282E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E1Cu;
label_282e1c:
    // 0x282e1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282e20: 0xac201b90  sw          $zero, 0x1B90($at)
    ctx->pc = 0x282e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B90u, _value); } while (0);
    // 0x282e24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282e28: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x282e28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x282e2c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x282e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x282e30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x282e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x282e34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x282e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x282e38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282e3c: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x282e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x282e40: 0xc084934  jal         func_2124D0
    ctx->pc = 0x282E40u;
    SET_GPR_U32(ctx, 31, 0x282E48u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x282E40u, 0x282E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E48u;
label_282e48:
    // 0x282e48: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x282e48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282e54: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x282e54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x282e58: 0x3e00008  jr          $ra
    ctx->pc = 0x282E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282E60u;
}
