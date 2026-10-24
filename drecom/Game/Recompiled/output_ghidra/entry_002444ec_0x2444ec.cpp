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

// Function: entry_002444ec
// Address: 0x2444ec - 0x24459c
void entry_002444ec_0x2444ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002444ec_0x2444ec");
#endif

    switch (ctx->pc) {
        case 0x244538u: goto label_244538;
        case 0x244580u: goto label_244580;
        default: break;
    }

    ctx->pc = 0x2444ecu;

    // 0x2444ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2444ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444f0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2444f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2444f4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2444f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2444f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2444f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2444fc: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x2444fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x244500: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x244500u;
    {
        const bool branch_taken_0x244500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244500) {
            ctx->pc = 0x24459Cu;
            return;
        }
    }
    ctx->pc = 0x244508u;
    // 0x244508: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24450c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x24450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244510: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x244510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x244514: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x244514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x244518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24451c: 0x0  nop
    ctx->pc = 0x24451cu;
    // NOP
    // 0x244520: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244524: 0x0  nop
    ctx->pc = 0x244524u;
    // NOP
    // 0x244528: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x244528u;
    {
        const bool branch_taken_0x244528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244528) {
            ctx->pc = 0x24459Cu;
            return;
        }
    }
    ctx->pc = 0x244530u;
    // 0x244530: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244530u;
    SET_GPR_U32(ctx, 31, 0x244538u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244530u, 0x244538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244538u;
label_244538:
    // 0x244538: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x244538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24453c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x24453cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x244540: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x244540u;
    {
        const bool branch_taken_0x244540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x244540) {
            ctx->pc = 0x24459Cu;
            return;
        }
    }
    ctx->pc = 0x244548u;
    // 0x244548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24454c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244550: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x244550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x244554: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x244554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x244558: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24455c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x24455cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x244560: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244564: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x244564u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x244568: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24456c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x24456cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244570: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x244570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244574: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x244574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x244578: 0xc067694  jal         func_19DA50
    ctx->pc = 0x244578u;
    SET_GPR_U32(ctx, 31, 0x244580u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x244578u, 0x244580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244580u;
label_244580:
    // 0x244580: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x244580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x244584: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x244584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x244588: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x244588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x24458c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x24458cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x244590: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x244590u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x244594: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244598: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x244598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x24459cu;
}
