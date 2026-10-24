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

// Function: scheduler_main
// Address: 0x19d0d0 - 0x19d1dc
void scheduler_main_0x19d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scheduler_main_0x19d0d0");
#endif

    switch (ctx->pc) {
        case 0x19d0ecu: goto label_19d0ec;
        case 0x19d134u: goto label_19d134;
        case 0x19d148u: goto label_19d148;
        case 0x19d178u: goto label_19d178;
        case 0x19d190u: goto label_19d190;
        case 0x19d1b0u: goto label_19d1b0;
        default: break;
    }

    ctx->pc = 0x19d0d0u;

    // 0x19d0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d0d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x19d0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x19d0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d0e0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x19d0e4: 0x2470fbe0  addiu       $s0, $v1, -0x420
    ctx->pc = 0x19d0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966240));
    // 0x19d0e8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19d0e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19d0ec:
    // 0x19d0ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d0f0: 0xac30fbd8  sw          $s0, -0x428($at)
    ctx->pc = 0x19d0f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5CFBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBD8u, _value); } while (0);
    // 0x19d0f4: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x19d0f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19d0f8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19d0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19d0fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19d100: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x19D100u;
    {
        const bool branch_taken_0x19d100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d100) {
            ctx->pc = 0x19D178u;
            goto label_19d178;
        }
    }
    ctx->pc = 0x19D108u;
    // 0x19d108: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d10c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19D10Cu;
    {
        const bool branch_taken_0x19d10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d10c) {
            ctx->pc = 0x19D150u;
            goto label_19d150;
        }
    }
    ctx->pc = 0x19D114u;
    // 0x19d114: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d118: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D118u;
    {
        const bool branch_taken_0x19d118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19d118) {
            ctx->pc = 0x19D128u;
            goto label_19d128;
        }
    }
    ctx->pc = 0x19D120u;
    // 0x19d120: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x19D120u;
    {
        const bool branch_taken_0x19d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d120) {
            ctx->pc = 0x19D190u;
            goto label_19d190;
        }
    }
    ctx->pc = 0x19D128u;
label_19d128:
    // 0x19d128: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19d128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19d12c: 0xc084a08  jal         func_212820
    ctx->pc = 0x19D12Cu;
    SET_GPR_U32(ctx, 31, 0x19D134u);
    ctx->pc = 0x212820u;
    {
        ctx->pc = 0x19D134u;
        ps2_syscalls::CreateThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D134u) { return; }
    ctx->pc = 0x19D134u;
label_19d134:
    // 0x19d134: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19d134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19d138: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19d138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d13c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19d13cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19d140: 0xc084a10  jal         func_212840
    ctx->pc = 0x19D140u;
    SET_GPR_U32(ctx, 31, 0x19D148u);
    ctx->pc = 0x212840u;
    {
        ctx->pc = 0x19D148u;
        ps2_syscalls::StartThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D148u) { return; }
    ctx->pc = 0x19D148u;
label_19d148:
    // 0x19d148: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19D148u;
    {
        const bool branch_taken_0x19d148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d148) {
            ctx->pc = 0x19D178u;
            goto label_19d178;
        }
    }
    ctx->pc = 0x19D150u;
label_19d150:
    // 0x19d150: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x19d150u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19d154: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19d158: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x19d158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x19d15c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19d15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19d160: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19d160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19d164: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19D164u;
    {
        const bool branch_taken_0x19d164 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x19d164) {
            ctx->pc = 0x19D190u;
            goto label_19d190;
        }
    }
    ctx->pc = 0x19D16Cu;
    // 0x19d16c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d170: 0xc084a54  jal         func_212950
    ctx->pc = 0x19D170u;
    SET_GPR_U32(ctx, 31, 0x19D178u);
    ctx->pc = 0x212950u;
    {
        ctx->pc = 0x19D178u;
        ps2_syscalls::WakeupThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D178u) { return; }
    ctx->pc = 0x19D178u;
label_19d178:
    // 0x19d178: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x19d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x19d17c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x19d17cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x19d180: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d184: 0x8c24fbb8  lw          $a0, -0x448($at)
    ctx->pc = 0x19d184u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFBB8u));
    // 0x19d188: 0xc084a98  jal         func_212A60
    ctx->pc = 0x19D188u;
    SET_GPR_U32(ctx, 31, 0x19D190u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x19D190u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D190u) { return; }
    ctx->pc = 0x19D190u;
label_19d190:
    // 0x19d190: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x19d190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19d194: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19d194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19d198: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x19d198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x19d19c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D19Cu;
    {
        const bool branch_taken_0x19d19c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d19c) {
            ctx->pc = 0x19D1B0u;
            goto label_19d1b0;
        }
    }
    ctx->pc = 0x19D1A4u;
    // 0x19d1a4: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x19d1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x19d1a8: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x19D1A8u;
    SET_GPR_U32(ctx, 31, 0x19D1B0u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x19D1A8u, 0x19D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D1B0u;
label_19d1b0:
    // 0x19d1b0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x19d1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x19d1b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19d1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19d1b8: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x19d1b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x19d1bc: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x19D1BCu;
    {
        const bool branch_taken_0x19d1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d1bc) {
            ctx->pc = 0x19D0ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d0ec;
        }
    }
    ctx->pc = 0x19D1C4u;
    // 0x19d1c4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x19d1c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d1c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d1cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d1d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19d1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19d1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x19D1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D1DCu;
}
