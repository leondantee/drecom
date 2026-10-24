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

// Function: Em0c_R1_mv0b
// Address: 0x229c90 - 0x22a074
void Em0c_R1_mv0b_0x229c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv0b_0x229c90");
#endif

    switch (ctx->pc) {
        case 0x229cecu: goto label_229cec;
        case 0x229de8u: goto label_229de8;
        case 0x229e04u: goto label_229e04;
        case 0x229e1cu: goto label_229e1c;
        case 0x229e28u: goto label_229e28;
        default: break;
    }

    ctx->pc = 0x229c90u;

    // 0x229c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x229c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x229c94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x229c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x229c98: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x229c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x229c9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229ca0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x229ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x229ca4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x229ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x229ca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x229ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229cac: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x229CACu;
    {
        const bool branch_taken_0x229cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x229cac) {
            ctx->pc = 0x229DBCu;
            goto label_229dbc;
        }
    }
    ctx->pc = 0x229CB4u;
    // 0x229cb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229CB4u;
    {
        const bool branch_taken_0x229cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x229cb4) {
            ctx->pc = 0x229CC4u;
            goto label_229cc4;
        }
    }
    ctx->pc = 0x229CBCu;
    // 0x229cbc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x229CBCu;
    {
        const bool branch_taken_0x229cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229cbc) {
            ctx->pc = 0x229E28u;
            goto label_229e28;
        }
    }
    ctx->pc = 0x229CC4u;
label_229cc4:
    // 0x229cc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229cc8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x229cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x229ccc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x229cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229cd0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x229cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x229cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229cd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229cdc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229ce0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x229ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x229ce4: 0xc067654  jal         func_19D950
    ctx->pc = 0x229CE4u;
    SET_GPR_U32(ctx, 31, 0x229CECu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x229CE4u, 0x229CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CECu;
label_229cec:
    // 0x229cec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x229cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x229cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x229cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229cf4: 0x0  nop
    ctx->pc = 0x229cf4u;
    // NOP
    // 0x229cf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x229cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x229cfc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x229cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x229d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d04: 0x0  nop
    ctx->pc = 0x229d04u;
    // NOP
    // 0x229d08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229d08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229d0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d14: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x229d18: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x229d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x229d1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x229d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x229d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d2c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x229d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x229d30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x229d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x229d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d40: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x229d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x229d44: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x229d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x229d48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x229d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x229d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d54: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d58: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x229d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x229d5c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x229d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x229d60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x229d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x229d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d6c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d70: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x229d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x229d74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d78: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x229d78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x229d7c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x229d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x229d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d8c: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x229d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x229d90: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x229d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x229d94: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x229d94u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229d98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229da0: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x229da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x229da4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229da8: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x229da8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x229dac: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x229dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x229db0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x229db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x229db4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229db8: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x229db8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_229dbc:
    // 0x229dbc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x229dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229dc0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x229dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229dc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229dc8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229dcc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x229dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x229dd0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x229dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x229dd4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x229dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x229dd8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x229dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x229ddc: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x229ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x229de0: 0xc05c848  jal         func_172120
    ctx->pc = 0x229DE0u;
    SET_GPR_U32(ctx, 31, 0x229DE8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x229DE0u, 0x229DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229DE8u;
label_229de8:
    // 0x229de8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x229de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x229dec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229df0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x229df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229df4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x229df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229df8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x229df8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229dfc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x229DFCu;
    SET_GPR_U32(ctx, 31, 0x229E04u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x229DFCu, 0x229E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E04u;
label_229e04:
    // 0x229e04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e08: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x229e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x229e0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x229e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e10: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x229e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x229e14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x229E14u;
    SET_GPR_U32(ctx, 31, 0x229E1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x229E14u, 0x229E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E1Cu;
label_229e1c:
    // 0x229e1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x229e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e20: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x229E20u;
    SET_GPR_U32(ctx, 31, 0x229E28u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x229E20u, 0x229E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E28u;
label_229e28:
    // 0x229e28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229e30: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229e34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229e38: 0x0  nop
    ctx->pc = 0x229e38u;
    // NOP
    // 0x229e3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x229e3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229e40: 0x0  nop
    ctx->pc = 0x229e40u;
    // NOP
    // 0x229e44: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x229E44u;
    {
        const bool branch_taken_0x229e44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229e44) {
            ctx->pc = 0x229F28u;
            goto label_229f28;
        }
    }
    ctx->pc = 0x229E4Cu;
    // 0x229e4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229e54: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229e5c: 0x0  nop
    ctx->pc = 0x229e5cu;
    // NOP
    // 0x229e60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229e60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229e64: 0x0  nop
    ctx->pc = 0x229e64u;
    // NOP
    // 0x229e68: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x229E68u;
    {
        const bool branch_taken_0x229e68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229e68) {
            ctx->pc = 0x229ED0u;
            goto label_229ed0;
        }
    }
    ctx->pc = 0x229E70u;
    // 0x229e70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e74: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x229e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229e78: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x229e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229e7c: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x229e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
    // 0x229e80: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x229e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x229e84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229e88: 0x0  nop
    ctx->pc = 0x229e88u;
    // NOP
    // 0x229e8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x229e8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229e90: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x229e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x229e94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229e9c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229ea4: 0x0  nop
    ctx->pc = 0x229ea4u;
    // NOP
    // 0x229ea8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229eac: 0x0  nop
    ctx->pc = 0x229eacu;
    // NOP
    // 0x229eb0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x229EB0u;
    {
        const bool branch_taken_0x229eb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229eb0) {
            ctx->pc = 0x229F28u;
            goto label_229f28;
        }
    }
    ctx->pc = 0x229EB8u;
    // 0x229eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229ebc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229ec0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229ec4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x229ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x229ec8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x229EC8u;
    {
        const bool branch_taken_0x229ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229ec8) {
            ctx->pc = 0x229F28u;
            goto label_229f28;
        }
    }
    ctx->pc = 0x229ED0u;
label_229ed0:
    // 0x229ed0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229ed4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x229ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229ed8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x229ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229edc: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x229edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
    // 0x229ee0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x229ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x229ee4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229ee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229ee8: 0x0  nop
    ctx->pc = 0x229ee8u;
    // NOP
    // 0x229eec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x229eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229ef0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x229ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x229ef4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229ef8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229efc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229f00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229f04: 0x0  nop
    ctx->pc = 0x229f04u;
    // NOP
    // 0x229f08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229f0c: 0x0  nop
    ctx->pc = 0x229f0cu;
    // NOP
    // 0x229f10: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x229F10u;
    {
        const bool branch_taken_0x229f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229f10) {
            ctx->pc = 0x229F28u;
            goto label_229f28;
        }
    }
    ctx->pc = 0x229F18u;
    // 0x229f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229f1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229f24: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x229f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_229f28:
    // 0x229f28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229f30: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x229f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229f34: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x229f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x229f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229f3c: 0x0  nop
    ctx->pc = 0x229f3cu;
    // NOP
    // 0x229f40: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x229f40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229f44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f48: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x229f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229f4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x229f4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229f50: 0x0  nop
    ctx->pc = 0x229f50u;
    // NOP
    // 0x229f54: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x229F54u;
    {
        const bool branch_taken_0x229f54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229f54) {
            ctx->pc = 0x229F78u;
            goto label_229f78;
        }
    }
    ctx->pc = 0x229F5Cu;
    // 0x229f5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229f64: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x229f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229f68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f6c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x229f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229f70: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x229f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x229f74: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x229f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_229f78:
    // 0x229f78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229f80: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x229f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229f84: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x229f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x229f88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229f8c: 0x0  nop
    ctx->pc = 0x229f8cu;
    // NOP
    // 0x229f90: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x229f90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229f94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f98: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x229f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229f9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x229f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229fa0: 0x0  nop
    ctx->pc = 0x229fa0u;
    // NOP
    // 0x229fa4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x229FA4u;
    {
        const bool branch_taken_0x229fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229fa4) {
            ctx->pc = 0x229FC8u;
            goto label_229fc8;
        }
    }
    ctx->pc = 0x229FACu;
    // 0x229fac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229fb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229fb4: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x229fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229fb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229fbc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x229fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229fc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229fc4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x229fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_229fc8:
    // 0x229fc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229fcc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x229fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229fd0: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x229fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229fd4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x229fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x229fd8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x229fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x229fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229fe0: 0x0  nop
    ctx->pc = 0x229fe0u;
    // NOP
    // 0x229fe4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x229fe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229fe8: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x229fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x229fec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229ff0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229ff4: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x229ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229ff8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x229ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x229ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a000: 0x0  nop
    ctx->pc = 0x22a000u;
    // NOP
    // 0x22a004: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22a004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a008: 0x0  nop
    ctx->pc = 0x22a008u;
    // NOP
    // 0x22a00c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22A00Cu;
    {
        const bool branch_taken_0x22a00c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a00c) {
            ctx->pc = 0x22A028u;
            goto label_22a028;
        }
    }
    ctx->pc = 0x22A014u;
    // 0x22a014: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22a018: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22a018u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a01c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22a020: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22a024: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22a024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_22a028:
    // 0x22a028: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22a02c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22a030: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a034: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x22a034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x22a038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a03c: 0x0  nop
    ctx->pc = 0x22a03cu;
    // NOP
    // 0x22a040: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22a040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a044: 0x0  nop
    ctx->pc = 0x22a044u;
    // NOP
    // 0x22a048: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22A048u;
    {
        const bool branch_taken_0x22a048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a048) {
            ctx->pc = 0x22A064u;
            goto label_22a064;
        }
    }
    ctx->pc = 0x22A050u;
    // 0x22a050: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x22a050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x22a054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a058: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22a05c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22a060: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22a060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_22a064:
    // 0x22a064: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x22a064u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a068: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22a068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22a06c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A074u;
}
