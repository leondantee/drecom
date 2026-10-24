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

// Function: Em09_R1_br_mv18
// Address: 0x34f590 - 0x34f690
void Em09_R1_br_mv18_0x34f590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_br_mv18_0x34f590");
#endif

    switch (ctx->pc) {
        case 0x34f5b4u: goto label_34f5b4;
        case 0x34f5dcu: goto label_34f5dc;
        default: break;
    }

    ctx->pc = 0x34f590u;

    // 0x34f590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34f590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34f594: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x34f594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x34f598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34f598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34f59c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x34f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x34f5a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34f5a4: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x34f5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x34f5a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f5ac: 0xc0d4ed0  jal         func_353B40
    ctx->pc = 0x34F5ACu;
    SET_GPR_U32(ctx, 31, 0x34F5B4u);
    ctx->pc = 0x353B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B40u, 0x34F5ACu, 0x34F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F5B4u;
label_34f5b4:
    // 0x34f5b4: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x34f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x34f5b8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x34f5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x34f5bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34f5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34f5c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f5c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f5c8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x34f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x34f5cc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x34f5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34f5d0: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x34f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x34f5d4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x34F5D4u;
    SET_GPR_U32(ctx, 31, 0x34F5DCu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x34F5D4u, 0x34F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F5DCu;
label_34f5dc:
    // 0x34f5dc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x34F5DCu;
    {
        const bool branch_taken_0x34f5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f5dc) {
            ctx->pc = 0x34F67Cu;
            goto label_34f67c;
        }
    }
    ctx->pc = 0x34F5E4u;
    // 0x34f5e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f5e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f5ec: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x34f5ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x34f5f0: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x34F5F0u;
    {
        const bool branch_taken_0x34f5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f5f0) {
            ctx->pc = 0x34F67Cu;
            goto label_34f67c;
        }
    }
    ctx->pc = 0x34F5F8u;
    // 0x34f5f8: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x34f5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f5fc: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x34f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x34f600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f604: 0x0  nop
    ctx->pc = 0x34f604u;
    // NOP
    // 0x34f608: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x34f608u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34f60c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f610: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34f610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f614: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f618: 0x0  nop
    ctx->pc = 0x34f618u;
    // NOP
    // 0x34f61c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x34F61Cu;
    {
        const bool branch_taken_0x34f61c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f61c) {
            ctx->pc = 0x34F67Cu;
            goto label_34f67c;
        }
    }
    ctx->pc = 0x34F624u;
    // 0x34f624: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f628: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34f628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f62c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f630: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x34f630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x34f634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f638: 0x0  nop
    ctx->pc = 0x34f638u;
    // NOP
    // 0x34f63c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f640: 0x0  nop
    ctx->pc = 0x34f640u;
    // NOP
    // 0x34f644: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x34F644u;
    {
        const bool branch_taken_0x34f644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f644) {
            ctx->pc = 0x34F67Cu;
            goto label_34f67c;
        }
    }
    ctx->pc = 0x34F64Cu;
    // 0x34f64c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f650: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34f650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f654: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34f654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34f658: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34f658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34f65c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f660: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34f660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34f664: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34f664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f668: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34f668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f66c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f670: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34f670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f674: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34f674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f678: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34f678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_34f67c:
    // 0x34f67c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x34f67cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34f680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f684: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34f684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34f688: 0x3e00008  jr          $ra
    ctx->pc = 0x34F688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F690u;
}
