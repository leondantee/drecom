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

// Function: entry_002e4d34
// Address: 0x2e4d34 - 0x2e4d7c
void entry_002e4d34_0x2e4d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4d34_0x2e4d34");
#endif

    switch (ctx->pc) {
        case 0x2e4d50u: goto label_2e4d50;
        default: break;
    }

    ctx->pc = 0x2e4d34u;

    // 0x2e4d34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e4d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4d38: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x2e4d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4d3c: 0xc60d00a4  lwc1        $f13, 0xA4($s0)
    ctx->pc = 0x2e4d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4d40: 0xc60e00a4  lwc1        $f14, 0xA4($s0)
    ctx->pc = 0x2e4d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4d44: 0xc60f00a4  lwc1        $f15, 0xA4($s0)
    ctx->pc = 0x2e4d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e4d48: 0xc0c91ec  jal         func_3247B0
    ctx->pc = 0x2E4D48u;
    SET_GPR_U32(ctx, 31, 0x2E4D50u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x2E4D48u, 0x2E4D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D50u;
label_2e4d50:
    // 0x2e4d50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4d54: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2e4d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4d58: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e4d5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e4d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e4d60: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E4D60u;
    {
        const bool branch_taken_0x2e4d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d60) {
            ctx->pc = 0x2E4DD8u;
            return;
        }
    }
    ctx->pc = 0x2E4D68u;
    // 0x2e4d68: 0x920300a8  lbu         $v1, 0xA8($s0)
    ctx->pc = 0x2e4d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2e4d6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e4d70: 0xa20300a8  sb          $v1, 0xA8($s0)
    ctx->pc = 0x2e4d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4d74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E4D74u;
    {
        const bool branch_taken_0x2e4d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d74) {
            ctx->pc = 0x2E4DD8u;
            return;
        }
    }
    ctx->pc = 0x2E4D7Cu;
}
