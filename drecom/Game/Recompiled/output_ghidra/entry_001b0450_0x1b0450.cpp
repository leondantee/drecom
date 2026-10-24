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

// Function: entry_001b0450
// Address: 0x1b0450 - 0x1b04b4
void entry_001b0450_0x1b0450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0450_0x1b0450");
#endif

    ctx->pc = 0x1b0450u;

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
