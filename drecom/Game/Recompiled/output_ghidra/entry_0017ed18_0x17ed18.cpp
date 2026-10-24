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

// Function: entry_0017ed18
// Address: 0x17ed18 - 0x17ed74
void entry_0017ed18_0x17ed18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ed18_0x17ed18");
#endif

    ctx->pc = 0x17ed18u;

    // 0x17ed18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed1c: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x17ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x17ed20: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x17ED20u;
    {
        const bool branch_taken_0x17ed20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed20) {
            ctx->pc = 0x17EDD8u;
            return;
        }
    }
    ctx->pc = 0x17ED28u;
    // 0x17ed28: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x17ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed2c: 0x8ca600b4  lw          $a2, 0xB4($a1)
    ctx->pc = 0x17ed2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x17ed30: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x17ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17ed34: 0xaca400b4  sw          $a0, 0xB4($a1)
    ctx->pc = 0x17ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 4));
    // 0x17ed38: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x17ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed3c: 0x8ca200b4  lw          $v0, 0xB4($a1)
    ctx->pc = 0x17ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x17ed40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed44: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x17ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x17ed48: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17ED48u;
    {
        const bool branch_taken_0x17ed48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17ed48) {
            ctx->pc = 0x17ED74u;
            return;
        }
    }
    ctx->pc = 0x17ED50u;
    // 0x17ed50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed54: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x17ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x17ed58: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x17ed58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed5c: 0xaca000b8  sw          $zero, 0xB8($a1)
    ctx->pc = 0x17ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 0));
    // 0x17ed60: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x17ed60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17ed64: 0xc4c00074  lwc1        $f0, 0x74($a2)
    ctx->pc = 0x17ed64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ed68: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17ed68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17ed6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17ED6Cu;
    {
        const bool branch_taken_0x17ed6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed6c) {
            ctx->pc = 0x17EDB8u;
            return;
        }
    }
    ctx->pc = 0x17ED74u;
}
