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

// Function: entry_0010cfac
// Address: 0x10cfac - 0x10cfb8
void entry_0010cfac_0x10cfac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cfac_0x10cfac");
#endif

    ctx->pc = 0x10cfacu;

    // 0x10cfac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10cfb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10cfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10cfb4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x10cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x10cfb8u;
}
