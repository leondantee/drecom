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

// Function: entry_003562f4
// Address: 0x3562f4 - 0x356330
void entry_003562f4_0x3562f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003562f4_0x3562f4");
#endif

    switch (ctx->pc) {
        case 0x35632cu: goto label_35632c;
        default: break;
    }

    ctx->pc = 0x3562f4u;

    // 0x3562f4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3562f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3562f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3562f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3562fc: 0x2442a6a0  addiu       $v0, $v0, -0x5960
    ctx->pc = 0x3562fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944416));
    // 0x356300: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x356300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x356304: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x356304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356308: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x356308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35630c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x35630cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x356310: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x356310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x356314: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x356314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356318: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x356318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35631c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x35631cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x356320: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x356320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x356324: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x356324u;
    SET_GPR_U32(ctx, 31, 0x35632Cu);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x356324u, 0x35632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35632Cu;
label_35632c:
    // 0x35632c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35632cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x356330u;
}
