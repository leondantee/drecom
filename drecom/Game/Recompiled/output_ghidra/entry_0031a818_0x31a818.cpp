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

// Function: entry_0031a818
// Address: 0x31a818 - 0x31a830
void entry_0031a818_0x31a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031a818_0x31a818");
#endif

    ctx->pc = 0x31a818u;

    // 0x31a818: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x31a818u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31a81c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a820: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x31a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31a824: 0xac60128c  sw          $zero, 0x128C($v1)
    ctx->pc = 0x31a824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 0));
    // 0x31a828: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31a828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31a82c: 0x0  nop
    ctx->pc = 0x31a82cu;
    // NOP
    ctx->pc = 0x31a830u;
}
