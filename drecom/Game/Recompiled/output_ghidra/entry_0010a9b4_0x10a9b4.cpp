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

// Function: entry_0010a9b4
// Address: 0x10a9b4 - 0x10aa04
void entry_0010a9b4_0x10a9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a9b4_0x10a9b4");
#endif

    switch (ctx->pc) {
        case 0x10a9dcu: goto label_10a9dc;
        case 0x10aa00u: goto label_10aa00;
        default: break;
    }

    ctx->pc = 0x10a9b4u;

    // 0x10a9b4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10a9b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a9bc: 0x8c653dac  lw          $a1, 0x3DAC($v1)
    ctx->pc = 0x10a9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383DACu));
    // 0x10a9c0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x10a9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x10a9c4: 0x224100b  movn        $v0, $s1, $a0
    ctx->pc = 0x10a9c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x10a9c8: 0x14a2001f  bne         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x10A9C8u;
    {
        const bool branch_taken_0x10a9c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9C8u;
        // 0x10a9cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9c8) {
            ctx->pc = 0x10AA48u;
            return;
        }
    }
    ctx->pc = 0x10A9D0u;
    // 0x10a9d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a9d4: 0xc041fde  jal         func_107F78
    ctx->pc = 0x10A9D4u;
    SET_GPR_U32(ctx, 31, 0x10A9DCu);
    ctx->pc = 0x10A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9D4u;
    // 0x10a9d8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107F78u, 0x10A9D4u, 0x10A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9DCu;
label_10a9dc:
    // 0x10a9dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10a9dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9e0: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x10a9e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x10a9e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A9E4u;
    {
        const bool branch_taken_0x10a9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9E4u;
        // 0x10a9e8: 0x3c140038  lui         $s4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9e4) {
            ctx->pc = 0x10AA04u;
            return;
        }
    }
    ctx->pc = 0x10A9ECu;
    // 0x10a9ec: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A9ECu;
    {
        const bool branch_taken_0x10a9ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9ECu;
        // 0x10a9f0: 0x8e843d04  lw          $a0, 0x3D04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9ec) {
            ctx->pc = 0x10AA08u;
            return;
        }
    }
    ctx->pc = 0x10A9F4u;
    // 0x10a9f4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a9f8: 0xc041f78  jal         func_107DE0
    ctx->pc = 0x10A9F8u;
    SET_GPR_U32(ctx, 31, 0x10AA00u);
    ctx->pc = 0x10A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9F8u;
    // 0x10a9fc: 0x8e843d04  lw          $a0, 0x3D04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107DE0u, 0x10A9F8u, 0x10AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA00u;
label_10aa00:
    // 0x10aa00: 0x222b00b  movn        $s6, $s1, $v0
    ctx->pc = 0x10aa00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 17));
    ctx->pc = 0x10aa04u;
}
