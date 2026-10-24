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

// Function: entry_00270d0c
// Address: 0x270d0c - 0x270d5c
void entry_00270d0c_0x270d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270d0c_0x270d0c");
#endif

    switch (ctx->pc) {
        case 0x270d20u: goto label_270d20;
        case 0x270d2cu: goto label_270d2c;
        default: break;
    }

    ctx->pc = 0x270d0cu;

    // 0x270d0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270d10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270d14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270d18: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x270D18u;
    SET_GPR_U32(ctx, 31, 0x270D20u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x270D18u, 0x270D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D20u;
label_270d20:
    // 0x270d20: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270d24: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x270D24u;
    SET_GPR_U32(ctx, 31, 0x270D2Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x270D24u, 0x270D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270D2Cu;
label_270d2c:
    // 0x270d2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d30: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x270d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x270d34: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x270D34u;
    {
        const bool branch_taken_0x270d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270d34) {
            ctx->pc = 0x270DD4u;
            return;
        }
    }
    ctx->pc = 0x270D3Cu;
    // 0x270d3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d40: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x270d40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x270d44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d48: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x270d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x270d4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x270d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x270d50: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x270d50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x270d54: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x270D54u;
    {
        const bool branch_taken_0x270d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270d54) {
            ctx->pc = 0x270DD4u;
            return;
        }
    }
    ctx->pc = 0x270D5Cu;
}
