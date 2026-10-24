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

// Function: entry_0030c858
// Address: 0x30c858 - 0x30c8f0
void entry_0030c858_0x30c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c858_0x30c858");
#endif

    switch (ctx->pc) {
        case 0x30c8acu: goto label_30c8ac;
        default: break;
    }

    ctx->pc = 0x30c858u;

    // 0x30c858: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c85c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30c85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30c860: 0x8c22efa8  lw          $v0, -0x1058($at)
    ctx->pc = 0x30c860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x30c864: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30C864u;
    {
        const bool branch_taken_0x30c864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30c864) {
            ctx->pc = 0x30C8F0u;
            return;
        }
    }
    ctx->pc = 0x30C86Cu;
    // 0x30c86c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c870: 0x8c421344  lw          $v0, 0x1344($v0)
    ctx->pc = 0x30c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4932)));
    // 0x30c874: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x30C874u;
    {
        const bool branch_taken_0x30c874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c874) {
            ctx->pc = 0x30C8F0u;
            return;
        }
    }
    ctx->pc = 0x30C87Cu;
    // 0x30c87c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30c880: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30c880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30c884: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30c884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30c888: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c88c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c890: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c894: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x30c898: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x30c898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c89c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30c8a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30c8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30c8a4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30C8A4u;
    SET_GPR_U32(ctx, 31, 0x30C8ACu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30C8A4u, 0x30C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C8ACu;
label_30c8ac:
    // 0x30c8ac: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30C8ACu;
    {
        const bool branch_taken_0x30c8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c8ac) {
            ctx->pc = 0x30C8F0u;
            return;
        }
    }
    ctx->pc = 0x30C8B4u;
    // 0x30c8b4: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x30c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x30c8b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8bc: 0xac431344  sw          $v1, 0x1344($v0)
    ctx->pc = 0x30c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 3));
    // 0x30c8c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c8c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8c8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x30c8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c8cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c8d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8d4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x30c8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c8d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8dc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x30c8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c8e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8e4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x30c8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c8e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x30c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30c8f0u;
}
