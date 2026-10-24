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

// Function: R10a_evt_scene6
// Address: 0x272f10 - 0x272fd8
void R10a_evt_scene6_0x272f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10a_evt_scene6_0x272f10");
#endif

    switch (ctx->pc) {
        case 0x272f3cu: goto label_272f3c;
        case 0x272f54u: goto label_272f54;
        case 0x272f68u: goto label_272f68;
        case 0x272f80u: goto label_272f80;
        case 0x272f88u: goto label_272f88;
        case 0x272f94u: goto label_272f94;
        case 0x272fc4u: goto label_272fc4;
        default: break;
    }

    ctx->pc = 0x272f10u;

    // 0x272f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272f14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x272f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x272f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272f1c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x272f1cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x272f20: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x272f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x272f24: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x272f24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x272f28: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x272f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x272f2c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x272f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x272f30: 0x34450044  ori         $a1, $v0, 0x44
    ctx->pc = 0x272f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)68);
    // 0x272f34: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272F34u;
    SET_GPR_U32(ctx, 31, 0x272F3Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272F34u, 0x272F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F3Cu;
label_272f3c:
    // 0x272f3c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x272f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x272f40: 0x3444b464  ori         $a0, $v0, 0xB464
    ctx->pc = 0x272f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46180);
    // 0x272f44: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x272f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x272f48: 0x34450041  ori         $a1, $v0, 0x41
    ctx->pc = 0x272f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
    // 0x272f4c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272F4Cu;
    SET_GPR_U32(ctx, 31, 0x272F54u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272F4Cu, 0x272F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F54u;
label_272f54:
    // 0x272f54: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x272f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x272f58: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x272f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x272f5c: 0x34450094  ori         $a1, $v0, 0x94
    ctx->pc = 0x272f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)148);
    // 0x272f60: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272F60u;
    SET_GPR_U32(ctx, 31, 0x272F68u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272F60u, 0x272F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F68u;
label_272f68:
    // 0x272f68: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x272f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x272f6c: 0x3444b464  ori         $a0, $v0, 0xB464
    ctx->pc = 0x272f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46180);
    // 0x272f70: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x272f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x272f74: 0x34450091  ori         $a1, $v0, 0x91
    ctx->pc = 0x272f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)145);
    // 0x272f78: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x272F78u;
    SET_GPR_U32(ctx, 31, 0x272F80u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x272F78u, 0x272F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F80u;
label_272f80:
    // 0x272f80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x272F80u;
    {
        const bool branch_taken_0x272f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272f80) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272F88u;
label_272f88:
    // 0x272f88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272f8c: 0xc084964  jal         func_212590
    ctx->pc = 0x272F8Cu;
    SET_GPR_U32(ctx, 31, 0x272F94u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x272F8Cu, 0x272F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F94u;
label_272f94:
    // 0x272f94: 0x0  nop
    ctx->pc = 0x272f94u;
    // NOP
label_272f98:
    // 0x272f98: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x272f98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x272f9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x272f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x272fa0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x272fa0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272fa4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x272fa4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x272fa8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x272fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x272fac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272facu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x272fb0: 0x284200a2  slti        $v0, $v0, 0xA2
    ctx->pc = 0x272fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)162) ? 1 : 0);
    // 0x272fb4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x272FB4u;
    {
        const bool branch_taken_0x272fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272fb4) {
            ctx->pc = 0x272F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272f88;
        }
    }
    ctx->pc = 0x272FBCu;
    // 0x272fbc: 0xc084934  jal         func_2124D0
    ctx->pc = 0x272FBCu;
    SET_GPR_U32(ctx, 31, 0x272FC4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x272FBCu, 0x272FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272FC4u;
label_272fc4:
    // 0x272fc4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x272fc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272fc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272fcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x272fccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x272fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x272FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272FD8u;
}
