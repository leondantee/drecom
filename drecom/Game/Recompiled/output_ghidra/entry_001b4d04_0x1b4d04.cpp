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

// Function: entry_001b4d04
// Address: 0x1b4d04 - 0x1b4d64
void entry_001b4d04_0x1b4d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4d04_0x1b4d04");
#endif

    switch (ctx->pc) {
        case 0x1b4d2cu: goto label_1b4d2c;
        default: break;
    }

    ctx->pc = 0x1b4d04u;

    // 0x1b4d04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1b4d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1b4d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4d0c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1b4d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1b4d10: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1b4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1b4d14: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1b4d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b4d18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d20: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1b4d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4d24: 0xc058c14  jal         func_163050
    ctx->pc = 0x1B4D24u;
    SET_GPR_U32(ctx, 31, 0x1B4D2Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1B4D24u, 0x1B4D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D2Cu;
label_1b4d2c:
    // 0x1b4d2c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4D2Cu;
    {
        const bool branch_taken_0x1b4d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d2c) {
            ctx->pc = 0x1B4D64u;
            return;
        }
    }
    ctx->pc = 0x1B4D34u;
    // 0x1b4d34: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b4d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d38: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b4d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b4d3c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1b4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1b4d40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b4d44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b4d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b4d48: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b4d48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1b4d4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d50: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1b4d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4d54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4d58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4d58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4d5c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1B4D5Cu;
    {
        const bool branch_taken_0x1b4d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4d5c) {
            ctx->pc = 0x1B4E24u;
            return;
        }
    }
    ctx->pc = 0x1B4D64u;
}
