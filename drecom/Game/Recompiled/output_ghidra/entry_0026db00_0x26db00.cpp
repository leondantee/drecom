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

// Function: entry_0026db00
// Address: 0x26db00 - 0x26db5c
void entry_0026db00_0x26db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026db00_0x26db00");
#endif

    switch (ctx->pc) {
        case 0x26db30u: goto label_26db30;
        case 0x26db50u: goto label_26db50;
        default: break;
    }

    ctx->pc = 0x26db00u;

    // 0x26db00: 0x8e021b60  lw          $v0, 0x1B60($s0)
    ctx->pc = 0x26db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7008)));
    // 0x26db04: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x26db04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x26db08: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26DB08u;
    {
        const bool branch_taken_0x26db08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26db08) {
            ctx->pc = 0x26DB5Cu;
            return;
        }
    }
    ctx->pc = 0x26DB10u;
    // 0x26db10: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x26db10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x26db14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26DB14u;
    {
        const bool branch_taken_0x26db14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26db14) {
            ctx->pc = 0x26DB5Cu;
            return;
        }
    }
    ctx->pc = 0x26DB1Cu;
    // 0x26db1c: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x26db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x26db20: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x26db20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x26db24: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x26db24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x26db28: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x26DB28u;
    SET_GPR_U32(ctx, 31, 0x26DB30u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x26DB28u, 0x26DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB30u;
label_26db30:
    // 0x26db30: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26db30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x26db34: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x26db34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x26db38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26db3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26db3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26db40: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x26db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26db44: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x26db44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26db48: 0xc058f50  jal         func_163D40
    ctx->pc = 0x26DB48u;
    SET_GPR_U32(ctx, 31, 0x26DB50u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26DB48u, 0x26DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB50u;
label_26db50:
    // 0x26db50: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x26db50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x26db54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26DB54u;
    {
        const bool branch_taken_0x26db54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26db54) {
            ctx->pc = 0x26DB7Cu;
            return;
        }
    }
    ctx->pc = 0x26DB5Cu;
}
