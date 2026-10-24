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

// Function: entry_0022e514
// Address: 0x22e514 - 0x22e5fc
void entry_0022e514_0x22e514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e514_0x22e514");
#endif

    switch (ctx->pc) {
        case 0x22e540u: goto label_22e540;
        case 0x22e55cu: goto label_22e55c;
        case 0x22e570u: goto label_22e570;
        case 0x22e5b8u: goto label_22e5b8;
        case 0x22e5dcu: goto label_22e5dc;
        default: break;
    }

    ctx->pc = 0x22e514u;

    // 0x22e514: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22e518: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22e518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22e51c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22e51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22e520: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22e520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e524: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e528: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x22e528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22e52c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x22e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22e530: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22e530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22e534: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22e534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22e538: 0xc05c848  jal         func_172120
    ctx->pc = 0x22E538u;
    SET_GPR_U32(ctx, 31, 0x22E540u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22E538u, 0x22E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E540u;
label_22e540:
    // 0x22e540: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x22e540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x22e544: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e548: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22e548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e54c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x22e54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e550: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22e550u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22e554: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22E554u;
    SET_GPR_U32(ctx, 31, 0x22E55Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22E554u, 0x22E55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E55Cu;
label_22e55c:
    // 0x22e55c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e560: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22e560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22e564: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22e564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e568: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22E568u;
    SET_GPR_U32(ctx, 31, 0x22E570u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22E568u, 0x22E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E570u;
label_22e570:
    // 0x22e570: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22e570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e574: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22e574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22e578: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x22E578u;
    {
        const bool branch_taken_0x22e578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e578) {
            ctx->pc = 0x22E5FCu;
            return;
        }
    }
    ctx->pc = 0x22E580u;
    // 0x22e580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e584: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e588: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22e588u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e58c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e590: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e594: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22e594u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e598: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e59c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22e59cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e5a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e5a4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22e5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e5a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e5ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22e5b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E5B0u;
    SET_GPR_U32(ctx, 31, 0x22E5B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E5B0u, 0x22E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5B8u;
label_22e5b8:
    // 0x22e5b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e5bc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22e5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22e5c0: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x22e5c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22e5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22e5c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22e5c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22e5cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e5d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22e5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22e5d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22E5D4u;
    SET_GPR_U32(ctx, 31, 0x22E5DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22E5D4u, 0x22E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5DCu;
label_22e5dc:
    // 0x22e5dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22e5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e5e0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22e5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22e5e4: 0x246300c8  addiu       $v1, $v1, 0xC8
    ctx->pc = 0x22e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x22e5e8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22e5e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22e5ec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22e5ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22e5f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x22e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e5f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22e5f8: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22e5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x22e5fcu;
}
