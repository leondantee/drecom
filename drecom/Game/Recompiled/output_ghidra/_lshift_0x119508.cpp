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

// Function: _lshift
// Address: 0x119508 - 0x119680
void _lshift_0x119508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lshift_0x119508");
#endif

    switch (ctx->pc) {
        case 0x119560u: goto label_119560;
        case 0x119594u: goto label_119594;
        case 0x1195a8u: goto label_1195a8;
        case 0x1195e8u: goto label_1195e8;
        case 0x119628u: goto label_119628;
        case 0x119654u: goto label_119654;
        default: break;
    }

    ctx->pc = 0x119508u;

    // 0x119508: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x119508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11950c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x119510: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x119510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x119514: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x119514u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119518: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11951c: 0x6a143  sra         $s4, $a2, 5
    ctx->pc = 0x11951cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 5));
    // 0x119520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119524: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x119524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119528: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x119528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11952c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x119530: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119534: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119538: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x119538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11953c: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x11953cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x119540: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x119540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x119544: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x119544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x119548: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x119548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11954c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11954Cu;
    {
        const bool branch_taken_0x11954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11954Cu;
        // 0x119550: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11954c) {
            ctx->pc = 0x119584u;
            goto label_119584;
        }
    }
    ctx->pc = 0x119554u;
    // 0x119554: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x119554u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x119558: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x119558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x11955c: 0x0  nop
    ctx->pc = 0x11955cu;
    // NOP
label_119560:
    // 0x119560: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x119560u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x119564: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x119564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x119568: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x119568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11956c: 0x0  nop
    ctx->pc = 0x11956cu;
    // NOP
    // 0x119570: 0x0  nop
    ctx->pc = 0x119570u;
    // NOP
    // 0x119574: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x119574u;
    {
        const bool branch_taken_0x119574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119574) {
            ctx->pc = 0x119560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119560;
        }
    }
    ctx->pc = 0x11957Cu;
    // 0x11957c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11957Cu;
    {
        const bool branch_taken_0x11957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11957c) {
            ctx->pc = 0x11958Cu;
            goto label_11958c;
        }
    }
    ctx->pc = 0x119584u;
label_119584:
    // 0x119584: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x119584u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x119588: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x119588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_11958c:
    // 0x11958c: 0xc046348  jal         func_118D20
    ctx->pc = 0x11958Cu;
    SET_GPR_U32(ctx, 31, 0x119594u);
    ctx->pc = 0x119590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11958Cu;
    // 0x119590: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x11958Cu, 0x119594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119594u;
label_119594:
    // 0x119594: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x119594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119598: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x119598u;
    {
        const bool branch_taken_0x119598 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x11959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119598u;
        // 0x11959c: 0x26a60014  addiu       $a2, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119598) {
            ctx->pc = 0x1195C4u;
            goto label_1195c4;
        }
    }
    ctx->pc = 0x1195A0u;
    // 0x1195a0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1195a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195a4: 0x0  nop
    ctx->pc = 0x1195a4u;
    // NOP
label_1195a8:
    // 0x1195a8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1195a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1195ac: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1195acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1195b0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1195b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1195b4: 0x0  nop
    ctx->pc = 0x1195b4u;
    // NOP
    // 0x1195b8: 0x0  nop
    ctx->pc = 0x1195b8u;
    // NOP
    // 0x1195bc: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1195BCu;
    {
        const bool branch_taken_0x1195bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1195bc) {
            ctx->pc = 0x1195A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1195a8;
        }
    }
    ctx->pc = 0x1195C4u;
label_1195c4:
    // 0x1195c4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1195c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1195c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1195c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1195ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1195d0: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1195D0u;
    {
        const bool branch_taken_0x1195d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195D0u;
        // 0x1195d4: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195d0) {
            ctx->pc = 0x119620u;
            goto label_119620;
        }
    }
    ctx->pc = 0x1195D8u;
    // 0x1195d8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1195d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1195dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1195dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195e0: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x1195e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1195e4: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x1195e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1195e8:
    // 0x1195e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1195e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1195ec: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x1195ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x1195f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1195f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1195f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1195f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1195f8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1195f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1195fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1195fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119600: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x119600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x119604: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x119604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x119608: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x119608u;
    {
        const bool branch_taken_0x119608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119608u;
        // 0x11960c: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119608) {
            ctx->pc = 0x1195E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1195e8;
        }
    }
    ctx->pc = 0x119610u;
    // 0x119610: 0x103800b  movn        $s0, $t0, $v1
    ctx->pc = 0x119610u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    // 0x119614: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x119614u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x119618: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x119618u;
    {
        const bool branch_taken_0x119618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119618u;
        // 0x11961c: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119618) {
            ctx->pc = 0x119644u;
            goto label_119644;
        }
    }
    ctx->pc = 0x119620u;
label_119620:
    // 0x119620: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x119620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x119624: 0x0  nop
    ctx->pc = 0x119624u;
    // NOP
label_119628:
    // 0x119628: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x119628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11962c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11962cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x119630: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x119630u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x119634: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x119634u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x119638: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x119638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11963c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11963Cu;
    {
        const bool branch_taken_0x11963c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11963c) {
            ctx->pc = 0x119628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119628;
        }
    }
    ctx->pc = 0x119644u;
label_119644:
    // 0x119644: 0xaea50010  sw          $a1, 0x10($s5)
    ctx->pc = 0x119644u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 5));
    // 0x119648: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x119648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11964c: 0xc046372  jal         func_118DC8
    ctx->pc = 0x11964Cu;
    SET_GPR_U32(ctx, 31, 0x119654u);
    ctx->pc = 0x119650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11964Cu;
    // 0x119650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x11964Cu, 0x119654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119654u;
label_119654:
    // 0x119654: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x119654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119658: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x119658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11965c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11965cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119660: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x119660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119664: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x119664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119668: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11966c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11966cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119670: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119678: 0x3e00008  jr          $ra
    ctx->pc = 0x119678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119678u;
        // 0x11967c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119680u;
}
