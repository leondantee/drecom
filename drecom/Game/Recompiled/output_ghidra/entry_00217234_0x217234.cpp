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

// Function: entry_00217234
// Address: 0x217234 - 0x21727c
void entry_00217234_0x217234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217234_0x217234");
#endif

    switch (ctx->pc) {
        case 0x217268u: goto label_217268;
        default: break;
    }

    ctx->pc = 0x217234u;

    // 0x217234: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x217234u;
    {
        const bool branch_taken_0x217234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217234u;
        // 0x217238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217234) {
            ctx->pc = 0x21729Cu;
            return;
        }
    }
    ctx->pc = 0x21723Cu;
    // 0x21723c: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x21723cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x217240: 0xae40ab00  sw          $zero, -0x5500($s2)
    ctx->pc = 0x217240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945536), GPR_U32(ctx, 0));
    // 0x217244: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x217248: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x217248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21724c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21724cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x217250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217254: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x217254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217258: 0x2629ccc0  addiu       $t1, $s1, -0x3340
    ctx->pc = 0x217258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954176));
    // 0x21725c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x21725cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217260: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x217260u;
    SET_GPR_U32(ctx, 31, 0x217268u);
    ctx->pc = 0x217264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217260u;
    // 0x217264: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x217268u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217268u) { return; }
    ctx->pc = 0x217268u;
label_217268:
    // 0x217268: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217268u;
    {
        const bool branch_taken_0x217268 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217268u;
        // 0x21726c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217268) {
            ctx->pc = 0x21727Cu;
            return;
        }
    }
    ctx->pc = 0x217270u;
    // 0x217270: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x217270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x217274: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x217274u;
    {
        const bool branch_taken_0x217274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217274u;
        // 0x217278: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217274) {
            ctx->pc = 0x2172D0u;
            return;
        }
    }
    ctx->pc = 0x21727Cu;
}
