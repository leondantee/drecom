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

// Function: entry_00207e78
// Address: 0x207e78 - 0x207ed0
void entry_00207e78_0x207e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207e78_0x207e78");
#endif

    switch (ctx->pc) {
        case 0x207eb8u: goto label_207eb8;
        case 0x207ec8u: goto label_207ec8;
        default: break;
    }

    ctx->pc = 0x207e78u;

    // 0x207e78: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207e7c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207e80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207e84: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x207e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x207e88: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x207E88u;
    {
        const bool branch_taken_0x207e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207e88) {
            ctx->pc = 0x207ED0u;
            return;
        }
    }
    ctx->pc = 0x207E90u;
    // 0x207e90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207e94: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x207e94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x207e98: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x207e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x207e9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x207e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207ea0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x207ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x207ea4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x207ea4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x207ea8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x207ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x207eac: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x207eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x207eb0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x207EB0u;
    SET_GPR_U32(ctx, 31, 0x207EB8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x207EB0u, 0x207EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207EB8u;
label_207eb8:
    // 0x207eb8: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x207eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x207ebc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x207ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x207ec0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x207EC0u;
    SET_GPR_U32(ctx, 31, 0x207EC8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x207EC0u, 0x207EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207EC8u;
label_207ec8:
    // 0x207ec8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x207EC8u;
    {
        const bool branch_taken_0x207ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ec8) {
            ctx->pc = 0x207EECu;
            return;
        }
    }
    ctx->pc = 0x207ED0u;
}
