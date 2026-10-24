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

// Function: entry_001ef3f0
// Address: 0x1ef3f0 - 0x1ef440
void entry_001ef3f0_0x1ef3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef3f0_0x1ef3f0");
#endif

    switch (ctx->pc) {
        case 0x1ef434u: goto label_1ef434;
        default: break;
    }

    ctx->pc = 0x1ef3f0u;

    // 0x1ef3f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef3f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef3f8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ef3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ef3fc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ef3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ef400: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF400u;
    {
        const bool branch_taken_0x1ef400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef400) {
            ctx->pc = 0x1EF440u;
            return;
        }
    }
    ctx->pc = 0x1EF408u;
    // 0x1ef408: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ef408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef40c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ef40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef410: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef414: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ef414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef418: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ef418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ef41c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1ef41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef420: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ef420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ef424: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ef424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ef428: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ef428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef42c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EF42Cu;
    SET_GPR_U32(ctx, 31, 0x1EF434u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EF42Cu, 0x1EF434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF434u;
label_1ef434:
    // 0x1ef434: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ef434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ef438: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF438u;
    {
        const bool branch_taken_0x1ef438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef438) {
            ctx->pc = 0x1EF484u;
            return;
        }
    }
    ctx->pc = 0x1EF440u;
}
