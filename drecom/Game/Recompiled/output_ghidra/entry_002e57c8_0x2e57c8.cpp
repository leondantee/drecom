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

// Function: entry_002e57c8
// Address: 0x2e57c8 - 0x2e57f0
void entry_002e57c8_0x2e57c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e57c8_0x2e57c8");
#endif

    ctx->pc = 0x2e57c8u;

    // 0x2e57c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e57cc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e57ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e57d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e57d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e57d4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e57d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e57d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E57D8u;
    {
        const bool branch_taken_0x2e57d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e57d8) {
            ctx->pc = 0x2E57F0u;
            return;
        }
    }
    ctx->pc = 0x2E57E0u;
    // 0x2e57e0: 0x3c0241b4  lui         $v0, 0x41B4
    ctx->pc = 0x2e57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16820 << 16));
    // 0x2e57e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e57e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e57e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e57ec: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e57ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x2e57f0u;
}
