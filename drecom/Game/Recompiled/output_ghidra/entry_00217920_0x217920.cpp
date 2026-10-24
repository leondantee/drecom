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

// Function: entry_00217920
// Address: 0x217920 - 0x217974
void entry_00217920_0x217920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217920_0x217920");
#endif

    switch (ctx->pc) {
        case 0x217960u: goto label_217960;
        default: break;
    }

    ctx->pc = 0x217920u;

    // 0x217920: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x217920u;
    {
        const bool branch_taken_0x217920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217920u;
        // 0x217924: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217920) {
            ctx->pc = 0x2179A4u;
            return;
        }
    }
    ctx->pc = 0x217928u;
    // 0x217928: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x217928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x21792c: 0x2622ccc0  addiu       $v0, $s1, -0x3340
    ctx->pc = 0x21792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954176));
    // 0x217930: 0xae33ccc0  sw          $s3, -0x3340($s1)
    ctx->pc = 0x217930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294954176), GPR_U32(ctx, 19));
    // 0x217934: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x217934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217938: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x217938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x21793c: 0x2484cec0  addiu       $a0, $a0, -0x3140
    ctx->pc = 0x21793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954688));
    // 0x217940: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x217940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x217944: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x217948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21794c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x21794cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x217950: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x217950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217954: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x217954u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x217958: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x217958u;
    SET_GPR_U32(ctx, 31, 0x217960u);
    ctx->pc = 0x21795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217958u;
    // 0x21795c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x217960u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217960u) { return; }
    ctx->pc = 0x217960u;
label_217960:
    // 0x217960: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217960u;
    {
        const bool branch_taken_0x217960 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x217960) {
            ctx->pc = 0x217974u;
            return;
        }
    }
    ctx->pc = 0x217968u;
    // 0x217968: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x217968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x21796c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x21796Cu;
    {
        const bool branch_taken_0x21796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21796Cu;
        // 0x217970: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21796c) {
            ctx->pc = 0x2179B8u;
            return;
        }
    }
    ctx->pc = 0x217974u;
}
