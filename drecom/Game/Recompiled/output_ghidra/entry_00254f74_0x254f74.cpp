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

// Function: entry_00254f74
// Address: 0x254f74 - 0x255014
void entry_00254f74_0x254f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254f74_0x254f74");
#endif

    switch (ctx->pc) {
        case 0x254ff0u: goto label_254ff0;
        default: break;
    }

    ctx->pc = 0x254f74u;

    // 0x254f74: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x254f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254f78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x254f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254f7c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x254f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x254f80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x254f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254f84: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x254f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254f88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x254f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x254f8c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x254f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254f90: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x254f90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x254f94: 0x8fb20058  lw          $s2, 0x58($sp)
    ctx->pc = 0x254f94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x254f98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x254f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254f9c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x254f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x254fa0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x254fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254fa4: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x254fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x254fa8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x254fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254fac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x254facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254fb0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x254fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x254fb4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x254fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x254fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254fbc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x254fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x254fc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x254fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x254fc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254fc8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x254fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x254fcc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x254fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x254fd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x254fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254fd4: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x254fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x254fd8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x254fd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x254fdc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x254fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254fe0: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x254fe0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x254fe4: 0x8c470038  lw          $a3, 0x38($v0)
    ctx->pc = 0x254fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x254fe8: 0xc095934  jal         func_2564D0
    ctx->pc = 0x254FE8u;
    SET_GPR_U32(ctx, 31, 0x254FF0u);
    ctx->pc = 0x2564D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2564D0u, 0x254FE8u, 0x254FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FF0u;
label_254ff0:
    // 0x254ff0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x254ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x254ff4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x254ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x254ff8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x254ff8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254ffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x254ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255008: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x255008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25500c: 0x3e00008  jr          $ra
    ctx->pc = 0x25500Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25500Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255014u;
}
