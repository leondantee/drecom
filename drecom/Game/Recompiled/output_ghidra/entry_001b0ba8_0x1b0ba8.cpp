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

// Function: entry_001b0ba8
// Address: 0x1b0ba8 - 0x1b0c38
void entry_001b0ba8_0x1b0ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0ba8_0x1b0ba8");
#endif

    switch (ctx->pc) {
        case 0x1b0bc0u: goto label_1b0bc0;
        default: break;
    }

    ctx->pc = 0x1b0ba8u;

label_1b0ba8:
    // 0x1b0ba8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1b0ba8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b0bac: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1b0bacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1b0bb0: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1b0bb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b0bb4: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x1b0bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0bb8: 0xc06c560  jal         func_1B1580
    ctx->pc = 0x1B0BB8u;
    SET_GPR_U32(ctx, 31, 0x1B0BC0u);
    ctx->pc = 0x1B1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1580u, 0x1B0BB8u, 0x1B0BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BC0u;
label_1b0bc0:
    // 0x1b0bc0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b0bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b0bc4: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x1b0bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1b0bc8: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x1b0bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x1b0bcc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1b0bccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1b0bd0: 0x1660fff5  bnez        $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B0BD0u;
    {
        const bool branch_taken_0x1b0bd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0bd0) {
            ctx->pc = 0x1B0BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0ba8;
        }
    }
    ctx->pc = 0x1B0BD8u;
    // 0x1b0bd8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1b0bd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1b0bdc: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b0bdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b0be0: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1b0be0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1b0be4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1b0be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b0be8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0bec: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x1b0becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x1b0bf0: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x1b0bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x1b0bf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0bf8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b0bf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0bfc: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1B0BFCu;
    {
        const bool branch_taken_0x1b0bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0bfc) {
            ctx->pc = 0x1B0B60u;
            return;
        }
    }
    ctx->pc = 0x1B0C04u;
    // 0x1b0c04: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b0c04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b0c08: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b0c08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0c0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b0c0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0c10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b0c10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0c14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b0c14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0c18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b0c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0c1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0c20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0c2c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1b0c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b0c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0C38u;
}
