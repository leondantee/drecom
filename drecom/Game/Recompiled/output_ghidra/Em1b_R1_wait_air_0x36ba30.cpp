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

// Function: Em1b_R1_wait_air
// Address: 0x36ba30 - 0x36bb1c
void Em1b_R1_wait_air_0x36ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_wait_air_0x36ba30");
#endif

    switch (ctx->pc) {
        case 0x36ba84u: goto label_36ba84;
        case 0x36baa4u: goto label_36baa4;
        case 0x36bab0u: goto label_36bab0;
        case 0x36babcu: goto label_36babc;
        case 0x36baccu: goto label_36bacc;
        default: break;
    }

    ctx->pc = 0x36ba30u;

    // 0x36ba30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36ba34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x36ba38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36ba3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba40: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36ba40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36ba44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36ba44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36ba48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ba4c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36BA4Cu;
    {
        const bool branch_taken_0x36ba4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36ba4c) {
            ctx->pc = 0x36BA94u;
            goto label_36ba94;
        }
    }
    ctx->pc = 0x36BA54u;
    // 0x36ba54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BA54u;
    {
        const bool branch_taken_0x36ba54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ba54) {
            ctx->pc = 0x36BA64u;
            goto label_36ba64;
        }
    }
    ctx->pc = 0x36BA5Cu;
    // 0x36ba5c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x36BA5Cu;
    {
        const bool branch_taken_0x36ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ba5c) {
            ctx->pc = 0x36BB0Cu;
            goto label_36bb0c;
        }
    }
    ctx->pc = 0x36BA64u;
label_36ba64:
    // 0x36ba64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba6c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36ba70: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x36ba70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x36ba74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36ba74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ba78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36ba78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36ba7c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36BA7Cu;
    SET_GPR_U32(ctx, 31, 0x36BA84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36BA7Cu, 0x36BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA84u;
label_36ba84:
    // 0x36ba84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba88: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36ba88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36ba8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36ba90: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36ba90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36ba94:
    // 0x36ba94: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ba98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ba98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ba9c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36BA9Cu;
    SET_GPR_U32(ctx, 31, 0x36BAA4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36BA9Cu, 0x36BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAA4u;
label_36baa4:
    // 0x36baa4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36baa8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36BAA8u;
    SET_GPR_U32(ctx, 31, 0x36BAB0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36BAA8u, 0x36BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAB0u;
label_36bab0:
    // 0x36bab0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36bab4: 0xc0db4c0  jal         func_36D300
    ctx->pc = 0x36BAB4u;
    SET_GPR_U32(ctx, 31, 0x36BABCu);
    ctx->pc = 0x36D300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D300u, 0x36BAB4u, 0x36BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BABCu;
label_36babc:
    // 0x36babc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36babcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36bac0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36bac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36bac4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36BAC4u;
    SET_GPR_U32(ctx, 31, 0x36BACCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36BAC4u, 0x36BACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BACCu;
label_36bacc:
    // 0x36bacc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36bad0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36bad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36bad4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36BAD4u;
    {
        const bool branch_taken_0x36bad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bad4) {
            ctx->pc = 0x36BB0Cu;
            goto label_36bb0c;
        }
    }
    ctx->pc = 0x36BADCu;
    // 0x36badc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36badcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bae0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36bae4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36bae4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36bae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36baec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36baf0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36baf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36baf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36baf8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36baf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36bafc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36bb00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36bb00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36bb04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36bb08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36bb0c:
    // 0x36bb0c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36bb0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bb10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36bb14: 0x3e00008  jr          $ra
    ctx->pc = 0x36BB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BB1Cu;
}
