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

// Function: entry_0026cba0
// Address: 0x26cba0 - 0x26cbec
void entry_0026cba0_0x26cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026cba0_0x26cba0");
#endif

    switch (ctx->pc) {
        case 0x26cbb0u: goto label_26cbb0;
        case 0x26cbc0u: goto label_26cbc0;
        default: break;
    }

    ctx->pc = 0x26cba0u;

    // 0x26cba0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cba4: 0xc46c1b58  lwc1        $f12, 0x1B58($v1)
    ctx->pc = 0x26cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26cba8: 0xc057324  jal         func_15CC90
    ctx->pc = 0x26CBA8u;
    SET_GPR_U32(ctx, 31, 0x26CBB0u);
    ctx->pc = 0x15CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC90u, 0x26CBA8u, 0x26CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBB0u;
label_26cbb0:
    // 0x26cbb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26cbb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26cbb4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26cbb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26cbb8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26CBB8u;
    SET_GPR_U32(ctx, 31, 0x26CBC0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26CBB8u, 0x26CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBC0u;
label_26cbc0:
    // 0x26cbc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26cbc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26cbc4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cbc8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26cbc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26cbcc: 0x106002a3  beqz        $v1, . + 4 + (0x2A3 << 2)
    ctx->pc = 0x26CBCCu;
    {
        const bool branch_taken_0x26cbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cbcc) {
            ctx->pc = 0x26D65Cu;
            return;
        }
    }
    ctx->pc = 0x26CBD4u;
    // 0x26cbd4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cbd8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x26cbd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x26cbdc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x26cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26cbe0: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x26cbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x26cbe4: 0x1000029d  b           . + 4 + (0x29D << 2)
    ctx->pc = 0x26CBE4u;
    {
        const bool branch_taken_0x26cbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cbe4) {
            ctx->pc = 0x26D65Cu;
            return;
        }
    }
    ctx->pc = 0x26CBECu;
}
