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

// Function: entry_001d9fe4
// Address: 0x1d9fe4 - 0x1da084
void entry_001d9fe4_0x1d9fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9fe4_0x1d9fe4");
#endif

    switch (ctx->pc) {
        case 0x1da060u: goto label_1da060;
        default: break;
    }

    ctx->pc = 0x1d9fe4u;

    // 0x1d9fe4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9fe8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1d9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9fec: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1d9fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1d9ff0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9ff4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d9ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9ff8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d9ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d9ffc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1d9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1da000: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x1da000u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da004: 0x8fb20058  lw          $s2, 0x58($sp)
    ctx->pc = 0x1da004u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1da008: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1da008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1da00c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x1da00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x1da010: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1da010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da014: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x1da014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1da018: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1da018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da01c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1da01cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da020: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1da020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da024: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1da024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1da028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da02c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1da02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1da030: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1da030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1da034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da038: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1da03c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1da03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1da040: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1da040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1da044: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x1da044u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1da048: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1da048u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1da04c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1da04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da050: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1da050u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1da054: 0x8c470038  lw          $a3, 0x38($v0)
    ctx->pc = 0x1da054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1da058: 0xc076938  jal         func_1DA4E0
    ctx->pc = 0x1DA058u;
    SET_GPR_U32(ctx, 31, 0x1DA060u);
    ctx->pc = 0x1DA4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA4E0u, 0x1DA058u, 0x1DA060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA060u;
label_1da060:
    // 0x1da060: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1da060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1da064: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1da064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1da068: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1da068u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da06c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da06cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1da070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1da074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da078: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1da078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1da07c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA084u;
}
