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

// Function: caseD_0
// Address: 0x14f92c - 0x14f944
void caseD_0_0x14f92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14f92c");
#endif

    ctx->pc = 0x14f92cu;

    // 0x14f92c: 0x926213f8  lbu         $v0, 0x13F8($s3)
    ctx->pc = 0x14f92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5112)));
    // 0x14f930: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14f930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F934u;
    {
        const bool branch_taken_0x14f934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f934) {
            ctx->pc = 0x14F944u;
            return;
        }
    }
    ctx->pc = 0x14F93Cu;
    // 0x14f93c: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
    // 0x14f940: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f940u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x14f944u;
}
