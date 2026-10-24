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

// Function: entry_001f3c7c
// Address: 0x1f3c7c - 0x1f3ce0
void entry_001f3c7c_0x1f3c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3c7c_0x1f3c7c");
#endif

    switch (ctx->pc) {
        case 0x1f3cd4u: goto label_1f3cd4;
        default: break;
    }

    ctx->pc = 0x1f3c7cu;

    // 0x1f3c7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f3c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f3c80: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x1f3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f3c84: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f3c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f3c88: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F3C88u;
    {
        const bool branch_taken_0x1f3c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c88) {
            ctx->pc = 0x1F3D44u;
            return;
        }
    }
    ctx->pc = 0x1F3C90u;
    // 0x1f3c90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3c94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3c98: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f3c9c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f3c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f3ca0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F3CA0u;
    {
        const bool branch_taken_0x1f3ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ca0) {
            ctx->pc = 0x1F3CE0u;
            return;
        }
    }
    ctx->pc = 0x1F3CA8u;
    // 0x1f3ca8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3cac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f3cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3cb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3cb4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3cb8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f3cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f3cbc: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f3cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3cc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f3cc4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f3cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f3cc8: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f3ccc: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F3CCCu;
    SET_GPR_U32(ctx, 31, 0x1F3CD4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F3CCCu, 0x1F3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3CD4u;
label_1f3cd4:
    // 0x1f3cd4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f3cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f3cd8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F3CD8u;
    {
        const bool branch_taken_0x1f3cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3cd8) {
            ctx->pc = 0x1F3D24u;
            return;
        }
    }
    ctx->pc = 0x1F3CE0u;
}
