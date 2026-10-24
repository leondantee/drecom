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

// Function: default
// Address: 0x331380 - 0x3313c4
void ps2_default_0x331380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x331380");
#endif

    ctx->pc = 0x331380u;

    // 0x331380: 0x13c00010  beqz        $fp, . + 4 + (0x10 << 2)
    ctx->pc = 0x331380u;
    {
        const bool branch_taken_0x331380 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x331380) {
            ctx->pc = 0x3313C4u;
            return;
        }
    }
    ctx->pc = 0x331388u;
    // 0x331388: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x331388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x33138c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x33138cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x331390: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x331390u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x331394: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x331394u;
    {
        const bool branch_taken_0x331394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331394) {
            ctx->pc = 0x3313C4u;
            return;
        }
    }
    ctx->pc = 0x33139Cu;
    // 0x33139c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x33139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x3313a0: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x3313a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x3313a4: 0x24040065  addiu       $a0, $zero, 0x65
    ctx->pc = 0x3313a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x3313a8: 0xafa40224  sw          $a0, 0x224($sp)
    ctx->pc = 0x3313a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 4));
    // 0x3313ac: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3313acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3313b0: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x3313b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x3313b4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3313b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3313b8: 0xafa3022c  sw          $v1, 0x22C($sp)
    ctx->pc = 0x3313b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 3));
    // 0x3313bc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3313BCu;
    {
        const bool branch_taken_0x3313bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3313bc) {
            ctx->pc = 0x3314B0u;
            return;
        }
    }
    ctx->pc = 0x3313C4u;
}
