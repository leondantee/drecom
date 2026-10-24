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

// Function: atanf
// Address: 0x114cc0 - 0x114f68
void atanf_0x114cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atanf_0x114cc0");
#endif

    switch (ctx->pc) {
        case 0x114da0u: goto label_114da0;
        default: break;
    }

    ctx->pc = 0x114cc0u;

    // 0x114cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114cc4: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x114cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x114cc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x114cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x114ccc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114cd8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x114cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x114cdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x114cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x114ce0: 0x3c02507f  lui         $v0, 0x507F
    ctx->pc = 0x114ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20607 << 16));
    // 0x114ce4: 0x2238024  and         $s0, $s1, $v1
    ctx->pc = 0x114ce4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x114ce8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114cec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114cf0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x114CF0u;
    {
        const bool branch_taken_0x114cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114CF0u;
        // 0x114cf4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114cf0) {
            ctx->pc = 0x114D44u;
            goto label_114d44;
        }
    }
    ctx->pc = 0x114CF8u;
    // 0x114cf8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114cfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114CFCu;
    {
        const bool branch_taken_0x114cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114cfc) {
            ctx->pc = 0x114D10u;
            goto label_114d10;
        }
    }
    ctx->pc = 0x114D04u;
    // 0x114d04: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x114D04u;
    {
        const bool branch_taken_0x114d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D04u;
        // 0x114d08: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d04) {
            ctx->pc = 0x114F54u;
            goto label_114f54;
        }
    }
    ctx->pc = 0x114D0Cu;
    // 0x114d0c: 0x0  nop
    ctx->pc = 0x114d0cu;
    // NOP
label_114d10:
    // 0x114d10: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x114D10u;
    {
        const bool branch_taken_0x114d10 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x114D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D10u;
        // 0x114d14: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d10) {
            ctx->pc = 0x114D2Cu;
            goto label_114d2c;
        }
    }
    ctx->pc = 0x114D18u;
    // 0x114d18: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x114d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x114d1c: 0xc441d8cc  lwc1        $f1, -0x2734($v0)
    ctx->pc = 0x114d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114d20: 0xc460d8dc  lwc1        $f0, -0x2724($v1)
    ctx->pc = 0x114d20u;
    { uint32_t bits = FAST_READ32(0x3AD8DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114d24: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x114D24u;
    {
        const bool branch_taken_0x114d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D24u;
        // 0x114d28: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d24) {
            ctx->pc = 0x114F54u;
            goto label_114f54;
        }
    }
    ctx->pc = 0x114D2Cu;
label_114d2c:
    // 0x114d2c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x114d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x114d30: 0xc440d8cc  lwc1        $f0, -0x2734($v0)
    ctx->pc = 0x114d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114d34: 0xc461d8dc  lwc1        $f1, -0x2724($v1)
    ctx->pc = 0x114d34u;
    { uint32_t bits = FAST_READ32(0x3AD8DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114d38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x114d38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x114d3c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x114D3Cu;
    {
        const bool branch_taken_0x114d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D3Cu;
        // 0x114d40: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d3c) {
            ctx->pc = 0x114F54u;
            goto label_114f54;
        }
    }
    ctx->pc = 0x114D44u;
label_114d44:
    // 0x114d44: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x114d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x114d48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114d4c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114d50: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x114D50u;
    {
        const bool branch_taken_0x114d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D50u;
        // 0x114d54: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d50) {
            ctx->pc = 0x114D98u;
            goto label_114d98;
        }
    }
    ctx->pc = 0x114D58u;
    // 0x114d58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114d5c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114d60: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x114D60u;
    {
        const bool branch_taken_0x114d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D60u;
        // 0x114d64: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d60) {
            ctx->pc = 0x114E74u;
            goto label_114e74;
        }
    }
    ctx->pc = 0x114D68u;
    // 0x114d68: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x114d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x114d6c: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x114d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x114d70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114d74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114d78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114d7c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x114d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x114d80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x114d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114d84: 0x0  nop
    ctx->pc = 0x114d84u;
    // NOP
    // 0x114d88: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x114D88u;
    {
        const bool branch_taken_0x114d88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x114d88) {
            ctx->pc = 0x114D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114D88u;
            // 0x114d8c: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
            ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x114E78u;
            goto label_114e78;
        }
    }
    ctx->pc = 0x114D90u;
    // 0x114d90: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x114D90u;
    {
        const bool branch_taken_0x114d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D90u;
        // 0x114d94: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d90) {
            ctx->pc = 0x114F54u;
            goto label_114f54;
        }
    }
    ctx->pc = 0x114D98u;
label_114d98:
    // 0x114d98: 0xc045420  jal         func_115080
    ctx->pc = 0x114D98u;
    SET_GPR_U32(ctx, 31, 0x114DA0u);
    ctx->pc = 0x115080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115080u, 0x114D98u, 0x114DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DA0u;
label_114da0:
    // 0x114da0: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x114da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x114da4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114da8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114dac: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x114DACu;
    {
        const bool branch_taken_0x114dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DACu;
        // 0x114db0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dac) {
            ctx->pc = 0x114E1Cu;
            goto label_114e1c;
        }
    }
    ctx->pc = 0x114DB4u;
    // 0x114db4: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x114db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x114db8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114dbc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114dc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114DC0u;
    {
        const bool branch_taken_0x114dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DC0u;
        // 0x114dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dc0) {
            ctx->pc = 0x114DF8u;
            goto label_114df8;
        }
    }
    ctx->pc = 0x114DC8u;
    // 0x114dc8: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x114dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x114dcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114dd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114dd4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x114dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x114dd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114ddc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x114ddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x114de0: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x114de0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x114de4: 0x0  nop
    ctx->pc = 0x114de4u;
    // NOP
    // 0x114de8: 0x0  nop
    ctx->pc = 0x114de8u;
    // NOP
    // 0x114dec: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x114decu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x114df0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x114DF0u;
    {
        const bool branch_taken_0x114df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DF0u;
        // 0x114df4: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114df0) {
            ctx->pc = 0x114E78u;
            goto label_114e78;
        }
    }
    ctx->pc = 0x114DF8u;
label_114df8:
    // 0x114df8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114e00: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x114e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x114e04: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x114e04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x114e08: 0x0  nop
    ctx->pc = 0x114e08u;
    // NOP
    // 0x114e0c: 0x0  nop
    ctx->pc = 0x114e0cu;
    // NOP
    // 0x114e10: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x114e10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x114e14: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x114E14u;
    {
        const bool branch_taken_0x114e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E14u;
        // 0x114e18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e14) {
            ctx->pc = 0x114E74u;
            goto label_114e74;
        }
    }
    ctx->pc = 0x114E1Cu;
label_114e1c:
    // 0x114e1c: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x114e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x114e20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114e24: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114e28: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114E28u;
    {
        const bool branch_taken_0x114e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E28u;
        // 0x114e2c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e28) {
            ctx->pc = 0x114E60u;
            goto label_114e60;
        }
    }
    ctx->pc = 0x114E30u;
    // 0x114e30: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x114e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x114e34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114e38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114e3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114e40: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x114e40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x114e44: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x114e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x114e48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x114e48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x114e4c: 0x0  nop
    ctx->pc = 0x114e4cu;
    // NOP
    // 0x114e50: 0x0  nop
    ctx->pc = 0x114e50u;
    // NOP
    // 0x114e54: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x114e54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x114e58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114E58u;
    {
        const bool branch_taken_0x114e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E58u;
        // 0x114e5c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e58) {
            ctx->pc = 0x114E74u;
            goto label_114e74;
        }
    }
    ctx->pc = 0x114E60u;
label_114e60:
    // 0x114e60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x114e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x114e64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114e68: 0x0  nop
    ctx->pc = 0x114e68u;
    // NOP
    // 0x114e6c: 0x0  nop
    ctx->pc = 0x114e6cu;
    // NOP
    // 0x114e70: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x114e70u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_114e74:
    // 0x114e74: 0x460c6282  mul.s       $f10, $f12, $f12
    ctx->pc = 0x114e74u;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_114e78:
    // 0x114e78: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x114e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x114e7c: 0x2462d8e0  addiu       $v0, $v1, -0x2720
    ctx->pc = 0x114e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957280));
    // 0x114e80: 0xc469d8e0  lwc1        $f9, -0x2720($v1)
    ctx->pc = 0x114e80u;
    { uint32_t bits = FAST_READ32(0x3AD8E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x114e84: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x114e84u;
    { uint32_t bits = FAST_READ32(0x3AD908u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x114e88: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x114e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x114e8c: 0xc4450020  lwc1        $f5, 0x20($v0)
    ctx->pc = 0x114e8cu;
    { uint32_t bits = FAST_READ32(0x3AD900u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x114e90: 0xc4440024  lwc1        $f4, 0x24($v0)
    ctx->pc = 0x114e90u;
    { uint32_t bits = FAST_READ32(0x3AD904u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x114e94: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x114e94u;
    { uint32_t bits = FAST_READ32(0x3AD8FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114e98: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x114e98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x114e9c: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x114e9cu;
    { uint32_t bits = FAST_READ32(0x3AD8F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x114ea0: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x114ea0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x114ea4: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x114ea4u;
    { uint32_t bits = FAST_READ32(0x3AD8F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x114ea8: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x114ea8u;
    { uint32_t bits = FAST_READ32(0x3AD8F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x114eac: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x114eacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x114eb0: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x114eb0u;
    { uint32_t bits = FAST_READ32(0x3AD8E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x114eb4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x114eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x114eb8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x114eb8u;
    { uint32_t bits = FAST_READ32(0x3AD8ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x114ebc: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x114ebcu;
    { uint32_t bits = FAST_READ32(0x3AD8E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x114ec0: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x114ec0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x114ec4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x114ec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x114ec8: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x114ec8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x114ecc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x114eccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x114ed0: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x114ed0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x114ed4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x114ed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x114ed8: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x114ed8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x114edc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x114edcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x114ee0: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x114ee0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x114ee4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x114ee4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x114ee8: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x114ee8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x114eec: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x114eecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x114ef0: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x114ef0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x114ef4: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x114ef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x114ef8: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x114ef8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x114efc: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114EFCu;
    {
        const bool branch_taken_0x114efc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x114F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EFCu;
        // 0x114f00: 0x46095002  mul.s       $f0, $f10, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114efc) {
            ctx->pc = 0x114F14u;
            goto label_114f14;
        }
    }
    ctx->pc = 0x114F04u;
    // 0x114f04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x114f08: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x114f08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x114f0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x114F0Cu;
    {
        const bool branch_taken_0x114f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F0Cu;
        // 0x114f10: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f0c) {
            ctx->pc = 0x114F54u;
            goto label_114f54;
        }
    }
    ctx->pc = 0x114F14u;
label_114f14:
    // 0x114f14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x114f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x114f18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x114f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x114f1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x114f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x114f20: 0x2442d8d0  addiu       $v0, $v0, -0x2730
    ctx->pc = 0x114f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
    // 0x114f24: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x114f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x114f28: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x114f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x114f2c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x114f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x114f30: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x114f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x114f34: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x114f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x114f38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x114f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x114f3c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x114f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x114f40: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x114f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x114f44: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x114f44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x114f48: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x114F48u;
    {
        const bool branch_taken_0x114f48 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x114F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F48u;
        // 0x114f4c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f48) {
            ctx->pc = 0x114F54u;
            goto label_114f54;
        }
    }
    ctx->pc = 0x114F50u;
    // 0x114f50: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x114f50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_114f54:
    // 0x114f54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114f58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x114f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114f60: 0x3e00008  jr          $ra
    ctx->pc = 0x114F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F60u;
        // 0x114f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114F68u;
}
