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

// Function: entry_001c8d8c
// Address: 0x1c8d8c - 0x1c8e04
void entry_001c8d8c_0x1c8d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8d8c_0x1c8d8c");
#endif

    ctx->pc = 0x1c8d8cu;

    // 0x1c8d8c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8d90: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x1c8d90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c8d94: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C8D94u;
    {
        const bool branch_taken_0x1c8d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8d94) {
            ctx->pc = 0x1C8EA4u;
            return;
        }
    }
    ctx->pc = 0x1C8D9Cu;
    // 0x1c8d9c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8da0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c8da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c8da4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c8da8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1c8da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c8dac: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C8DACu;
    {
        const bool branch_taken_0x1c8dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8dac) {
            ctx->pc = 0x1C8E6Cu;
            return;
        }
    }
    ctx->pc = 0x1C8DB4u;
    // 0x1c8db4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8db8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8dbc: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1c8dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1c8dc0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8dc4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c8dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8dc8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8dcc: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c8dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1c8dd0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8dd4: 0xc4801568  lwc1        $f0, 0x1568($a0)
    ctx->pc = 0x1c8dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8dd8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8ddc: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c8ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1c8de0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8de4: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1c8de4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c8de8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8dec: 0x8ca313e8  lw          $v1, 0x13E8($a1)
    ctx->pc = 0x1c8decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1c8df0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8DF0u;
    {
        const bool branch_taken_0x1c8df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8df0) {
            ctx->pc = 0x1C8E04u;
            return;
        }
    }
    ctx->pc = 0x1C8DF8u;
    // 0x1c8df8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8dfc: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1C8DFCu;
    SET_GPR_U32(ctx, 31, 0x1C8E04u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C8DFCu, 0x1C8E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E04u;
}
