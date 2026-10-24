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

// Function: Em1b_R1_haizuri
// Address: 0x36d170 - 0x36d1f8
void Em1b_R1_haizuri_0x36d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_haizuri_0x36d170");
#endif

    switch (ctx->pc) {
        case 0x36d1c4u: goto label_36d1c4;
        case 0x36d1e8u: goto label_36d1e8;
        default: break;
    }

    ctx->pc = 0x36d170u;

    // 0x36d170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d174: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36d178: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36d178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36d17c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d180: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36d180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36d184: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36d184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36d188: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36d188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d18c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x36D18Cu;
    {
        const bool branch_taken_0x36d18c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36d18c) {
            ctx->pc = 0x36D1DCu;
            goto label_36d1dc;
        }
    }
    ctx->pc = 0x36D194u;
    // 0x36d194: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36D194u;
    {
        const bool branch_taken_0x36d194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d194) {
            ctx->pc = 0x36D1A4u;
            goto label_36d1a4;
        }
    }
    ctx->pc = 0x36D19Cu;
    // 0x36d19c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x36D19Cu;
    {
        const bool branch_taken_0x36d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d19c) {
            ctx->pc = 0x36D1E8u;
            goto label_36d1e8;
        }
    }
    ctx->pc = 0x36D1A4u;
label_36d1a4:
    // 0x36d1a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d1a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d1ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36d1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36d1b0: 0x24065a0f  addiu       $a2, $zero, 0x5A0F
    ctx->pc = 0x36d1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23055));
    // 0x36d1b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36d1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d1b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36d1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36d1bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36D1BCu;
    SET_GPR_U32(ctx, 31, 0x36D1C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36D1BCu, 0x36D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D1C4u;
label_36d1c4:
    // 0x36d1c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d1c8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36d1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36d1cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d1d0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36d1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36d1d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36d1d8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36d1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36d1dc:
    // 0x36d1dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d1e0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36D1E0u;
    SET_GPR_U32(ctx, 31, 0x36D1E8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36D1E0u, 0x36D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D1E8u;
label_36d1e8:
    // 0x36d1e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36d1e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d1ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36d1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36d1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x36D1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D1F8u;
}
