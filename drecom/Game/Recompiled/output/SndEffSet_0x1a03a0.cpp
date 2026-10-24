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

// Function: SndEffSet
// Address: 0x1a03a0 - 0x1a0468
void SndEffSet_0x1a03a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndEffSet_0x1a03a0");
#endif

    switch (ctx->pc) {
        case 0x1a03c8u: goto label_1a03c8;
        case 0x1a044cu: goto label_1a044c;
        default: break;
    }

    ctx->pc = 0x1a03a0u;

    // 0x1a03a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a03a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a03a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1a03a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a03a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a03a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a03ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a03acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a03b0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1a03b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1a03b4: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x1a03b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a03b8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1a03b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1a03bc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1a03bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a03c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A03C0u;
    {
        const bool branch_taken_0x1a03c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a03c0) {
            ctx->pc = 0x1A0430u;
            goto label_1a0430;
        }
    }
    ctx->pc = 0x1A03C8u;
label_1a03c8:
    // 0x1a03c8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1a03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1a03cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a03d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a03d4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a03d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a03d8: 0x24421b40  addiu       $v0, $v0, 0x1B40
    ctx->pc = 0x1a03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x1a03dc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1a03dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a03e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a03e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a03e4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A03E4u;
    {
        const bool branch_taken_0x1a03e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a03e4) {
            ctx->pc = 0x1A0428u;
            goto label_1a0428;
        }
    }
    ctx->pc = 0x1A03ECu;
    // 0x1a03ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a03f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a03f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a03f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1a03f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a03fc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a0400: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1a0400u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1a0404: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a0404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0408: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1a0408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1a040c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1a040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0410: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a0410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a0414: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a0418: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x1a0418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a041c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1a041cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a0420: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A0420u;
    {
        const bool branch_taken_0x1a0420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0420) {
            ctx->pc = 0x1A0450u;
            goto label_1a0450;
        }
    }
    ctx->pc = 0x1A0428u;
label_1a0428:
    // 0x1a0428: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a0428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a042c: 0x0  nop
    ctx->pc = 0x1a042cu;
    // NOP
label_1a0430:
    // 0x1a0430: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x1a0430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a0434: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1A0434u;
    {
        const bool branch_taken_0x1a0434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0434) {
            ctx->pc = 0x1A03C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a03c8;
        }
    }
    ctx->pc = 0x1A043Cu;
    // 0x1a043c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a043cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a0440: 0x2444ef40  addiu       $a0, $v0, -0x10C0
    ctx->pc = 0x1a0440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963008));
    // 0x1a0444: 0xc046760  jal         func_119D80
    ctx->pc = 0x1A0444u;
    SET_GPR_U32(ctx, 31, 0x1A044Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1A044Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A044Cu) { return; }
    ctx->pc = 0x1A044Cu;
label_1a044c:
    // 0x1a044c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1a044cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a0450:
    // 0x1a0450: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a0450u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a045c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a045cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a0460: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0468u;
}
