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

// Function: Em_morph_set
// Address: 0x1b03b0 - 0x1b04b4
void Em_morph_set_0x1b03b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_morph_set_0x1b03b0");
#endif

    ctx->pc = 0x1b03b0u;

    // 0x1b03b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b03b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b03b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b03b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b03b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b03b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b03bc: 0xa7a50018  sh          $a1, 0x18($sp)
    ctx->pc = 0x1b03bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b03c0: 0xa7a60020  sh          $a2, 0x20($sp)
    ctx->pc = 0x1b03c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x1b03c4: 0xa7a70028  sh          $a3, 0x28($sp)
    ctx->pc = 0x1b03c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 7));
    // 0x1b03c8: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b03c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b03cc: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x1b03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x1b03d0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1b03d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b03d4: 0x97a30018  lhu         $v1, 0x18($sp)
    ctx->pc = 0x1b03d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b03d8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1b03d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b03dc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b03e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b03e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b03e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b03e8: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1b03e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1b03ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b03ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b03f0: 0x8c700050  lw          $s0, 0x50($v1)
    ctx->pc = 0x1b03f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1b03f4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b03f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1b03f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b03fc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B03FCu;
    {
        const bool branch_taken_0x1b03fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b03fc) {
            ctx->pc = 0x1B0450u;
            goto label_1b0450;
        }
    }
    ctx->pc = 0x1B0404u;
    // 0x1b0404: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x1b0404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b0408: 0xa203001a  sb          $v1, 0x1A($s0)
    ctx->pc = 0x1b0408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b040c: 0x92030019  lbu         $v1, 0x19($s0)
    ctx->pc = 0x1b040cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1b0410: 0xa203001b  sb          $v1, 0x1B($s0)
    ctx->pc = 0x1b0410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0414: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0418: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1b0418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1b041c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b0420: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1b0420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1b0424: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0424u;
    {
        const bool branch_taken_0x1b0424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0424) {
            ctx->pc = 0x1B0440u;
            goto label_1b0440;
        }
    }
    ctx->pc = 0x1B042Cu;
    // 0x1b042c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b042cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0430: 0x0  nop
    ctx->pc = 0x1b0430u;
    // NOP
    // 0x1b0434: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b0434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1b0438: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0438u;
    {
        const bool branch_taken_0x1b0438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0438) {
            ctx->pc = 0x1B0450u;
            goto label_1b0450;
        }
    }
    ctx->pc = 0x1B0440u;
label_1b0440:
    // 0x1b0440: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0448: 0x0  nop
    ctx->pc = 0x1b0448u;
    // NOP
    // 0x1b044c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b044cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1b0450:
    // 0x1b0450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0454: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b0454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b0458: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b0458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b045c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b045cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b0460: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b0460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b0464: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b0464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b0468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b046c: 0x0  nop
    ctx->pc = 0x1b046cu;
    // NOP
    // 0x1b0470: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b0474: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b047c: 0x0  nop
    ctx->pc = 0x1b047cu;
    // NOP
    // 0x1b0480: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1b0480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1b0484: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1b0484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0488: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1b0488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1b048c: 0x97a30020  lhu         $v1, 0x20($sp)
    ctx->pc = 0x1b048cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0490: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0494: 0xa2030018  sb          $v1, 0x18($s0)
    ctx->pc = 0x1b0494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0498: 0x97a30028  lhu         $v1, 0x28($sp)
    ctx->pc = 0x1b0498u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b049c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b049cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b04a0: 0xa2030019  sb          $v1, 0x19($s0)
    ctx->pc = 0x1b04a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b04a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b04a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b04a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b04a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b04ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B04ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B04ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B04B4u;
}
