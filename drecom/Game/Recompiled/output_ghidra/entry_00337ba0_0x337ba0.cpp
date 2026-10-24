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

// Function: entry_00337ba0
// Address: 0x337ba0 - 0x337bec
void entry_00337ba0_0x337ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337ba0_0x337ba0");
#endif

    switch (ctx->pc) {
        case 0x337ba8u: goto label_337ba8;
        case 0x337bc8u: goto label_337bc8;
        default: break;
    }

    ctx->pc = 0x337ba0u;

    // 0x337ba0: 0xc0ce0d8  jal         func_338360
    ctx->pc = 0x337BA0u;
    SET_GPR_U32(ctx, 31, 0x337BA8u);
    ctx->pc = 0x338360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338360u, 0x337BA0u, 0x337BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BA8u;
label_337ba8:
    // 0x337ba8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337bac: 0x8c234e40  lw          $v1, 0x4E40($at)
    ctx->pc = 0x337bacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894E40u));
    // 0x337bb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x337bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x337bb4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337bb8: 0x8c234e48  lw          $v1, 0x4E48($at)
    ctx->pc = 0x337bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894E48u));
    // 0x337bbc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x337bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x337bc0: 0xc0ce14c  jal         func_338530
    ctx->pc = 0x337BC0u;
    SET_GPR_U32(ctx, 31, 0x337BC8u);
    ctx->pc = 0x338530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338530u, 0x337BC0u, 0x337BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BC8u;
label_337bc8:
    // 0x337bc8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337bcc: 0xac224e38  sw          $v0, 0x4E38($at)
    ctx->pc = 0x337bccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E38u, _value); } while (0);
    // 0x337bd0: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x337bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x337bd4: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x337bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x337bd8: 0x8e025dd4  lw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
    // 0x337bdc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x337bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x337be0: 0xae055dd4  sw          $a1, 0x5DD4($s0)
    ctx->pc = 0x337be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 5));
    // 0x337be4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x337BE4u;
    {
        const bool branch_taken_0x337be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337be4) {
            ctx->pc = 0x337E30u;
            return;
        }
    }
    ctx->pc = 0x337BECu;
}
