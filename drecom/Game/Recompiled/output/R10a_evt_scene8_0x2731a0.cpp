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

// Function: R10a_evt_scene8
// Address: 0x2731a0 - 0x27327c
void R10a_evt_scene8_0x2731a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_evt_scene8_0x2731a0");
#endif

    switch (ctx->pc) {
        case 0x2731e0u: goto label_2731e0;
        case 0x2731f4u: goto label_2731f4;
        case 0x2731fcu: goto label_2731fc;
        case 0x273228u: goto label_273228;
        case 0x273234u: goto label_273234;
        case 0x273264u: goto label_273264;
        default: break;
    }

    ctx->pc = 0x2731a0u;

    // 0x2731a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2731a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2731a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2731a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2731a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2731a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2731ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2731acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2731b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2731b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2731b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2731b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2731b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2731b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2731bc: 0xa0224f11  sb          $v0, 0x4F11($at)
    ctx->pc = 0x2731bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x2731c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2731c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2731c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2731c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2731c8: 0xa0224f12  sb          $v0, 0x4F12($at)
    ctx->pc = 0x2731c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F12u, _value); } while (0);
    // 0x2731cc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2731ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2731d0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2731d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2731d4: 0x3445016d  ori         $a1, $v0, 0x16D
    ctx->pc = 0x2731d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)365);
    // 0x2731d8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2731D8u;
    SET_GPR_U32(ctx, 31, 0x2731E0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2731D8u, 0x2731E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731E0u;
label_2731e0:
    // 0x2731e0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2731e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2731e4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2731e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2731e8: 0x3445017e  ori         $a1, $v0, 0x17E
    ctx->pc = 0x2731e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)382);
    // 0x2731ec: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2731ECu;
    SET_GPR_U32(ctx, 31, 0x2731F4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2731ECu, 0x2731F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731F4u;
label_2731f4:
    // 0x2731f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2731F4u;
    {
        const bool branch_taken_0x2731f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2731f4) {
            ctx->pc = 0x273238u;
            goto label_273238;
        }
    }
    ctx->pc = 0x2731FCu;
label_2731fc:
    // 0x2731fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2731fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x273200: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273200u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273204: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x273204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x273208: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x273208u;
    {
        const bool branch_taken_0x273208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273208) {
            ctx->pc = 0x273228u;
            goto label_273228;
        }
    }
    ctx->pc = 0x273210u;
    // 0x273210: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x273210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x273214: 0x8c31bb4c  lw          $s1, -0x44B4($at)
    ctx->pc = 0x273214u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x273218: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x273218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27321c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x27321cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x273220: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x273220u;
    SET_GPR_U32(ctx, 31, 0x273228u);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x273220u, 0x273228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273228u;
label_273228:
    // 0x273228: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x273228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27322c: 0xc084964  jal         func_212590
    ctx->pc = 0x27322Cu;
    SET_GPR_U32(ctx, 31, 0x273234u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27322Cu, 0x273234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273234u;
label_273234:
    // 0x273234: 0x0  nop
    ctx->pc = 0x273234u;
    // NOP
label_273238:
    // 0x273238: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x273238u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27323c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273240: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x273240u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273244: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x273244u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x273248: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x273248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x27324c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27324cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273250: 0x28420186  slti        $v0, $v0, 0x186
    ctx->pc = 0x273250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)390) ? 1 : 0);
    // 0x273254: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x273254u;
    {
        const bool branch_taken_0x273254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273254) {
            ctx->pc = 0x2731FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2731fc;
        }
    }
    ctx->pc = 0x27325Cu;
    // 0x27325c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27325Cu;
    SET_GPR_U32(ctx, 31, 0x273264u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27325Cu, 0x273264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273264u;
label_273264:
    // 0x273264: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x273264u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27326c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27326cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273270: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x273270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x273274: 0x3e00008  jr          $ra
    ctx->pc = 0x273274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27327Cu;
}
