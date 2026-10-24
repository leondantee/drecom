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

// Function: Em01_fire_effect
// Address: 0x301000 - 0x301114
void Em01_fire_effect_0x301000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_fire_effect_0x301000");
#endif

    switch (ctx->pc) {
        case 0x301060u: goto label_301060;
        case 0x301094u: goto label_301094;
        case 0x3010c8u: goto label_3010c8;
        case 0x3010d4u: goto label_3010d4;
        case 0x3010fcu: goto label_3010fc;
        default: break;
    }

    ctx->pc = 0x301000u;

    // 0x301000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x301000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x301004: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x301004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x301008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x301008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30100c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x301010: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x301010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x301014: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x301018: 0x244294b0  addiu       $v0, $v0, -0x6B50
    ctx->pc = 0x301018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939824));
    // 0x30101c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x30101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x301020: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x301020u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3994B0u));
    // 0x301024: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x301024u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x301028: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x301028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30102c: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x30102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x301030: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x301030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301034: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x301034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x301038: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x301038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30103c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x30103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x301040: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x301040u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x301044: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x301044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x301048: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x301048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30104c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x301050: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x301050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x301054: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x301054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x301058: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x301058u;
    SET_GPR_U32(ctx, 31, 0x301060u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x301060u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301060u) { return; }
    ctx->pc = 0x301060u;
label_301060:
    // 0x301060: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x301060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x301064: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x301064u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301068: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x301068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30106c: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x30106cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x301070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x301070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301074: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x301074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x301078: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x301078u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x30107c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x30107cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x301080: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x301080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x301084: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x301084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x301088: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x301088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x30108c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x30108Cu;
    SET_GPR_U32(ctx, 31, 0x301094u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x30108Cu, 0x301094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301094u;
label_301094:
    // 0x301094: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x301094u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x301098: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x301098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30109c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30109cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3010a0: 0x0  nop
    ctx->pc = 0x3010a0u;
    // NOP
    // 0x3010a4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3010a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3010a8: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3010A8u;
    {
        const bool branch_taken_0x3010a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3010a8) {
            ctx->pc = 0x3010FCu;
            goto label_3010fc;
        }
    }
    ctx->pc = 0x3010B0u;
    // 0x3010b0: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x3010b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x3010b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3010b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3010b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3010b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3010bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3010bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3010c0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3010C0u;
    SET_GPR_U32(ctx, 31, 0x3010C8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3010C0u, 0x3010C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3010C8u;
label_3010c8:
    // 0x3010c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3010c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3010cc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3010CCu;
    SET_GPR_U32(ctx, 31, 0x3010D4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3010CCu, 0x3010D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3010D4u;
label_3010d4:
    // 0x3010d4: 0x2402050c  addiu       $v0, $zero, 0x50C
    ctx->pc = 0x3010d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x3010d8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x3010d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3010dc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x3010dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x3010e0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3010e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3010e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3010e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3010e8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3010e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3010ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3010ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3010f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3010f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3010f4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x3010F4u;
    SET_GPR_U32(ctx, 31, 0x3010FCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x3010F4u, 0x3010FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3010FCu;
label_3010fc:
    // 0x3010fc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3010fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x301100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301108: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x301108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30110c: 0x3e00008  jr          $ra
    ctx->pc = 0x30110Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30110Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301114u;
}
