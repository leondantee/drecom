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

// Function: Em0c_R1_reset01
// Address: 0x230cc0 - 0x231164
void Em0c_R1_reset01_0x230cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_reset01_0x230cc0");
#endif

    switch (ctx->pc) {
        case 0x230d2cu: goto label_230d2c;
        case 0x230ddcu: goto label_230ddc;
        case 0x230ea8u: goto label_230ea8;
        case 0x230eb8u: goto label_230eb8;
        case 0x230ec4u: goto label_230ec4;
        case 0x231084u: goto label_231084;
        case 0x231090u: goto label_231090;
        case 0x2310ecu: goto label_2310ec;
        case 0x231110u: goto label_231110;
        default: break;
    }

    ctx->pc = 0x230cc0u;

    // 0x230cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230cc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x230cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x230cc8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x230cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x230ccc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230cd0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x230cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x230cd4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x230cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x230cd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x230cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230cdc: 0x108300f5  beq         $a0, $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x230CDCu;
    {
        const bool branch_taken_0x230cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x230cdc) {
            ctx->pc = 0x2310B4u;
            goto label_2310b4;
        }
    }
    ctx->pc = 0x230CE4u;
    // 0x230ce4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230ce8: 0x10830078  beq         $a0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x230CE8u;
    {
        const bool branch_taken_0x230ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x230ce8) {
            ctx->pc = 0x230ECCu;
            goto label_230ecc;
        }
    }
    ctx->pc = 0x230CF0u;
    // 0x230cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230cf4: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x230CF4u;
    {
        const bool branch_taken_0x230cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x230cf4) {
            ctx->pc = 0x230DBCu;
            goto label_230dbc;
        }
    }
    ctx->pc = 0x230CFCu;
    // 0x230cfc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230CFCu;
    {
        const bool branch_taken_0x230cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x230cfc) {
            ctx->pc = 0x230D0Cu;
            goto label_230d0c;
        }
    }
    ctx->pc = 0x230D04u;
    // 0x230d04: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x230D04u;
    {
        const bool branch_taken_0x230d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230d04) {
            ctx->pc = 0x231154u;
            goto label_231154;
        }
    }
    ctx->pc = 0x230D0Cu;
label_230d0c:
    // 0x230d0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x230d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x230d18: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x230d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x230d1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x230d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230d20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x230d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x230d24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x230D24u;
    SET_GPR_U32(ctx, 31, 0x230D2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x230D24u, 0x230D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D2Cu;
label_230d2c:
    // 0x230d2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d30: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x230d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230d34: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x230d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x230d38: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x230d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x230d3c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x230d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x230d40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x230d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x230d48: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x230d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x230d4c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x230d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x230d50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230d54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d58: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x230d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x230d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230d60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d64: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x230d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x230d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230d6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d70: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x230d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x230d74: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x230d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x230d78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d7c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x230d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x230d80: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x230d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x230d84: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x230d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x230d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230d8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230d94: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x230d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x230d98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230d9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230da0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x230da0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x230da4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230da8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230dac: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x230dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x230db0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x230db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x230db4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230db8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x230db8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_230dbc:
    // 0x230dbc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230dc0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230dc4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x230dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230dc8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230dcc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x230dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230dd0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x230dd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230dd4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x230DD4u;
    SET_GPR_U32(ctx, 31, 0x230DDCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x230DD4u, 0x230DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DDCu;
label_230ddc:
    // 0x230ddc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230de0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x230de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x230de4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230de8: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x230de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230dec: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x230decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x230df0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x230df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x230df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230df8: 0x0  nop
    ctx->pc = 0x230df8u;
    // NOP
    // 0x230dfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230dfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230e00: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x230e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x230e04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e08: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x230e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e0c: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x230e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x230e10: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x230e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x230e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230e18: 0x0  nop
    ctx->pc = 0x230e18u;
    // NOP
    // 0x230e1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230e20: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x230e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x230e24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e28: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x230e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e2c: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x230e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x230e30: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x230e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x230e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230e38: 0x0  nop
    ctx->pc = 0x230e38u;
    // NOP
    // 0x230e3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230e3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230e40: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x230e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x230e44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e48: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x230e48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x230e4c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x230e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x230e50: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x230e50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x230e54: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x230E54u;
    {
        const bool branch_taken_0x230e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230e54) {
            ctx->pc = 0x230E88u;
            goto label_230e88;
        }
    }
    ctx->pc = 0x230E5Cu;
    // 0x230e5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230e60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e64: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x230e64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x230e68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e6c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x230e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x230e70: 0x3c023d81  lui         $v0, 0x3D81
    ctx->pc = 0x230e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15745 << 16));
    // 0x230e74: 0x3442fabc  ori         $v0, $v0, 0xFABC
    ctx->pc = 0x230e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64188);
    // 0x230e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230e7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230e84: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x230e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_230e88:
    // 0x230e88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x230e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x230e94: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x230e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x230e98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x230e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230e9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x230e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x230ea0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x230EA0u;
    SET_GPR_U32(ctx, 31, 0x230EA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x230EA0u, 0x230EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EA8u;
label_230ea8:
    // 0x230ea8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230eac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x230eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x230eb0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x230EB0u;
    SET_GPR_U32(ctx, 31, 0x230EB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x230EB0u, 0x230EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EB8u;
label_230eb8:
    // 0x230eb8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230ebc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x230EBCu;
    SET_GPR_U32(ctx, 31, 0x230EC4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x230EBCu, 0x230EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EC4u;
label_230ec4:
    // 0x230ec4: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x230EC4u;
    {
        const bool branch_taken_0x230ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ec4) {
            ctx->pc = 0x231154u;
            goto label_231154;
        }
    }
    ctx->pc = 0x230ECCu;
label_230ecc:
    // 0x230ecc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230ed0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x230ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x230ed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x230ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x230ed8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x230ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x230edc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230ee0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x230ee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x230ee4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x230ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x230ee8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x230ee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x230eec: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x230eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x230ef0: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x230EF0u;
    {
        const bool branch_taken_0x230ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230ef0) {
            ctx->pc = 0x230FC0u;
            goto label_230fc0;
        }
    }
    ctx->pc = 0x230EF8u;
    // 0x230ef8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230efc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f00: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x230f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230f04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230f08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f0c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x230f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230f10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x230f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x230f14: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x230f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x230f18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230f1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f20: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x230f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f28: 0x0  nop
    ctx->pc = 0x230f28u;
    // NOP
    // 0x230f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230f30: 0x0  nop
    ctx->pc = 0x230f30u;
    // NOP
    // 0x230f34: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x230F34u;
    {
        const bool branch_taken_0x230f34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230f34) {
            ctx->pc = 0x230F4Cu;
            goto label_230f4c;
        }
    }
    ctx->pc = 0x230F3Cu;
    // 0x230f3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230f44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f48: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x230f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_230f4c:
    // 0x230f4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230f50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f54: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x230f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230f58: 0x3c023cb2  lui         $v0, 0x3CB2
    ctx->pc = 0x230f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15538 << 16));
    // 0x230f5c: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x230f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x230f60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f64: 0x0  nop
    ctx->pc = 0x230f64u;
    // NOP
    // 0x230f68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x230f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230f6c: 0x0  nop
    ctx->pc = 0x230f6cu;
    // NOP
    // 0x230f70: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x230F70u;
    {
        const bool branch_taken_0x230f70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230f70) {
            ctx->pc = 0x230FA0u;
            goto label_230fa0;
        }
    }
    ctx->pc = 0x230F78u;
    // 0x230f78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230f7c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x230f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230f80: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x230f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x230f84: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x230f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x230f88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x230f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230f8c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x230f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230f90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230f94: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x230f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x230f98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x230F98u;
    {
        const bool branch_taken_0x230f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230f98) {
            ctx->pc = 0x230FC0u;
            goto label_230fc0;
        }
    }
    ctx->pc = 0x230FA0u;
label_230fa0:
    // 0x230fa0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230fa4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x230fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230fa8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x230fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x230fac: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x230facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x230fb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x230fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230fb4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x230fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230fb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230fbc: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x230fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_230fc0:
    // 0x230fc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230fc4: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x230fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230fc8: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x230fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x230fcc: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x230fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x230fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230fd4: 0x0  nop
    ctx->pc = 0x230fd4u;
    // NOP
    // 0x230fd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230fdc: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x230fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x230fe0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230fe4: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x230fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230fe8: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x230fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x230fec: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x230fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x230ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230ff4: 0x0  nop
    ctx->pc = 0x230ff4u;
    // NOP
    // 0x230ff8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230ffc: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x230ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x231000: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x231000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231004: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x231004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231008: 0x3c023bda  lui         $v0, 0x3BDA
    ctx->pc = 0x231008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15322 << 16));
    // 0x23100c: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x23100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x231010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231014: 0x0  nop
    ctx->pc = 0x231014u;
    // NOP
    // 0x231018: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23101c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x23101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x231020: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x231020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231024: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x231024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23102c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23102cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231030: 0x0  nop
    ctx->pc = 0x231030u;
    // NOP
    // 0x231034: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231038: 0x0  nop
    ctx->pc = 0x231038u;
    // NOP
    // 0x23103c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x23103Cu;
    {
        const bool branch_taken_0x23103c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23103c) {
            ctx->pc = 0x231074u;
            goto label_231074;
        }
    }
    ctx->pc = 0x231044u;
    // 0x231044: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23104c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231050: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x231050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x231054: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23105c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231060: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x231060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x231064: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23106c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231070: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x231070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_231074:
    // 0x231074: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x231074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231078: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x231078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23107c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23107Cu;
    SET_GPR_U32(ctx, 31, 0x231084u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23107Cu, 0x231084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231084u;
label_231084:
    // 0x231084: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x231084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231088: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x231088u;
    SET_GPR_U32(ctx, 31, 0x231090u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x231088u, 0x231090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231090u;
label_231090:
    // 0x231090: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x231090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231094: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x231094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x231098: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x231098u;
    {
        const bool branch_taken_0x231098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231098) {
            ctx->pc = 0x231154u;
            goto label_231154;
        }
    }
    ctx->pc = 0x2310A0u;
    // 0x2310a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2310a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2310a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2310a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310a8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2310a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2310ac: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2310ACu;
    {
        const bool branch_taken_0x2310ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2310ac) {
            ctx->pc = 0x231154u;
            goto label_231154;
        }
    }
    ctx->pc = 0x2310B4u;
label_2310b4:
    // 0x2310b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2310b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2310b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2310b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310bc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2310bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2310c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2310c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2310c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2310c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310c8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2310c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2310cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2310ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310d0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2310d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2310d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2310d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310d8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2310d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2310dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2310dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2310e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2310e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2310E4u;
    SET_GPR_U32(ctx, 31, 0x2310ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2310E4u, 0x2310ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310ECu;
label_2310ec:
    // 0x2310ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2310ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2310f0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2310f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2310f4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x2310f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x2310f8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2310f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2310fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2310fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x231100: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x231100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231104: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x231104u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x231108: 0xc067694  jal         func_19DA50
    ctx->pc = 0x231108u;
    SET_GPR_U32(ctx, 31, 0x231110u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x231108u, 0x231110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231110u;
label_231110:
    // 0x231110: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x231110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x231114: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x231114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x231118: 0x24630104  addiu       $v1, $v1, 0x104
    ctx->pc = 0x231118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x23111c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23111cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x231120: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x231120u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x231124: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x231124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231128: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x231128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23112c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x23112cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x231130: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x231130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231134: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x231134u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x231138: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x231138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x23113c: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x23113cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x231140: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x231140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231144: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x231144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x231148: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x231148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x23114c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231150: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x231150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_231154:
    // 0x231154: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x231154u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231158: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x231158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23115c: 0x3e00008  jr          $ra
    ctx->pc = 0x23115Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23115Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231164u;
}
