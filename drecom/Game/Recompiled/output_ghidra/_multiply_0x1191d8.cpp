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

// Function: _multiply
// Address: 0x1191d8 - 0x119404
void _multiply_0x1191d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_multiply_0x1191d8");
#endif

    switch (ctx->pc) {
        case 0x11923cu: goto label_11923c;
        case 0x119268u: goto label_119268;
        case 0x1192b8u: goto label_1192b8;
        case 0x1192d8u: goto label_1192d8;
        case 0x119358u: goto label_119358;
        case 0x1193c0u: goto label_1193c0;
        default: break;
    }

    ctx->pc = 0x1191d8u;

    // 0x1191d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1191d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1191dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1191dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1191e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1191e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1191e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1191e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1191e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1191ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1191ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191f0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1191f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1191f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1191f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1191f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1191f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1191fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1191fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119200: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x119200u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x119204: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x119204u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x119208: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x119208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x11920c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11920Cu;
    {
        const bool branch_taken_0x11920c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11920Cu;
        // 0x119210: 0x200c82d  daddu       $t9, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11920c) {
            ctx->pc = 0x119224u;
            goto label_119224;
        }
    }
    ctx->pc = 0x119214u;
    // 0x119214: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x119214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119218: 0x320882d  daddu       $s1, $t9, $zero
    ctx->pc = 0x119218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11921c: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x11921cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x119220: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x119220u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_119224:
    // 0x119224: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x119224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119228: 0x253a021  addu        $s4, $s2, $s3
    ctx->pc = 0x119228u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x11922c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x119230: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x119230u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x119234: 0xc046348  jal         func_118D20
    ctx->pc = 0x119234u;
    SET_GPR_U32(ctx, 31, 0x11923Cu);
    ctx->pc = 0x119238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119234u;
    // 0x119238: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x119234u, 0x11923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11923Cu;
label_11923c:
    // 0x11923c: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x11923cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119240: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x119240u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x119244: 0x27380014  addiu       $t8, $t9, 0x14
    ctx->pc = 0x119244u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 20));
    // 0x119248: 0x3152021  addu        $a0, $t8, $s5
    ctx->pc = 0x119248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x11924c: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x11924cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x119250: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x119250u;
    {
        const bool branch_taken_0x119250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119250u;
        // 0x119254: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119250) {
            ctx->pc = 0x11928Cu;
            goto label_11928c;
        }
    }
    ctx->pc = 0x119258u;
    // 0x119258: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x119258u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x11925c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x11925cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x119260: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x119260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x119264: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x119264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_119268:
    // 0x119268: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x119268u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x11926c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x11926cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x119270: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x119270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x119274: 0x0  nop
    ctx->pc = 0x119274u;
    // NOP
    // 0x119278: 0x0  nop
    ctx->pc = 0x119278u;
    // NOP
    // 0x11927c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11927Cu;
    {
        const bool branch_taken_0x11927c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11927c) {
            ctx->pc = 0x119268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119268;
        }
    }
    ctx->pc = 0x119284u;
    // 0x119284: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119284u;
    {
        const bool branch_taken_0x119284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119284u;
        // 0x119288: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119284) {
            ctx->pc = 0x1192A0u;
            goto label_1192a0;
        }
    }
    ctx->pc = 0x11928Cu;
label_11928c:
    // 0x11928c: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x11928cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x119290: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x119290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x119294: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x119294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x119298: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x119298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x11929c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x11929cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1192a0:
    // 0x1192a0: 0x1c58821  addu        $s1, $t6, $a1
    ctx->pc = 0x1192a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x1192a4: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x1192a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1192a8: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x1192a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1192ac: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1192ACu;
    {
        const bool branch_taken_0x1192ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192ACu;
        // 0x1192b0: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192ac) {
            ctx->pc = 0x1193BCu;
            goto label_1193bc;
        }
    }
    ctx->pc = 0x1192B4u;
    // 0x1192b4: 0x0  nop
    ctx->pc = 0x1192b4u;
    // NOP
label_1192b8:
    // 0x1192b8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1192b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1192bc: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x1192bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1192c0: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1192C0u;
    {
        const bool branch_taken_0x1192c0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192C0u;
        // 0x1192c4: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192c0) {
            ctx->pc = 0x119334u;
            goto label_119334;
        }
    }
    ctx->pc = 0x1192C8u;
    // 0x1192c8: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1192c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1192ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192d0: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x1192d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1192d4: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x1192d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1192d8:
    // 0x1192d8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1192d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1192dc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1192dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1192e0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1192e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1192e4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1192e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1192e8: 0x131302b  sltu        $a2, $t1, $s1
    ctx->pc = 0x1192e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1192ec: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x1192ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1192f0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1192f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1192f4: 0x706a1818  mult1       $v1, $v1, $t2
    ctx->pc = 0x1192f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1192f8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1192f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1192fc: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1192fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x119300: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x119300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119304: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x119304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x119308: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x119308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11930c: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x11930cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x119310: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x119310u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x119314: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x119314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x119318: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x119318u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x11931c: 0x75c02  srl         $t3, $a3, 16
    ctx->pc = 0x11931cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x119320: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x119320u;
    {
        const bool branch_taken_0x119320 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x119324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119320u;
        // 0x119324: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119320) {
            ctx->pc = 0x1192D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1192d8;
        }
    }
    ctx->pc = 0x119328u;
    // 0x119328: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x119328u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x11932c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11932Cu;
    {
        const bool branch_taken_0x11932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11932Cu;
        // 0x119330: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11932c) {
            ctx->pc = 0x11933Cu;
            goto label_11933c;
        }
    }
    ctx->pc = 0x119334u;
label_119334:
    // 0x119334: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x119334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x119338: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x119338u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_11933c:
    // 0x11933c: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x11933cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x119340: 0x1140001a  beqz        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x119340u;
    {
        const bool branch_taken_0x119340 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x119344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119340u;
        // 0x119344: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119340) {
            ctx->pc = 0x1193ACu;
            goto label_1193ac;
        }
    }
    ctx->pc = 0x119348u;
    // 0x119348: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x119348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11934c: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x11934cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x119350: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x119350u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119354: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x119354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_119358:
    // 0x119358: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x119358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11935c: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x11935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x119360: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x119360u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x119364: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x119364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x119368: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x119368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x11936c: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x11936cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x119370: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x119370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119374: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x119374u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x119378: 0x708a2018  mult1       $a0, $a0, $t2
    ctx->pc = 0x119378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11937c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11937cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119380: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x119380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x119384: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x119384u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x119388: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x119388u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x11938c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x11938cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x119390: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x119390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x119394: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x119394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x119398: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x119398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11939c: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x11939cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1193a0: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1193A0u;
    {
        const bool branch_taken_0x1193a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1193A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193A0u;
        // 0x1193a4: 0x75c02  srl         $t3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193a0) {
            ctx->pc = 0x119358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119358;
        }
    }
    ctx->pc = 0x1193A8u;
    // 0x1193a8: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x1193a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_1193ac:
    // 0x1193ac: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x1193acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193b0: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x1193b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1193b4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1193B4u;
    {
        const bool branch_taken_0x1193b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1193B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193B4u;
        // 0x1193b8: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193b4) {
            ctx->pc = 0x1192B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1192b8;
        }
    }
    ctx->pc = 0x1193BCu;
label_1193bc:
    // 0x1193bc: 0x3154021  addu        $t0, $t8, $s5
    ctx->pc = 0x1193bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
label_1193c0:
    // 0x1193c0: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1193C0u;
    {
        const bool branch_taken_0x1193c0 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1193c0) {
            ctx->pc = 0x1193C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1193C0u;
            // 0x1193c4: 0xaf340010  sw          $s4, 0x10($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1193DCu;
            goto label_1193dc;
        }
    }
    ctx->pc = 0x1193C8u;
    // 0x1193c8: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x1193c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x1193cc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1193ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1193d0: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1193D0u;
    {
        const bool branch_taken_0x1193d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1193d0) {
            ctx->pc = 0x1193D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1193D0u;
            // 0x1193d4: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1193C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1193c0;
        }
    }
    ctx->pc = 0x1193D8u;
    // 0x1193d8: 0xaf340010  sw          $s4, 0x10($t9)
    ctx->pc = 0x1193d8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
label_1193dc:
    // 0x1193dc: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x1193dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1193e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1193e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1193e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1193e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1193e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1193ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1193ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1193f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1193f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1193f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1193f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1193f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1193f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1193fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1193FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193FCu;
        // 0x119400: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1193FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119404u;
}
