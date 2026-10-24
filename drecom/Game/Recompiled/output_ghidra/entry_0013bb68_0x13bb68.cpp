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

// Function: entry_0013bb68
// Address: 0x13bb68 - 0x13bb90
void entry_0013bb68_0x13bb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bb68_0x13bb68");
#endif

    ctx->pc = 0x13bb68u;

    // 0x13bb68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bb6c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x13bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x13bb70: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x13bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x13bb74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13bb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13bb78: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BB78u;
    {
        const bool branch_taken_0x13bb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bb78) {
            ctx->pc = 0x13BB90u;
            return;
        }
    }
    ctx->pc = 0x13BB80u;
    // 0x13bb80: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13bb84: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x13bb84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13bb88: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x13bb88u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x13bb8c: 0x0  nop
    ctx->pc = 0x13bb8cu;
    // NOP
    ctx->pc = 0x13bb90u;
}
