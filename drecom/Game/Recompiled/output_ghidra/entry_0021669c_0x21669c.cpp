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

// Function: entry_0021669c
// Address: 0x21669c - 0x2166b8
void entry_0021669c_0x21669c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021669c_0x21669c");
#endif

    ctx->pc = 0x21669cu;

    // 0x21669c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x21669cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2166a0: 0x2442c950  addiu       $v0, $v0, -0x36B0
    ctx->pc = 0x2166a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953296));
    // 0x2166a4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2166a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2166a8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x2166a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x2166ac: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x2166acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2166b0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2166b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2166b4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2166b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x2166b8u;
}
