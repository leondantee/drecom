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

// Function: entry_001f6d88
// Address: 0x1f6d88 - 0x1f6e50
void entry_001f6d88_0x1f6d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6d88_0x1f6d88");
#endif

    switch (ctx->pc) {
        case 0x1f6da0u: goto label_1f6da0;
        case 0x1f6db8u: goto label_1f6db8;
        case 0x1f6dc4u: goto label_1f6dc4;
        case 0x1f6e0cu: goto label_1f6e0c;
        case 0x1f6e30u: goto label_1f6e30;
        default: break;
    }

    ctx->pc = 0x1f6d88u;

    // 0x1f6d88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6d8c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f6d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6d90: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1f6d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6d94: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f6d94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f6d98: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F6D98u;
    SET_GPR_U32(ctx, 31, 0x1F6DA0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F6D98u, 0x1F6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DA0u;
label_1f6da0:
    // 0x1f6da0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6da4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f6da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f6da8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1f6da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6dac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f6dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f6db0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F6DB0u;
    SET_GPR_U32(ctx, 31, 0x1F6DB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F6DB0u, 0x1F6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DB8u;
label_1f6db8:
    // 0x1f6db8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1f6db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6dbc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F6DBCu;
    SET_GPR_U32(ctx, 31, 0x1F6DC4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F6DBCu, 0x1F6DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DC4u;
label_1f6dc4:
    // 0x1f6dc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6dc8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f6dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f6dcc: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F6DCCu;
    {
        const bool branch_taken_0x1f6dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6dcc) {
            ctx->pc = 0x1F6E50u;
            return;
        }
    }
    ctx->pc = 0x1F6DD4u;
    // 0x1f6dd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6dd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6ddc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f6ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6de0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6de4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6de8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f6de8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6dec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6df0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f6df0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6df4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6df8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f6df8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6dfc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f6e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f6e04: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F6E04u;
    SET_GPR_U32(ctx, 31, 0x1F6E0Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F6E04u, 0x1F6E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E0Cu;
label_1f6e0c:
    // 0x1f6e0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f6e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f6e10: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f6e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f6e14: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f6e18: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f6e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f6e1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f6e1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f6e20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e24: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f6e24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f6e28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F6E28u;
    SET_GPR_U32(ctx, 31, 0x1F6E30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F6E28u, 0x1F6E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E30u;
label_1f6e30:
    // 0x1f6e30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f6e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f6e34: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f6e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f6e38: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f6e3c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f6e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f6e40: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f6e40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f6e44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6e48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6e4c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f6e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1f6e50u;
}
