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

// Function: entry_002a19e8
// Address: 0x2a19e8 - 0x2a1a60
void entry_002a19e8_0x2a19e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a19e8_0x2a19e8");
#endif

    switch (ctx->pc) {
        case 0x2a19f4u: goto label_2a19f4;
        case 0x2a1a0cu: goto label_2a1a0c;
        case 0x2a1a58u: goto label_2a1a58;
        default: break;
    }

    ctx->pc = 0x2a19e8u;

    // 0x2a19e8: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x2a19e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a19ec: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2A19ECu;
    SET_GPR_U32(ctx, 31, 0x2A19F4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2A19ECu, 0x2A19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19F4u;
label_2a19f4:
    // 0x2a19f4: 0x3c03407f  lui         $v1, 0x407F
    ctx->pc = 0x2a19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16511 << 16));
    // 0x2a19f8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2a19f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2a19fc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2a19fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a1a00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a1a00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1a04: 0xc040048  jal         func_100120
    ctx->pc = 0x2A1A04u;
    SET_GPR_U32(ctx, 31, 0x2A1A0Cu);
    ctx->pc = 0x100120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100120u, 0x2A1A04u, 0x2A1A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A0Cu;
label_2a1a0c:
    // 0x2a1a0c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A1A0Cu;
    {
        const bool branch_taken_0x2a1a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a0c) {
            ctx->pc = 0x2A1A60u;
            return;
        }
    }
    ctx->pc = 0x2A1A14u;
    // 0x2a1a14: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a18: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2a1a18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2a1a1c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a1a20: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x2a1a20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a1a24: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a1a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a1a28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a1a28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a1a2c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2a1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a1a30: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A1A30u;
    {
        const bool branch_taken_0x2a1a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1a30) {
            ctx->pc = 0x2A1A60u;
            return;
        }
    }
    ctx->pc = 0x2A1A38u;
    // 0x2a1a38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a3c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a1a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a1a44: 0x24060801  addiu       $a2, $zero, 0x801
    ctx->pc = 0x2a1a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x2a1a48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1a4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1a50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1A50u;
    SET_GPR_U32(ctx, 31, 0x2A1A58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1A50u, 0x2A1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A58u;
label_2a1a58:
    // 0x2a1a58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a5c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2a1a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2a1a60u;
}
