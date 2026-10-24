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

// Function: entry_0030eac4
// Address: 0x30eac4 - 0x30eb08
void entry_0030eac4_0x30eac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030eac4_0x30eac4");
#endif

    switch (ctx->pc) {
        case 0x30eafcu: goto label_30eafc;
        default: break;
    }

    ctx->pc = 0x30eac4u;

    // 0x30eac4: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eac8: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x30eac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x30eacc: 0x24c202c0  addiu       $v0, $a2, 0x2C0
    ctx->pc = 0x30eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 704));
    // 0x30ead0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30ead0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30ead4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30ead4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30ead8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x30ead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30eadc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30eadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30eae0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30eae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30eae4: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x30eae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30eae8: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30eaec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30eaecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30eaf0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x30eaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30eaf4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30EAF4u;
    SET_GPR_U32(ctx, 31, 0x30EAFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30EAF4u, 0x30EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAFCu;
label_30eafc:
    // 0x30eafc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30eafcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30eb00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30EB00u;
    SET_GPR_U32(ctx, 31, 0x30EB08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30EB00u, 0x30EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB08u;
}
