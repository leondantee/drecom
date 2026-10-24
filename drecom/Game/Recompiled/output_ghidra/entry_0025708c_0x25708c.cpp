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

// Function: entry_0025708c
// Address: 0x25708c - 0x25709c
void entry_0025708c_0x25708c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025708c_0x25708c");
#endif

    ctx->pc = 0x25708cu;

    // 0x25708c: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x25708cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x257090: 0x34640070  ori         $a0, $v1, 0x70
    ctx->pc = 0x257090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x257094: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x257094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257098: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x257098u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    ctx->pc = 0x25709cu;
}
