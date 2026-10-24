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

// Function: caseD_5
// Address: 0x31d278 - 0x31d2c0
void caseD_5_0x31d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x31d278");
#endif

    ctx->pc = 0x31d278u;

    // 0x31d278: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d27c: 0x8c5012a4  lw          $s0, 0x12A4($v0)
    ctx->pc = 0x31d27cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4772)));
    // 0x31d280: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d284: 0x8c5112a8  lw          $s1, 0x12A8($v0)
    ctx->pc = 0x31d284u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x31d288: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d28c: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x31d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x31d290: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31d294: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x31D294u;
    {
        const bool branch_taken_0x31d294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d294) {
            ctx->pc = 0x31D59Cu;
            return;
        }
    }
    ctx->pc = 0x31D29Cu;
    // 0x31d29c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d2a0: 0x8c4312ac  lw          $v1, 0x12AC($v0)
    ctx->pc = 0x31d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31d2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d2a8: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x31D2A8u;
    {
        const bool branch_taken_0x31d2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31d2a8) {
            ctx->pc = 0x31D374u;
            return;
        }
    }
    ctx->pc = 0x31D2B0u;
    // 0x31d2b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D2B0u;
    {
        const bool branch_taken_0x31d2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d2b0) {
            ctx->pc = 0x31D2C0u;
            return;
        }
    }
    ctx->pc = 0x31D2B8u;
    // 0x31d2b8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x31D2B8u;
    {
        const bool branch_taken_0x31d2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d2b8) {
            ctx->pc = 0x31D414u;
            return;
        }
    }
    ctx->pc = 0x31D2C0u;
}
