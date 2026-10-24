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

// Function: _fwalk
// Address: 0x117bd8 - 0x117c6c
void _fwalk_0x117bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fwalk_0x117bd8");
#endif

    switch (ctx->pc) {
        case 0x117bd8u: goto label_117bd8;
        case 0x117bdcu: goto label_117bdc;
        case 0x117be0u: goto label_117be0;
        case 0x117be4u: goto label_117be4;
        case 0x117be8u: goto label_117be8;
        case 0x117becu: goto label_117bec;
        case 0x117bf0u: goto label_117bf0;
        case 0x117bf4u: goto label_117bf4;
        case 0x117bf8u: goto label_117bf8;
        case 0x117bfcu: goto label_117bfc;
        case 0x117c00u: goto label_117c00;
        case 0x117c04u: goto label_117c04;
        case 0x117c08u: goto label_117c08;
        case 0x117c0cu: goto label_117c0c;
        case 0x117c10u: goto label_117c10;
        case 0x117c14u: goto label_117c14;
        case 0x117c18u: goto label_117c18;
        case 0x117c1cu: goto label_117c1c;
        case 0x117c20u: goto label_117c20;
        case 0x117c24u: goto label_117c24;
        case 0x117c28u: goto label_117c28;
        case 0x117c2cu: goto label_117c2c;
        case 0x117c30u: goto label_117c30;
        case 0x117c34u: goto label_117c34;
        case 0x117c38u: goto label_117c38;
        case 0x117c3cu: goto label_117c3c;
        case 0x117c40u: goto label_117c40;
        case 0x117c44u: goto label_117c44;
        case 0x117c48u: goto label_117c48;
        case 0x117c4cu: goto label_117c4c;
        case 0x117c50u: goto label_117c50;
        case 0x117c54u: goto label_117c54;
        case 0x117c58u: goto label_117c58;
        case 0x117c5cu: goto label_117c5c;
        case 0x117c60u: goto label_117c60;
        case 0x117c64u: goto label_117c64;
        case 0x117c68u: goto label_117c68;
        default: break;
    }

    ctx->pc = 0x117bd8u;

label_117bd8:
    // 0x117bd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x117bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_117bdc:
    // 0x117bdc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x117bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_117be0:
    // 0x117be0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x117be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_117be4:
    // 0x117be4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x117be4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_117be8:
    // 0x117be8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_117bec:
    // 0x117bec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x117becu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117bf0:
    // 0x117bf0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x117bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_117bf4:
    // 0x117bf4: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x117bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_117bf8:
    // 0x117bf8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_117bfc:
    // 0x117bfc: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_117c00:
    if (ctx->pc == 0x117C00u) {
        ctx->pc = 0x117C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BFCu;
        // 0x117c00: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C04u;
        goto label_117c04;
    }
    ctx->pc = 0x117BFCu;
    {
        const bool branch_taken_0x117bfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BFCu;
        // 0x117c00: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bfc) {
            ctx->pc = 0x117C48u;
            goto label_117c48;
        }
    }
    ctx->pc = 0x117C04u;
label_117c04:
    // 0x117c04: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x117c04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_117c08:
    // 0x117c08: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x117c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_117c0c:
    // 0x117c0c: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_117c10:
    if (ctx->pc == 0x117C10u) {
        ctx->pc = 0x117C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C0Cu;
        // 0x117c10: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C14u;
        goto label_117c14;
    }
    ctx->pc = 0x117C0Cu;
    {
        const bool branch_taken_0x117c0c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x117C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C0Cu;
        // 0x117c10: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c0c) {
            ctx->pc = 0x117C3Cu;
            goto label_117c3c;
        }
    }
    ctx->pc = 0x117C14u;
label_117c14:
    // 0x117c14: 0x0  nop
    ctx->pc = 0x117c14u;
    // NOP
label_117c18:
    // 0x117c18: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x117c18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_117c1c:
    // 0x117c1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_117c20:
    if (ctx->pc == 0x117C20u) {
        ctx->pc = 0x117C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C1Cu;
        // 0x117c20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C24u;
        goto label_117c24;
    }
    ctx->pc = 0x117C1Cu;
    {
        const bool branch_taken_0x117c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117c1c) {
            ctx->pc = 0x117C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117C1Cu;
            // 0x117c20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117C34u;
            goto label_117c34;
        }
    }
    ctx->pc = 0x117C24u;
label_117c24:
    // 0x117c24: 0x280f809  jalr        $s4
label_117c28:
    if (ctx->pc == 0x117C28u) {
        ctx->pc = 0x117C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C24u;
        // 0x117c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C2Cu;
        goto label_117c2c;
    }
    ctx->pc = 0x117C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x117C2Cu);
        ctx->pc = 0x117C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C24u;
        // 0x117c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C24u, 0x117C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117C2Cu;
label_117c2c:
    // 0x117c2c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x117c2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_117c30:
    // 0x117c30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x117c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_117c34:
    // 0x117c34: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_117c38:
    if (ctx->pc == 0x117C38u) {
        ctx->pc = 0x117C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C34u;
        // 0x117c38: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C3Cu;
        goto label_117c3c;
    }
    ctx->pc = 0x117C34u;
    {
        const bool branch_taken_0x117c34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x117C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C34u;
        // 0x117c38: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c34) {
            ctx->pc = 0x117C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117c18;
        }
    }
    ctx->pc = 0x117C3Cu;
label_117c3c:
    // 0x117c3c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x117c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_117c40:
    // 0x117c40: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_117c44:
    if (ctx->pc == 0x117C44u) {
        ctx->pc = 0x117C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C40u;
        // 0x117c44: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C48u;
        goto label_117c48;
    }
    ctx->pc = 0x117C40u;
    {
        const bool branch_taken_0x117c40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x117c40) {
            ctx->pc = 0x117C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117C40u;
            // 0x117c44: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117c08;
        }
    }
    ctx->pc = 0x117C48u;
label_117c48:
    // 0x117c48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x117c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_117c4c:
    // 0x117c4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x117c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_117c50:
    // 0x117c50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x117c50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_117c54:
    // 0x117c54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x117c54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_117c58:
    // 0x117c58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_117c5c:
    // 0x117c5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_117c60:
    // 0x117c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117c64:
    // 0x117c64: 0x3e00008  jr          $ra
label_117c68:
    if (ctx->pc == 0x117C68u) {
        ctx->pc = 0x117C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C64u;
        // 0x117c68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C6Cu;
        goto label_fallthrough_0x117c64;
    }
    ctx->pc = 0x117C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C64u;
        // 0x117c68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x117c64:
    ctx->pc = 0x117C6Cu;
}
