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

// Function: entry_001b053c
// Address: 0x1b053c - 0x1b05a0
void entry_001b053c_0x1b053c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b053c_0x1b053c");
#endif

    ctx->pc = 0x1b053cu;

    // 0x1b053c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0540: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b0540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b0544: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b0544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b0548: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b0548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b054c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b054cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b0550: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1b0550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1b0554: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1b0554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0558: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b055c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b055cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0564: 0x0  nop
    ctx->pc = 0x1b0564u;
    // NOP
    // 0x1b0568: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1b0568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1b056c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b056cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0570: 0x0  nop
    ctx->pc = 0x1b0570u;
    // NOP
    // 0x1b0574: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1b0574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1b0578: 0x97a30020  lhu         $v1, 0x20($sp)
    ctx->pc = 0x1b0578u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b057c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b057cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0580: 0xa2030018  sb          $v1, 0x18($s0)
    ctx->pc = 0x1b0580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0584: 0x97a30028  lhu         $v1, 0x28($sp)
    ctx->pc = 0x1b0584u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b0588: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b058c: 0xa2030019  sb          $v1, 0x19($s0)
    ctx->pc = 0x1b058cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0594: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b0594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b0598: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B05A0u;
}
