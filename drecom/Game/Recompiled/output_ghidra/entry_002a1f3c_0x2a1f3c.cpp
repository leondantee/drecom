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

// Function: entry_002a1f3c
// Address: 0x2a1f3c - 0x2a1f64
void entry_002a1f3c_0x2a1f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1f3c_0x2a1f3c");
#endif

    ctx->pc = 0x2a1f3cu;

    // 0x2a1f3c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2a1f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2a1f40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1f44: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1F44u;
    {
        const bool branch_taken_0x2a1f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1f44) {
            ctx->pc = 0x2A1F64u;
            return;
        }
    }
    ctx->pc = 0x2A1F4Cu;
    // 0x2a1f4c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2a1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2a1f50: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2a1f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2a1f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1f60: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a1f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x2a1f64u;
}
