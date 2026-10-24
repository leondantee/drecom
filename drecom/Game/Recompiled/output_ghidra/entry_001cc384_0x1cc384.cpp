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

// Function: entry_001cc384
// Address: 0x1cc384 - 0x1cc3f8
void entry_001cc384_0x1cc384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc384_0x1cc384");
#endif

    switch (ctx->pc) {
        case 0x1cc3d4u: goto label_1cc3d4;
        default: break;
    }

    ctx->pc = 0x1cc384u;

    // 0x1cc384: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc388: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cc388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1cc38c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CC38Cu;
    {
        const bool branch_taken_0x1cc38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc38c) {
            ctx->pc = 0x1CC404u;
            return;
        }
    }
    ctx->pc = 0x1CC394u;
    // 0x1cc394: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc398: 0x8c421b68  lw          $v0, 0x1B68($v0)
    ctx->pc = 0x1cc398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x1cc39c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CC39Cu;
    {
        const bool branch_taken_0x1cc39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc39c) {
            ctx->pc = 0x1CC3F8u;
            return;
        }
    }
    ctx->pc = 0x1CC3A4u;
    // 0x1cc3a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc3a8: 0xac801b68  sw          $zero, 0x1B68($a0)
    ctx->pc = 0x1cc3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 0));
    // 0x1cc3ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cc3b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc3b4: 0xaca21b60  sw          $v0, 0x1B60($a1)
    ctx->pc = 0x1cc3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 2));
    // 0x1cc3b8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc3bc: 0xacc013e8  sw          $zero, 0x13E8($a2)
    ctx->pc = 0x1cc3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5096), GPR_U32(ctx, 0));
    // 0x1cc3c0: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1cc3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc3c4: 0xc4ec00d4  lwc1        $f12, 0xD4($a3)
    ctx->pc = 0x1cc3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc3c8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc3cc: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x1CC3CCu;
    SET_GPR_U32(ctx, 31, 0x1CC3D4u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CC3CCu, 0x1CC3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3D4u;
label_1cc3d4:
    // 0x1cc3d4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1cc3d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cc3d8: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CC3D8u;
    {
        const bool branch_taken_0x1cc3d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3d8) {
            ctx->pc = 0x1CC404u;
            return;
        }
    }
    ctx->pc = 0x1CC3E0u;
    // 0x1cc3e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc3e4: 0x8c4213ec  lw          $v0, 0x13EC($v0)
    ctx->pc = 0x1cc3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
    // 0x1cc3e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc3ec: 0xac8213e8  sw          $v0, 0x13E8($a0)
    ctx->pc = 0x1cc3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5096), GPR_U32(ctx, 2));
    // 0x1cc3f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC3F0u;
    {
        const bool branch_taken_0x1cc3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3f0) {
            ctx->pc = 0x1CC404u;
            return;
        }
    }
    ctx->pc = 0x1CC3F8u;
}
