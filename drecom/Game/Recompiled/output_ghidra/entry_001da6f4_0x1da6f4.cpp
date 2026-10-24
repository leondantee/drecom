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

// Function: entry_001da6f4
// Address: 0x1da6f4 - 0x1da710
void entry_001da6f4_0x1da6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da6f4_0x1da6f4");
#endif

    ctx->pc = 0x1da6f4u;

    // 0x1da6f4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1da6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1da6f8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1da6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1da6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da700: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1da700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1da704: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1da704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1da708: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1DA708u;
    {
        const bool branch_taken_0x1da708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da708) {
            ctx->pc = 0x1DA770u;
            return;
        }
    }
    ctx->pc = 0x1DA710u;
}
