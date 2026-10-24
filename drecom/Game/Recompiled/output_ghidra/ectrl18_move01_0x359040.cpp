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

// Function: ectrl18_move01
// Address: 0x359040 - 0x3591b4
void ectrl18_move01_0x359040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl18_move01_0x359040");
#endif

    switch (ctx->pc) {
        case 0x3590b4u: goto label_3590b4;
        case 0x3590c0u: goto label_3590c0;
        case 0x359108u: goto label_359108;
        case 0x359114u: goto label_359114;
        case 0x35915cu: goto label_35915c;
        case 0x359168u: goto label_359168;
        default: break;
    }

    ctx->pc = 0x359040u;

    // 0x359040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359044: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x359044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x359048: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x359048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35904c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359050: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x359050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x359054: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x359054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x359058: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x359058u;
    {
        const bool branch_taken_0x359058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x359058) {
            ctx->pc = 0x359180u;
            goto label_359180;
        }
    }
    ctx->pc = 0x359060u;
    // 0x359060: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x359060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x359064: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x359064u;
    {
        const bool branch_taken_0x359064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x359064) {
            ctx->pc = 0x35912Cu;
            goto label_35912c;
        }
    }
    ctx->pc = 0x35906Cu;
    // 0x35906c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359070: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x359070u;
    {
        const bool branch_taken_0x359070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x359070) {
            ctx->pc = 0x3590D8u;
            goto label_3590d8;
        }
    }
    ctx->pc = 0x359078u;
    // 0x359078: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359078u;
    {
        const bool branch_taken_0x359078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x359078) {
            ctx->pc = 0x359088u;
            goto label_359088;
        }
    }
    ctx->pc = 0x359080u;
    // 0x359080: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x359080u;
    {
        const bool branch_taken_0x359080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359080) {
            ctx->pc = 0x3591A4u;
            goto label_3591a4;
        }
    }
    ctx->pc = 0x359088u;
label_359088:
    // 0x359088: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x359088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x35908c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35908cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359090: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359094: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x359094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x359098: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35909c: 0x24044802  addiu       $a0, $zero, 0x4802
    ctx->pc = 0x35909cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18434));
    // 0x3590a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3590a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3590a4: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x3590a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3590a8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3590a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3590ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3590ACu;
    SET_GPR_U32(ctx, 31, 0x3590B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3590ACu, 0x3590B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590B4u;
label_3590b4:
    // 0x3590b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3590b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3590b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3590B8u;
    SET_GPR_U32(ctx, 31, 0x3590C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3590B8u, 0x3590C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590C0u;
label_3590c0:
    // 0x3590c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3590c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3590c4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3590c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3590c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3590c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3590cc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3590ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3590d0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3590D0u;
    {
        const bool branch_taken_0x3590d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3590d0) {
            ctx->pc = 0x3591A4u;
            goto label_3591a4;
        }
    }
    ctx->pc = 0x3590D8u;
label_3590d8:
    // 0x3590d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3590d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3590dc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x3590dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x3590e0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3590e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3590e4: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x3590E4u;
    {
        const bool branch_taken_0x3590e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3590e4) {
            ctx->pc = 0x3591A4u;
            goto label_3591a4;
        }
    }
    ctx->pc = 0x3590ECu;
    // 0x3590ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3590ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3590f0: 0x24044802  addiu       $a0, $zero, 0x4802
    ctx->pc = 0x3590f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18434));
    // 0x3590f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3590f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3590f8: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x3590f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3590fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3590fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359100: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x359100u;
    SET_GPR_U32(ctx, 31, 0x359108u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x359100u, 0x359108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359108u;
label_359108:
    // 0x359108: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x359108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35910c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35910Cu;
    SET_GPR_U32(ctx, 31, 0x359114u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35910Cu, 0x359114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359114u;
label_359114:
    // 0x359114: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359118: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x359118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x35911c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x359120: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x359120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x359124: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x359124u;
    {
        const bool branch_taken_0x359124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359124) {
            ctx->pc = 0x3591A4u;
            goto label_3591a4;
        }
    }
    ctx->pc = 0x35912Cu;
label_35912c:
    // 0x35912c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359130: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x359130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x359134: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x359134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x359138: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x359138u;
    {
        const bool branch_taken_0x359138 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x359138) {
            ctx->pc = 0x3591A4u;
            goto label_3591a4;
        }
    }
    ctx->pc = 0x359140u;
    // 0x359140: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359144: 0x24044802  addiu       $a0, $zero, 0x4802
    ctx->pc = 0x359144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18434));
    // 0x359148: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35914c: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x35914cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x359150: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x359150u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359154: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x359154u;
    SET_GPR_U32(ctx, 31, 0x35915Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x359154u, 0x35915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35915Cu;
label_35915c:
    // 0x35915c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35915cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x359160: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x359160u;
    SET_GPR_U32(ctx, 31, 0x359168u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x359160u, 0x359168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359168u;
label_359168:
    // 0x359168: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35916c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x35916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x359170: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x359170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x359174: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x359174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x359178: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x359178u;
    {
        const bool branch_taken_0x359178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359178) {
            ctx->pc = 0x3591A4u;
            goto label_3591a4;
        }
    }
    ctx->pc = 0x359180u;
label_359180:
    // 0x359180: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359184: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x359184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x359188: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x359188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35918c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x35918cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x359190: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x359190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359194: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x359194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x359198: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x359198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x35919c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3591a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3591a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3591a4:
    // 0x3591a4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3591a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3591a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3591a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3591ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3591ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3591ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3591B4u;
}
