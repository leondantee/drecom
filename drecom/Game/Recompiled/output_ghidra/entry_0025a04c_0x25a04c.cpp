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

// Function: entry_0025a04c
// Address: 0x25a04c - 0x25a070
void entry_0025a04c_0x25a04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a04c_0x25a04c");
#endif

    ctx->pc = 0x25a04cu;

    // 0x25a04c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x25a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a050: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a054: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a058: 0xac600a18  sw          $zero, 0xA18($v1)
    ctx->pc = 0x25a058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2584), GPR_U32(ctx, 0));
    // 0x25a05c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x25a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a060: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a064: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a068: 0xac600b58  sw          $zero, 0xB58($v1)
    ctx->pc = 0x25a068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2904), GPR_U32(ctx, 0));
    // 0x25a06c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x25a070u;
}
