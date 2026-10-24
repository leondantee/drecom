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

// Function: entry_0016f670
// Address: 0x16f670 - 0x16f6b8
void entry_0016f670_0x16f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f670_0x16f670");
#endif

    switch (ctx->pc) {
        case 0x16f6a0u: goto label_16f6a0;
        default: break;
    }

    ctx->pc = 0x16f670u;

    // 0x16f670: 0x97a200dc  lhu         $v0, 0xDC($sp)
    ctx->pc = 0x16f670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16f674: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x16f674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f678: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16f678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16f67c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f680: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x16f680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16f684: 0x1440fd74  bnez        $v0, . + 4 + (-0x28C << 2)
    ctx->pc = 0x16F684u;
    {
        const bool branch_taken_0x16f684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f684) {
            ctx->pc = 0x16EC58u;
            return;
        }
    }
    ctx->pc = 0x16F68Cu;
    // 0x16f68c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16f68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16f690: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x16f690u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x16f694: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16f694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f698: 0xc05ba8c  jal         func_16EA30
    ctx->pc = 0x16F698u;
    SET_GPR_U32(ctx, 31, 0x16F6A0u);
    ctx->pc = 0x16EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EA30u, 0x16F698u, 0x16F6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6A0u;
label_16f6a0:
    // 0x16f6a0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x16f6a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16f6a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16f6a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f6a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16f6a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f6ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16f6acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f6b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16f6b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f6b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16f6b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x16f6b8u;
}
