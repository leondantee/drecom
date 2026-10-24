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

// Function: Lever_gacya_delete
// Address: 0x15dae0 - 0x15dca4
void Lever_gacya_delete_0x15dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Lever_gacya_delete_0x15dae0");
#endif

    switch (ctx->pc) {
        case 0x15db28u: goto label_15db28;
        default: break;
    }

    ctx->pc = 0x15dae0u;

    // 0x15dae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15dae4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x15dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x15dae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15daec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15daecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15daf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15daf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15daf4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15daf8: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15daf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15dafc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15db00: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x15db00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15db04: 0x8e031404  lw          $v1, 0x1404($s0)
    ctx->pc = 0x15db04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFC4u));
    // 0x15db08: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15db08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EEFCCu));
    // 0x15db0c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15db10: 0xae02140c  sw          $v0, 0x140C($s0)
    ctx->pc = 0x15db10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5132), GPR_U32(ctx, 2));
    // 0x15db14: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x15db14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15db18: 0xc60c1400  lwc1        $f12, 0x1400($s0)
    ctx->pc = 0x15db18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15db1c: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x15db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15db20: 0xc058f20  jal         func_163C80
    ctx->pc = 0x15DB20u;
    SET_GPR_U32(ctx, 31, 0x15DB28u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x15DB20u, 0x15DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB28u;
label_15db28:
    // 0x15db28: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x15db28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15db2c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15db2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15db30: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x15db30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x15db34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15db34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15db38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15db38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15db3c: 0x0  nop
    ctx->pc = 0x15db3cu;
    // NOP
    // 0x15db40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15db40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15db44: 0x0  nop
    ctx->pc = 0x15db44u;
    // NOP
    // 0x15db48: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x15DB48u;
    {
        const bool branch_taken_0x15db48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15db48) {
            ctx->pc = 0x15DB74u;
            goto label_15db74;
        }
    }
    ctx->pc = 0x15DB50u;
    // 0x15db50: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x15db50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15db54: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x15db54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x15db58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15db58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15db5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15db5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15db60: 0x0  nop
    ctx->pc = 0x15db60u;
    // NOP
    // 0x15db64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15db64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15db68: 0x0  nop
    ctx->pc = 0x15db68u;
    // NOP
    // 0x15db6c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x15DB6Cu;
    {
        const bool branch_taken_0x15db6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15db6c) {
            ctx->pc = 0x15DB94u;
            goto label_15db94;
        }
    }
    ctx->pc = 0x15DB74u;
label_15db74:
    // 0x15db74: 0x8e021408  lw          $v0, 0x1408($s0)
    ctx->pc = 0x15db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5128)));
    // 0x15db78: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15db78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15db7c: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5132)));
    // 0x15db80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15db80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15db84: 0xae02140c  sw          $v0, 0x140C($s0)
    ctx->pc = 0x15db84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5132), GPR_U32(ctx, 2));
    // 0x15db88: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x15db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15db8c: 0xe6001400  swc1        $f0, 0x1400($s0)
    ctx->pc = 0x15db8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5120), bits); }
    // 0x15db90: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15db90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15db94:
    // 0x15db94: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x15db94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15db98: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15db98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15db9c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15db9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15dba0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DBA0u;
    {
        const bool branch_taken_0x15dba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dba0) {
            ctx->pc = 0x15DBBCu;
            goto label_15dbbc;
        }
    }
    ctx->pc = 0x15DBA8u;
    // 0x15dba8: 0x8e031408  lw          $v1, 0x1408($s0)
    ctx->pc = 0x15dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5128)));
    // 0x15dbac: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5132)));
    // 0x15dbb0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dbb4: 0xae02140c  sw          $v0, 0x140C($s0)
    ctx->pc = 0x15dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5132), GPR_U32(ctx, 2));
    // 0x15dbb8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dbbc:
    // 0x15dbbc: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x15dbbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15dbc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15dbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15dbc4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x15dbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x15dbc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DBC8u;
    {
        const bool branch_taken_0x15dbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dbc8) {
            ctx->pc = 0x15DBE4u;
            goto label_15dbe4;
        }
    }
    ctx->pc = 0x15DBD0u;
    // 0x15dbd0: 0x8e031408  lw          $v1, 0x1408($s0)
    ctx->pc = 0x15dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5128)));
    // 0x15dbd4: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5132)));
    // 0x15dbd8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dbdc: 0xae02140c  sw          $v0, 0x140C($s0)
    ctx->pc = 0x15dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5132), GPR_U32(ctx, 2));
    // 0x15dbe0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15dbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dbe4:
    // 0x15dbe4: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x15dbe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15dbe8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15dbec: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15dbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x15dbf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DBF0u;
    {
        const bool branch_taken_0x15dbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dbf0) {
            ctx->pc = 0x15DC0Cu;
            goto label_15dc0c;
        }
    }
    ctx->pc = 0x15DBF8u;
    // 0x15dbf8: 0x8e031408  lw          $v1, 0x1408($s0)
    ctx->pc = 0x15dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5128)));
    // 0x15dbfc: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5132)));
    // 0x15dc00: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dc04: 0xae02140c  sw          $v0, 0x140C($s0)
    ctx->pc = 0x15dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5132), GPR_U32(ctx, 2));
    // 0x15dc08: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15dc08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dc0c:
    // 0x15dc0c: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x15dc0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15dc10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15dc14: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15dc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15dc18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DC18u;
    {
        const bool branch_taken_0x15dc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dc18) {
            ctx->pc = 0x15DC34u;
            goto label_15dc34;
        }
    }
    ctx->pc = 0x15DC20u;
    // 0x15dc20: 0x8e031408  lw          $v1, 0x1408($s0)
    ctx->pc = 0x15dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5128)));
    // 0x15dc24: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5132)));
    // 0x15dc28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dc2c: 0xae02140c  sw          $v0, 0x140C($s0)
    ctx->pc = 0x15dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5132), GPR_U32(ctx, 2));
    // 0x15dc30: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15dc30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dc34:
    // 0x15dc34: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x15dc34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15dc38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15dc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15dc3c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x15dc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x15dc40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DC40u;
    {
        const bool branch_taken_0x15dc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dc40) {
            ctx->pc = 0x15DC5Cu;
            goto label_15dc5c;
        }
    }
    ctx->pc = 0x15DC48u;
    // 0x15dc48: 0x8e031408  lw          $v1, 0x1408($s0)
    ctx->pc = 0x15dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5128)));
    // 0x15dc4c: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5132)));
    // 0x15dc50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dc54: 0xae02140c  sw          $v0, 0x140C($s0)
    ctx->pc = 0x15dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5132), GPR_U32(ctx, 2));
    // 0x15dc58: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15dc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dc5c:
    // 0x15dc5c: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5132)));
    // 0x15dc60: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15DC60u;
    {
        const bool branch_taken_0x15dc60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15dc60) {
            ctx->pc = 0x15DC6Cu;
            goto label_15dc6c;
        }
    }
    ctx->pc = 0x15DC68u;
    // 0x15dc68: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x15dc68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15dc6c:
    // 0x15dc6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15dc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15dc70: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15dc74: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x15dc78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15DC78u;
    {
        const bool branch_taken_0x15dc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dc78) {
            ctx->pc = 0x15DC84u;
            goto label_15dc84;
        }
    }
    ctx->pc = 0x15DC80u;
    // 0x15dc80: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x15dc80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15dc84:
    // 0x15dc84: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x15dc84u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x15dc88: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x15dc88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15dc8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15dc8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dc90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15dc90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dc94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15dc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dc98: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15dc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15dc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x15DC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DCA4u;
}
