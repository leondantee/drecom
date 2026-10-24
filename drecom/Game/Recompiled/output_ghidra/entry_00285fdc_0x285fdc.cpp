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

// Function: entry_00285fdc
// Address: 0x285fdc - 0x285fec
void entry_00285fdc_0x285fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285fdc_0x285fdc");
#endif

    ctx->pc = 0x285fdcu;

    // 0x285fdc: 0x8e24685c  lw          $a0, 0x685C($s1)
    ctx->pc = 0x285fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285fe0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x285fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x285fe4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285fe8: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    ctx->pc = 0x285fecu;
}
