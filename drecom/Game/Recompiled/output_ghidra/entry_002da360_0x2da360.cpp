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

// Function: entry_002da360
// Address: 0x2da360 - 0x2da380
void entry_002da360_0x2da360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da360_0x2da360");
#endif

    ctx->pc = 0x2da360u;

    // 0x2da360: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x2da360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x2da364: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2da364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2da368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da36c: 0x0  nop
    ctx->pc = 0x2da36cu;
    // NOP
    // 0x2da370: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da374: 0xa20000d8  sb          $zero, 0xD8($s0)
    ctx->pc = 0x2da374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da378: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2DA378u;
    {
        const bool branch_taken_0x2da378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da378) {
            ctx->pc = 0x2DA470u;
            return;
        }
    }
    ctx->pc = 0x2DA380u;
}
