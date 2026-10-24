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

// Function: entry_00191708
// Address: 0x191708 - 0x191730
void entry_00191708_0x191708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191708_0x191708");
#endif

    switch (ctx->pc) {
        case 0x19172cu: goto label_19172c;
        default: break;
    }

    ctx->pc = 0x191708u;

    // 0x191708: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x191708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x19170c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x19170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191710: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x191710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x191714: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x191714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x191718: 0x246400a0  addiu       $a0, $v1, 0xA0
    ctx->pc = 0x191718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x19171c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x19171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x191720: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x191720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x191724: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x191724u;
    SET_GPR_U32(ctx, 31, 0x19172Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19172Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19172Cu) { return; }
    ctx->pc = 0x19172Cu;
label_19172c:
    // 0x19172c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19172cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x191730u;
}
