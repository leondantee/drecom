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

// Function: Em19_R1_sleep
// Address: 0x2e4ff0 - 0x2e50f4
void Em19_R1_sleep_0x2e4ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_sleep_0x2e4ff0");
#endif

    switch (ctx->pc) {
        case 0x2e50b4u: goto label_2e50b4;
        case 0x2e50d4u: goto label_2e50d4;
        case 0x2e50e0u: goto label_2e50e0;
        default: break;
    }

    ctx->pc = 0x2e4ff0u;

    // 0x2e4ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e4ff4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e4ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e4ff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4ffc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2e4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2e5000: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5004: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e5004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e5008: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e500c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e500cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5010: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e5010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e5014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5018: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E5018u;
    {
        const bool branch_taken_0x2e5018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e5018) {
            ctx->pc = 0x2E50C4u;
            goto label_2e50c4;
        }
    }
    ctx->pc = 0x2E5020u;
    // 0x2e5020: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5020u;
    {
        const bool branch_taken_0x2e5020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5020) {
            ctx->pc = 0x2E5030u;
            goto label_2e5030;
        }
    }
    ctx->pc = 0x2E5028u;
    // 0x2e5028: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2E5028u;
    {
        const bool branch_taken_0x2e5028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5028) {
            ctx->pc = 0x2E50E0u;
            goto label_2e50e0;
        }
    }
    ctx->pc = 0x2E5030u;
label_2e5030:
    // 0x2e5030: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5034: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e5034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e5038: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2e5038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e503c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e503cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e5040: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e5040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e5044: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5048: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e5048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e504c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e504cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e5050: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2e5050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2e5054: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5058: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e5058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e505c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2e505cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2e5060: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e5060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e5064: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e5064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e5068: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e5068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e506c: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x2e506cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x2e5070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5074: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5074u;
    {
        const bool branch_taken_0x2e5074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e5074) {
            ctx->pc = 0x2E5088u;
            goto label_2e5088;
        }
    }
    ctx->pc = 0x2E507Cu;
    // 0x2e507c: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x2e507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2e5080: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e5080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e5084: 0xac22efa8  sw          $v0, -0x1058($at)
    ctx->pc = 0x2e5084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEFA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFA8u, _value); } while (0);
label_2e5088:
    // 0x2e5088: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e5088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e508c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5090: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e5090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e5094: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5098: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e509c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e509cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e50a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e50a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e50a4: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2e50a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e50a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e50a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e50ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E50ACu;
    SET_GPR_U32(ctx, 31, 0x2E50B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E50ACu, 0x2E50B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50B4u;
label_2e50b4:
    // 0x2e50b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e50b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e50b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e50b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e50bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e50c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e50c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e50c4:
    // 0x2e50c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e50c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e50c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e50c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e50cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E50CCu;
    SET_GPR_U32(ctx, 31, 0x2E50D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E50CCu, 0x2E50D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50D4u;
label_2e50d4:
    // 0x2e50d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e50d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e50d8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E50D8u;
    SET_GPR_U32(ctx, 31, 0x2E50E0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E50D8u, 0x2E50E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50E0u;
label_2e50e0:
    // 0x2e50e0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e50e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e50e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e50e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e50e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e50e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e50ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E50ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E50ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E50F4u;
}
