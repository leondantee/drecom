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

// Function: entry_001dc23c
// Address: 0x1dc23c - 0x1dc2e4
void entry_001dc23c_0x1dc23c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc23c_0x1dc23c");
#endif

    switch (ctx->pc) {
        case 0x1dc284u: goto label_1dc284;
        default: break;
    }

    ctx->pc = 0x1dc23cu;

    // 0x1dc23c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc240: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc240u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc244: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc248: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc24c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc250: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc254: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc258: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc25c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc260: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc264: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc268: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc26c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc26cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc270: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x1dc270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1dc274: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1dc274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1dc278: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc278u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc27c: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x1DC27Cu;
    SET_GPR_U32(ctx, 31, 0x1DC284u);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1DC27Cu, 0x1DC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC284u;
label_1dc284:
    // 0x1dc284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc288: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x1dc288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x1dc28c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dc28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dc290: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1dc290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1dc294: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DC294u;
    {
        const bool branch_taken_0x1dc294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc294) {
            ctx->pc = 0x1DC2E4u;
            return;
        }
    }
    ctx->pc = 0x1DC29Cu;
    // 0x1dc29c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc2a0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc2a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc2a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc2ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc2b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc2b4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc2b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc2bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc2c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc2c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc2c8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc2cc: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc2ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc2d0: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x1dc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1dc2d4: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x1dc2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1dc2d8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc2d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc2dc: 0xc06afa0  jal         func_1ABE80
    ctx->pc = 0x1DC2DCu;
    SET_GPR_U32(ctx, 31, 0x1DC2E4u);
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1DC2DCu, 0x1DC2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC2E4u;
}
