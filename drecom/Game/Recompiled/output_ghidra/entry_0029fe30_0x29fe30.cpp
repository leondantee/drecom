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

// Function: entry_0029fe30
// Address: 0x29fe30 - 0x29fe64
void entry_0029fe30_0x29fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029fe30_0x29fe30");
#endif

    ctx->pc = 0x29fe30u;

    // 0x29fe30: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29fe38: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x29fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29fe3c: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x29fe3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29fe40: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29FE40u;
    {
        const bool branch_taken_0x29fe40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe40) {
            ctx->pc = 0x29FE64u;
            return;
        }
    }
    ctx->pc = 0x29FE48u;
    // 0x29fe48: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x29fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe4c: 0x3c073f19  lui         $a3, 0x3F19
    ctx->pc = 0x29fe4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16153 << 16));
    // 0x29fe50: 0x34e6999a  ori         $a2, $a3, 0x999A
    ctx->pc = 0x29fe50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)39322);
    // 0x29fe54: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x29fe54u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29fe58: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x29fe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fe5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29fe5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29fe60: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x29fe60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    ctx->pc = 0x29fe64u;
}
