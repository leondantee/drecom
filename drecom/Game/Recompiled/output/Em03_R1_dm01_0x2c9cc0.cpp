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

// Function: Em03_R1_dm01
// Address: 0x2c9cc0 - 0x2ca3dc
void Em03_R1_dm01_0x2c9cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_dm01_0x2c9cc0");
#endif

    switch (ctx->pc) {
        case 0x2c9d44u: goto label_2c9d44;
        case 0x2c9d4cu: goto label_2c9d4c;
        case 0x2c9e3cu: goto label_2c9e3c;
        case 0x2c9e8cu: goto label_2c9e8c;
        case 0x2c9ea8u: goto label_2c9ea8;
        case 0x2c9f1cu: goto label_2c9f1c;
        case 0x2c9f34u: goto label_2c9f34;
        case 0x2c9f6cu: goto label_2c9f6c;
        case 0x2c9fa4u: goto label_2c9fa4;
        case 0x2c9fe4u: goto label_2c9fe4;
        case 0x2ca01cu: goto label_2ca01c;
        case 0x2ca054u: goto label_2ca054;
        case 0x2ca0d0u: goto label_2ca0d0;
        case 0x2ca0ecu: goto label_2ca0ec;
        case 0x2ca104u: goto label_2ca104;
        case 0x2ca124u: goto label_2ca124;
        case 0x2ca134u: goto label_2ca134;
        case 0x2ca140u: goto label_2ca140;
        case 0x2ca1e8u: goto label_2ca1e8;
        case 0x2ca2c4u: goto label_2ca2c4;
        case 0x2ca310u: goto label_2ca310;
        case 0x2ca35cu: goto label_2ca35c;
        case 0x2ca3a8u: goto label_2ca3a8;
        default: break;
    }

    ctx->pc = 0x2c9cc0u;

    // 0x2c9cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c9cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c9cc4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c9cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c9cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c9ccc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2c9cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2c9cd0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2c9cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2c9cd4: 0x24648180  addiu       $a0, $v1, -0x7E80
    ctx->pc = 0x2c9cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934912));
    // 0x2c9cd8: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x2c9cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2c9cdc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c9cdcu;
    { uint32_t bits = FAST_READ32(0x398180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9ce0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c9ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c9ce4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c9ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9ce8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9cec: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2c9cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9cf0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9cf4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2c9cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c9cf8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c9cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c9cfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9d00: 0x108300e8  beq         $a0, $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2C9D00u;
    {
        const bool branch_taken_0x2c9d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c9d00) {
            ctx->pc = 0x2CA0A4u;
            goto label_2ca0a4;
        }
    }
    ctx->pc = 0x2C9D08u;
    // 0x2c9d08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9D08u;
    {
        const bool branch_taken_0x2c9d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d08) {
            ctx->pc = 0x2C9D18u;
            goto label_2c9d18;
        }
    }
    ctx->pc = 0x2C9D10u;
    // 0x2c9d10: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x2C9D10u;
    {
        const bool branch_taken_0x2c9d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d10) {
            ctx->pc = 0x2CA3C8u;
            goto label_2ca3c8;
        }
    }
    ctx->pc = 0x2C9D18u;
label_2c9d18:
    // 0x2c9d18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9d1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d20: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c9d20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9d24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d28: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c9d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d2c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c9d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c9d30: 0x2406040b  addiu       $a2, $zero, 0x40B
    ctx->pc = 0x2c9d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x2c9d34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c9d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9d38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c9d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c9d3c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C9D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C9D44u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C9D3Cu, 0x2C9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D44u;
label_2c9d44:
    // 0x2c9d44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9D44u;
    SET_GPR_U32(ctx, 31, 0x2C9D4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9D44u, 0x2C9D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D4Cu;
label_2c9d4c:
    // 0x2c9d4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9d50: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2c9d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2c9d54: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c9d58: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c9d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9d5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c9d5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c9d60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d64: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x2c9d64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9d6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9d74: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c9d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c9d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9d7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9d84: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c9d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c9d88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9d8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9d94: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c9d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c9d98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9d9c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9da0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c9da4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c9da8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c9da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c9dac: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c9dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c9db0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9db4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9db8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c9db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c9dbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9dc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9dc4: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2c9dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2c9dc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9dcc: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2c9dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9dd0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9dd4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2c9dd4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9dd8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c9dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c9ddc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c9ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c9de0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2c9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2c9de4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9de8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9dec: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2c9decu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9df0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c9df0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c9df4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9df8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c9df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9dfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c9dfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c9e00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2c9e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c9e04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9e08: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2c9e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9e0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c9e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c9e10: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2c9e10u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c9e14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c9e18: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c9e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c9e1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c9e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9e24: 0x0  nop
    ctx->pc = 0x2c9e24u;
    // NOP
    // 0x2c9e28: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c9e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c9e2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c9e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c9e30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c9e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c9e34: 0xc040c24  jal         func_103090
    ctx->pc = 0x2C9E34u;
    SET_GPR_U32(ctx, 31, 0x2C9E3Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2C9E3Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C9E3Cu) { return; }
    ctx->pc = 0x2C9E3Cu;
label_2c9e3c:
    // 0x2c9e3c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2c9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2c9e40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9e44: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c9e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c9e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9e4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9e50: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c9e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c9e54: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2c9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2c9e58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9e5c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c9e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c9e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9e64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9e68: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2c9e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2c9e6c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2c9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2c9e70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9e74: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c9e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9e7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9e80: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c9e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c9e84: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9E84u;
    SET_GPR_U32(ctx, 31, 0x2C9E8Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9E84u, 0x2C9E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E8Cu;
label_2c9e8c:
    // 0x2c9e8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9e90: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2c9e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c9e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9e98: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2C9E98u;
    {
        const bool branch_taken_0x2c9e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c9e98) {
            ctx->pc = 0x2CA084u;
            goto label_2ca084;
        }
    }
    ctx->pc = 0x2C9EA0u;
    // 0x2c9ea0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9EA0u;
    SET_GPR_U32(ctx, 31, 0x2C9EA8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9EA0u, 0x2C9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9EA8u;
label_2c9ea8:
    // 0x2c9ea8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9eac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c9eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c9eb0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c9eb4: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x2c9eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2c9eb8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c9eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9ebc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9ec0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2c9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9ec4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9ec8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c9ecc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2c9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c9ed0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9ed4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2c9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2c9ed8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2c9ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9edc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9ee0: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2c9ee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2c9ee4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c9ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9ee8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c9ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c9eec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9ef0: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2C9EF0u;
    {
        const bool branch_taken_0x2c9ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ef0) {
            ctx->pc = 0x2CA084u;
            goto label_2ca084;
        }
    }
    ctx->pc = 0x2C9EF8u;
    // 0x2c9ef8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2c9ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9efc: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2c9efcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2c9f00: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2c9f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2c9f04: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2c9f04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9f08: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2c9f08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2c9f0c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2c9f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2c9f10: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2c9f10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9f14: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9F14u;
    SET_GPR_U32(ctx, 31, 0x2C9F1Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9F14u, 0x2C9F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F1Cu;
label_2c9f1c:
    // 0x2c9f1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9f20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c9f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9f24: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C9F24u;
    {
        const bool branch_taken_0x2c9f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f24) {
            ctx->pc = 0x2C9FDCu;
            goto label_2c9fdc;
        }
    }
    ctx->pc = 0x2C9F2Cu;
    // 0x2c9f2c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9F2Cu;
    SET_GPR_U32(ctx, 31, 0x2C9F34u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9F2Cu, 0x2C9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F34u;
label_2c9f34:
    // 0x2c9f34: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c9f38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9f3c: 0x0  nop
    ctx->pc = 0x2c9f3cu;
    // NOP
    // 0x2c9f40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9f44: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2c9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2c9f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9f4c: 0x0  nop
    ctx->pc = 0x2c9f4cu;
    // NOP
    // 0x2c9f50: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c9f50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9f54: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c9f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9f58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9f58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9f5c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9f60: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2c9f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2c9f64: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9F64u;
    SET_GPR_U32(ctx, 31, 0x2C9F6Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9F64u, 0x2C9F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F6Cu;
label_2c9f6c:
    // 0x2c9f6c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c9f70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9f74: 0x0  nop
    ctx->pc = 0x2c9f74u;
    // NOP
    // 0x2c9f78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9f7c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2c9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2c9f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9f84: 0x0  nop
    ctx->pc = 0x2c9f84u;
    // NOP
    // 0x2c9f88: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c9f88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9f8c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c9f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9f90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9f94: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9f98: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c9f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2c9f9c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9F9Cu;
    SET_GPR_U32(ctx, 31, 0x2C9FA4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9F9Cu, 0x2C9FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FA4u;
label_2c9fa4:
    // 0x2c9fa4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c9fa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9fac: 0x0  nop
    ctx->pc = 0x2c9facu;
    // NOP
    // 0x2c9fb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9fb4: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2c9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2c9fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9fbc: 0x0  nop
    ctx->pc = 0x2c9fbcu;
    // NOP
    // 0x2c9fc0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c9fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c9fc4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c9fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9fc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c9fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c9fcc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2c9fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2c9fd0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2c9fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2c9fd4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2C9FD4u;
    {
        const bool branch_taken_0x2c9fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9fd4) {
            ctx->pc = 0x2CA084u;
            goto label_2ca084;
        }
    }
    ctx->pc = 0x2C9FDCu;
label_2c9fdc:
    // 0x2c9fdc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C9FDCu;
    SET_GPR_U32(ctx, 31, 0x2C9FE4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C9FDCu, 0x2C9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9FE4u;
label_2c9fe4:
    // 0x2c9fe4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c9fe8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c9fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9fec: 0x0  nop
    ctx->pc = 0x2c9fecu;
    // NOP
    // 0x2c9ff0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c9ff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c9ff4: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2c9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2c9ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9ffc: 0x0  nop
    ctx->pc = 0x2c9ffcu;
    // NOP
    // 0x2ca000: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca004: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2ca004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca00c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca010: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ca010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ca014: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA014u;
    SET_GPR_U32(ctx, 31, 0x2CA01Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA014u, 0x2CA01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA01Cu;
label_2ca01c:
    // 0x2ca01c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca024: 0x0  nop
    ctx->pc = 0x2ca024u;
    // NOP
    // 0x2ca028: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca02c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ca02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ca030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca034: 0x0  nop
    ctx->pc = 0x2ca034u;
    // NOP
    // 0x2ca038: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca03c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ca03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca040: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca044: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca048: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ca048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ca04c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA04Cu;
    SET_GPR_U32(ctx, 31, 0x2CA054u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA04Cu, 0x2CA054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA054u;
label_2ca054:
    // 0x2ca054: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca058: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca05c: 0x0  nop
    ctx->pc = 0x2ca05cu;
    // NOP
    // 0x2ca060: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca064: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ca064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ca068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca06c: 0x0  nop
    ctx->pc = 0x2ca06cu;
    // NOP
    // 0x2ca070: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca074: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2ca074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca078: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca07c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca080: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ca080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2ca084:
    // 0x2ca084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca088: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca08c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca090: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2ca090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2ca094: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2ca094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2ca098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca09c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca0a0: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2ca0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
label_2ca0a4:
    // 0x2ca0a4: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2ca0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2ca0a8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2ca0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2ca0ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ca0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ca0b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca0b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca0b8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2ca0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2ca0bc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2ca0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ca0c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2ca0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2ca0c4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2ca0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2ca0c8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CA0C8u;
    SET_GPR_U32(ctx, 31, 0x2CA0D0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CA0C8u, 0x2CA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0D0u;
label_2ca0d0:
    // 0x2ca0d0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2ca0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ca0d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca0d8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2ca0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca0dc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ca0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca0e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2ca0e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ca0e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CA0E4u;
    SET_GPR_U32(ctx, 31, 0x2CA0ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CA0E4u, 0x2CA0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA0ECu;
label_2ca0ec:
    // 0x2ca0ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca0f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2ca0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2ca0f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca0f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ca0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ca0fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CA0FCu;
    SET_GPR_U32(ctx, 31, 0x2CA104u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CA0FCu, 0x2CA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA104u;
label_2ca104:
    // 0x2ca104: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca108: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca10c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca110: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2ca110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2ca114: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2ca114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2ca118: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2ca118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2ca11c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CA11Cu;
    SET_GPR_U32(ctx, 31, 0x2CA124u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CA11Cu, 0x2CA124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA124u;
label_2ca124:
    // 0x2ca124: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca128: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ca128u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ca12c: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CA12Cu;
    SET_GPR_U32(ctx, 31, 0x2CA134u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CA12Cu, 0x2CA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA134u;
label_2ca134:
    // 0x2ca134: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca138: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CA138u;
    SET_GPR_U32(ctx, 31, 0x2CA140u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CA138u, 0x2CA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA140u;
label_2ca140:
    // 0x2ca140: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca144: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2ca144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2ca148: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ca148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ca14c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ca14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca150: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2ca150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca154: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca158: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2ca158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2ca15c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ca15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca160: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2ca160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2ca164: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2ca164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2ca168: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ca168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca16c: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2ca16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca170: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca174: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2ca174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2ca178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca17c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ca17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ca180: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2ca180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca184: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca188: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2ca188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca18c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2ca18cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ca190: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2ca190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2ca194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca198: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ca198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ca19c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2ca19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ca1a0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2ca1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2ca1a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ca1a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca1a8: 0x0  nop
    ctx->pc = 0x2ca1a8u;
    // NOP
    // 0x2ca1ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ca1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ca1b0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2ca1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2ca1b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca1b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2ca1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2ca1bc: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2CA1BCu;
    {
        const bool branch_taken_0x2ca1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca1bc) {
            ctx->pc = 0x2CA3C8u;
            goto label_2ca3c8;
        }
    }
    ctx->pc = 0x2CA1C4u;
    // 0x2ca1c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca1c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca1c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca1cc: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2ca1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2ca1d0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2ca1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2ca1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca1d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca1dc: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2ca1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2ca1e0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA1E0u;
    SET_GPR_U32(ctx, 31, 0x2CA1E8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA1E0u, 0x2CA1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA1E8u;
label_2ca1e8:
    // 0x2ca1e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca1ec: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2ca1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2ca1f0: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2ca1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2ca1f4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2ca1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ca1f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ca1f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ca1fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca200: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca204: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2ca204u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca20c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca210: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca214: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2ca214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2ca218: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca21c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca220: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca224: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2ca224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2ca228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca22c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca234: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2ca234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2ca238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca23c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca240: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ca240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2ca244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca248: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca24c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2ca24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2ca250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca254: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca258: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2ca258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2ca25c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ca25cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca260: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca264: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ca264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2ca268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca26c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca270: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ca270u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca274: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ca274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ca278: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca27c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2ca27cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca280: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca284: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2ca284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca288: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca28c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2ca28cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca290: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca294: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ca294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ca298: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca29c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2ca29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca2a0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2ca2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2ca2a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ca2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ca2a8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2ca2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2ca2ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca2b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca2b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ca2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ca2b8: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2ca2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ca2bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA2BCu;
    SET_GPR_U32(ctx, 31, 0x2CA2C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA2BCu, 0x2CA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA2C4u;
label_2ca2c4:
    // 0x2ca2c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca2c8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2ca2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ca2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca2d0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CA2D0u;
    {
        const bool branch_taken_0x2ca2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca2d0) {
            ctx->pc = 0x2CA308u;
            goto label_2ca308;
        }
    }
    ctx->pc = 0x2CA2D8u;
    // 0x2ca2d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca2dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca2e0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ca2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca2e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ca2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca2e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca2ec: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2ca2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca2f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca2f4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2ca2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca2f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca2fc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2ca2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca300: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca304: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ca304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2ca308:
    // 0x2ca308: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA308u;
    SET_GPR_U32(ctx, 31, 0x2CA310u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA308u, 0x2CA310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA310u;
label_2ca310:
    // 0x2ca310: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca314: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2ca314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ca318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca31c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CA31Cu;
    {
        const bool branch_taken_0x2ca31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca31c) {
            ctx->pc = 0x2CA3A0u;
            goto label_2ca3a0;
        }
    }
    ctx->pc = 0x2CA324u;
    // 0x2ca324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca328: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca32c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ca32cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca330: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ca330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ca334: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca338: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2ca338u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca33c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca340: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2ca340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca344: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca348: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2ca348u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca34c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca350: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ca350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ca354: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA354u;
    SET_GPR_U32(ctx, 31, 0x2CA35Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA354u, 0x2CA35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA35Cu;
label_2ca35c:
    // 0x2ca35c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ca35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca360: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2ca360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2ca364: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ca364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ca368: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CA368u;
    {
        const bool branch_taken_0x2ca368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ca368) {
            ctx->pc = 0x2CA3A0u;
            goto label_2ca3a0;
        }
    }
    ctx->pc = 0x2CA370u;
    // 0x2ca370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca374: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca378: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2ca378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca37c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ca37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ca380: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca384: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2ca384u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca388: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca38c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2ca38cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca390: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca394: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2ca394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca398: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ca398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca39c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ca39cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2ca3a0:
    // 0x2ca3a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA3A0u;
    SET_GPR_U32(ctx, 31, 0x2CA3A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA3A0u, 0x2CA3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA3A8u;
label_2ca3a8:
    // 0x2ca3a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ca3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca3ac: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2ca3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2ca3b0: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2ca3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2ca3b4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2ca3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2ca3b8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2ca3b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2ca3bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca3c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ca3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ca3c4: 0xa4640058  sh          $a0, 0x58($v1)
    ctx->pc = 0x2ca3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 88), (uint16_t)GPR_U32(ctx, 4));
label_2ca3c8:
    // 0x2ca3c8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2ca3c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca3cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca3d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ca3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ca3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA3DCu;
}
