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

// Function: Quake_exec
// Address: 0x158750 - 0x158804
void Quake_exec_0x158750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quake_exec_0x158750");
#endif

    switch (ctx->pc) {
        case 0x158780u: goto label_158780;
        default: break;
    }

    ctx->pc = 0x158750u;

    // 0x158750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x158754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15875c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15875cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x158760: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x158760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x158764: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x158764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x158768: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x158768u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15876c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x15876cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x158770: 0x2470f860  addiu       $s0, $v1, -0x7A0
    ctx->pc = 0x158770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965344));
    // 0x158774: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x158774u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x158778: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x158778u;
    {
        const bool branch_taken_0x158778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158778) {
            ctx->pc = 0x1587E0u;
            goto label_1587e0;
        }
    }
    ctx->pc = 0x158780u;
label_158780:
    // 0x158780: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x158780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158784: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x158784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x158788: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x158788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15878c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15878Cu;
    {
        const bool branch_taken_0x15878c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15878c) {
            ctx->pc = 0x1587D4u;
            goto label_1587d4;
        }
    }
    ctx->pc = 0x158794u;
    // 0x158794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158798: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x158798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x15879c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1587a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1587a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1587a4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1587a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1587a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1587a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1587ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1587acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1587b0: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1587b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1587b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1587b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1587b8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1587b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1587bc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1587bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1587c0: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1587c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1587c4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1587c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1587c8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1587c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1587cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1587CCu;
    {
        const bool branch_taken_0x1587cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1587cc) {
            ctx->pc = 0x1587F0u;
            goto label_1587f0;
        }
    }
    ctx->pc = 0x1587D4u;
label_1587d4:
    // 0x1587d4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1587d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1587d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1587d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1587dc: 0x0  nop
    ctx->pc = 0x1587dcu;
    // NOP
label_1587e0:
    // 0x1587e0: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x1587e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1587e4: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1587E4u;
    {
        const bool branch_taken_0x1587e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1587e4) {
            ctx->pc = 0x158780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158780;
        }
    }
    ctx->pc = 0x1587ECu;
    // 0x1587ec: 0x0  nop
    ctx->pc = 0x1587ecu;
    // NOP
label_1587f0:
    // 0x1587f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1587f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1587f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1587f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1587f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1587f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1587fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1587FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1587FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158804u;
}
