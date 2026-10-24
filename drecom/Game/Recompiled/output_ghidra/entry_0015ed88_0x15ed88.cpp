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

// Function: entry_0015ed88
// Address: 0x15ed88 - 0x15edc4
void entry_0015ed88_0x15ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ed88_0x15ed88");
#endif

    switch (ctx->pc) {
        case 0x15eda0u: goto label_15eda0;
        default: break;
    }

    ctx->pc = 0x15ed88u;

    // 0x15ed88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x15ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ed8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ed90: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x15ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ed94: 0xc44d0018  lwc1        $f13, 0x18($v0)
    ctx->pc = 0x15ed94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15ed98: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15ED98u;
    SET_GPR_U32(ctx, 31, 0x15EDA0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15ED98u, 0x15EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDA0u;
label_15eda0:
    // 0x15eda0: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15eda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15eda4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eda8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15eda8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15edac: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x15edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x15edb0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15edb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15edb4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15edb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15edb8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15edb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15edbc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15edc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15edc4u;
}
