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

// Function: entry_0011b54c
// Address: 0x11b54c - 0x11b560
void entry_0011b54c_0x11b54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b54c_0x11b54c");
#endif

    ctx->pc = 0x11b54cu;

    // 0x11b54c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x11b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x11b550: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x11b550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b554: 0x2be03  sra         $s7, $v0, 24
    ctx->pc = 0x11b554u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
    // 0x11b558: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11b55c: 0xafa401ec  sw          $a0, 0x1EC($sp)
    ctx->pc = 0x11b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
    ctx->pc = 0x11b560u;
}
