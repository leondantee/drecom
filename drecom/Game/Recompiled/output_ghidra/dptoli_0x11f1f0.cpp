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

// Function: dptoli
// Address: 0x11f1f0 - 0x11f284
void dptoli_0x11f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoli_0x11f1f0");
#endif

    switch (ctx->pc) {
        case 0x11f208u: goto label_11f208;
        case 0x11f220u: goto label_11f220;
        default: break;
    }

    ctx->pc = 0x11f1f0u;

    // 0x11f1f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f1f4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x11f1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x11f1f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11f1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11f1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11f200: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11F200u;
    SET_GPR_U32(ctx, 31, 0x11F208u);
    ctx->pc = 0x11F204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F200u;
    // 0x11f204: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11F200u, 0x11F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F208u;
label_11f208:
    // 0x11f208: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f20c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x11f20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x11f210: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F210u;
    {
        const bool branch_taken_0x11f210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F210u;
        // 0x11f214: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f210) {
            ctx->pc = 0x11F220u;
            goto label_11f220;
        }
    }
    ctx->pc = 0x11F218u;
    // 0x11f218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F218u;
    {
        const bool branch_taken_0x11f218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F218u;
        // 0x11f21c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f218) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F220u;
label_11f220:
    // 0x11f220: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11F220u;
    {
        const bool branch_taken_0x11f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F220u;
        // 0x11f224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f220) {
            ctx->pc = 0x11F278u;
            goto label_11f278;
        }
    }
    ctx->pc = 0x11F228u;
label_11f228:
    // 0x11f228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F228u;
    {
        const bool branch_taken_0x11f228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F228u;
        // 0x11f22c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f228) {
            ctx->pc = 0x11F240u;
            goto label_11f240;
        }
    }
    ctx->pc = 0x11F230u;
    // 0x11f230: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11F230u;
    {
        const bool branch_taken_0x11f230 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F230u;
        // 0x11f234: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f230) {
            ctx->pc = 0x11F220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f220;
        }
    }
    ctx->pc = 0x11F238u;
    // 0x11f238: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F238u;
    {
        const bool branch_taken_0x11f238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F238u;
        // 0x11f23c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f238) {
            ctx->pc = 0x11F258u;
            goto label_11f258;
        }
    }
    ctx->pc = 0x11F240u;
label_11f240:
    // 0x11f240: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11f240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11f244: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11f244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11f248: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11f248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11f24c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11f250: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11F250u;
    {
        const bool branch_taken_0x11f250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F250u;
        // 0x11f254: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f250) {
            ctx->pc = 0x11F278u;
            goto label_11f278;
        }
    }
    ctx->pc = 0x11F258u;
label_11f258:
    // 0x11f258: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x11f258u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f25c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x11f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11f260: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x11f260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x11f264: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x11f264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11f268: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11f268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11f26c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11f26cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11f270: 0x21823  negu        $v1, $v0
    ctx->pc = 0x11f270u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11f274: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x11f274u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_11f278:
    // 0x11f278: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f27c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F27Cu;
        // 0x11f280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F284u;
}
