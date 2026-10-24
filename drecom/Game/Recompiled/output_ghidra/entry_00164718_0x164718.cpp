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

// Function: entry_00164718
// Address: 0x164718 - 0x164734
void entry_00164718_0x164718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164718_0x164718");
#endif

    ctx->pc = 0x164718u;

    // 0x164718: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x164718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x16471c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x16471cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x164720: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x164720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x164724: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x164724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x164728: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x164728u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
    // 0x16472c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16472Cu;
    {
        const bool branch_taken_0x16472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16472c) {
            ctx->pc = 0x164764u;
            return;
        }
    }
    ctx->pc = 0x164734u;
}
