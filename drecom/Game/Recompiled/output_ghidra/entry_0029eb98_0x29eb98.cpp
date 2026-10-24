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

// Function: entry_0029eb98
// Address: 0x29eb98 - 0x29ebc0
void entry_0029eb98_0x29eb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029eb98_0x29eb98");
#endif

    ctx->pc = 0x29eb98u;

    // 0x29eb98: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29eb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29eb9c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x29eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x29eba0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EBA0u;
    {
        const bool branch_taken_0x29eba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29eba0) {
            ctx->pc = 0x29EBC0u;
            return;
        }
    }
    ctx->pc = 0x29EBA8u;
    // 0x29eba8: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x29eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x29ebac: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x29ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x29ebb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ebb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ebb4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ebb8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29ebbc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29ebbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x29ebc0u;
}
