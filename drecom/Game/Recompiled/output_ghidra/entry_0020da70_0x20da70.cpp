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

// Function: entry_0020da70
// Address: 0x20da70 - 0x20dc08
void entry_0020da70_0x20da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020da70_0x20da70");
#endif

    switch (ctx->pc) {
        case 0x20da98u: goto label_20da98;
        case 0x20dac4u: goto label_20dac4;
        case 0x20dae8u: goto label_20dae8;
        case 0x20db04u: goto label_20db04;
        case 0x20db18u: goto label_20db18;
        case 0x20db2cu: goto label_20db2c;
        case 0x20db3cu: goto label_20db3c;
        case 0x20db54u: goto label_20db54;
        case 0x20db70u: goto label_20db70;
        case 0x20db7cu: goto label_20db7c;
        case 0x20dbb0u: goto label_20dbb0;
        default: break;
    }

    ctx->pc = 0x20da70u;

    // 0x20da70: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20da70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20da74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20da74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20da78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da80: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20da84: 0x260512a0  addiu       $a1, $s0, 0x12A0
    ctx->pc = 0x20da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20da88: 0x244612b0  addiu       $a2, $v0, 0x12B0
    ctx->pc = 0x20da88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x20da8c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x20da8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20da90: 0xc05ce04  jal         func_173810
    ctx->pc = 0x20DA90u;
    SET_GPR_U32(ctx, 31, 0x20DA98u);
    ctx->pc = 0x173810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173810u, 0x20DA90u, 0x20DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA98u;
label_20da98:
    // 0x20da98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20da9c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x20da9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x20daa0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20daa4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20daa8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x20daac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20daacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20dab0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20dab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20dab4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x20dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20dab8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x20dab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20dabc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20DABCu;
    SET_GPR_U32(ctx, 31, 0x20DAC4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20DABCu, 0x20DAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAC4u;
label_20dac4:
    // 0x20dac4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dac8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20dac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20dacc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dad0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dad4: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20dad8: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20dad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20dadc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20dadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20dae0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20DAE0u;
    SET_GPR_U32(ctx, 31, 0x20DAE8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20DAE0u, 0x20DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAE8u;
label_20dae8:
    // 0x20dae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20daec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20daf0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x20daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x20daf4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20daf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20daf8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20daf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20dafc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20DAFCu;
    SET_GPR_U32(ctx, 31, 0x20DB04u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20DAFCu, 0x20DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB04u;
label_20db04:
    // 0x20db04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20db08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db0c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x20db0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20db10: 0xc05cd58  jal         func_173560
    ctx->pc = 0x20DB10u;
    SET_GPR_U32(ctx, 31, 0x20DB18u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x20DB10u, 0x20DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB18u;
label_20db18:
    // 0x20db18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db1c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20db1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20db20: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20db20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20db24: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20DB24u;
    SET_GPR_U32(ctx, 31, 0x20DB2Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20DB2Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20DB2Cu) { return; }
    ctx->pc = 0x20DB2Cu;
label_20db2c:
    // 0x20db2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20db30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20db34: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20DB34u;
    SET_GPR_U32(ctx, 31, 0x20DB3Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20DB34u, 0x20DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB3Cu;
label_20db3c:
    // 0x20db3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20db40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20db44: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20db44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20db48: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20db48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20db4c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x20DB4Cu;
    SET_GPR_U32(ctx, 31, 0x20DB54u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x20DB4Cu, 0x20DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB54u;
label_20db54:
    // 0x20db54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20db54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db5c: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20db60: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20db60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20db64: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20db64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20db68: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20DB68u;
    SET_GPR_U32(ctx, 31, 0x20DB70u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20DB68u, 0x20DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB70u;
label_20db70:
    // 0x20db70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20db70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db74: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20DB74u;
    SET_GPR_U32(ctx, 31, 0x20DB7Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20DB74u, 0x20DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DB7Cu;
label_20db7c:
    // 0x20db7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db80: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20db80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20db84: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x20DB84u;
    {
        const bool branch_taken_0x20db84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db84) {
            ctx->pc = 0x20DC38u;
            return;
        }
    }
    ctx->pc = 0x20DB8Cu;
    // 0x20db8c: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x20db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x20db90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db94: 0xac43134c  sw          $v1, 0x134C($v0)
    ctx->pc = 0x20db94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4940), GPR_U32(ctx, 3));
    // 0x20db98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20db9c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x20db9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dba0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x20dba4: 0x2444dce0  addiu       $a0, $v0, -0x2320
    ctx->pc = 0x20dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x20dba8: 0xc067588  jal         func_19D620
    ctx->pc = 0x20DBA8u;
    SET_GPR_U32(ctx, 31, 0x20DBB0u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x20DBA8u, 0x20DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DBB0u;
label_20dbb0:
    // 0x20dbb0: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x20dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x20dbb4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x20dbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x20dbb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20dbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20dbbc: 0x0  nop
    ctx->pc = 0x20dbbcu;
    // NOP
    // 0x20dbc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20dbc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20dbc4: 0x0  nop
    ctx->pc = 0x20dbc4u;
    // NOP
    // 0x20dbc8: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x20DBC8u;
    {
        const bool branch_taken_0x20dbc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20dbc8) {
            ctx->pc = 0x20DC08u;
            return;
        }
    }
    ctx->pc = 0x20DBD0u;
    // 0x20dbd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dbd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dbd8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20dbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dbdc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x20dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20dbe0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dbe4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20dbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dbe8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dbec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20dbecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dbf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dbf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20dbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dbf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dbfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20dc00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20DC00u;
    {
        const bool branch_taken_0x20dc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc00) {
            ctx->pc = 0x20DC38u;
            return;
        }
    }
    ctx->pc = 0x20DC08u;
}
