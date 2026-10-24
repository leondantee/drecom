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

// Function: caseD_1
// Address: 0x31cebc - 0x31cef4
void caseD_1_0x31cebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x31cebc");
#endif

    ctx->pc = 0x31cebcu;

    // 0x31cebc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cec0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31cec4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x31cec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x31cec8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x31cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x31cecc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ced0: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x31ced0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x31ced4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31ced4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ced8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cedc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31CEDCu;
    {
        const bool branch_taken_0x31cedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31cedc) {
            ctx->pc = 0x31CF38u;
            return;
        }
    }
    ctx->pc = 0x31CEE4u;
    // 0x31cee4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31CEE4u;
    {
        const bool branch_taken_0x31cee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cee4) {
            ctx->pc = 0x31CEF4u;
            return;
        }
    }
    ctx->pc = 0x31CEECu;
    // 0x31ceec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31CEECu;
    {
        const bool branch_taken_0x31ceec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ceec) {
            ctx->pc = 0x31CF74u;
            return;
        }
    }
    ctx->pc = 0x31CEF4u;
}
