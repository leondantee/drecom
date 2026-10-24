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

// Function: entry_0021dbcc
// Address: 0x21dbcc - 0x21dccc
void entry_0021dbcc_0x21dbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021dbcc_0x21dbcc");
#endif

    switch (ctx->pc) {
        case 0x21dc00u: goto label_21dc00;
        case 0x21dc34u: goto label_21dc34;
        case 0x21dc5cu: goto label_21dc5c;
        default: break;
    }

    ctx->pc = 0x21dbccu;

    // 0x21dbcc: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x21dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x21dbd0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21dbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x21dbd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21dbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dbd8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dbdc: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x21dbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x21dbe0: 0x8fb10098  lw          $s1, 0x98($sp)
    ctx->pc = 0x21dbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dbe4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x21dbe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21dbe8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dbec: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x21dbecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21dbf0: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x21DBF0u;
    {
        const bool branch_taken_0x21dbf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dbf0) {
            ctx->pc = 0x21DCCCu;
            return;
        }
    }
    ctx->pc = 0x21DBF8u;
    // 0x21dbf8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21DBF8u;
    SET_GPR_U32(ctx, 31, 0x21DC00u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21DBF8u, 0x21DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC00u;
label_21dc00:
    // 0x21dc00: 0x3c024048  lui         $v0, 0x4048
    ctx->pc = 0x21dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16456 << 16));
    // 0x21dc04: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x21dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x21dc08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21dc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21dc0c: 0x0  nop
    ctx->pc = 0x21dc0cu;
    // NOP
    // 0x21dc10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21dc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21dc14: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x21dc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x21dc18: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x21dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x21dc1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21dc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dc20: 0x0  nop
    ctx->pc = 0x21dc20u;
    // NOP
    // 0x21dc24: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x21dc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x21dc28: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x21dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21dc2c: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x21DC2Cu;
    SET_GPR_U32(ctx, 31, 0x21DC34u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x21DC2Cu, 0x21DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC34u;
label_21dc34:
    // 0x21dc34: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x21dc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dc38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21dc38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21dc3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dc40: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x21dc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x21dc44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21dc44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dc48: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dc4c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x21dc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x21dc50: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x21dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21dc54: 0xc0454c4  jal         func_115310
    ctx->pc = 0x21DC54u;
    SET_GPR_U32(ctx, 31, 0x21DC5Cu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x21DC54u, 0x21DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC5Cu;
label_21dc5c:
    // 0x21dc5c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x21dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dc60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21dc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21dc64: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dc68: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x21dc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x21dc6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21dc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21dc70: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21dc74: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21dc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21dc78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21dc7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21dc80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dc84: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x21dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21dc88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21dc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21dc8c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21dc90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21dc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21dc94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21dc98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21dc9c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21dc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21dca0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x21dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x21dca4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21dca8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21dca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21dcac: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21dcacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21dcb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dcb4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x21dcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x21dcb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dcbc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x21dcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21dcc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21dcc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dcc4: 0x0  nop
    ctx->pc = 0x21dcc4u;
    // NOP
    // 0x21dcc8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x21dcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->pc = 0x21dcccu;
}
