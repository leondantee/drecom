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

// Function: entry_0029fd7c
// Address: 0x29fd7c - 0x29fe30
void entry_0029fd7c_0x29fd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029fd7c_0x29fd7c");
#endif

    switch (ctx->pc) {
        case 0x29fd90u: goto label_29fd90;
        case 0x29fddcu: goto label_29fddc;
        case 0x29fde4u: goto label_29fde4;
        default: break;
    }

    ctx->pc = 0x29fd7cu;

    // 0x29fd7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29fd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fd80: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x29fd80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fd84: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x29fd84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x29fd88: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FD88u;
    SET_GPR_U32(ctx, 31, 0x29FD90u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FD88u, 0x29FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD90u;
label_29fd90:
    // 0x29fd90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29fd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fd94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29fd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29fd98: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29fd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29fd9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29fd9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29fda0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fda4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29fda4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29fda8: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x29fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fdac: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fdb0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x29fdb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x29fdb4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29fdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29fdb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29fdb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29fdbc: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x29fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    // 0x29fdc0: 0x34460400  ori         $a2, $v0, 0x400
    ctx->pc = 0x29fdc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x29fdc4: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x29fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fdc8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x29fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x29fdcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29fdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fdd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29fdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29fdd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29FDD4u;
    SET_GPR_U32(ctx, 31, 0x29FDDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29FDD4u, 0x29FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDDCu;
label_29fddc:
    // 0x29fddc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FDDCu;
    SET_GPR_U32(ctx, 31, 0x29FDE4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FDDCu, 0x29FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FDE4u;
label_29fde4:
    // 0x29fde4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29fde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fde8: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x29fde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29fdec: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x29fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x29fdf0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29fdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29fdf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29fdf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29fdf8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fdfc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x29fdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x29fe00: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x29fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x29fe04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29fe04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fe08: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe0c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x29fe0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x29fe10: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe14: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x29fe14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x29fe18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FE18u;
    {
        const bool branch_taken_0x29fe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fe18) {
            ctx->pc = 0x29FE30u;
            return;
        }
    }
    ctx->pc = 0x29FE20u;
    // 0x29fe20: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x29fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x29fe24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29fe24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fe28: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe2c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x29fe2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x29fe30u;
}
