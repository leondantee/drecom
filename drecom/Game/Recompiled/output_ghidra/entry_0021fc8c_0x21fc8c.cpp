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

// Function: entry_0021fc8c
// Address: 0x21fc8c - 0x21fd60
void entry_0021fc8c_0x21fc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fc8c_0x21fc8c");
#endif

    switch (ctx->pc) {
        case 0x21fcccu: goto label_21fccc;
        case 0x21fcd8u: goto label_21fcd8;
        default: break;
    }

    ctx->pc = 0x21fc8cu;

    // 0x21fc8c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fc90: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x21fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x21fc94: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x21fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x21fc98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21fc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fc9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21fc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21fca0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fca4: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x21fca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x21fca8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21fca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21fcac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21fcacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21fcb0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x21fcb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21fcb4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x21fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fcb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21fcb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fcbc: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21fcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21fcc0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21fcc0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fcc4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21FCC4u;
    SET_GPR_U32(ctx, 31, 0x21FCCCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21FCC4u, 0x21FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCCCu;
label_21fccc:
    // 0x21fccc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21fcccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21fcd0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21FCD0u;
    SET_GPR_U32(ctx, 31, 0x21FCD8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21FCD0u, 0x21FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCD8u;
label_21fcd8:
    // 0x21fcd8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fcdc: 0x3c023f8f  lui         $v0, 0x3F8F
    ctx->pc = 0x21fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16271 << 16));
    // 0x21fce0: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x21fce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x21fce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21fce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21fce8: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x21fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fcec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21fcecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21fcf0: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x21fcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x21fcf4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x21fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x21fcf8: 0x3c023f8f  lui         $v0, 0x3F8F
    ctx->pc = 0x21fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16271 << 16));
    // 0x21fcfc: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x21fcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x21fd00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21fd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21fd04: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x21fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fd08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21fd08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21fd0c: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x21fd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x21fd10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x21fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x21fd14: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x21fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x21fd18: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x21fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x21fd1c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x21fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x21fd20: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x21fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x21fd24: 0x904213a5  lbu         $v0, 0x13A5($v0)
    ctx->pc = 0x21fd24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
    // 0x21fd28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x21fd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fd2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21fd30: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x21FD30u;
    {
        const bool branch_taken_0x21fd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fd30) {
            ctx->pc = 0x21FDA8u;
            return;
        }
    }
    ctx->pc = 0x21FD38u;
    // 0x21fd38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21fd3c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21FD3Cu;
    {
        const bool branch_taken_0x21fd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fd3c) {
            ctx->pc = 0x21FD90u;
            return;
        }
    }
    ctx->pc = 0x21FD44u;
    // 0x21fd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fd48: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21FD48u;
    {
        const bool branch_taken_0x21fd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21fd48) {
            ctx->pc = 0x21FD78u;
            return;
        }
    }
    ctx->pc = 0x21FD50u;
    // 0x21fd50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FD50u;
    {
        const bool branch_taken_0x21fd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd50) {
            ctx->pc = 0x21FD60u;
            return;
        }
    }
    ctx->pc = 0x21FD58u;
    // 0x21fd58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21FD58u;
    {
        const bool branch_taken_0x21fd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd58) {
            ctx->pc = 0x21FDA8u;
            return;
        }
    }
    ctx->pc = 0x21FD60u;
}
