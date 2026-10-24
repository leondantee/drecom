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

// Function: entry_001d9a3c
// Address: 0x1d9a3c - 0x1d9a58
void entry_001d9a3c_0x1d9a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9a3c_0x1d9a3c");
#endif

    ctx->pc = 0x1d9a3cu;

    // 0x1d9a3c: 0x92030d84  lbu         $v1, 0xD84($s0)
    ctx->pc = 0x1d9a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3460)));
    // 0x1d9a40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9A40u;
    {
        const bool branch_taken_0x1d9a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a40) {
            ctx->pc = 0x1D9A58u;
            return;
        }
    }
    ctx->pc = 0x1D9A48u;
    // 0x1d9a48: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9a4c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1d9a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d9a50: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1d9a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9a54: 0xe6000d80  swc1        $f0, 0xD80($s0)
    ctx->pc = 0x1d9a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3456), bits); }
    ctx->pc = 0x1d9a58u;
}
