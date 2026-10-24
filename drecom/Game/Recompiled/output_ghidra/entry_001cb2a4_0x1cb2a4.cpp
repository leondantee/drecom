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

// Function: entry_001cb2a4
// Address: 0x1cb2a4 - 0x1cb2e8
void entry_001cb2a4_0x1cb2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb2a4_0x1cb2a4");
#endif

    switch (ctx->pc) {
        case 0x1cb2b4u: goto label_1cb2b4;
        case 0x1cb2c0u: goto label_1cb2c0;
        default: break;
    }

    ctx->pc = 0x1cb2a4u;

    // 0x1cb2a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2a8: 0xc44c1b58  lwc1        $f12, 0x1B58($v0)
    ctx->pc = 0x1cb2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb2ac: 0xc057324  jal         func_15CC90
    ctx->pc = 0x1CB2ACu;
    SET_GPR_U32(ctx, 31, 0x1CB2B4u);
    ctx->pc = 0x15CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC90u, 0x1CB2ACu, 0x1CB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2B4u;
label_1cb2b4:
    // 0x1cb2b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cb2b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cb2b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CB2B8u;
    SET_GPR_U32(ctx, 31, 0x1CB2C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CB2B8u, 0x1CB2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2C0u;
label_1cb2c0:
    // 0x1cb2c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cb2c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1cb2c8: 0x10600161  beqz        $v1, . + 4 + (0x161 << 2)
    ctx->pc = 0x1CB2C8u;
    {
        const bool branch_taken_0x1cb2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb2c8) {
            ctx->pc = 0x1CB850u;
            return;
        }
    }
    ctx->pc = 0x1CB2D0u;
    // 0x1cb2d0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2d4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1cb2d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1cb2d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb2dc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cb2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cb2e0: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x1CB2E0u;
    {
        const bool branch_taken_0x1cb2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb2e0) {
            ctx->pc = 0x1CB850u;
            return;
        }
    }
    ctx->pc = 0x1CB2E8u;
}
