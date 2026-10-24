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

// Function: deci2Putchar
// Address: 0x2141e0 - 0x214290
void deci2Putchar_0x2141e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("deci2Putchar_0x2141e0");
#endif

    switch (ctx->pc) {
        case 0x214220u: goto label_214220;
        default: break;
    }

    ctx->pc = 0x2141e0u;

    // 0x2141e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2141e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2141e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2141e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2141e8: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x2141e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x2141ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2141ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2141f0: 0x8e25aad0  lw          $a1, -0x5530($s1)
    ctx->pc = 0x2141f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x38AAD0u));
    // 0x2141f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2141f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2141f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2141fc: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x2141fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x214200: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214200u;
    {
        const bool branch_taken_0x214200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214200u;
        // 0x214204: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214200) {
            ctx->pc = 0x214228u;
            goto label_214228;
        }
    }
    ctx->pc = 0x214208u;
    // 0x214208: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x214208u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x21420c: 0xae20aad0  sw          $zero, -0x5530($s1)
    ctx->pc = 0x21420cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945488), GPR_U32(ctx, 0));
    // 0x214210: 0x2642a100  addiu       $v0, $s2, -0x5F00
    ctx->pc = 0x214210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942976));
    // 0x214214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214218: 0xc084f18  jal         func_213C60
    ctx->pc = 0x214218u;
    SET_GPR_U32(ctx, 31, 0x214220u);
    ctx->pc = 0x21421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214218u;
    // 0x21421c: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C60u, 0x214218u, 0x214220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214220u;
label_214220:
    // 0x214220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x214220u;
    {
        const bool branch_taken_0x214220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214220u;
        // 0x214224: 0x8e25aad0  lw          $a1, -0x5530($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214220) {
            ctx->pc = 0x21422Cu;
            goto label_21422c;
        }
    }
    ctx->pc = 0x214228u;
label_214228:
    // 0x214228: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x214228u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_21422c:
    // 0x21422c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x21422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x214230: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x214230u;
    {
        const bool branch_taken_0x214230 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x214234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214230u;
        // 0x214234: 0x2642a100  addiu       $v0, $s2, -0x5F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214230) {
            ctx->pc = 0x214268u;
            goto label_214268;
        }
    }
    ctx->pc = 0x214238u;
    // 0x214238: 0x2644a100  addiu       $a0, $s2, -0x5F00
    ctx->pc = 0x214238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942976));
    // 0x21423c: 0xae20aad0  sw          $zero, -0x5530($s1)
    ctx->pc = 0x21423cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945488), GPR_U32(ctx, 0));
    // 0x214240: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x214240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x214244: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x214244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214248: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x214248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x21424c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21424cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214250: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x214250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214254: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21425c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x21425cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x214260: 0x8084f18  j           func_213C60
    ctx->pc = 0x214260u;
    ctx->pc = 0x214264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214260u;
    // 0x214264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213C60u;
    kputs_0x213c60(rdram, ctx, runtime); return;
    ctx->pc = 0x214268u;
label_214268:
    // 0x214268: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x214268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21426c: 0xae23aad0  sw          $v1, -0x5530($s1)
    ctx->pc = 0x21426cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945488), GPR_U32(ctx, 3));
    // 0x214270: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x214270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x214274: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x214274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x214278: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x214278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21427c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21427cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214280: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214288: 0x3e00008  jr          $ra
    ctx->pc = 0x214288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214288u;
        // 0x21428c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214290u;
}
