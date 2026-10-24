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

// Function: entry_002177ec
// Address: 0x2177ec - 0x21785c
void entry_002177ec_0x2177ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002177ec_0x2177ec");
#endif

    switch (ctx->pc) {
        case 0x217804u: goto label_217804;
        case 0x217818u: goto label_217818;
        case 0x217848u: goto label_217848;
        default: break;
    }

    ctx->pc = 0x2177ecu;

    // 0x2177ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2177ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177f0: 0x2451ccc8  addiu       $s1, $v0, -0x3338
    ctx->pc = 0x2177f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954184));
    // 0x2177f4: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x2177f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x2177f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2177f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177fc: 0xc046c14  jal         func_11B050
    ctx->pc = 0x2177FCu;
    SET_GPR_U32(ctx, 31, 0x217804u);
    ctx->pc = 0x217800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2177FCu;
    // 0x217800: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    {
        ctx->pc = 0x217804u;
        ps2_stubs::strncpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217804u) { return; }
    ctx->pc = 0x217804u;
label_217804:
    // 0x217804: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x217804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217808: 0xa2000103  sb          $zero, 0x103($s0)
    ctx->pc = 0x217808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x21780c: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x21780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x217810: 0xc046c14  jal         func_11B050
    ctx->pc = 0x217810u;
    SET_GPR_U32(ctx, 31, 0x217818u);
    ctx->pc = 0x217814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217810u;
    // 0x217814: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    {
        ctx->pc = 0x217818u;
        ps2_stubs::strncpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217818u) { return; }
    ctx->pc = 0x217818u;
label_217818:
    // 0x217818: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x217818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x21781c: 0xa20001ff  sb          $zero, 0x1FF($s0)
    ctx->pc = 0x21781cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 511), (uint8_t)GPR_U32(ctx, 0));
    // 0x217820: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x217820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217824: 0x2484cec0  addiu       $a0, $a0, -0x3140
    ctx->pc = 0x217824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954688));
    // 0x217828: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21782c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21782cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217830: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x217830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217834: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x217834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x217838: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x217838u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21783c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x21783cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x217840: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x217840u;
    SET_GPR_U32(ctx, 31, 0x217848u);
    ctx->pc = 0x217844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217840u;
    // 0x217844: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x217848u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217848u) { return; }
    ctx->pc = 0x217848u;
label_217848:
    // 0x217848: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217848u;
    {
        const bool branch_taken_0x217848 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x217848) {
            ctx->pc = 0x21784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217848u;
            // 0x21784c: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21785Cu;
            return;
        }
    }
    ctx->pc = 0x217850u;
    // 0x217850: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x217850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x217854: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x217854u;
    {
        const bool branch_taken_0x217854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217854u;
        // 0x217858: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217854) {
            ctx->pc = 0x21787Cu;
            return;
        }
    }
    ctx->pc = 0x21785Cu;
}
