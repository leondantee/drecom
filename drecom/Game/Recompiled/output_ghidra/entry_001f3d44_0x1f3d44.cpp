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

// Function: entry_001f3d44
// Address: 0x1f3d44 - 0x1f3e40
void entry_001f3d44_0x1f3d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3d44_0x1f3d44");
#endif

    switch (ctx->pc) {
        case 0x1f3d54u: goto label_1f3d54;
        case 0x1f3d60u: goto label_1f3d60;
        case 0x1f3db0u: goto label_1f3db0;
        case 0x1f3e18u: goto label_1f3e18;
        default: break;
    }

    ctx->pc = 0x1f3d44u;

    // 0x1f3d44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f3d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f3d4c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F3D4Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F3D4Cu, 0x1F3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D54u;
label_1f3d54:
    // 0x1f3d54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d58: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F3D58u;
    SET_GPR_U32(ctx, 31, 0x1F3D60u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F3D58u, 0x1F3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D60u;
label_1f3d60:
    // 0x1f3d60: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f3d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d64: 0x84a4127c  lh          $a0, 0x127C($a1)
    ctx->pc = 0x1f3d64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x1f3d68: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f3d6c: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x1f3d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3d70: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F3D70u;
    {
        const bool branch_taken_0x1f3d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d70) {
            ctx->pc = 0x1F3E40u;
            return;
        }
    }
    ctx->pc = 0x1F3D78u;
    // 0x1f3d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3d7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d80: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f3d80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3d84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f3d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f3d88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d8c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f3d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3d90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d94: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f3d94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3d98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3d9c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f3d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3da0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3da4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f3da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f3da8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3DA8u;
    SET_GPR_U32(ctx, 31, 0x1F3DB0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3DA8u, 0x1F3DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DB0u;
label_1f3db0:
    // 0x1f3db0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f3db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3db4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f3db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f3db8: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x1f3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x1f3dbc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f3dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f3dc0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f3dc0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f3dc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3dc8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f3dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f3dcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f3dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f3dd0: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f3dd4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1f3dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1f3dd8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F3DD8u;
    {
        const bool branch_taken_0x1f3dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3dd8) {
            ctx->pc = 0x1F3E40u;
            return;
        }
    }
    ctx->pc = 0x1F3DE0u;
    // 0x1f3de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3de4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3de8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f3de8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3df0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3df4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f3df4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3df8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3dfc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f3dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3e00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3e04: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f3e04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3e08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3e0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f3e10: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3E10u;
    SET_GPR_U32(ctx, 31, 0x1F3E18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3E10u, 0x1F3E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3E18u;
label_1f3e18:
    // 0x1f3e18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f3e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3e1c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f3e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f3e20: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1f3e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1f3e24: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f3e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f3e28: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f3e28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f3e2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3e30: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f3e30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f3e34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3e38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f3e3c: 0xa460005c  sh          $zero, 0x5C($v1)
    ctx->pc = 0x1f3e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1f3e40u;
}
