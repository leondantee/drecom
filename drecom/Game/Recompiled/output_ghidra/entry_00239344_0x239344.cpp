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

// Function: entry_00239344
// Address: 0x239344 - 0x2393f8
void entry_00239344_0x239344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239344_0x239344");
#endif

    switch (ctx->pc) {
        case 0x23936cu: goto label_23936c;
        case 0x23939cu: goto label_23939c;
        case 0x2393dcu: goto label_2393dc;
        default: break;
    }

    ctx->pc = 0x239344u;

    // 0x239344: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x239344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x239348: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x239348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23934c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23934cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x239350: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239354: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239358: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x239358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23935c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239360: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x239360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x239364: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x239364u;
    SET_GPR_U32(ctx, 31, 0x23936Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x239364u, 0x23936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23936Cu;
label_23936c:
    // 0x23936c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x23936Cu;
    {
        const bool branch_taken_0x23936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23936c) {
            ctx->pc = 0x2393F8u;
            return;
        }
    }
    ctx->pc = 0x239374u;
    // 0x239374: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x239374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239378: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23937c: 0x3c02403d  lui         $v0, 0x403D
    ctx->pc = 0x23937cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16445 << 16));
    // 0x239380: 0x3442e44e  ori         $v0, $v0, 0xE44E
    ctx->pc = 0x239380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58446);
    // 0x239384: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x239384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x239388: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x239388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23938c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x23938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239390: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x239390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x239394: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x239394u;
    SET_GPR_U32(ctx, 31, 0x23939Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x239394u, 0x23939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23939Cu;
label_23939c:
    // 0x23939c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23939Cu;
    {
        const bool branch_taken_0x23939c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23939c) {
            ctx->pc = 0x2393F8u;
            return;
        }
    }
    ctx->pc = 0x2393A4u;
    // 0x2393a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2393a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2393a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393ac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2393acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2393b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2393b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2393b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393b8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2393b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2393bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393c0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2393c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2393c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393c8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2393c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2393cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2393d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2393d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2393D4u;
    SET_GPR_U32(ctx, 31, 0x2393DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2393D4u, 0x2393DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2393DCu;
label_2393dc:
    // 0x2393dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2393dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2393e0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2393e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2393e4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2393e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2393e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2393e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2393ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2393ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2393f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2393f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2393f4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2393f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2393f8u;
}
