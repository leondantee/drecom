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

// Function: entry_002f9b84
// Address: 0x2f9b84 - 0x2f9c60
void entry_002f9b84_0x2f9b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9b84_0x2f9b84");
#endif

    switch (ctx->pc) {
        case 0x2f9c20u: goto label_2f9c20;
        case 0x2f9c2cu: goto label_2f9c2c;
        default: break;
    }

    ctx->pc = 0x2f9b84u;

    // 0x2f9b84: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x2f9b84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9b88: 0x8d0300d4  lw          $v1, 0xD4($t0)
    ctx->pc = 0x2f9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 212)));
    // 0x2f9b8c: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x2f9b8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f9b90: 0x1420005b  bnez        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F9B90u;
    {
        const bool branch_taken_0x2f9b90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9b90) {
            ctx->pc = 0x2F9D00u;
            return;
        }
    }
    ctx->pc = 0x2F9B98u;
    // 0x2f9b98: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2f9b98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9b9c: 0x8ce400d4  lw          $a0, 0xD4($a3)
    ctx->pc = 0x2f9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2f9ba0: 0x28810011  slti        $at, $a0, 0x11
    ctx->pc = 0x2f9ba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f9ba4: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x2F9BA4u;
    {
        const bool branch_taken_0x2f9ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ba4) {
            ctx->pc = 0x2F9D00u;
            return;
        }
    }
    ctx->pc = 0x2F9BACu;
    // 0x2f9bac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9bb0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f9bb4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2F9BB4u;
    {
        const bool branch_taken_0x2f9bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9bb4) {
            ctx->pc = 0x2F9C60u;
            return;
        }
    }
    ctx->pc = 0x2F9BBCu;
    // 0x2f9bbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9bc0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2f9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f9bc4: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2f9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2f9bc8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2f9bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9bcc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2f9bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2f9bd0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2f9bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f9bd4: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2f9bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2f9bd8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f9bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9bdc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f9bdcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f9be0: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x2f9be0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f9be4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9be8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9bec: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x2f9becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2f9bf0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f9bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9bf4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2f9bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f9bf8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2f9bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9bfc: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2f9bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2f9c00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9c04: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x2f9c04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2f9c08: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2f9c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f9c0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9c0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9c10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f9c14: 0x24468ff0  addiu       $a2, $v0, -0x7010
    ctx->pc = 0x2f9c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938608));
    // 0x2f9c18: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9C18u;
    SET_GPR_U32(ctx, 31, 0x2F9C20u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9C18u, 0x2F9C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C20u;
label_2f9c20:
    // 0x2f9c20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9c20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9c24: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9C24u;
    SET_GPR_U32(ctx, 31, 0x2F9C2Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9C24u, 0x2F9C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C2Cu;
label_2f9c2c:
    // 0x2f9c2c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f9c2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9c30: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f9c34: 0x34650011  ori         $a1, $v1, 0x11
    ctx->pc = 0x2f9c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f9c38: 0x12050031  beq         $s0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2F9C38u;
    {
        const bool branch_taken_0x2f9c38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x2f9c38) {
            ctx->pc = 0x2F9D00u;
            return;
        }
    }
    ctx->pc = 0x2F9C40u;
    // 0x2f9c40: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x2f9c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9c44: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2f9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2f9c48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f9c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9c4c: 0x0  nop
    ctx->pc = 0x2f9c4cu;
    // NOP
    // 0x2f9c50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f9c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f9c54: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f9c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f9c58: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F9C58u;
    {
        const bool branch_taken_0x2f9c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c58) {
            ctx->pc = 0x2F9D00u;
            return;
        }
    }
    ctx->pc = 0x2F9C60u;
}
