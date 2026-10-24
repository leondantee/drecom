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

// Function: entry_00350310
// Address: 0x350310 - 0x350340
void entry_00350310_0x350310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00350310_0x350310");
#endif

    ctx->pc = 0x350310u;

    // 0x350310: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350314: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350318: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x350318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x35031c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x35031cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x350320: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x350320u;
    {
        const bool branch_taken_0x350320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350320) {
            ctx->pc = 0x350340u;
            return;
        }
    }
    ctx->pc = 0x350328u;
    // 0x350328: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x350328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x35032c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x35032cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x350330: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x350330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350334: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350338: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35033c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x35033cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    ctx->pc = 0x350340u;
}
