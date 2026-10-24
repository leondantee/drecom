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

// Function: SdrXagInit
// Address: 0x339e70 - 0x339fcc
void SdrXagInit_0x339e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SdrXagInit_0x339e70");
#endif

    switch (ctx->pc) {
        case 0x339eb8u: goto label_339eb8;
        case 0x339ef4u: goto label_339ef4;
        default: break;
    }

    ctx->pc = 0x339e70u;

    // 0x339e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x339e74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x339e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x339e78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x339e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x339e7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x339e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x339e80: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x339e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x339e84: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339e88: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339e88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339e8c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339e90: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339e94: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339e98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339e9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339ea0: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339EA0u;
    {
        const bool branch_taken_0x339ea0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339ea0) {
            ctx->pc = 0x339EC4u;
            goto label_339ec4;
        }
    }
    ctx->pc = 0x339EA8u;
    // 0x339ea8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339eac: 0x24442700  addiu       $a0, $v0, 0x2700
    ctx->pc = 0x339eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9984));
    // 0x339eb0: 0xc046760  jal         func_119D80
    ctx->pc = 0x339EB0u;
    SET_GPR_U32(ctx, 31, 0x339EB8u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339EB8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339EB8u) { return; }
    ctx->pc = 0x339EB8u;
label_339eb8:
    // 0x339eb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339ebc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x339EBCu;
    {
        const bool branch_taken_0x339ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339ebc) {
            ctx->pc = 0x339FBCu;
            goto label_339fbc;
        }
    }
    ctx->pc = 0x339EC4u;
label_339ec4:
    // 0x339ec4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x339ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339ec8: 0x2c410019  sltiu       $at, $v0, 0x19
    ctx->pc = 0x339ec8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x339ecc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x339ECCu;
    {
        const bool branch_taken_0x339ecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x339ecc) {
            ctx->pc = 0x339EE4u;
            goto label_339ee4;
        }
    }
    ctx->pc = 0x339ED4u;
    // 0x339ed4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x339ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x339ed8: 0x2c410019  sltiu       $at, $v0, 0x19
    ctx->pc = 0x339ed8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x339edc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x339EDCu;
    {
        const bool branch_taken_0x339edc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x339edc) {
            ctx->pc = 0x339F00u;
            goto label_339f00;
        }
    }
    ctx->pc = 0x339EE4u;
label_339ee4:
    // 0x339ee4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339ee8: 0x24442730  addiu       $a0, $v0, 0x2730
    ctx->pc = 0x339ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10032));
    // 0x339eec: 0xc046760  jal         func_119D80
    ctx->pc = 0x339EECu;
    SET_GPR_U32(ctx, 31, 0x339EF4u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339EF4u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339EF4u) { return; }
    ctx->pc = 0x339EF4u;
label_339ef4:
    // 0x339ef4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x339ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x339ef8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x339EF8u;
    {
        const bool branch_taken_0x339ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339ef8) {
            ctx->pc = 0x339FBCu;
            goto label_339fbc;
        }
    }
    ctx->pc = 0x339F00u;
label_339f00:
    // 0x339f00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x339f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339f04: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x339f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x339f08: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x339f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x339f0c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x339f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x339f10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x339f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339f14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x339f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339f18: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x339f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x339f1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x339f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339f20: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x339f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x339f24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x339f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339f28: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x339f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339f2c: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x339f30: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x339f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339f34: 0x3c027700  lui         $v0, 0x7700
    ctx->pc = 0x339f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30464 << 16));
    // 0x339f38: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339f3c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339f40: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339f40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339f44: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339f48: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339f4c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339f50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339f54: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339f58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x339f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x339f5c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x339f5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x339f60: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x339f60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x339f64: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339f68: 0x24435330  addiu       $v1, $v0, 0x5330
    ctx->pc = 0x339f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339f6c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339f70: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339f70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339f74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x339f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339f78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x339f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x339f7c: 0xa0440004  sb          $a0, 0x4($v0)
    ctx->pc = 0x339f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x339f80: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339f84: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339f84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339f88: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339f8c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339f90: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339f90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339f94: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339f98: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339f9c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339F9Cu;
    {
        const bool branch_taken_0x339f9c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339f9c) {
            ctx->pc = 0x339FB0u;
            goto label_339fb0;
        }
    }
    ctx->pc = 0x339FA4u;
    // 0x339fa4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339FA4u;
    {
        const bool branch_taken_0x339fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339fa4) {
            ctx->pc = 0x339FB0u;
            goto label_339fb0;
        }
    }
    ctx->pc = 0x339FACu;
    // 0x339fac: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_339fb0:
    // 0x339fb0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339fb4: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x339fb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339fb8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339fb8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_339fbc:
    // 0x339fbc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x339fbcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339fc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x339fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x339fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x339FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339FCCu;
}
