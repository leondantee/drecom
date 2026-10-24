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

// Function: __ieee754_rem_pio2
// Address: 0x111038 - 0x111554
void ps2___ieee754_rem_pio2_0x111038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_rem_pio2_0x111038");
#endif

    switch (ctx->pc) {
        case 0x1110ccu: goto label_1110cc;
        case 0x111108u: goto label_111108;
        case 0x11111cu: goto label_11111c;
        case 0x11112cu: goto label_11112c;
        case 0x111138u: goto label_111138;
        case 0x111154u: goto label_111154;
        case 0x111190u: goto label_111190;
        case 0x1111a4u: goto label_1111a4;
        case 0x1111b4u: goto label_1111b4;
        case 0x1111c0u: goto label_1111c0;
        case 0x1111e4u: goto label_1111e4;
        case 0x1111f8u: goto label_1111f8;
        case 0x111208u: goto label_111208;
        case 0x111210u: goto label_111210;
        case 0x11121cu: goto label_11121c;
        case 0x111230u: goto label_111230;
        case 0x11123cu: goto label_11123c;
        case 0x111250u: goto label_111250;
        case 0x111288u: goto label_111288;
        case 0x1112c0u: goto label_1112c0;
        case 0x1112d0u: goto label_1112d0;
        case 0x1112e4u: goto label_1112e4;
        case 0x1112f4u: goto label_1112f4;
        case 0x111300u: goto label_111300;
        case 0x11130cu: goto label_11130c;
        case 0x11131cu: goto label_11131c;
        case 0x111350u: goto label_111350;
        case 0x111360u: goto label_111360;
        case 0x111374u: goto label_111374;
        case 0x111384u: goto label_111384;
        case 0x111390u: goto label_111390;
        case 0x11139cu: goto label_11139c;
        case 0x1113b0u: goto label_1113b0;
        case 0x1113c4u: goto label_1113c4;
        case 0x1113d0u: goto label_1113d0;
        case 0x1113ecu: goto label_1113ec;
        case 0x111414u: goto label_111414;
        case 0x111458u: goto label_111458;
        case 0x111464u: goto label_111464;
        case 0x11146cu: goto label_11146c;
        case 0x111480u: goto label_111480;
        case 0x111490u: goto label_111490;
        case 0x1114a8u: goto label_1114a8;
        case 0x1114c4u: goto label_1114c4;
        case 0x1114e8u: goto label_1114e8;
        case 0x111500u: goto label_111500;
        case 0x111514u: goto label_111514;
        default: break;
    }

    ctx->pc = 0x111038u;

    // 0x111038: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x111038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11103c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x11103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x111040: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x111040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x111044: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x111044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x111048: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x111048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x11104c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x11104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x111050: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x111050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x111054: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x111054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x111058: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x111058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x11105c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x11105cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x111060: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x111060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x111064: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x111064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111068: 0x2f03f  dsra32      $fp, $v0, 0
    ctx->pc = 0x111068u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11106c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11106cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x111070: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x111070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x111074: 0x3c023fe9  lui         $v0, 0x3FE9
    ctx->pc = 0x111074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
    // 0x111078: 0x3c38024  and         $s0, $fp, $v1
    ctx->pc = 0x111078u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & GPR_U64(ctx, 3));
    // 0x11107c: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x11107cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x111080: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111084: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111084u;
    {
        const bool branch_taken_0x111084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111084u;
        // 0x111088: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111084) {
            ctx->pc = 0x1110A0u;
            goto label_1110a0;
        }
    }
    ctx->pc = 0x11108Cu;
    // 0x11108c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11108cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111090: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x111090u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
    // 0x111094: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x111094u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x111098: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x111098u;
    {
        const bool branch_taken_0x111098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111098u;
        // 0x11109c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111098) {
            ctx->pc = 0x111524u;
            goto label_111524;
        }
    }
    ctx->pc = 0x1110A0u;
label_1110a0:
    // 0x1110a0: 0x3c024002  lui         $v0, 0x4002
    ctx->pc = 0x1110a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16386 << 16));
    // 0x1110a4: 0x3442d97b  ori         $v0, $v0, 0xD97B
    ctx->pc = 0x1110a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55675);
    // 0x1110a8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1110a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1110ac: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1110ACu;
    {
        const bool branch_taken_0x1110ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1110B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110ACu;
        // 0x1110b0: 0x3c024139  lui         $v0, 0x4139 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16697 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110ac) {
            ctx->pc = 0x1111CCu;
            goto label_1111cc;
        }
    }
    ctx->pc = 0x1110B4u;
    // 0x1110b4: 0x1bc00023  blez        $fp, . + 4 + (0x23 << 2)
    ctx->pc = 0x1110B4u;
    {
        const bool branch_taken_0x1110b4 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x1110b4) {
            ctx->pc = 0x111144u;
            goto label_111144;
        }
    }
    ctx->pc = 0x1110BCu;
    // 0x1110bc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1110bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1110c0: 0xdc25d240  ld          $a1, -0x2DC0($at)
    ctx->pc = 0x1110c0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD240u));
    // 0x1110c4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1110C4u;
    SET_GPR_U32(ctx, 31, 0x1110CCu);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1110C4u, 0x1110CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110CCu;
label_1110cc:
    // 0x1110cc: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x1110ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
    // 0x1110d0: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x1110d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x1110d4: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1110D4u;
    {
        const bool branch_taken_0x1110d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1110D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110D4u;
        // 0x1110d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110d4) {
            ctx->pc = 0x1110F0u;
            goto label_1110f0;
        }
    }
    ctx->pc = 0x1110DCu;
    // 0x1110dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1110dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1110e0: 0xdc30d248  ld          $s0, -0x2DB8($at)
    ctx->pc = 0x1110e0u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AD248u));
    // 0x1110e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1110e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1110E8u;
    {
        const bool branch_taken_0x1110e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110E8u;
        // 0x1110ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110e8) {
            ctx->pc = 0x111114u;
            goto label_111114;
        }
    }
    ctx->pc = 0x1110F0u;
label_1110f0:
    // 0x1110f0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1110f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1110f4: 0xdc25d250  ld          $a1, -0x2DB0($at)
    ctx->pc = 0x1110f4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD250u));
    // 0x1110f8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1110f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1110fc: 0xdc30d258  ld          $s0, -0x2DA8($at)
    ctx->pc = 0x1110fcu;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AD258u));
    // 0x111100: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111100u;
    SET_GPR_U32(ctx, 31, 0x111108u);
    ctx->pc = 0x111104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111100u;
    // 0x111104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111100u, 0x111108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111108u;
label_111108:
    // 0x111108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11110c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11110cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111114:
    // 0x111114: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111114u;
    SET_GPR_U32(ctx, 31, 0x11111Cu);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111114u, 0x11111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11111Cu;
label_11111c:
    // 0x11111c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111120: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111124: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111124u;
    SET_GPR_U32(ctx, 31, 0x11112Cu);
    ctx->pc = 0x111128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111124u;
    // 0x111128: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111124u, 0x11112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11112Cu;
label_11112c:
    // 0x11112c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111130: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111130u;
    SET_GPR_U32(ctx, 31, 0x111138u);
    ctx->pc = 0x111134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111130u;
    // 0x111134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111130u, 0x111138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111138u;
label_111138:
    // 0x111138: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x111138u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x11113c: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x11113Cu;
    {
        const bool branch_taken_0x11113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11113Cu;
        // 0x111140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11113c) {
            ctx->pc = 0x111524u;
            goto label_111524;
        }
    }
    ctx->pc = 0x111144u;
label_111144:
    // 0x111144: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111148: 0xdc25d260  ld          $a1, -0x2DA0($at)
    ctx->pc = 0x111148u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD260u));
    // 0x11114c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x11114Cu;
    SET_GPR_U32(ctx, 31, 0x111154u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x11114Cu, 0x111154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111154u;
label_111154:
    // 0x111154: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x111154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
    // 0x111158: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x111158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x11115c: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11115Cu;
    {
        const bool branch_taken_0x11115c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x111160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11115Cu;
        // 0x111160: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11115c) {
            ctx->pc = 0x111178u;
            goto label_111178;
        }
    }
    ctx->pc = 0x111164u;
    // 0x111164: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111168: 0xdc30d268  ld          $s0, -0x2D98($at)
    ctx->pc = 0x111168u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AD268u));
    // 0x11116c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111170: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x111170u;
    {
        const bool branch_taken_0x111170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111170u;
        // 0x111174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111170) {
            ctx->pc = 0x11119Cu;
            goto label_11119c;
        }
    }
    ctx->pc = 0x111178u;
label_111178:
    // 0x111178: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x11117c: 0xdc25d270  ld          $a1, -0x2D90($at)
    ctx->pc = 0x11117cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD270u));
    // 0x111180: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111184: 0xdc30d278  ld          $s0, -0x2D88($at)
    ctx->pc = 0x111184u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AD278u));
    // 0x111188: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x111188u;
    SET_GPR_U32(ctx, 31, 0x111190u);
    ctx->pc = 0x11118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111188u;
    // 0x11118c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x111188u, 0x111190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111190u;
label_111190:
    // 0x111190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x111190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x111194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11119c:
    // 0x11119c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x11119Cu;
    SET_GPR_U32(ctx, 31, 0x1111A4u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x11119Cu, 0x1111A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111A4u;
label_1111a4:
    // 0x1111a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1111a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1111a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111ac: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1111ACu;
    SET_GPR_U32(ctx, 31, 0x1111B4u);
    ctx->pc = 0x1111B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111ACu;
    // 0x1111b0: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1111ACu, 0x1111B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111B4u;
label_1111b4:
    // 0x1111b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1111b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111b8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1111B8u;
    SET_GPR_U32(ctx, 31, 0x1111C0u);
    ctx->pc = 0x1111BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111B8u;
    // 0x1111bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1111B8u, 0x1111C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111C0u;
label_1111c0:
    // 0x1111c0: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x1111c0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x1111c4: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x1111C4u;
    {
        const bool branch_taken_0x1111c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111C4u;
        // 0x1111c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111c4) {
            ctx->pc = 0x111524u;
            goto label_111524;
        }
    }
    ctx->pc = 0x1111CCu;
label_1111cc:
    // 0x1111cc: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x1111ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x1111d0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1111d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1111d4: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1111D4u;
    {
        const bool branch_taken_0x1111d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1111D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111D4u;
        // 0x1111d8: 0x3c027fef  lui         $v0, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111d4) {
            ctx->pc = 0x1113FCu;
            goto label_1113fc;
        }
    }
    ctx->pc = 0x1111DCu;
    // 0x1111dc: 0xc0451d6  jal         func_114758
    ctx->pc = 0x1111DCu;
    SET_GPR_U32(ctx, 31, 0x1111E4u);
    ctx->pc = 0x114758u;
    {
        ctx->pc = 0x1111E4u;
        ps2_stubs::fabs(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1111E4u) { return; }
    ctx->pc = 0x1111E4u;
label_1111e4:
    // 0x1111e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1111e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111e8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1111e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1111ec: 0xdc25d280  ld          $a1, -0x2D80($at)
    ctx->pc = 0x1111ecu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD280u));
    // 0x1111f0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1111F0u;
    SET_GPR_U32(ctx, 31, 0x1111F8u);
    ctx->pc = 0x1111F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111F0u;
    // 0x1111f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1111F0u, 0x1111F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111F8u;
label_1111f8:
    // 0x1111f8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1111f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1111fc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1111fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x111200: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x111200u;
    SET_GPR_U32(ctx, 31, 0x111208u);
    ctx->pc = 0x111204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111200u;
    // 0x111204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x111200u, 0x111208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111208u;
label_111208:
    // 0x111208: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x111208u;
    SET_GPR_U32(ctx, 31, 0x111210u);
    ctx->pc = 0x11120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111208u;
    // 0x11120c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x111208u, 0x111210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111210u;
label_111210:
    // 0x111210: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x111210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111214: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x111214u;
    SET_GPR_U32(ctx, 31, 0x11121Cu);
    ctx->pc = 0x111218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111214u;
    // 0x111218: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x111214u, 0x11121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11121Cu;
label_11121c:
    // 0x11121c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11121cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111220: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111224: 0xdc25d288  ld          $a1, -0x2D78($at)
    ctx->pc = 0x111224u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD288u));
    // 0x111228: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x111228u;
    SET_GPR_U32(ctx, 31, 0x111230u);
    ctx->pc = 0x11122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111228u;
    // 0x11122c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x111228u, 0x111230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111230u;
label_111230:
    // 0x111230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111234: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111234u;
    SET_GPR_U32(ctx, 31, 0x11123Cu);
    ctx->pc = 0x111238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111234u;
    // 0x111238: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111234u, 0x11123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11123Cu;
label_11123c:
    // 0x11123c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x11123cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111240: 0xdc25d290  ld          $a1, -0x2D70($at)
    ctx->pc = 0x111240u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD290u));
    // 0x111244: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x111244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111248: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x111248u;
    SET_GPR_U32(ctx, 31, 0x111250u);
    ctx->pc = 0x11124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111248u;
    // 0x11124c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x111248u, 0x111250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111250u;
label_111250:
    // 0x111250: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111254: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x111254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x111258: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111258u;
    {
        const bool branch_taken_0x111258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111258u;
        // 0x11125c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111258) {
            ctx->pc = 0x11127Cu;
            goto label_11127c;
        }
    }
    ctx->pc = 0x111260u;
    // 0x111260: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x111260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x111264: 0x2442d170  addiu       $v0, $v0, -0x2E90
    ctx->pc = 0x111264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955376));
    // 0x111268: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11126c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11126cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111270: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x111270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111274: 0x1604004c  bne         $s0, $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x111274u;
    {
        const bool branch_taken_0x111274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x111278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111274u;
        // 0x111278: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111274) {
            ctx->pc = 0x1113A8u;
            goto label_1113a8;
        }
    }
    ctx->pc = 0x11127Cu;
label_11127c:
    // 0x11127c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11127cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111280: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111280u;
    SET_GPR_U32(ctx, 31, 0x111288u);
    ctx->pc = 0x111284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111280u;
    // 0x111284: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111280u, 0x111288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111288u;
label_111288:
    // 0x111288: 0x10bd03  sra         $s7, $s0, 20
    ctx->pc = 0x111288u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 16), 20));
    // 0x11128c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x11128cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x111290: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111294: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x111294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x111298: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x111298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x11129c: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x11129cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1112a0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1112a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1112a4: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x1112A4u;
    {
        const bool branch_taken_0x1112a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1112a4) {
            ctx->pc = 0x1112A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1112A4u;
            // 0x1112a8: 0xde950000  ld          $s5, 0x0($s4) (Delay Slot)
            SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1113B8u;
            goto label_1113b8;
        }
    }
    ctx->pc = 0x1112ACu;
    // 0x1112ac: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1112acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1112b0: 0xdc25d298  ld          $a1, -0x2D68($at)
    ctx->pc = 0x1112b0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD298u));
    // 0x1112b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1112b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112b8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1112B8u;
    SET_GPR_U32(ctx, 31, 0x1112C0u);
    ctx->pc = 0x1112BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112B8u;
    // 0x1112bc: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1112B8u, 0x1112C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112C0u;
label_1112c0:
    // 0x1112c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1112c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1112c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112c8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1112C8u;
    SET_GPR_U32(ctx, 31, 0x1112D0u);
    ctx->pc = 0x1112CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112C8u;
    // 0x1112cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1112C8u, 0x1112D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112D0u;
label_1112d0:
    // 0x1112d0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1112d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1112d4: 0xdc25d2a0  ld          $a1, -0x2D60($at)
    ctx->pc = 0x1112d4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD2A0u));
    // 0x1112d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1112d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112dc: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1112DCu;
    SET_GPR_U32(ctx, 31, 0x1112E4u);
    ctx->pc = 0x1112E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112DCu;
    // 0x1112e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1112DCu, 0x1112E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112E4u;
label_1112e4:
    // 0x1112e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1112e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1112e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112ec: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1112ECu;
    SET_GPR_U32(ctx, 31, 0x1112F4u);
    ctx->pc = 0x1112F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112ECu;
    // 0x1112f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1112ECu, 0x1112F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112F4u;
label_1112f4:
    // 0x1112f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1112f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112f8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1112F8u;
    SET_GPR_U32(ctx, 31, 0x111300u);
    ctx->pc = 0x1112FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112F8u;
    // 0x1112fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1112F8u, 0x111300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111300u;
label_111300:
    // 0x111300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111304: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111304u;
    SET_GPR_U32(ctx, 31, 0x11130Cu);
    ctx->pc = 0x111308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111304u;
    // 0x111308: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111304u, 0x11130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11130Cu;
label_11130c:
    // 0x11130c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11130cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x111310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111314: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111314u;
    SET_GPR_U32(ctx, 31, 0x11131Cu);
    ctx->pc = 0x111318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111314u;
    // 0x111318: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111314u, 0x11131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11131Cu;
label_11131c:
    // 0x11131c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x11131cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x111320: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111324: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x111324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x111328: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x111328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x11132c: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x11132cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x111330: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x111330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x111334: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x111334u;
    {
        const bool branch_taken_0x111334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111334) {
            ctx->pc = 0x111338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111334u;
            // 0x111338: 0xde950000  ld          $s5, 0x0($s4) (Delay Slot)
            SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1113B8u;
            goto label_1113b8;
        }
    }
    ctx->pc = 0x11133Cu;
    // 0x11133c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x11133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111340: 0xdc25d2a8  ld          $a1, -0x2D58($at)
    ctx->pc = 0x111340u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD2A8u));
    // 0x111344: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x111344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111348: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x111348u;
    SET_GPR_U32(ctx, 31, 0x111350u);
    ctx->pc = 0x11134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111348u;
    // 0x11134c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x111348u, 0x111350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111350u;
label_111350:
    // 0x111350: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111358: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111358u;
    SET_GPR_U32(ctx, 31, 0x111360u);
    ctx->pc = 0x11135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111358u;
    // 0x11135c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111358u, 0x111360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111360u;
label_111360:
    // 0x111360: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x111360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x111364: 0xdc25d2b0  ld          $a1, -0x2D50($at)
    ctx->pc = 0x111364u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD2B0u));
    // 0x111368: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x111368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11136c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11136Cu;
    SET_GPR_U32(ctx, 31, 0x111374u);
    ctx->pc = 0x111370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11136Cu;
    // 0x111370: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11136Cu, 0x111374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111374u;
label_111374:
    // 0x111374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11137c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11137Cu;
    SET_GPR_U32(ctx, 31, 0x111384u);
    ctx->pc = 0x111380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11137Cu;
    // 0x111380: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11137Cu, 0x111384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111384u;
label_111384:
    // 0x111384: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x111384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111388: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111388u;
    SET_GPR_U32(ctx, 31, 0x111390u);
    ctx->pc = 0x11138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111388u;
    // 0x11138c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111388u, 0x111390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111390u;
label_111390:
    // 0x111390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111394: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111394u;
    SET_GPR_U32(ctx, 31, 0x11139Cu);
    ctx->pc = 0x111398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111394u;
    // 0x111398: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111394u, 0x11139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11139Cu;
label_11139c:
    // 0x11139c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11139cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1113a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113a4: 0x0  nop
    ctx->pc = 0x1113a4u;
    // NOP
label_1113a8:
    // 0x1113a8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1113A8u;
    SET_GPR_U32(ctx, 31, 0x1113B0u);
    ctx->pc = 0x1113ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113A8u;
    // 0x1113ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1113A8u, 0x1113B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113B0u;
label_1113b0:
    // 0x1113b0: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1113b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1113b4: 0xde950000  ld          $s5, 0x0($s4)
    ctx->pc = 0x1113b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_1113b8:
    // 0x1113b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1113b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113bc: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1113BCu;
    SET_GPR_U32(ctx, 31, 0x1113C4u);
    ctx->pc = 0x1113C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113BCu;
    // 0x1113c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1113BCu, 0x1113C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113C4u;
label_1113c4:
    // 0x1113c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1113c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113c8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1113C8u;
    SET_GPR_U32(ctx, 31, 0x1113D0u);
    ctx->pc = 0x1113CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113C8u;
    // 0x1113cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1113C8u, 0x1113D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113D0u;
label_1113d0:
    // 0x1113d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1113d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113d4: 0x7c10052  bgez        $fp, . + 4 + (0x52 << 2)
    ctx->pc = 0x1113D4u;
    {
        const bool branch_taken_0x1113d4 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x1113D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113D4u;
        // 0x1113d8: 0xfe910008  sd          $s1, 0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113d4) {
            ctx->pc = 0x111520u;
            goto label_111520;
        }
    }
    ctx->pc = 0x1113DCu;
    // 0x1113dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1113dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1113e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113e4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1113E4u;
    SET_GPR_U32(ctx, 31, 0x1113ECu);
    ctx->pc = 0x1113E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113E4u;
    // 0x1113e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1113E4u, 0x1113ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113ECu;
label_1113ec:
    // 0x1113ec: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1113ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1113f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1113f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113f4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1113F4u;
    {
        const bool branch_taken_0x1113f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113F4u;
        // 0x1113f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113f4) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x1113FCu;
label_1113fc:
    // 0x1113fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1113fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x111400: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111404: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111404u;
    {
        const bool branch_taken_0x111404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111404u;
        // 0x111408: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111404) {
            ctx->pc = 0x111428u;
            goto label_111428;
        }
    }
    ctx->pc = 0x11140Cu;
    // 0x11140c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11140Cu;
    SET_GPR_U32(ctx, 31, 0x111414u);
    ctx->pc = 0x111410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11140Cu;
    // 0x111410: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11140Cu, 0x111414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111414u;
label_111414:
    // 0x111414: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111418: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x111418u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x11141c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11141cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111420: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x111420u;
    {
        const bool branch_taken_0x111420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111420u;
        // 0x111424: 0xfe830008  sd          $v1, 0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111420) {
            ctx->pc = 0x111524u;
            goto label_111524;
        }
    }
    ctx->pc = 0x111428u;
label_111428:
    // 0x111428: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x111428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11142c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11142cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x111430: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x111430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111434: 0x102503  sra         $a0, $s0, 20
    ctx->pc = 0x111434u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 20));
    // 0x111438: 0x2493fbea  addiu       $s3, $a0, -0x416
    ctx->pc = 0x111438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966250));
    // 0x11143c: 0x131d00  sll         $v1, $s3, 20
    ctx->pc = 0x11143cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x111440: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x111440u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x111444: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x111444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111448: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x111448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11144c: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x11144cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x111450: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x111450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111454: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x111454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111458:
    // 0x111458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11145c: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x11145Cu;
    SET_GPR_U32(ctx, 31, 0x111464u);
    ctx->pc = 0x111460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11145Cu;
    // 0x111460: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x11145Cu, 0x111464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111464u;
label_111464:
    // 0x111464: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x111464u;
    SET_GPR_U32(ctx, 31, 0x11146Cu);
    ctx->pc = 0x111468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111464u;
    // 0x111468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x111464u, 0x11146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11146Cu;
label_11146c:
    // 0x11146c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11146cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111470: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x111470u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x111474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111478: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x111478u;
    SET_GPR_U32(ctx, 31, 0x111480u);
    ctx->pc = 0x11147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111478u;
    // 0x11147c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x111478u, 0x111480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111480u;
label_111480:
    // 0x111480: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x111480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x111484: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x111484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x111488: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x111488u;
    SET_GPR_U32(ctx, 31, 0x111490u);
    ctx->pc = 0x11148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111488u;
    // 0x11148c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x111488u, 0x111490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111490u;
label_111490:
    // 0x111490: 0x601fff1  bgez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x111490u;
    {
        const bool branch_taken_0x111490 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x111494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111490u;
        // 0x111494: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111490) {
            ctx->pc = 0x111458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111458;
        }
    }
    ctx->pc = 0x111498u;
    // 0x111498: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11149c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11149Cu;
    {
        const bool branch_taken_0x11149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11149Cu;
        // 0x1114a0: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11149c) {
            ctx->pc = 0x1114ACu;
            goto label_1114ac;
        }
    }
    ctx->pc = 0x1114A4u;
    // 0x1114a4: 0x0  nop
    ctx->pc = 0x1114a4u;
    // NOP
label_1114a8:
    // 0x1114a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1114a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1114ac:
    // 0x1114ac: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x1114acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1114b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1114b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114b4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1114b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1114b8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1114b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1114bc: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1114BCu;
    SET_GPR_U32(ctx, 31, 0x1114C4u);
    ctx->pc = 0x1114C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114BCu;
    // 0x1114c0: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1114BCu, 0x1114C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114C4u;
label_1114c4:
    // 0x1114c4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1114C4u;
    {
        const bool branch_taken_0x1114c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114C4u;
        // 0x1114c8: 0x3c09003b  lui         $t1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114c4) {
            ctx->pc = 0x1114A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1114a8;
        }
    }
    ctx->pc = 0x1114CCu;
    // 0x1114cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1114ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1114d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114d4: 0x2529d068  addiu       $t1, $t1, -0x2F98
    ctx->pc = 0x1114d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955112));
    // 0x1114d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1114d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1114dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114e0: 0xc044aa0  jal         func_112A80
    ctx->pc = 0x1114E0u;
    SET_GPR_U32(ctx, 31, 0x1114E8u);
    ctx->pc = 0x1114E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114E0u;
    // 0x1114e4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A80u, 0x1114E0u, 0x1114E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114E8u;
label_1114e8:
    // 0x1114e8: 0x7c1000d  bgez        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x1114E8u;
    {
        const bool branch_taken_0x1114e8 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x1114ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114E8u;
        // 0x1114ec: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114e8) {
            ctx->pc = 0x111520u;
            goto label_111520;
        }
    }
    ctx->pc = 0x1114F0u;
    // 0x1114f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1114f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114f4: 0xde850000  ld          $a1, 0x0($s4)
    ctx->pc = 0x1114f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1114f8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1114F8u;
    SET_GPR_U32(ctx, 31, 0x111500u);
    ctx->pc = 0x1114FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114F8u;
    // 0x1114fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1114F8u, 0x111500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111500u;
label_111500:
    // 0x111500: 0xde850008  ld          $a1, 0x8($s4)
    ctx->pc = 0x111500u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x111504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111508: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x111508u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_11150c:
    // 0x11150c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11150Cu;
    SET_GPR_U32(ctx, 31, 0x111514u);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11150Cu, 0x111514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111514u;
label_111514:
    // 0x111514: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x111514u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x111518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111518u;
    {
        const bool branch_taken_0x111518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111518u;
        // 0x11151c: 0x161023  negu        $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111518) {
            ctx->pc = 0x111524u;
            goto label_111524;
        }
    }
    ctx->pc = 0x111520u;
label_111520:
    // 0x111520: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x111520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_111524:
    // 0x111524: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x111524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x111528: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x111528u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11152c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x11152cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x111530: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x111530u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x111534: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x111534u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x111538: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x111538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11153c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x11153cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111540: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x111540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111544: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x111544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111548: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x111548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11154c: 0x3e00008  jr          $ra
    ctx->pc = 0x11154Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11154Cu;
        // 0x111550: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11154Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111554u;
}
