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

// Function: _fs_version
// Address: 0x216478 - 0x2164dc
void _fs_version_0x216478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fs_version_0x216478");
#endif

    switch (ctx->pc) {
        case 0x2164a8u: goto label_2164a8;
        case 0x2164c0u: goto label_2164c0;
        default: break;
    }

    ctx->pc = 0x216478u;

    // 0x216478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21647c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x21647cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x216480: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x216480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x216484: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x216484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x216488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21648c: 0x2451ca78  addiu       $s1, $v0, -0x3588
    ctx->pc = 0x21648cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953592));
    // 0x216490: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x216490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x216494: 0x24a5aabc  addiu       $a1, $a1, -0x5544
    ctx->pc = 0x216494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945468));
    // 0x216498: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x216498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21649c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21649cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164a0: 0xc046280  jal         func_118A00
    ctx->pc = 0x2164A0u;
    SET_GPR_U32(ctx, 31, 0x2164A8u);
    ctx->pc = 0x2164A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164A0u;
    // 0x2164a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A00u;
    {
        ctx->pc = 0x2164A8u;
        ps2_stubs::memcmp(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2164A8u) { return; }
    ctx->pc = 0x2164A8u;
label_2164a8:
    // 0x2164a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2164A8u;
    {
        const bool branch_taken_0x2164a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2164ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164A8u;
        // 0x2164ac: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164a8) {
            ctx->pc = 0x2164C4u;
            goto label_2164c4;
        }
    }
    ctx->pc = 0x2164B0u;
    // 0x2164b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2164b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164b4: 0x8c45aaf0  lw          $a1, -0x5510($v0)
    ctx->pc = 0x2164b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945520)));
    // 0x2164b8: 0xc046280  jal         func_118A00
    ctx->pc = 0x2164B8u;
    SET_GPR_U32(ctx, 31, 0x2164C0u);
    ctx->pc = 0x2164BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164B8u;
    // 0x2164bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A00u;
    {
        ctx->pc = 0x2164C0u;
        ps2_stubs::memcmp(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2164C0u) { return; }
    ctx->pc = 0x2164C0u;
label_2164c0:
    // 0x2164c0: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2164c0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2164c4:
    // 0x2164c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2164c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2164c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2164cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2164ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2164d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2164d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2164d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2164D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2164D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164D4u;
        // 0x2164d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2164D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2164DCu;
}
