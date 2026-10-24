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

// Function: _type2id
// Address: 0x109148 - 0x1091d0
void _type2id_0x109148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_type2id_0x109148");
#endif

    ctx->pc = 0x109148u;

    // 0x109148: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x109148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10914c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10914cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x109150: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x109150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109154: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x109154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x109158: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x109158u;
    {
        const bool branch_taken_0x109158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109158u;
        // 0x10915c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109158) {
            ctx->pc = 0x1091C4u;
            goto label_1091c4;
        }
    }
    ctx->pc = 0x109160u;
    // 0x109160: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x109160u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x109164: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x109164u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x109168: 0x25023b38  addiu       $v0, $t0, 0x3B38
    ctx->pc = 0x109168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15160));
    // 0x10916c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x10916cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x109170: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x109170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x109174: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x109174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x109178: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x109178u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10917c: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10917Cu;
    {
        const bool branch_taken_0x10917c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x109180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10917Cu;
        // 0x109180: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10917c) {
            ctx->pc = 0x1091A4u;
            goto label_1091a4;
        }
    }
    ctx->pc = 0x109184u;
    // 0x109184: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x109184u;
    {
        const bool branch_taken_0x109184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109184) {
            ctx->pc = 0x109188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109184u;
            // 0x109188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1091B0u;
            goto label_1091b0;
        }
    }
    ctx->pc = 0x10918Cu;
    // 0x10918c: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x10918cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x109190: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109194: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109194u;
    {
        const bool branch_taken_0x109194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109194u;
        // 0x109198: 0x25023b38  addiu       $v0, $t0, 0x3B38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109194) {
            ctx->pc = 0x1091ACu;
            goto label_1091ac;
        }
    }
    ctx->pc = 0x10919Cu;
    // 0x10919c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10919Cu;
    {
        const bool branch_taken_0x10919c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10919Cu;
        // 0x1091a0: 0xa72014  dsllv       $a0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10919c) {
            ctx->pc = 0x1091B8u;
            goto label_1091b8;
        }
    }
    ctx->pc = 0x1091A4u;
label_1091a4:
    // 0x1091a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1091A4u;
    {
        const bool branch_taken_0x1091a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091A4u;
        // 0x1091a8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091a4) {
            ctx->pc = 0x1091B0u;
            goto label_1091b0;
        }
    }
    ctx->pc = 0x1091ACu;
label_1091ac:
    // 0x1091ac: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1091acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1091b0:
    // 0x1091b0: 0x25023b38  addiu       $v0, $t0, 0x3B38
    ctx->pc = 0x1091b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15160));
    // 0x1091b4: 0xa72014  dsllv       $a0, $a3, $a1
    ctx->pc = 0x1091b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
label_1091b8:
    // 0x1091b8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1091b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1091bc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1091bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1091c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1091c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1091c4:
    // 0x1091c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1091c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1091C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1091CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091C8u;
        // 0x1091cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1091C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1091D0u;
}
