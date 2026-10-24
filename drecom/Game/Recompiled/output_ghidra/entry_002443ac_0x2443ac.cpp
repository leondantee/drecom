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

// Function: entry_002443ac
// Address: 0x2443ac - 0x244444
void entry_002443ac_0x2443ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002443ac_0x2443ac");
#endif

    switch (ctx->pc) {
        case 0x2443b4u: goto label_2443b4;
        case 0x244420u: goto label_244420;
        default: break;
    }

    ctx->pc = 0x2443acu;

    // 0x2443ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2443ACu;
    SET_GPR_U32(ctx, 31, 0x2443B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2443ACu, 0x2443B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2443B4u;
label_2443b4:
    // 0x2443b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2443b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2443b8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2443b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2443bc: 0x14600077  bnez        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2443BCu;
    {
        const bool branch_taken_0x2443bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2443bc) {
            ctx->pc = 0x24459Cu;
            return;
        }
    }
    ctx->pc = 0x2443C4u;
    // 0x2443c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2443c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2443c8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2443c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2443cc: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2443ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x2443d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2443d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2443d4: 0x0  nop
    ctx->pc = 0x2443d4u;
    // NOP
    // 0x2443d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2443d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2443dc: 0x0  nop
    ctx->pc = 0x2443dcu;
    // NOP
    // 0x2443e0: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
    ctx->pc = 0x2443E0u;
    {
        const bool branch_taken_0x2443e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2443e0) {
            ctx->pc = 0x24459Cu;
            return;
        }
    }
    ctx->pc = 0x2443E8u;
    // 0x2443e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2443e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2443ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2443ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2443f0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2443f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2443f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2443f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2443f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2443f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2443fc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2443fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x244400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244404: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x244404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x244408: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24440c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x24440cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244410: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244414: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x244414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x244418: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244418u;
    SET_GPR_U32(ctx, 31, 0x244420u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244418u, 0x244420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244420u;
label_244420:
    // 0x244420: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x244420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244424: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x244424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x244428: 0x2463008c  addiu       $v1, $v1, 0x8C
    ctx->pc = 0x244428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x24442c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x24442cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x244430: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x244430u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x244434: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244438: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x244438u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x24443c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x24443Cu;
    {
        const bool branch_taken_0x24443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24443c) {
            ctx->pc = 0x24459Cu;
            return;
        }
    }
    ctx->pc = 0x244444u;
}
