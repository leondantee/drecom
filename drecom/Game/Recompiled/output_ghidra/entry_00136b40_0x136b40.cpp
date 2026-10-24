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

// Function: entry_00136b40
// Address: 0x136b40 - 0x136b50
void entry_00136b40_0x136b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136b40_0x136b40");
#endif

    ctx->pc = 0x136b40u;

    // 0x136b40: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x136b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x136b44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136b44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136b48: 0x0  nop
    ctx->pc = 0x136b48u;
    // NOP
    // 0x136b4c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->pc = 0x136b50u;
}
