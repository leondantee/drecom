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

// Function: Md_set_fog_off
// Address: 0x1ab250 - 0x1ab39c
void Md_set_fog_off_0x1ab250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_fog_off_0x1ab250");
#endif

    switch (ctx->pc) {
        case 0x1ab26cu: goto label_1ab26c;
        case 0x1ab2a8u: goto label_1ab2a8;
        case 0x1ab2f4u: goto label_1ab2f4;
        case 0x1ab324u: goto label_1ab324;
        case 0x1ab354u: goto label_1ab354;
        case 0x1ab384u: goto label_1ab384;
        default: break;
    }

    ctx->pc = 0x1ab250u;

    // 0x1ab250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab254: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1ab254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ab258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ab258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab25c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ab25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab260: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1ab260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab264: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AB264u;
    {
        const bool branch_taken_0x1ab264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab264) {
            ctx->pc = 0x1AB2B0u;
            goto label_1ab2b0;
        }
    }
    ctx->pc = 0x1AB26Cu;
label_1ab26c:
    // 0x1ab26c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1ab26cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ab270: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1ab270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1ab274: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x1ab274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x1ab278: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ab278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab27c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1ab27cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ab280: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ab284: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ab284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ab288: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB288u;
    {
        const bool branch_taken_0x1ab288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab288) {
            ctx->pc = 0x1AB2A8u;
            goto label_1ab2a8;
        }
    }
    ctx->pc = 0x1AB290u;
    // 0x1ab290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ab290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ab294: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ab294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ab298: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ab298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab29c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ab29cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ab2a0: 0xc06ace8  jal         func_1AB3A0
    ctx->pc = 0x1AB2A0u;
    SET_GPR_U32(ctx, 31, 0x1AB2A8u);
    ctx->pc = 0x1AB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3A0u, 0x1AB2A0u, 0x1AB2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB2A8u;
label_1ab2a8:
    // 0x1ab2a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ab2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ab2ac: 0x0  nop
    ctx->pc = 0x1ab2acu;
    // NOP
label_1ab2b0:
    // 0x1ab2b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1ab2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1ab2b4: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x1ab2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x1ab2b8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1ab2b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ab2bc: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1AB2BCu;
    {
        const bool branch_taken_0x1ab2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab2bc) {
            ctx->pc = 0x1AB26Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab26c;
        }
    }
    ctx->pc = 0x1AB2C4u;
    // 0x1ab2c4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ab2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ab2c8: 0x2470b700  addiu       $s0, $v1, -0x4900
    ctx->pc = 0x1ab2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948608));
    // 0x1ab2cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB708u));
    // 0x1ab2d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ab2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ab2d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB2D4u;
    {
        const bool branch_taken_0x1ab2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab2d4) {
            ctx->pc = 0x1AB2F4u;
            goto label_1ab2f4;
        }
    }
    ctx->pc = 0x1AB2DCu;
    // 0x1ab2dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ab2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ab2e0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ab2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ab2e4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ab2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab2e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ab2e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ab2ec: 0xc06ace8  jal         func_1AB3A0
    ctx->pc = 0x1AB2ECu;
    SET_GPR_U32(ctx, 31, 0x1AB2F4u);
    ctx->pc = 0x1AB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3A0u, 0x1AB2ECu, 0x1AB2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB2F4u;
label_1ab2f4:
    // 0x1ab2f4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ab2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ab2f8: 0x2470a4a0  addiu       $s0, $v1, -0x5B60
    ctx->pc = 0x1ab2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x1ab2fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1ab300: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ab300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ab304: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB304u;
    {
        const bool branch_taken_0x1ab304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab304) {
            ctx->pc = 0x1AB324u;
            goto label_1ab324;
        }
    }
    ctx->pc = 0x1AB30Cu;
    // 0x1ab30c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ab30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ab310: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ab310u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ab314: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ab314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab318: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ab318u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ab31c: 0xc06ace8  jal         func_1AB3A0
    ctx->pc = 0x1AB31Cu;
    SET_GPR_U32(ctx, 31, 0x1AB324u);
    ctx->pc = 0x1AB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3A0u, 0x1AB31Cu, 0x1AB324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB324u;
label_1ab324:
    // 0x1ab324: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ab324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ab328: 0x24709240  addiu       $s0, $v1, -0x6DC0
    ctx->pc = 0x1ab328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x1ab32c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab32cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E9248u));
    // 0x1ab330: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ab330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ab334: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB334u;
    {
        const bool branch_taken_0x1ab334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab334) {
            ctx->pc = 0x1AB354u;
            goto label_1ab354;
        }
    }
    ctx->pc = 0x1AB33Cu;
    // 0x1ab33c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ab33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ab340: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ab340u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ab344: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ab344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab348: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ab348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ab34c: 0xc06ace8  jal         func_1AB3A0
    ctx->pc = 0x1AB34Cu;
    SET_GPR_U32(ctx, 31, 0x1AB354u);
    ctx->pc = 0x1AB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3A0u, 0x1AB34Cu, 0x1AB354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB354u;
label_1ab354:
    // 0x1ab354: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ab354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ab358: 0x2470a530  addiu       $s0, $v1, -0x5AD0
    ctx->pc = 0x1ab358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944048));
    // 0x1ab35c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab35cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FA538u));
    // 0x1ab360: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ab360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ab364: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB364u;
    {
        const bool branch_taken_0x1ab364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab364) {
            ctx->pc = 0x1AB384u;
            goto label_1ab384;
        }
    }
    ctx->pc = 0x1AB36Cu;
    // 0x1ab36c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ab36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ab370: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ab370u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ab374: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ab374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab378: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ab378u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ab37c: 0xc06ace8  jal         func_1AB3A0
    ctx->pc = 0x1AB37Cu;
    SET_GPR_U32(ctx, 31, 0x1AB384u);
    ctx->pc = 0x1AB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3A0u, 0x1AB37Cu, 0x1AB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB384u;
label_1ab384:
    // 0x1ab384: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1ab384u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab38c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab390: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ab390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ab394: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB39Cu;
}
