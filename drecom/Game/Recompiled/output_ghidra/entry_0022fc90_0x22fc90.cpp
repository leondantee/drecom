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

// Function: entry_0022fc90
// Address: 0x22fc90 - 0x22fd58
void entry_0022fc90_0x22fc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fc90_0x22fc90");
#endif

    switch (ctx->pc) {
        case 0x22fca8u: goto label_22fca8;
        case 0x22fcc0u: goto label_22fcc0;
        case 0x22fcccu: goto label_22fccc;
        case 0x22fd14u: goto label_22fd14;
        case 0x22fd38u: goto label_22fd38;
        default: break;
    }

    ctx->pc = 0x22fc90u;

    // 0x22fc90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc94: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22fc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fc98: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fc9c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22fc9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22fca0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22FCA0u;
    SET_GPR_U32(ctx, 31, 0x22FCA8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22FCA0u, 0x22FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCA8u;
label_22fca8:
    // 0x22fca8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22fcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22fcb0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcb4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22fcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22fcb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22FCB8u;
    SET_GPR_U32(ctx, 31, 0x22FCC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22FCB8u, 0x22FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCC0u;
label_22fcc0:
    // 0x22fcc0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcc4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22FCC4u;
    SET_GPR_U32(ctx, 31, 0x22FCCCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22FCC4u, 0x22FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCCCu;
label_22fccc:
    // 0x22fccc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcd0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22fcd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22fcd4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x22FCD4u;
    {
        const bool branch_taken_0x22fcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fcd4) {
            ctx->pc = 0x22FD58u;
            return;
        }
    }
    ctx->pc = 0x22FCDCu;
    // 0x22fcdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fce0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fce4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22fce4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22fce8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fcec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcf0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22fcf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22fcf4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcf8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22fcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fcfc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd00: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22fd00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fd04: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd08: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22fd0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22FD0Cu;
    SET_GPR_U32(ctx, 31, 0x22FD14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22FD0Cu, 0x22FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD14u;
label_22fd14:
    // 0x22fd14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22fd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22fd18: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22fd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22fd1c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x22fd20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22fd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22fd24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22fd24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22fd28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd2c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22fd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22fd30: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22FD30u;
    SET_GPR_U32(ctx, 31, 0x22FD38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22FD30u, 0x22FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD38u;
label_22fd38:
    // 0x22fd38: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22fd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22fd3c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22fd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22fd40: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22fd44: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22fd44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22fd48: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22fd48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22fd4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fd54: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22fd54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x22fd58u;
}
