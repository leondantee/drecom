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

// Function: entry_001ee4d0
// Address: 0x1ee4d0 - 0x1ee520
void entry_001ee4d0_0x1ee4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee4d0_0x1ee4d0");
#endif

    switch (ctx->pc) {
        case 0x1ee514u: goto label_1ee514;
        default: break;
    }

    ctx->pc = 0x1ee4d0u;

    // 0x1ee4d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee4d4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ee4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee4d8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1ee4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ee4dc: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x1ee4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x1ee4e0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EE4E0u;
    {
        const bool branch_taken_0x1ee4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4e0) {
            ctx->pc = 0x1EE520u;
            return;
        }
    }
    ctx->pc = 0x1EE4E8u;
    // 0x1ee4e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee4ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee4f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee4f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee4f8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ee4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ee4fc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1ee4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ee500: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x1ee500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x1ee504: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x1ee504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
    // 0x1ee508: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ee508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ee50c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EE50Cu;
    SET_GPR_U32(ctx, 31, 0x1EE514u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EE50Cu, 0x1EE514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE514u;
label_1ee514:
    // 0x1ee514: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ee514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ee518: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE518u;
    {
        const bool branch_taken_0x1ee518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee518) {
            ctx->pc = 0x1EE564u;
            return;
        }
    }
    ctx->pc = 0x1EE520u;
}
