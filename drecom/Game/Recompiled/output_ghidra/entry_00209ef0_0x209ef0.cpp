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

// Function: entry_00209ef0
// Address: 0x209ef0 - 0x209ff4
void entry_00209ef0_0x209ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209ef0_0x209ef0");
#endif

    switch (ctx->pc) {
        case 0x209f88u: goto label_209f88;
        case 0x209fb8u: goto label_209fb8;
        default: break;
    }

    ctx->pc = 0x209ef0u;

    // 0x209ef0: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x209ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209ef4: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x209ef4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x209ef8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x209ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x209efc: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x209efcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x209f00: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x209f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f04: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x209f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x209f08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x209f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x209f0c: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x209f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x209f10: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x209F10u;
    {
        const bool branch_taken_0x209f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f10) {
            ctx->pc = 0x20A118u;
            return;
        }
    }
    ctx->pc = 0x209F18u;
    // 0x209f18: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x209f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f1c: 0x8cc51344  lw          $a1, 0x1344($a2)
    ctx->pc = 0x209f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4932)));
    // 0x209f20: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x209f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x209f24: 0xacc31344  sw          $v1, 0x1344($a2)
    ctx->pc = 0x209f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4932), GPR_U32(ctx, 3));
    // 0x209f28: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x209f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f2c: 0x8cc31348  lw          $v1, 0x1348($a2)
    ctx->pc = 0x209f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4936)));
    // 0x209f30: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x209f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x209f34: 0xacc41348  sw          $a0, 0x1348($a2)
    ctx->pc = 0x209f34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4936), GPR_U32(ctx, 4));
    // 0x209f38: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f3c: 0x8c651344  lw          $a1, 0x1344($v1)
    ctx->pc = 0x209f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
    // 0x209f40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x209f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x209f44: 0x14a30074  bne         $a1, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x209F44u;
    {
        const bool branch_taken_0x209f44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x209f44) {
            ctx->pc = 0x20A118u;
            return;
        }
    }
    ctx->pc = 0x209F4Cu;
    // 0x209f4c: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x209f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f50: 0xaca01344  sw          $zero, 0x1344($a1)
    ctx->pc = 0x209f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4932), GPR_U32(ctx, 0));
    // 0x209f54: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x209f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f58: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x209f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x209f5c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x209f5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209f60: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x209f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x209f64: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x209f64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x209f68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209f68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209f6c: 0x0  nop
    ctx->pc = 0x209f6cu;
    // NOP
    // 0x209f70: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x209f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x209f74: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x209f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209f78: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x209f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209f7c: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x209f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x209f80: 0xc06765c  jal         func_19D970
    ctx->pc = 0x209F80u;
    SET_GPR_U32(ctx, 31, 0x209F88u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x209F80u, 0x209F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F88u;
label_209f88:
    // 0x209f88: 0x3c033e86  lui         $v1, 0x3E86
    ctx->pc = 0x209f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16006 << 16));
    // 0x209f8c: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x209f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x209f90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x209f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209f94: 0x0  nop
    ctx->pc = 0x209f94u;
    // NOP
    // 0x209f98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x209f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x209f9c: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x209f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209fa4: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x209fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x209fa8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x209fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x209fac: 0xc7ac0204  lwc1        $f12, 0x204($sp)
    ctx->pc = 0x209facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x209fb0: 0xc067844  jal         func_19E110
    ctx->pc = 0x209FB0u;
    SET_GPR_U32(ctx, 31, 0x209FB8u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x209FB0u, 0x209FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FB8u;
label_209fb8:
    // 0x209fb8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x209fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x209fbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209fc0: 0x0  nop
    ctx->pc = 0x209fc0u;
    // NOP
    // 0x209fc4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x209fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x209fc8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x209fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x209fcc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x209fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x209fd0: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x209fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x209fd4: 0x8ca41348  lw          $a0, 0x1348($a1)
    ctx->pc = 0x209fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4936)));
    // 0x209fd8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209FD8u;
    {
        const bool branch_taken_0x209fd8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x209fd8) {
            ctx->pc = 0x209FF4u;
            return;
        }
    }
    ctx->pc = 0x209FE0u;
    // 0x209fe0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x209fe0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209fe4: 0x0  nop
    ctx->pc = 0x209fe4u;
    // NOP
    // 0x209fe8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x209fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x209fec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x209FECu;
    {
        const bool branch_taken_0x209fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209fec) {
            ctx->pc = 0x20A010u;
            return;
        }
    }
    ctx->pc = 0x209FF4u;
}
