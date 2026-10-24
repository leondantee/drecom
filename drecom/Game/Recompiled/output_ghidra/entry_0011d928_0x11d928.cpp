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

// Function: entry_0011d928
// Address: 0x11d928 - 0x11d968
void entry_0011d928_0x11d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d928_0x11d928");
#endif

    ctx->pc = 0x11d928u;

    // 0x11d928: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11d928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11d92c: 0xc92006  srlv        $a0, $t1, $a2
    ctx->pc = 0x11d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x11d930: 0x2442de28  addiu       $v0, $v0, -0x21D8
    ctx->pc = 0x11d930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958632));
    // 0x11d934: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x11d934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11d938: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11d938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11d93c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11d93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d940: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x11d940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11d944: 0xa36823  subu        $t5, $a1, $v1
    ctx->pc = 0x11d944u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11d948: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x11D948u;
    {
        const bool branch_taken_0x11d948 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D948u;
        // 0x11d94c: 0xad7023  subu        $t6, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d948) {
            ctx->pc = 0x11D990u;
            return;
        }
    }
    ctx->pc = 0x11D950u;
    // 0x11d950: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x11d950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x11d954: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D954u;
    {
        const bool branch_taken_0x11d954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D954u;
        // 0x11d958: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d954) {
            ctx->pc = 0x11D968u;
            return;
        }
    }
    ctx->pc = 0x11D95Cu;
    // 0x11d95c: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x11d95cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11d960: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D960u;
    {
        const bool branch_taken_0x11d960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d960) {
            ctx->pc = 0x11D978u;
            return;
        }
    }
    ctx->pc = 0x11D968u;
}
