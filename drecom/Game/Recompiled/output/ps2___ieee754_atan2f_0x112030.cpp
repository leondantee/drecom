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

// Function: __ieee754_atan2f
// Address: 0x112030 - 0x112318
void ps2___ieee754_atan2f_0x112030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_atan2f_0x112030");
#endif

    switch (ctx->pc) {
        case 0x112094u: goto label_112094;
        case 0x1120e0u: goto label_1120e0;
        case 0x112268u: goto label_112268;
        case 0x112270u: goto label_112270;
        default: break;
    }

    ctx->pc = 0x112030u;

    // 0x112030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112034: 0x44086800  mfc1        $t0, $f13
    ctx->pc = 0x112034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x112038: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x112038u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x11203c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11203cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112040: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x112040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112044: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x112044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x112048: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x112048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11204c: 0xe22824  and         $a1, $a3, $v0
    ctx->pc = 0x11204cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x112050: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x112050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x112054: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x112054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112058: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x112058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11205c: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x11205cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x112060: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x112060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x112064: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112064u;
    {
        const bool branch_taken_0x112064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112064u;
        // 0x112068: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112064) {
            ctx->pc = 0x112078u;
            goto label_112078;
        }
    }
    ctx->pc = 0x11206Cu;
    // 0x11206c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x11206cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x112070: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112070u;
    {
        const bool branch_taken_0x112070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112070u;
        // 0x112074: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112070) {
            ctx->pc = 0x112084u;
            goto label_112084;
        }
    }
    ctx->pc = 0x112078u;
label_112078:
    // 0x112078: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x112078u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11207c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x11207Cu;
    {
        const bool branch_taken_0x11207c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11207Cu;
        // 0x112080: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11207c) {
            ctx->pc = 0x112308u;
            goto label_112308;
        }
    }
    ctx->pc = 0x112084u;
label_112084:
    // 0x112084: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112084u;
    {
        const bool branch_taken_0x112084 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x112088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112084u;
        // 0x112088: 0x71783  sra         $v0, $a3, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112084) {
            ctx->pc = 0x11209Cu;
            goto label_11209c;
        }
    }
    ctx->pc = 0x11208Cu;
    // 0x11208c: 0xc045330  jal         func_114CC0
    ctx->pc = 0x11208Cu;
    SET_GPR_U32(ctx, 31, 0x112094u);
    ctx->pc = 0x112090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11208Cu;
    // 0x112090: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x114CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CC0u, 0x11208Cu, 0x112094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112094u;
label_112094:
    // 0x112094: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x112094u;
    {
        const bool branch_taken_0x112094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112094u;
        // 0x112098: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112094) {
            ctx->pc = 0x11230Cu;
            goto label_11230c;
        }
    }
    ctx->pc = 0x11209Cu;
label_11209c:
    // 0x11209c: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x11209cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1120a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1120a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1120a4: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1120A4u;
    {
        const bool branch_taken_0x1120a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1120A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120A4u;
        // 0x1120a8: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120a4) {
            ctx->pc = 0x1120D8u;
            goto label_1120d8;
        }
    }
    ctx->pc = 0x1120ACu;
    // 0x1120ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1120acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1120b0: 0x1202004f  beq         $s0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1120B0u;
    {
        const bool branch_taken_0x1120b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1120B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120B0u;
        // 0x1120b4: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120b0) {
            ctx->pc = 0x1121F0u;
            goto label_1121f0;
        }
    }
    ctx->pc = 0x1120B8u;
    // 0x1120b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1120B8u;
    {
        const bool branch_taken_0x1120b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1120BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120B8u;
        // 0x1120bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120b8) {
            ctx->pc = 0x1120D0u;
            goto label_1120d0;
        }
    }
    ctx->pc = 0x1120C0u;
    // 0x1120c0: 0x12020050  beq         $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1120C0u;
    {
        const bool branch_taken_0x1120c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1120c0) {
            ctx->pc = 0x112204u;
            goto label_112204;
        }
    }
    ctx->pc = 0x1120C8u;
    // 0x1120c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1120C8u;
    {
        const bool branch_taken_0x1120c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1120c8) {
            ctx->pc = 0x1120D8u;
            goto label_1120d8;
        }
    }
    ctx->pc = 0x1120D0u;
label_1120d0:
    // 0x1120d0: 0x601008e  bgez        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1120D0u;
    {
        const bool branch_taken_0x1120d0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1120D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120D0u;
        // 0x1120d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120d0) {
            ctx->pc = 0x11230Cu;
            goto label_11230c;
        }
    }
    ctx->pc = 0x1120D8u;
label_1120d8:
    // 0x1120d8: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1120D8u;
    {
        const bool branch_taken_0x1120d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1120DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120D8u;
        // 0x1120dc: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120d8) {
            ctx->pc = 0x112108u;
            goto label_112108;
        }
    }
    ctx->pc = 0x1120E0u;
label_1120e0:
    // 0x1120e0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1120e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1120e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1120e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1120e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1120e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1120ec: 0x4c10087  bgez        $a2, . + 4 + (0x87 << 2)
    ctx->pc = 0x1120ECu;
    {
        const bool branch_taken_0x1120ec = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1120F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120ECu;
        // 0x1120f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120ec) {
            ctx->pc = 0x11230Cu;
            goto label_11230c;
        }
    }
    ctx->pc = 0x1120F4u;
    // 0x1120f4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1120f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1120f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1120f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1120fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1120fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112100: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x112100u;
    {
        const bool branch_taken_0x112100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112100u;
        // 0x112104: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112100) {
            ctx->pc = 0x112310u;
            goto label_112310;
        }
    }
    ctx->pc = 0x112108u;
label_112108:
    // 0x112108: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x112108u;
    {
        const bool branch_taken_0x112108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112108u;
        // 0x11210c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112108) {
            ctx->pc = 0x112218u;
            goto label_112218;
        }
    }
    ctx->pc = 0x112110u;
    // 0x112110: 0x14850023  bne         $a0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x112110u;
    {
        const bool branch_taken_0x112110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x112114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112110u;
        // 0x112114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112110) {
            ctx->pc = 0x1121A0u;
            goto label_1121a0;
        }
    }
    ctx->pc = 0x112118u;
    // 0x112118: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x112118u;
    {
        const bool branch_taken_0x112118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112118u;
        // 0x11211c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112118) {
            ctx->pc = 0x112164u;
            goto label_112164;
        }
    }
    ctx->pc = 0x112120u;
    // 0x112120: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112120u;
    {
        const bool branch_taken_0x112120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112120u;
        // 0x112124: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112120) {
            ctx->pc = 0x112138u;
            goto label_112138;
        }
    }
    ctx->pc = 0x112128u;
    // 0x112128: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x112128u;
    {
        const bool branch_taken_0x112128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112128u;
        // 0x11212c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112128) {
            ctx->pc = 0x112150u;
            goto label_112150;
        }
    }
    ctx->pc = 0x112130u;
    // 0x112130: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x112130u;
    {
        const bool branch_taken_0x112130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112130) {
            ctx->pc = 0x112218u;
            goto label_112218;
        }
    }
    ctx->pc = 0x112138u;
label_112138:
    // 0x112138: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x112138u;
    {
        const bool branch_taken_0x112138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112138u;
        // 0x11213c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112138) {
            ctx->pc = 0x112178u;
            goto label_112178;
        }
    }
    ctx->pc = 0x112140u;
    // 0x112140: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x112140u;
    {
        const bool branch_taken_0x112140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x112144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112140u;
        // 0x112144: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112140) {
            ctx->pc = 0x11218Cu;
            goto label_11218c;
        }
    }
    ctx->pc = 0x112148u;
    // 0x112148: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x112148u;
    {
        const bool branch_taken_0x112148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112148) {
            ctx->pc = 0x112218u;
            goto label_112218;
        }
    }
    ctx->pc = 0x112150u;
label_112150:
    // 0x112150: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x112150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x112154: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x112154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x112158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11215c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x11215Cu;
    {
        const bool branch_taken_0x11215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11215Cu;
        // 0x112160: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11215c) {
            ctx->pc = 0x11230Cu;
            goto label_11230c;
        }
    }
    ctx->pc = 0x112164u;
label_112164:
    // 0x112164: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x112164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x112168: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x112168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11216c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11216cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112170: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x112170u;
    {
        const bool branch_taken_0x112170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112170u;
        // 0x112174: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112170) {
            ctx->pc = 0x11230Cu;
            goto label_11230c;
        }
    }
    ctx->pc = 0x112178u;
label_112178:
    // 0x112178: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x112178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x11217c: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x11217cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x112180: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112184: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x112184u;
    {
        const bool branch_taken_0x112184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112184u;
        // 0x112188: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112184) {
            ctx->pc = 0x11230Cu;
            goto label_11230c;
        }
    }
    ctx->pc = 0x11218Cu;
label_11218c:
    // 0x11218c: 0x3c01c016  lui         $at, 0xC016
    ctx->pc = 0x11218cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49174 << 16));
    // 0x112190: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x112190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x112194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112198: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x112198u;
    {
        const bool branch_taken_0x112198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112198u;
        // 0x11219c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112198) {
            ctx->pc = 0x11230Cu;
            goto label_11230c;
        }
    }
    ctx->pc = 0x1121A0u;
label_1121a0:
    // 0x1121a0: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1121A0u;
    {
        const bool branch_taken_0x1121a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1121A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121A0u;
        // 0x1121a4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121a0) {
            ctx->pc = 0x1121E4u;
            goto label_1121e4;
        }
    }
    ctx->pc = 0x1121A8u;
    // 0x1121a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1121A8u;
    {
        const bool branch_taken_0x1121a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121A8u;
        // 0x1121ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121a8) {
            ctx->pc = 0x1121C0u;
            goto label_1121c0;
        }
    }
    ctx->pc = 0x1121B0u;
    // 0x1121b0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1121B0u;
    {
        const bool branch_taken_0x1121b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121B0u;
        // 0x1121b4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121b0) {
            ctx->pc = 0x1121D8u;
            goto label_1121d8;
        }
    }
    ctx->pc = 0x1121B8u;
    // 0x1121b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1121B8u;
    {
        const bool branch_taken_0x1121b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121b8) {
            ctx->pc = 0x112218u;
            goto label_112218;
        }
    }
    ctx->pc = 0x1121C0u;
label_1121c0:
    // 0x1121c0: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1121C0u;
    {
        const bool branch_taken_0x1121c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1121C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121C0u;
        // 0x1121c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121c0) {
            ctx->pc = 0x1121F0u;
            goto label_1121f0;
        }
    }
    ctx->pc = 0x1121C8u;
    // 0x1121c8: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1121C8u;
    {
        const bool branch_taken_0x1121c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1121CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121C8u;
        // 0x1121cc: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121c8) {
            ctx->pc = 0x112204u;
            goto label_112204;
        }
    }
    ctx->pc = 0x1121D0u;
    // 0x1121d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1121D0u;
    {
        const bool branch_taken_0x1121d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1121d0) {
            ctx->pc = 0x112218u;
            goto label_112218;
        }
    }
    ctx->pc = 0x1121D8u;
label_1121d8:
    // 0x1121d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1121d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1121dc: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1121DCu;
    {
        const bool branch_taken_0x1121dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121DCu;
        // 0x1121e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121dc) {
            ctx->pc = 0x11230Cu;
            goto label_11230c;
        }
    }
    ctx->pc = 0x1121E4u;
label_1121e4:
    // 0x1121e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1121e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1121e8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1121E8u;
    {
        const bool branch_taken_0x1121e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121E8u;
        // 0x1121ec: 0xc440d2d0  lwc1        $f0, -0x2D30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121e8) {
            ctx->pc = 0x112308u;
            goto label_112308;
        }
    }
    ctx->pc = 0x1121F0u;
label_1121f0:
    // 0x1121f0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1121f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1121f4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1121f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1121f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1121f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1121fc: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1121FCu;
    {
        const bool branch_taken_0x1121fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121FCu;
        // 0x112200: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121fc) {
            ctx->pc = 0x11230Cu;
            goto label_11230c;
        }
    }
    ctx->pc = 0x112204u;
label_112204:
    // 0x112204: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x112204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x112208: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x112208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11220c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11220cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112210: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x112210u;
    {
        const bool branch_taken_0x112210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112210u;
        // 0x112214: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112210) {
            ctx->pc = 0x11230Cu;
            goto label_11230c;
        }
    }
    ctx->pc = 0x112218u;
label_112218:
    // 0x112218: 0x1082ffb1  beq         $a0, $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x112218u;
    {
        const bool branch_taken_0x112218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112218u;
        // 0x11221c: 0x851023  subu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112218) {
            ctx->pc = 0x1120E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1120e0;
        }
    }
    ctx->pc = 0x112220u;
    // 0x112220: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x112220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x112224: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x112224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x112228: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x112228u;
    {
        const bool branch_taken_0x112228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112228) {
            ctx->pc = 0x112240u;
            goto label_112240;
        }
    }
    ctx->pc = 0x112230u;
    // 0x112230: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x112230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x112234: 0x34630fdc  ori         $v1, $v1, 0xFDC
    ctx->pc = 0x112234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4060);
    // 0x112238: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x112238u;
    {
        const bool branch_taken_0x112238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112238u;
        // 0x11223c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112238) {
            ctx->pc = 0x112278u;
            goto label_112278;
        }
    }
    ctx->pc = 0x112240u;
label_112240:
    // 0x112240: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x112240u;
    {
        const bool branch_taken_0x112240 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x112244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112240u;
        // 0x112244: 0x2842ffc4  slti        $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112240) {
            ctx->pc = 0x112250u;
            goto label_112250;
        }
    }
    ctx->pc = 0x112248u;
    // 0x112248: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x112248u;
    {
        const bool branch_taken_0x112248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112248u;
        // 0x11224c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112248) {
            ctx->pc = 0x112274u;
            goto label_112274;
        }
    }
    ctx->pc = 0x112250u;
label_112250:
    // 0x112250: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x112250u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112254: 0x0  nop
    ctx->pc = 0x112254u;
    // NOP
    // 0x112258: 0x0  nop
    ctx->pc = 0x112258u;
    // NOP
    // 0x11225c: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x11225cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x112260: 0xc045420  jal         func_115080
    ctx->pc = 0x112260u;
    SET_GPR_U32(ctx, 31, 0x112268u);
    ctx->pc = 0x115080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115080u, 0x112260u, 0x112268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112268u;
label_112268:
    // 0x112268: 0xc045330  jal         func_114CC0
    ctx->pc = 0x112268u;
    SET_GPR_U32(ctx, 31, 0x112270u);
    ctx->pc = 0x11226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112268u;
    // 0x11226c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x114CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CC0u, 0x112268u, 0x112270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112270u;
label_112270:
    // 0x112270: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x112270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_112274:
    // 0x112274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112278:
    // 0x112278: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x112278u;
    {
        const bool branch_taken_0x112278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112278u;
        // 0x11227c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112278) {
            ctx->pc = 0x1122A8u;
            goto label_1122a8;
        }
    }
    ctx->pc = 0x112280u;
    // 0x112280: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x112280u;
    {
        const bool branch_taken_0x112280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112280) {
            ctx->pc = 0x112284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112280u;
            // 0x112284: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112298u;
            goto label_112298;
        }
    }
    ctx->pc = 0x112288u;
    // 0x112288: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x112288u;
    {
        const bool branch_taken_0x112288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x112288) {
            ctx->pc = 0x1122B0u;
            goto label_1122b0;
        }
    }
    ctx->pc = 0x112290u;
    // 0x112290: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112290u;
    {
        const bool branch_taken_0x112290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112290) {
            ctx->pc = 0x1122E4u;
            goto label_1122e4;
        }
    }
    ctx->pc = 0x112298u;
label_112298:
    // 0x112298: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x112298u;
    {
        const bool branch_taken_0x112298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x112298) {
            ctx->pc = 0x1122BCu;
            goto label_1122bc;
        }
    }
    ctx->pc = 0x1122A0u;
    // 0x1122a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1122A0u;
    {
        const bool branch_taken_0x1122a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1122a0) {
            ctx->pc = 0x1122E4u;
            goto label_1122e4;
        }
    }
    ctx->pc = 0x1122A8u;
label_1122a8:
    // 0x1122a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1122a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1122ac: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1122acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_1122b0:
    // 0x1122b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1122b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1122b4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1122B4u;
    {
        const bool branch_taken_0x1122b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122B4u;
        // 0x1122b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122b4) {
            ctx->pc = 0x11230Cu;
            goto label_11230c;
        }
    }
    ctx->pc = 0x1122BCu;
label_1122bc:
    // 0x1122bc: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1122bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1122c0: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1122c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1122c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1122c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1122c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1122c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1122cc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1122ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1122d0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1122d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1122d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1122d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1122d8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1122d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1122dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1122DCu;
    {
        const bool branch_taken_0x1122dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1122E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1122DCu;
        // 0x1122e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1122dc) {
            ctx->pc = 0x112308u;
            goto label_112308;
        }
    }
    ctx->pc = 0x1122E4u;
label_1122e4:
    // 0x1122e4: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x1122e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
    // 0x1122e8: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1122e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1122ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1122ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1122f0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1122f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1122f4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1122f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1122f8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1122f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1122fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1122fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112300: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x112300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x112304: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x112304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_112308:
    // 0x112308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11230c:
    // 0x11230c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11230cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112310:
    // 0x112310: 0x3e00008  jr          $ra
    ctx->pc = 0x112310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112310u;
        // 0x112314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112318u;
}
