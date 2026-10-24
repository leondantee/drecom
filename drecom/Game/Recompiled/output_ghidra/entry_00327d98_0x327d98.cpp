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

// Function: entry_00327d98
// Address: 0x327d98 - 0x327eb4
void entry_00327d98_0x327d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327d98_0x327d98");
#endif

    switch (ctx->pc) {
        case 0x327e48u: goto label_327e48;
        case 0x327e6cu: goto label_327e6c;
        case 0x327ea8u: goto label_327ea8;
        default: break;
    }

    ctx->pc = 0x327d98u;

    // 0x327d98: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x327d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327d9c: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x327d9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x327da0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x327da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x327da4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x327da4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x327da8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x327DA8u;
    {
        const bool branch_taken_0x327da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x327da8) {
            ctx->pc = 0x327D5Cu;
            return;
        }
    }
    ctx->pc = 0x327DB0u;
    // 0x327db0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327db4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x327db4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x327db8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x327db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x327dbc: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x327dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327dc0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x327dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x327dc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327dc8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x327dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x327dcc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327dd0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x327dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x327dd4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x327dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x327dd8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x327dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327ddc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x327ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x327de0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x327de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x327de4: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x327de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x327de8: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x327de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x327dec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x327decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x327df0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x327df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x327df4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327df8: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x327df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x327dfc: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x327DFCu;
    {
        const bool branch_taken_0x327dfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x327dfc) {
            ctx->pc = 0x327EB4u;
            return;
        }
    }
    ctx->pc = 0x327E04u;
    // 0x327e04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327e08: 0x90630270  lbu         $v1, 0x270($v1)
    ctx->pc = 0x327e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x327e0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x327e10: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x327E10u;
    {
        const bool branch_taken_0x327e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327e10) {
            ctx->pc = 0x327EB4u;
            return;
        }
    }
    ctx->pc = 0x327E18u;
    // 0x327e18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x327e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327e1c: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x327e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x327e20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x327e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x327e24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x327e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x327e28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327e2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x327e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x327e30: 0x24440480  addiu       $a0, $v0, 0x480
    ctx->pc = 0x327e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x327e34: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x327e34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x327e38: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x327e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327e3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x327e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x327e40: 0xc067648  jal         func_19D920
    ctx->pc = 0x327E40u;
    SET_GPR_U32(ctx, 31, 0x327E48u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x327E40u, 0x327E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E48u;
label_327e48:
    // 0x327e48: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x327e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x327e4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x327e4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327e50: 0x0  nop
    ctx->pc = 0x327e50u;
    // NOP
    // 0x327e54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x327e54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x327e58: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x327e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327e5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x327e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x327e60: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x327e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x327e64: 0xc067648  jal         func_19D920
    ctx->pc = 0x327E64u;
    SET_GPR_U32(ctx, 31, 0x327E6Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x327E64u, 0x327E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E6Cu;
label_327e6c:
    // 0x327e6c: 0x3c054316  lui         $a1, 0x4316
    ctx->pc = 0x327e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17174 << 16));
    // 0x327e70: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x327e70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327e74: 0x0  nop
    ctx->pc = 0x327e74u;
    // NOP
    // 0x327e78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x327e78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x327e7c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x327e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327e80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x327e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x327e84: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x327e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x327e88: 0x24061901  addiu       $a2, $zero, 0x1901
    ctx->pc = 0x327e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6401));
    // 0x327e8c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x327e8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x327e90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x327e90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327e94: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x327e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327e98: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x327e98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x327e9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x327e9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327ea0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x327EA0u;
    SET_GPR_U32(ctx, 31, 0x327EA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x327EA0u, 0x327EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327EA8u;
label_327ea8:
    // 0x327ea8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x327ea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x327eac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x327EACu;
    SET_GPR_U32(ctx, 31, 0x327EB4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x327EACu, 0x327EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327EB4u;
}
