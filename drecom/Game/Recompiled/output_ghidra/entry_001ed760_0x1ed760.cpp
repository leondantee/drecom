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

// Function: entry_001ed760
// Address: 0x1ed760 - 0x1ed7b0
void entry_001ed760_0x1ed760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed760_0x1ed760");
#endif

    switch (ctx->pc) {
        case 0x1ed7a4u: goto label_1ed7a4;
        default: break;
    }

    ctx->pc = 0x1ed760u;

    // 0x1ed760: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed764: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed768: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ed768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ed76c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ed76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ed770: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED770u;
    {
        const bool branch_taken_0x1ed770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed770) {
            ctx->pc = 0x1ED7B0u;
            return;
        }
    }
    ctx->pc = 0x1ED778u;
    // 0x1ed778: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed77c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ed77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed780: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed784: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed788: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ed788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ed78c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1ed78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ed790: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ed790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ed794: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ed794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ed798: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ed798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ed79c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1ED79Cu;
    SET_GPR_U32(ctx, 31, 0x1ED7A4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1ED79Cu, 0x1ED7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7A4u;
label_1ed7a4:
    // 0x1ed7a4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ed7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ed7a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1ED7A8u;
    {
        const bool branch_taken_0x1ed7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed7a8) {
            ctx->pc = 0x1ED7F4u;
            return;
        }
    }
    ctx->pc = 0x1ED7B0u;
}
