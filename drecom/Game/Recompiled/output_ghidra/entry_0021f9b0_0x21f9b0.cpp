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

// Function: entry_0021f9b0
// Address: 0x21f9b0 - 0x21f9cc
void entry_0021f9b0_0x21f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f9b0_0x21f9b0");
#endif

    ctx->pc = 0x21f9b0u;

    // 0x21f9b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x21f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f9b4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x21f9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f9b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x21f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f9bc: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x21f9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x21f9c0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x21f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21f9c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x21f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21f9c8: 0xac640124  sw          $a0, 0x124($v1)
    ctx->pc = 0x21f9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 4));
    ctx->pc = 0x21f9ccu;
}
