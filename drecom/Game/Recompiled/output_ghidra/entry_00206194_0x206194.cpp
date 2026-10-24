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

// Function: entry_00206194
// Address: 0x206194 - 0x206204
void entry_00206194_0x206194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206194_0x206194");
#endif

    switch (ctx->pc) {
        case 0x2061e8u: goto label_2061e8;
        case 0x2061fcu: goto label_2061fc;
        default: break;
    }

    ctx->pc = 0x206194u;

    // 0x206194: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x206194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206198: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x206198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20619c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20619cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2061a0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2061a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2061a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2061a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2061a8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2061a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2061ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2061acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2061b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2061b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2061b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2061B4u;
    {
        const bool branch_taken_0x2061b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2061b4) {
            ctx->pc = 0x206204u;
            return;
        }
    }
    ctx->pc = 0x2061BCu;
    // 0x2061bc: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x2061bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x2061c0: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x2061c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x2061c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2061c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2061c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2061c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2061cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2061ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2061d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2061d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2061d4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2061d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2061d8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2061d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2061dc: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x2061dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x2061e0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2061E0u;
    SET_GPR_U32(ctx, 31, 0x2061E8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2061E0u, 0x2061E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061E8u;
label_2061e8:
    // 0x2061e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2061e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2061ec: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2061ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2061f0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2061f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2061f4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2061F4u;
    SET_GPR_U32(ctx, 31, 0x2061FCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2061F4u, 0x2061FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2061FCu;
label_2061fc:
    // 0x2061fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2061fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206200: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x206200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x206204u;
}
