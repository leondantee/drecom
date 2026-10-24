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

// Function: cd_callback
// Address: 0x10d128 - 0x10d1d8
void cd_callback_0x10d128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cd_callback_0x10d128");
#endif

    switch (ctx->pc) {
        case 0x10d18cu: goto label_10d18c;
        case 0x10d1b4u: goto label_10d1b4;
        default: break;
    }

    ctx->pc = 0x10d128u;

    // 0x10d128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d12c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x10d130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d138: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10d138u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10d13c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10d140: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10d140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10d144: 0xae0345f8  sw          $v1, 0x45F8($s0)
    ctx->pc = 0x10d144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3845F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845F8u, _value); } while (0);
    // 0x10d148: 0x8e0245f8  lw          $v0, 0x45F8($s0)
    ctx->pc = 0x10d148u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3845F8u));
    // 0x10d14c: 0xac8245fc  sw          $v0, 0x45FC($a0)
    ctx->pc = 0x10d14cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3845FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845FCu, _value); } while (0);
    // 0x10d150: 0x8ca345c8  lw          $v1, 0x45C8($a1)
    ctx->pc = 0x10d150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3845C8u));
    // 0x10d154: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10D154u;
    {
        const bool branch_taken_0x10d154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D154u;
        // 0x10d158: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d154) {
            ctx->pc = 0x10D180u;
            goto label_10d180;
        }
    }
    ctx->pc = 0x10D15Cu;
    // 0x10d15c: 0x8e0345f8  lw          $v1, 0x45F8($s0)
    ctx->pc = 0x10d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17912)));
    // 0x10d160: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x10d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x10d164: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D164u;
    {
        const bool branch_taken_0x10d164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D164u;
        // 0x10d168: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d164) {
            ctx->pc = 0x10D180u;
            goto label_10d180;
        }
    }
    ctx->pc = 0x10D16Cu;
    // 0x10d16c: 0xae0045f8  sw          $zero, 0x45F8($s0)
    ctx->pc = 0x10d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17912), GPR_U32(ctx, 0));
    // 0x10d170: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10d170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10d174: 0xac4045c4  sw          $zero, 0x45C4($v0)
    ctx->pc = 0x10d174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3845C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845C4u, _value); } while (0);
    // 0x10d178: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10D178u;
    {
        const bool branch_taken_0x10d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D178u;
        // 0x10d17c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d178) {
            ctx->pc = 0x10D1CCu;
            goto label_10d1cc;
        }
    }
    ctx->pc = 0x10D180u;
label_10d180:
    // 0x10d180: 0x8c4445b8  lw          $a0, 0x45B8($v0)
    ctx->pc = 0x10d180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    // 0x10d184: 0xc084a94  jal         func_212A50
    ctx->pc = 0x10D184u;
    SET_GPR_U32(ctx, 31, 0x10D18Cu);
    ctx->pc = 0x212A50u;
    {
        ctx->pc = 0x10D18Cu;
        ps2_syscalls::iSignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D18Cu) { return; }
    ctx->pc = 0x10D18Cu;
label_10d18c:
    // 0x10d18c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10d190: 0x8c6245b4  lw          $v0, 0x45B4($v1)
    ctx->pc = 0x10d190u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3845B4u));
    // 0x10d194: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D194u;
    {
        const bool branch_taken_0x10d194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D194u;
        // 0x10d198: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d194) {
            ctx->pc = 0x10D1BCu;
            goto label_10d1bc;
        }
    }
    ctx->pc = 0x10D19Cu;
    // 0x10d19c: 0x8c4345f4  lw          $v1, 0x45F4($v0)
    ctx->pc = 0x10d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17908)));
    // 0x10d1a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D1A0u;
    {
        const bool branch_taken_0x10d1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1A0u;
        // 0x10d1a4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d1a0) {
            ctx->pc = 0x10D1BCu;
            goto label_10d1bc;
        }
    }
    ctx->pc = 0x10D1A8u;
    // 0x10d1a8: 0x8c4445c0  lw          $a0, 0x45C0($v0)
    ctx->pc = 0x10d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17856)));
    // 0x10d1ac: 0xc084a94  jal         func_212A50
    ctx->pc = 0x10D1ACu;
    SET_GPR_U32(ctx, 31, 0x10D1B4u);
    ctx->pc = 0x212A50u;
    {
        ctx->pc = 0x10D1B4u;
        ps2_syscalls::iSignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D1B4u) { return; }
    ctx->pc = 0x10D1B4u;
label_10d1b4:
    // 0x10d1b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10D1B4u;
    {
        const bool branch_taken_0x10d1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d1b4) {
            ctx->pc = 0x10D1C4u;
            goto label_10d1c4;
        }
    }
    ctx->pc = 0x10D1BCu;
label_10d1bc:
    // 0x10d1bc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10d1c0: 0xac4045c4  sw          $zero, 0x45C4($v0)
    ctx->pc = 0x10d1c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3845C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845C4u, _value); } while (0);
label_10d1c4:
    // 0x10d1c4: 0xae0045f8  sw          $zero, 0x45F8($s0)
    ctx->pc = 0x10d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17912), GPR_U32(ctx, 0));
    // 0x10d1c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10d1cc:
    // 0x10d1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1D0u;
        // 0x10d1d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D1D8u;
}
