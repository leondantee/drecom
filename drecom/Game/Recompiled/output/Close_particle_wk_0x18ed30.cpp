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

// Function: Close_particle_wk
// Address: 0x18ed30 - 0x18ee64
void Close_particle_wk_0x18ed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Close_particle_wk_0x18ed30");
#endif

    ctx->pc = 0x18ed30u;

    // 0x18ed30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ed34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ed34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ed38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x18ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x18ed3c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18ed40: 0x2450a630  addiu       $s0, $v0, -0x59D0
    ctx->pc = 0x18ed40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18ed44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed48: 0x944201a8  lhu         $v0, 0x1A8($v0)
    ctx->pc = 0x18ed48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x18ed4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18ed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18ed50: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18ed54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18ED54u;
    {
        const bool branch_taken_0x18ed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed54) {
            ctx->pc = 0x18ED70u;
            goto label_18ed70;
        }
    }
    ctx->pc = 0x18ED5Cu;
    // 0x18ed5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed60: 0x8c43019c  lw          $v1, 0x19C($v0)
    ctx->pc = 0x18ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x18ed64: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x18ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x18ed68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18ed6c: 0xac6200cc  sw          $v0, 0xCC($v1)
    ctx->pc = 0x18ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 2));
label_18ed70:
    // 0x18ed70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18ed78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed7c: 0x8c4202a8  lw          $v0, 0x2A8($v0)
    ctx->pc = 0x18ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x18ed80: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18ED80u;
    {
        const bool branch_taken_0x18ed80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ed80) {
            ctx->pc = 0x18EDBCu;
            goto label_18edbc;
        }
    }
    ctx->pc = 0x18ED88u;
    // 0x18ed88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed8c: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x18ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x18ed90: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x18ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x18ed94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18ED94u;
    {
        const bool branch_taken_0x18ed94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ed94) {
            ctx->pc = 0x18EDA8u;
            goto label_18eda8;
        }
    }
    ctx->pc = 0x18ED9Cu;
    // 0x18ed9c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x18ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x18eda0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18EDA0u;
    {
        const bool branch_taken_0x18eda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eda0) {
            ctx->pc = 0x18EE00u;
            goto label_18ee00;
        }
    }
    ctx->pc = 0x18EDA8u;
label_18eda8:
    // 0x18eda8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18edac: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x18edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x18edb0: 0xac4002a8  sw          $zero, 0x2A8($v0)
    ctx->pc = 0x18edb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 680), GPR_U32(ctx, 0));
    // 0x18edb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18EDB4u;
    {
        const bool branch_taken_0x18edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18edb4) {
            ctx->pc = 0x18EE00u;
            goto label_18ee00;
        }
    }
    ctx->pc = 0x18EDBCu;
label_18edbc:
    // 0x18edbc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18edc0: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x18edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x18edc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18edc8: 0x8c4202a8  lw          $v0, 0x2A8($v0)
    ctx->pc = 0x18edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x18edcc: 0xac4302ac  sw          $v1, 0x2AC($v0)
    ctx->pc = 0x18edccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 684), GPR_U32(ctx, 3));
    // 0x18edd0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18EDD0u;
    {
        const bool branch_taken_0x18edd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18edd0) {
            ctx->pc = 0x18EDECu;
            goto label_18edec;
        }
    }
    ctx->pc = 0x18EDD8u;
    // 0x18edd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eddc: 0x8c4202a8  lw          $v0, 0x2A8($v0)
    ctx->pc = 0x18eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x18ede0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x18ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x18ede4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18EDE4u;
    {
        const bool branch_taken_0x18ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ede4) {
            ctx->pc = 0x18EE00u;
            goto label_18ee00;
        }
    }
    ctx->pc = 0x18EDECu;
label_18edec:
    // 0x18edec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18edf0: 0x8c4302a8  lw          $v1, 0x2A8($v0)
    ctx->pc = 0x18edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x18edf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18edf8: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x18edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x18edfc: 0xac4302a8  sw          $v1, 0x2A8($v0)
    ctx->pc = 0x18edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 680), GPR_U32(ctx, 3));
label_18ee00:
    // 0x18ee00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee04: 0xac4002b4  sw          $zero, 0x2B4($v0)
    ctx->pc = 0x18ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 0));
    // 0x18ee08: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x18ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x18ee0c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EE0Cu;
    {
        const bool branch_taken_0x18ee0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee0c) {
            ctx->pc = 0x18EE2Cu;
            goto label_18ee2c;
        }
    }
    ctx->pc = 0x18EE14u;
    // 0x18ee14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee18: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x18ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x18ee1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee20: 0xac4002b0  sw          $zero, 0x2B0($v0)
    ctx->pc = 0x18ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
    // 0x18ee24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18EE24u;
    {
        const bool branch_taken_0x18ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee24) {
            ctx->pc = 0x18EE44u;
            goto label_18ee44;
        }
    }
    ctx->pc = 0x18EE2Cu;
label_18ee2c:
    // 0x18ee2c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x18ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x18ee30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee34: 0xac4302b0  sw          $v1, 0x2B0($v0)
    ctx->pc = 0x18ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
    // 0x18ee38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee3c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x18ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x18ee40: 0xac4302b4  sw          $v1, 0x2B4($v0)
    ctx->pc = 0x18ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 692), GPR_U32(ctx, 3));
label_18ee44:
    // 0x18ee44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee48: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x18ee48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x18ee4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee50: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x18ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x18ee54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ee54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ee58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18ee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x18EE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EE64u;
}
