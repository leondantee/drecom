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

// Function: entry_0021422c
// Address: 0x21422c - 0x214268
void entry_0021422c_0x21422c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021422c_0x21422c");
#endif

    ctx->pc = 0x21422cu;

    // 0x21422c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x214230: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x214230u;
    {
        const bool branch_taken_0x214230 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x214234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214230u;
        // 0x214234: 0x2642a100  addiu       $v0, $s2, -0x5F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214230) {
            ctx->pc = 0x214268u;
            return;
        }
    }
    ctx->pc = 0x214238u;
    // 0x214238: 0x2644a100  addiu       $a0, $s2, -0x5F00
    ctx->pc = 0x214238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942976));
    // 0x21423c: 0xae20aad0  sw          $zero, -0x5530($s1)
    ctx->pc = 0x21423cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945488), GPR_U32(ctx, 0));
    // 0x214240: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x214240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x214244: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x214244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214248: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x214248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x21424c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21424cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214250: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x214250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214254: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21425c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x21425cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x214260: 0x8084f18  j           func_213C60
    ctx->pc = 0x214260u;
    ctx->pc = 0x214264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214260u;
    // 0x214264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213C60u;
    kputs_0x213c60(rdram, ctx, runtime); return;
    ctx->pc = 0x214268u;
}
