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

// Function: __ieee754_sqrtf
// Address: 0x1126f8 - 0x112830
void ps2___ieee754_sqrtf_0x1126f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_sqrtf_0x1126f8");
#endif

    switch (ctx->pc) {
        case 0x112778u: goto label_112778;
        case 0x1127e0u: goto label_1127e0;
        default: break;
    }

    ctx->pc = 0x1126f8u;

    // 0x1126f8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1126f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1126fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1126fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112700: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x112700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x112704: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x112704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x112708: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x112708u;
    {
        const bool branch_taken_0x112708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x112708) {
            ctx->pc = 0x112720u;
            goto label_112720;
        }
    }
    ctx->pc = 0x112710u;
    // 0x112710: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x112710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x112714: 0x3e00008  jr          $ra
    ctx->pc = 0x112714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112714u;
        // 0x112718: 0x460c0000  add.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11271Cu;
    // 0x11271c: 0x0  nop
    ctx->pc = 0x11271cu;
    // NOP
label_112720:
    // 0x112720: 0x1ca0000e  bgtz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x112720u;
    {
        const bool branch_taken_0x112720 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x112724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112720u;
        // 0x112724: 0x535c3  sra         $a2, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112720) {
            ctx->pc = 0x11275Cu;
            goto label_11275c;
        }
    }
    ctx->pc = 0x112728u;
    // 0x112728: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x112728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11272c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x112730: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x112730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x112734: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112734u;
    {
        const bool branch_taken_0x112734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112734u;
        // 0x112738: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112734) {
            ctx->pc = 0x112754u;
            goto label_112754;
        }
    }
    ctx->pc = 0x11273Cu;
    // 0x11273c: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11273Cu;
    {
        const bool branch_taken_0x11273c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x11273c) {
            ctx->pc = 0x11275Cu;
            goto label_11275c;
        }
    }
    ctx->pc = 0x112744u;
    // 0x112744: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x112744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x112748: 0x0  nop
    ctx->pc = 0x112748u;
    // NOP
    // 0x11274c: 0x0  nop
    ctx->pc = 0x11274cu;
    // NOP
    // 0x112750: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x112750u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
label_112754:
    // 0x112754: 0x3e00008  jr          $ra
    ctx->pc = 0x112754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11275Cu;
label_11275c:
    // 0x11275c: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x11275Cu;
    {
        const bool branch_taken_0x11275c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x112760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11275Cu;
        // 0x112760: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11275c) {
            ctx->pc = 0x1127A8u;
            goto label_1127a8;
        }
    }
    ctx->pc = 0x112764u;
    // 0x112764: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x112764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x112768: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x112768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11276c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11276Cu;
    {
        const bool branch_taken_0x11276c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11276Cu;
        // 0x112770: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11276c) {
            ctx->pc = 0x11279Cu;
            goto label_11279c;
        }
    }
    ctx->pc = 0x112774u;
    // 0x112774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112778:
    // 0x112778: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x112778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x11277c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x11277cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x112780: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x112780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x112784: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x112784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x112788: 0x0  nop
    ctx->pc = 0x112788u;
    // NOP
    // 0x11278c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11278Cu;
    {
        const bool branch_taken_0x11278c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11278c) {
            ctx->pc = 0x112778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112778;
        }
    }
    ctx->pc = 0x112794u;
    // 0x112794: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112794u;
    {
        const bool branch_taken_0x112794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112794u;
        // 0x112798: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112794) {
            ctx->pc = 0x1127A4u;
            goto label_1127a4;
        }
    }
    ctx->pc = 0x11279Cu;
label_11279c:
    // 0x11279c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1127a0: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1127a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1127a4:
    // 0x1127a4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1127a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_1127a8:
    // 0x1127a8: 0x24c6ff81  addiu       $a2, $a2, -0x7F
    ctx->pc = 0x1127a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x1127ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1127acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1127b0: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1127b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1127b4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1127b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1127b8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1127b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1127bc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1127bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1127c0: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1127c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1127c4: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x1127c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x1127c8: 0x645c0  sll         $t0, $a2, 23
    ctx->pc = 0x1127c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x1127cc: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1127ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1127d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1127d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1127d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127d8: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1127d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1127dc: 0x0  nop
    ctx->pc = 0x1127dcu;
    // NOP
label_1127e0:
    // 0x1127e0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x1127e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1127e4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1127e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1127e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1127E8u;
    {
        const bool branch_taken_0x1127e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1127e8) {
            ctx->pc = 0x1127ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1127E8u;
            // 0x1127ec: 0x63042  srl         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112800u;
            goto label_112800;
        }
    }
    ctx->pc = 0x1127F0u;
    // 0x1127f0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1127f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1127f4: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1127f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1127f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1127f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1127fc: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x1127fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_112800:
    // 0x112800: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x112800u;
    {
        const bool branch_taken_0x112800 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x112804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112800u;
        // 0x112804: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112800) {
            ctx->pc = 0x1127E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1127e0;
        }
    }
    ctx->pc = 0x112808u;
    // 0x112808: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x112808u;
    {
        const bool branch_taken_0x112808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112808u;
        // 0x11280c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112808) {
            ctx->pc = 0x112814u;
            goto label_112814;
        }
    }
    ctx->pc = 0x112810u;
    // 0x112810: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x112810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_112814:
    // 0x112814: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x112814u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x112818: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x112818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x11281c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x11281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x112820: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x112820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x112824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x112824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112828: 0x3e00008  jr          $ra
    ctx->pc = 0x112828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112830u;
}
