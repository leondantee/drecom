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

// Function: entry_0010c954
// Address: 0x10c954 - 0x10c970
void entry_0010c954_0x10c954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c954_0x10c954");
#endif

    ctx->pc = 0x10c954u;

    // 0x10c954: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x10c954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x10c958: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10C958u;
    {
        const bool branch_taken_0x10c958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C958u;
        // 0x10c95c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c958) {
            ctx->pc = 0x10C988u;
            return;
        }
    }
    ctx->pc = 0x10C960u;
    // 0x10c960: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C960u;
    {
        const bool branch_taken_0x10c960 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C960u;
        // 0x10c964: 0x90820068  lbu         $v0, 0x68($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c960) {
            ctx->pc = 0x10C970u;
            return;
        }
    }
    ctx->pc = 0x10C968u;
    // 0x10c968: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10C968u;
    {
        const bool branch_taken_0x10c968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C968u;
        // 0x10c96c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c968) {
            ctx->pc = 0x10C990u;
            return;
        }
    }
    ctx->pc = 0x10C970u;
}
