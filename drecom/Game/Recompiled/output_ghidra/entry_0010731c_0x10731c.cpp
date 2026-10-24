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

// Function: entry_0010731c
// Address: 0x10731c - 0x10732c
void entry_0010731c_0x10731c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010731c_0x10731c");
#endif

    ctx->pc = 0x10731cu;

    // 0x10731c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10731cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107320: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x107320u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x107324: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x107324u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x107328: 0x8e623c24  lw          $v0, 0x3C24($s3)
    ctx->pc = 0x107328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15396)));
    ctx->pc = 0x10732cu;
}
