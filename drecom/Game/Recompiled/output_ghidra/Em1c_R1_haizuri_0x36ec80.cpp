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

// Function: Em1c_R1_haizuri
// Address: 0x36ec80 - 0x36ed08
void Em1c_R1_haizuri_0x36ec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_haizuri_0x36ec80");
#endif

    switch (ctx->pc) {
        case 0x36ecd4u: goto label_36ecd4;
        case 0x36ecf8u: goto label_36ecf8;
        default: break;
    }

    ctx->pc = 0x36ec80u;

    // 0x36ec80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ec80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36ec84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36ec84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36ec88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36ec8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ec90: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36ec90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36ec94: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36ec94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36ec98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ec9c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x36EC9Cu;
    {
        const bool branch_taken_0x36ec9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36ec9c) {
            ctx->pc = 0x36ECECu;
            goto label_36ecec;
        }
    }
    ctx->pc = 0x36ECA4u;
    // 0x36eca4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36ECA4u;
    {
        const bool branch_taken_0x36eca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eca4) {
            ctx->pc = 0x36ECB4u;
            goto label_36ecb4;
        }
    }
    ctx->pc = 0x36ECACu;
    // 0x36ecac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x36ECACu;
    {
        const bool branch_taken_0x36ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ecac) {
            ctx->pc = 0x36ECF8u;
            goto label_36ecf8;
        }
    }
    ctx->pc = 0x36ECB4u;
label_36ecb4:
    // 0x36ecb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ecb8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ecbc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36ecc0: 0x24065a0e  addiu       $a2, $zero, 0x5A0E
    ctx->pc = 0x36ecc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23054));
    // 0x36ecc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36ecc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ecc8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36ecc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36eccc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36ECCCu;
    SET_GPR_U32(ctx, 31, 0x36ECD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36ECCCu, 0x36ECD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ECD4u;
label_36ecd4:
    // 0x36ecd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ecd8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36ecd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36ecdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ece0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36ece0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36ece4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36ece8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36ece8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36ecec:
    // 0x36ecec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36ececu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ecf0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36ECF0u;
    SET_GPR_U32(ctx, 31, 0x36ECF8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36ECF0u, 0x36ECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ECF8u;
label_36ecf8:
    // 0x36ecf8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36ecf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ecfc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36ecfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36ed00: 0x3e00008  jr          $ra
    ctx->pc = 0x36ED00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ED00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ED08u;
}
