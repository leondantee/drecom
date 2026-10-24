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

// Function: Em0d_R1_mv0c
// Address: 0x23db10 - 0x23e1a8
void Em0d_R1_mv0c_0x23db10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv0c_0x23db10");
#endif

    switch (ctx->pc) {
        case 0x23db60u: goto label_23db60;
        case 0x23db94u: goto label_23db94;
        case 0x23dcf0u: goto label_23dcf0;
        case 0x23dd24u: goto label_23dd24;
        case 0x23dd4cu: goto label_23dd4c;
        case 0x23dd6cu: goto label_23dd6c;
        case 0x23dd84u: goto label_23dd84;
        case 0x23dd90u: goto label_23dd90;
        case 0x23de28u: goto label_23de28;
        case 0x23deacu: goto label_23deac;
        case 0x23deb4u: goto label_23deb4;
        case 0x23df3cu: goto label_23df3c;
        case 0x23df4cu: goto label_23df4c;
        case 0x23df5cu: goto label_23df5c;
        case 0x23df80u: goto label_23df80;
        case 0x23dfc8u: goto label_23dfc8;
        case 0x23dfecu: goto label_23dfec;
        case 0x23e02cu: goto label_23e02c;
        default: break;
    }

    ctx->pc = 0x23db10u;

    // 0x23db10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23db10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23db14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x23db14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x23db18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23db18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23db1c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x23db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x23db20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23db20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23db24: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x23db24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23db28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x23db28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23db2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23db30: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x23DB30u;
    {
        const bool branch_taken_0x23db30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23db30) {
            ctx->pc = 0x23DC44u;
            goto label_23dc44;
        }
    }
    ctx->pc = 0x23DB38u;
    // 0x23db38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DB38u;
    {
        const bool branch_taken_0x23db38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23db38) {
            ctx->pc = 0x23DB48u;
            goto label_23db48;
        }
    }
    ctx->pc = 0x23DB40u;
    // 0x23db40: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x23DB40u;
    {
        const bool branch_taken_0x23db40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23db40) {
            ctx->pc = 0x23E094u;
            goto label_23e094;
        }
    }
    ctx->pc = 0x23DB48u;
label_23db48:
    // 0x23db48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23db4c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23db50: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23db50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23db54: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x23db54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x23db58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23DB58u;
    SET_GPR_U32(ctx, 31, 0x23DB60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23DB58u, 0x23DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB60u;
label_23db60:
    // 0x23db60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23db60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23db64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23db64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23db68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23DB68u;
    {
        const bool branch_taken_0x23db68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23db68) {
            ctx->pc = 0x23DB74u;
            goto label_23db74;
        }
    }
    ctx->pc = 0x23DB70u;
    // 0x23db70: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x23db70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_23db74:
    // 0x23db74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23db78: 0x36060400  ori         $a2, $s0, 0x400
    ctx->pc = 0x23db78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1024);
    // 0x23db7c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23db80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23db80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23db84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23db84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23db88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23db88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23db8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23DB8Cu;
    SET_GPR_U32(ctx, 31, 0x23DB94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23DB8Cu, 0x23DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB94u;
label_23db94:
    // 0x23db94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23db94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23db98: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23db9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dba0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23dba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23dba4: 0x3c02c1c8  lui         $v0, 0xC1C8
    ctx->pc = 0x23dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49608 << 16));
    // 0x23dba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dbac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dbb0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dbb4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23dbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23dbb8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23dbbc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23dbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23dbc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dbc4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dbc8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dbcc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23dbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23dbd0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x23dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x23dbd4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x23dbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x23dbd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dbdc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dbe0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dbe4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23dbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23dbe8: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x23dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x23dbec: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23dbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23dbf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dbf4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dbf8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dbfc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23dbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23dc00: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x23dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x23dc04: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x23dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x23dc08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dc0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dc14: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23dc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23dc18: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc1c: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x23dc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x23dc20: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc24: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dc28: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x23dc2c: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x23dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x23dc30: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x23dc34: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x23dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x23dc38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dc3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc40: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x23dc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_23dc44:
    // 0x23dc44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc48: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x23dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dc4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23dc50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dc54: 0x0  nop
    ctx->pc = 0x23dc54u;
    // NOP
    // 0x23dc58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23dc58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23dc5c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23dc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x23dc60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc64: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x23dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dc68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23dc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23dc6c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23dc6cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dc70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23dc70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23dc74: 0x0  nop
    ctx->pc = 0x23dc74u;
    // NOP
    // 0x23dc78: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x23DC78u;
    {
        const bool branch_taken_0x23dc78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23dc78) {
            ctx->pc = 0x23DCBCu;
            goto label_23dcbc;
        }
    }
    ctx->pc = 0x23DC80u;
    // 0x23dc80: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc84: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x23dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dc88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23dc88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dc8c: 0x0  nop
    ctx->pc = 0x23dc8cu;
    // NOP
    // 0x23dc90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23dc90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23dc94: 0x0  nop
    ctx->pc = 0x23dc94u;
    // NOP
    // 0x23dc98: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23DC98u;
    {
        const bool branch_taken_0x23dc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23dc98) {
            ctx->pc = 0x23DCBCu;
            goto label_23dcbc;
        }
    }
    ctx->pc = 0x23DCA0u;
    // 0x23dca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23dca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dca4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dca8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x23dca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x23dcac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23dcacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dcb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dcb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dcb8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23dcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_23dcbc:
    // 0x23dcbc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dcc0: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x23dcc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x23dcc4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x23DCC4u;
    {
        const bool branch_taken_0x23dcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dcc4) {
            ctx->pc = 0x23DD74u;
            goto label_23dd74;
        }
    }
    ctx->pc = 0x23DCCCu;
    // 0x23dccc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dcd0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23dcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dcd4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x23dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x23dcd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23dcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23dcdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dcdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dce0: 0x0  nop
    ctx->pc = 0x23dce0u;
    // NOP
    // 0x23dce4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x23dce4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23dce8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23DCE8u;
    SET_GPR_U32(ctx, 31, 0x23DCF0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23DCE8u, 0x23DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCF0u;
label_23dcf0:
    // 0x23dcf0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dcf4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23dcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23dcf8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dcfc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x23dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd04: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dd08: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23dd0c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23dd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23dd10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23dd14: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23dd18: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x23dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23dd1c: 0xc05c848  jal         func_172120
    ctx->pc = 0x23DD1Cu;
    SET_GPR_U32(ctx, 31, 0x23DD24u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23DD1Cu, 0x23DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD24u;
label_23dd24:
    // 0x23dd24: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x23dd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x23dd28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd2c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23dd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dd30: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x23dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x23dd34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23dd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23dd38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dd3c: 0x0  nop
    ctx->pc = 0x23dd3cu;
    // NOP
    // 0x23dd40: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x23dd40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23dd44: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23DD44u;
    SET_GPR_U32(ctx, 31, 0x23DD4Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23DD44u, 0x23DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD4Cu;
label_23dd4c:
    // 0x23dd4c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd50: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23dd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23dd54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd58: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dd5c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x23dd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dd60: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23dd60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23dd64: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23DD64u;
    SET_GPR_U32(ctx, 31, 0x23DD6Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23DD64u, 0x23DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD6Cu;
label_23dd6c:
    // 0x23dd6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd70: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23dd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_23dd74:
    // 0x23dd74: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd78: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23dd7c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23DD7Cu;
    SET_GPR_U32(ctx, 31, 0x23DD84u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23DD7Cu, 0x23DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD84u;
label_23dd84:
    // 0x23dd84: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23dd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd88: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23DD88u;
    SET_GPR_U32(ctx, 31, 0x23DD90u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23DD88u, 0x23DD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD90u;
label_23dd90:
    // 0x23dd90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd94: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x23dd94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x23dd98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23dd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23dd9c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23dd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23dda0: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x23DDA0u;
    {
        const bool branch_taken_0x23dda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dda0) {
            ctx->pc = 0x23DF80u;
            goto label_23df80;
        }
    }
    ctx->pc = 0x23DDA8u;
    // 0x23dda8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ddac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23ddb0: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x23ddb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x23ddb4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23ddb8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23ddbc: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23ddc0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x23ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x23ddc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ddc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ddc8: 0x0  nop
    ctx->pc = 0x23ddc8u;
    // NOP
    // 0x23ddcc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x23ddccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23ddd0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x23ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x23ddd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ddd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ddd8: 0x0  nop
    ctx->pc = 0x23ddd8u;
    // NOP
    // 0x23dddc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x23dddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x23dde0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23dde0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dde4: 0x0  nop
    ctx->pc = 0x23dde4u;
    // NOP
    // 0x23dde8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x23dde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x23ddec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23ddf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ddf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ddf4: 0x0  nop
    ctx->pc = 0x23ddf4u;
    // NOP
    // 0x23ddf8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23ddf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23ddfc: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23de00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23de00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23de04: 0x0  nop
    ctx->pc = 0x23de04u;
    // NOP
    // 0x23de08: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x23de08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23de0c: 0xa7a00044  sh          $zero, 0x44($sp)
    ctx->pc = 0x23de0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x23de10: 0xa3a00046  sb          $zero, 0x46($sp)
    ctx->pc = 0x23de10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x23de14: 0xa3a00047  sb          $zero, 0x47($sp)
    ctx->pc = 0x23de14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x23de18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23de18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23de1c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23de1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23de20: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23DE20u;
    SET_GPR_U32(ctx, 31, 0x23DE28u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23DE20u, 0x23DE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE28u;
label_23de28:
    // 0x23de28: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23DE28u;
    {
        const bool branch_taken_0x23de28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de28) {
            ctx->pc = 0x23DF80u;
            goto label_23df80;
        }
    }
    ctx->pc = 0x23DE30u;
    // 0x23de30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23de30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23de34: 0x0  nop
    ctx->pc = 0x23de34u;
    // NOP
    // 0x23de38: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23de38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23de3c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23de40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23de40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23de44: 0x0  nop
    ctx->pc = 0x23de44u;
    // NOP
    // 0x23de48: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23de48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23de4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23de4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23de50: 0x0  nop
    ctx->pc = 0x23de50u;
    // NOP
    // 0x23de54: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x23de54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x23de58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23de58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23de5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23de5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23de60: 0x0  nop
    ctx->pc = 0x23de60u;
    // NOP
    // 0x23de64: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x23de64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x23de68: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23de6c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23de6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23de70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23de70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23de74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23de74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23de78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23de78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23de7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23de7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23de80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23de80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23de84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23de84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23de88: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23de88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23de8c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23de90: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23de94: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x23de94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23de98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23de98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23de9c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23de9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23dea0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23dea0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23dea4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23DEA4u;
    SET_GPR_U32(ctx, 31, 0x23DEACu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23DEA4u, 0x23DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEACu;
label_23deac:
    // 0x23deac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23DEACu;
    SET_GPR_U32(ctx, 31, 0x23DEB4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23DEACu, 0x23DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEB4u;
label_23deb4:
    // 0x23deb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DEB4u;
    {
        const bool branch_taken_0x23deb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23deb4) {
            ctx->pc = 0x23DED0u;
            goto label_23ded0;
        }
    }
    ctx->pc = 0x23DEBCu;
    // 0x23debc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23debcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dec0: 0x0  nop
    ctx->pc = 0x23dec0u;
    // NOP
    // 0x23dec4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23dec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23dec8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23DEC8u;
    {
        const bool branch_taken_0x23dec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dec8) {
            ctx->pc = 0x23DEECu;
            goto label_23deec;
        }
    }
    ctx->pc = 0x23DED0u;
label_23ded0:
    // 0x23ded0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x23ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23ded4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23ded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23ded8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23ded8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23dedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23dedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dee0: 0x0  nop
    ctx->pc = 0x23dee0u;
    // NOP
    // 0x23dee4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23dee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23dee8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23dee8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23deec:
    // 0x23deec: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x23deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23def0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23def0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23def4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23def4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23def8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23def8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23defc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23defcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23df00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23df00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23df04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23df08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23df0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23df0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23df10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23df10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23df14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23df18: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23df18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23df1c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23df20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23df20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23df24: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x23df24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23df28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23df28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23df2c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23df2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23df30: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23df30u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23df34: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23DF34u;
    SET_GPR_U32(ctx, 31, 0x23DF3Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23DF34u, 0x23DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF3Cu;
label_23df3c:
    // 0x23df3c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23df40: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x23df40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x23df44: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23DF44u;
    SET_GPR_U32(ctx, 31, 0x23DF4Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23DF44u, 0x23DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF4Cu;
label_23df4c:
    // 0x23df4c: 0x3c0402c8  lui         $a0, 0x2C8
    ctx->pc = 0x23df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)712 << 16));
    // 0x23df50: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x23df50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x23df54: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23DF54u;
    SET_GPR_U32(ctx, 31, 0x23DF5Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23DF54u, 0x23DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF5Cu;
label_23df5c:
    // 0x23df5c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23df60: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23df60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23df64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23df64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23df68: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23df6c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23df70: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23df70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23df74: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23df74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23df78: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23DF78u;
    SET_GPR_U32(ctx, 31, 0x23DF80u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23DF78u, 0x23DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF80u;
label_23df80:
    // 0x23df80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23df84: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23df84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23df88: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x23DF88u;
    {
        const bool branch_taken_0x23df88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df88) {
            ctx->pc = 0x23E094u;
            goto label_23e094;
        }
    }
    ctx->pc = 0x23DF90u;
    // 0x23df90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23df90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23df94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23df98: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23df98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23df9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dfa0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dfa4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23dfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23dfa8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dfac: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23dfacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23dfb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dfb4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23dfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23dfb8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dfbc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23dfc0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23DFC0u;
    SET_GPR_U32(ctx, 31, 0x23DFC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23DFC0u, 0x23DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFC8u;
label_23dfc8:
    // 0x23dfc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23dfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23dfcc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23dfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23dfd0: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x23dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x23dfd4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23dfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23dfd8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23dfd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23dfdc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dfe0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23dfe0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23dfe4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23DFE4u;
    SET_GPR_U32(ctx, 31, 0x23DFECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23DFE4u, 0x23DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFECu;
label_23dfec:
    // 0x23dfec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23dfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23dff0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23dff4: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x23dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x23dff8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23dff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23dffc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23dffcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23e000: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23e000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e004: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e008: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x23e008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x23e00c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e010: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23e010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e014: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x23e014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23e018: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x23e018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x23e01c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23e01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23e020: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x23e020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x23e024: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23E024u;
    SET_GPR_U32(ctx, 31, 0x23E02Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23E024u, 0x23E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E02Cu;
label_23e02c:
    // 0x23e02c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23e02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23e030: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x23e030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x23e034: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23E034u;
    {
        const bool branch_taken_0x23e034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e034) {
            ctx->pc = 0x23E064u;
            goto label_23e064;
        }
    }
    ctx->pc = 0x23E03Cu;
    // 0x23e03c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e040: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x23e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e044: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x23e044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x23e048: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x23e048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x23e04c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e050: 0x0  nop
    ctx->pc = 0x23e050u;
    // NOP
    // 0x23e054: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e058: 0x0  nop
    ctx->pc = 0x23e058u;
    // NOP
    // 0x23e05c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x23E05Cu;
    {
        const bool branch_taken_0x23e05c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e05c) {
            ctx->pc = 0x23E094u;
            goto label_23e094;
        }
    }
    ctx->pc = 0x23E064u;
label_23e064:
    // 0x23e064: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23e064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e068: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e06c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23e06cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23e070: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x23e070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23e074: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e078: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23e078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23e07c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e080: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23e080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e084: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e088: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23e088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e08c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e090: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23e090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_23e094:
    // 0x23e094: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e098: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e09c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e0a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e0a4: 0x0  nop
    ctx->pc = 0x23e0a4u;
    // NOP
    // 0x23e0a8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23e0a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e0ac: 0x0  nop
    ctx->pc = 0x23e0acu;
    // NOP
    // 0x23e0b0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23E0B0u;
    {
        const bool branch_taken_0x23e0b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e0b0) {
            ctx->pc = 0x23E194u;
            goto label_23e194;
        }
    }
    ctx->pc = 0x23E0B8u;
    // 0x23e0b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e0bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e0c0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e0c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e0c8: 0x0  nop
    ctx->pc = 0x23e0c8u;
    // NOP
    // 0x23e0cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e0ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e0d0: 0x0  nop
    ctx->pc = 0x23e0d0u;
    // NOP
    // 0x23e0d4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23E0D4u;
    {
        const bool branch_taken_0x23e0d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e0d4) {
            ctx->pc = 0x23E13Cu;
            goto label_23e13c;
        }
    }
    ctx->pc = 0x23E0DCu;
    // 0x23e0dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e0e0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e0e4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23e0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e0e8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23e0ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23e0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23e0f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e0f4: 0x0  nop
    ctx->pc = 0x23e0f4u;
    // NOP
    // 0x23e0f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23e0f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23e0fc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23e0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23e100: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e104: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e108: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23e108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e10c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e10cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e110: 0x0  nop
    ctx->pc = 0x23e110u;
    // NOP
    // 0x23e114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e118: 0x0  nop
    ctx->pc = 0x23e118u;
    // NOP
    // 0x23e11c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23E11Cu;
    {
        const bool branch_taken_0x23e11c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e11c) {
            ctx->pc = 0x23E194u;
            goto label_23e194;
        }
    }
    ctx->pc = 0x23E124u;
    // 0x23e124: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e128: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e12c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e130: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23e130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23e134: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23E134u;
    {
        const bool branch_taken_0x23e134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e134) {
            ctx->pc = 0x23E194u;
            goto label_23e194;
        }
    }
    ctx->pc = 0x23E13Cu;
label_23e13c:
    // 0x23e13c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e140: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23e140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e144: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e148: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23e148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23e14c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23e14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23e150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e154: 0x0  nop
    ctx->pc = 0x23e154u;
    // NOP
    // 0x23e158: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23e158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e15c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23e15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23e160: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e164: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e168: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23e168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e16c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e170: 0x0  nop
    ctx->pc = 0x23e170u;
    // NOP
    // 0x23e174: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e178: 0x0  nop
    ctx->pc = 0x23e178u;
    // NOP
    // 0x23e17c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23E17Cu;
    {
        const bool branch_taken_0x23e17c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e17c) {
            ctx->pc = 0x23E194u;
            goto label_23e194;
        }
    }
    ctx->pc = 0x23E184u;
    // 0x23e184: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e188: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e18c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e190: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23e190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23e194:
    // 0x23e194: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x23e194u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e19c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x23e19cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23e1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x23E1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E1A8u;
}
