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

// Function: tanf
// Address: 0x115400 - 0x115488
void tanf_0x115400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tanf_0x115400");
#endif

    switch (ctx->pc) {
        case 0x11545cu: goto label_11545c;
        case 0x11547cu: goto label_11547c;
        default: break;
    }

    ctx->pc = 0x115400u;

    // 0x115400: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x115400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x115404: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11540c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11540cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x115410: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x115410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x115414: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x115414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x115418: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x115418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x11541c: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x11541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
    // 0x115420: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x115420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x115424: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115424u;
    {
        const bool branch_taken_0x115424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115424u;
        // 0x115428: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115424) {
            ctx->pc = 0x115438u;
            goto label_115438;
        }
    }
    ctx->pc = 0x11542Cu;
    // 0x11542c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11542cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x115430: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115430u;
    {
        const bool branch_taken_0x115430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115430u;
        // 0x115434: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115430) {
            ctx->pc = 0x115474u;
            goto label_115474;
        }
    }
    ctx->pc = 0x115438u;
label_115438:
    // 0x115438: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x115438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x11543c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x115440: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x115440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x115444: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115444u;
    {
        const bool branch_taken_0x115444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115444) {
            ctx->pc = 0x115454u;
            goto label_115454;
        }
    }
    ctx->pc = 0x11544Cu;
    // 0x11544c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11544Cu;
    {
        const bool branch_taken_0x11544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11544Cu;
        // 0x115450: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11544c) {
            ctx->pc = 0x11547Cu;
            goto label_11547c;
        }
    }
    ctx->pc = 0x115454u;
label_115454:
    // 0x115454: 0xc0448c6  jal         func_112318
    ctx->pc = 0x115454u;
    SET_GPR_U32(ctx, 31, 0x11545Cu);
    ctx->pc = 0x115458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115454u;
    // 0x115458: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112318u;
    {
        ctx->pc = 0x11545Cu;
        ps2_stubs::__ieee754_rem_pio2f(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11545Cu) { return; }
    ctx->pc = 0x11545Cu;
label_11545c:
    // 0x11545c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x115460: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x115460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115464: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x115464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x115468: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x115468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11546c: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x11546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x115470: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x115470u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_115474:
    // 0x115474: 0xc0450dc  jal         func_114370
    ctx->pc = 0x115474u;
    SET_GPR_U32(ctx, 31, 0x11547Cu);
    ctx->pc = 0x114370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114370u, 0x115474u, 0x11547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11547Cu;
label_11547c:
    // 0x11547c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11547cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115480: 0x3e00008  jr          $ra
    ctx->pc = 0x115480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115480u;
        // 0x115484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115488u;
}
