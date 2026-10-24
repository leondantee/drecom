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

// Function: entry_0017a528
// Address: 0x17a528 - 0x17a54c
void entry_0017a528_0x17a528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a528_0x17a528");
#endif

    ctx->pc = 0x17a528u;

    // 0x17a528: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x17a528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x17a52c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a530: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x17a530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a534: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17A534u;
    {
        const bool branch_taken_0x17a534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a534) {
            ctx->pc = 0x17A4ECu;
            return;
        }
    }
    ctx->pc = 0x17A53Cu;
    // 0x17a53c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17a540: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17a540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x17a544: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17a544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17a548: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x17a548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x17a54cu;
}
