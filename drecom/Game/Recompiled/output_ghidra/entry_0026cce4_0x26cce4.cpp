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

// Function: entry_0026cce4
// Address: 0x26cce4 - 0x26cd20
void entry_0026cce4_0x26cce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026cce4_0x26cce4");
#endif

    switch (ctx->pc) {
        case 0x26ccf4u: goto label_26ccf4;
        case 0x26cd00u: goto label_26cd00;
        default: break;
    }

    ctx->pc = 0x26cce4u;

    // 0x26cce4: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26cce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cce8: 0xc50c1b50  lwc1        $f12, 0x1B50($t0)
    ctx->pc = 0x26cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26ccec: 0xc057324  jal         func_15CC90
    ctx->pc = 0x26CCECu;
    SET_GPR_U32(ctx, 31, 0x26CCF4u);
    ctx->pc = 0x15CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC90u, 0x26CCECu, 0x26CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CCF4u;
label_26ccf4:
    // 0x26ccf4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26ccf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26ccf8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26CCF8u;
    SET_GPR_U32(ctx, 31, 0x26CD00u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26CCF8u, 0x26CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CD00u;
label_26cd00:
    // 0x26cd00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cd04: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x26cd04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x26cd08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CD08u;
    {
        const bool branch_taken_0x26cd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cd08) {
            ctx->pc = 0x26CD20u;
            return;
        }
    }
    ctx->pc = 0x26CD10u;
    // 0x26cd10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cd14: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26cd14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26cd18: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x26cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26cd1c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x26cd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x26cd20u;
}
