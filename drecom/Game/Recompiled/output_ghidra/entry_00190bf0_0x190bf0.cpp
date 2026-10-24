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

// Function: entry_00190bf0
// Address: 0x190bf0 - 0x190c18
void entry_00190bf0_0x190bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190bf0_0x190bf0");
#endif

    switch (ctx->pc) {
        case 0x190c14u: goto label_190c14;
        default: break;
    }

    ctx->pc = 0x190bf0u;

    // 0x190bf0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190bf4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x190bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190bf8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190bfc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c00: 0x246400a0  addiu       $a0, $v1, 0xA0
    ctx->pc = 0x190c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x190c04: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x190c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x190c08: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x190c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x190c0c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x190C0Cu;
    SET_GPR_U32(ctx, 31, 0x190C14u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x190C14u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190C14u) { return; }
    ctx->pc = 0x190C14u;
label_190c14:
    // 0x190c14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x190c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x190c18u;
}
