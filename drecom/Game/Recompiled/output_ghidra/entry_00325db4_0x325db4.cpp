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

// Function: entry_00325db4
// Address: 0x325db4 - 0x325dd4
void entry_00325db4_0x325db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325db4_0x325db4");
#endif

    ctx->pc = 0x325db4u;

    // 0x325db4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x325db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325db8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x325db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325dbc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x325dbcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x325dc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x325dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325dc4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x325dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325dc8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325dcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x325dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325dd0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x325dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->pc = 0x325dd4u;
}
