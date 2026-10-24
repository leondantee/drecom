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

// Function: sitofp
// Address: 0x11fd40 - 0x11fdf8
void sitofp_0x11fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sitofp_0x11fd40");
#endif

    switch (ctx->pc) {
        case 0x11fdc0u: goto label_11fdc0;
        case 0x11fdecu: goto label_11fdec;
        default: break;
    }

    ctx->pc = 0x11fd40u;

    // 0x11fd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11fd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11fd44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11fd48: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x11fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x11fd4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11fd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11fd50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11fd54: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FD54u;
    {
        const bool branch_taken_0x11fd54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD54u;
        // 0x11fd58: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd54) {
            ctx->pc = 0x11FD68u;
            goto label_11fd68;
        }
    }
    ctx->pc = 0x11FD5Cu;
    // 0x11fd5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11fd60: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11FD60u;
    {
        const bool branch_taken_0x11fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD60u;
        // 0x11fd64: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd60) {
            ctx->pc = 0x11FDE4u;
            goto label_11fde4;
        }
    }
    ctx->pc = 0x11FD68u;
label_11fd68:
    // 0x11fd68: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x11fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11fd6c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11FD6Cu;
    {
        const bool branch_taken_0x11fd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD6Cu;
        // 0x11fd70: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd6c) {
            ctx->pc = 0x11FD98u;
            goto label_11fd98;
        }
    }
    ctx->pc = 0x11FD74u;
    // 0x11fd74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11fd78: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FD78u;
    {
        const bool branch_taken_0x11fd78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD78u;
        // 0x11fd7c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd78) {
            ctx->pc = 0x11FD90u;
            goto label_11fd90;
        }
    }
    ctx->pc = 0x11FD80u;
    // 0x11fd80: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x11fd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x11fd84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fd88: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11FD88u;
    {
        const bool branch_taken_0x11fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD88u;
        // 0x11fd8c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd88) {
            ctx->pc = 0x11FDF0u;
            goto label_11fdf0;
        }
    }
    ctx->pc = 0x11FD90u;
label_11fd90:
    // 0x11fd90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11FD90u;
    {
        const bool branch_taken_0x11fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD90u;
        // 0x11fd94: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd90) {
            ctx->pc = 0x11FD9Cu;
            goto label_11fd9c;
        }
    }
    ctx->pc = 0x11FD98u;
label_11fd98:
    // 0x11fd98: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x11fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_11fd9c:
    // 0x11fd9c: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x11fd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11fda0: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x11fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x11fda4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11fda8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x11fda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11fdac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11FDACu;
    {
        const bool branch_taken_0x11fdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDACu;
        // 0x11fdb0: 0x3c053fff  lui         $a1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fdac) {
            ctx->pc = 0x11FDE4u;
            goto label_11fde4;
        }
    }
    ctx->pc = 0x11FDB4u;
    // 0x11fdb4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x11fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11fdb8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x11fdb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x11fdbc: 0x0  nop
    ctx->pc = 0x11fdbcu;
    // NOP
label_11fdc0:
    // 0x11fdc0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x11fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11fdc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x11fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11fdc8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11fdc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdcc: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x11fdccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11fdd0: 0x0  nop
    ctx->pc = 0x11fdd0u;
    // NOP
    // 0x11fdd4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11FDD4u;
    {
        const bool branch_taken_0x11fdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fdd4) {
            ctx->pc = 0x11FDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fdc0;
        }
    }
    ctx->pc = 0x11FDDCu;
    // 0x11fddc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x11fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x11fde0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x11fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_11fde4:
    // 0x11fde4: 0xc047cfa  jal         func_11F3E8
    ctx->pc = 0x11FDE4u;
    SET_GPR_U32(ctx, 31, 0x11FDECu);
    ctx->pc = 0x11FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FDE4u;
    // 0x11fde8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3E8u, 0x11FDE4u, 0x11FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDECu;
label_11fdec:
    // 0x11fdec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11fdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11fdf0:
    // 0x11fdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FDF0u;
        // 0x11fdf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FDF8u;
}
