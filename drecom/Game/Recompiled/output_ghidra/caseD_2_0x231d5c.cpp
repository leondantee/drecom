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

// Function: caseD_2
// Address: 0x231d5c - 0x231e84
void caseD_2_0x231d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x231d5c");
#endif

    switch (ctx->pc) {
        case 0x231d68u: goto label_231d68;
        case 0x231d8cu: goto label_231d8c;
        case 0x231dacu: goto label_231dac;
        case 0x231dc4u: goto label_231dc4;
        case 0x231e10u: goto label_231e10;
        case 0x231e28u: goto label_231e28;
        case 0x231e54u: goto label_231e54;
        default: break;
    }

    ctx->pc = 0x231d5cu;

    // 0x231d5c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x231d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231d60: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x231D60u;
    SET_GPR_U32(ctx, 31, 0x231D68u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x231D68u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231D68u) { return; }
    ctx->pc = 0x231D68u;
label_231d68:
    // 0x231d68: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231d6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x231d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231d70: 0x3c043edf  lui         $a0, 0x3EDF
    ctx->pc = 0x231d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16095 << 16));
    // 0x231d74: 0x348266f3  ori         $v0, $a0, 0x66F3
    ctx->pc = 0x231d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26355);
    // 0x231d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231d7c: 0x0  nop
    ctx->pc = 0x231d7cu;
    // NOP
    // 0x231d80: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x231d80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231d84: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x231D84u;
    SET_GPR_U32(ctx, 31, 0x231D8Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231D84u, 0x231D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D8Cu;
label_231d8c:
    // 0x231d8c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231d90: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x231d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x231d94: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231d98: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x231d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231d9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x231d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231da0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x231da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231da4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x231DA4u;
    SET_GPR_U32(ctx, 31, 0x231DACu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x231DACu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231DACu) { return; }
    ctx->pc = 0x231DACu;
label_231dac:
    // 0x231dac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231db0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x231db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231db4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x231db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231db8: 0xc46c0004  lwc1        $f12, 0x4($v1)
    ctx->pc = 0x231db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231dbc: 0xc040d0e  jal         func_103438
    ctx->pc = 0x231DBCu;
    SET_GPR_U32(ctx, 31, 0x231DC4u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x231DC4u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x231DC4u) { return; }
    ctx->pc = 0x231DC4u;
label_231dc4:
    // 0x231dc4: 0x3c043f06  lui         $a0, 0x3F06
    ctx->pc = 0x231dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16134 << 16));
    // 0x231dc8: 0x34830a92  ori         $v1, $a0, 0xA92
    ctx->pc = 0x231dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2706);
    // 0x231dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x231dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231dd0: 0x0  nop
    ctx->pc = 0x231dd0u;
    // NOP
    // 0x231dd4: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x231dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x231dd8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231ddc: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x231ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231de0: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x231de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x231de4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x231de4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x231de8: 0xc4ac0008  lwc1        $f12, 0x8($a1)
    ctx->pc = 0x231de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231dec: 0xc4cd000c  lwc1        $f13, 0xC($a2)
    ctx->pc = 0x231decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x231df0: 0x26a20030  addiu       $v0, $s5, 0x30
    ctx->pc = 0x231df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x231df4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x231df4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231df8: 0xc7ae01c0  lwc1        $f14, 0x1C0($sp)
    ctx->pc = 0x231df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x231dfc: 0xc7af01c0  lwc1        $f15, 0x1C0($sp)
    ctx->pc = 0x231dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x231e00: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x231e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x231e04: 0x27a701bc  addiu       $a3, $sp, 0x1BC
    ctx->pc = 0x231e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x231e08: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x231E08u;
    SET_GPR_U32(ctx, 31, 0x231E10u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x231E08u, 0x231E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E10u;
label_231e10:
    // 0x231e10: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231e14: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x231e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231e18: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x231e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e1c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x231e1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231e20: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x231E20u;
    SET_GPR_U32(ctx, 31, 0x231E28u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231E20u, 0x231E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E28u;
label_231e28:
    // 0x231e28: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231e2c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x231e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x231e30: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x231e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e34: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231e38: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x231e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x231e3c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231e40: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x231e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231e44: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x231e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e48: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x231e48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231e4c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x231E4Cu;
    SET_GPR_U32(ctx, 31, 0x231E54u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x231E4Cu, 0x231E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E54u;
label_231e54:
    // 0x231e54: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231e58: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x231e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x231e5c: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x231e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231e60: 0x949211f4  lhu         $s2, 0x11F4($a0)
    ctx->pc = 0x231e60u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
    // 0x231e64: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x231e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x231e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231e6c: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231E6Cu;
    {
        const bool branch_taken_0x231e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x231e6c) {
            ctx->pc = 0x231E84u;
            return;
        }
    }
    ctx->pc = 0x231E74u;
    // 0x231e74: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x231e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
    // 0x231e78: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x231e78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231e7c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231e80: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x231e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    ctx->pc = 0x231e84u;
}
