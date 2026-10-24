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

// Function: entry_00342418
// Address: 0x342418 - 0x3424b8
void entry_00342418_0x342418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00342418_0x342418");
#endif

    ctx->pc = 0x342418u;

    // 0x342418: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x342418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x34241c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x34241cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342420: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x342420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x342424: 0x8442003a  lh          $v0, 0x3A($v0)
    ctx->pc = 0x342424u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x342428: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x342428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34242c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34242cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x342430: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x342430u;
    {
        const bool branch_taken_0x342430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x342430) {
            ctx->pc = 0x342540u;
            return;
        }
    }
    ctx->pc = 0x342438u;
    // 0x342438: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34243c: 0x24841330  addiu       $a0, $a0, 0x1330
    ctx->pc = 0x34243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x342440: 0x8482003a  lh          $v0, 0x3A($a0)
    ctx->pc = 0x342440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x342444: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x342444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x342448: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342448u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x34244c: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x34244cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x342450: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x342450u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x342454: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x342454u;
    {
        const bool branch_taken_0x342454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342454) {
            ctx->pc = 0x3424B8u;
            return;
        }
    }
    ctx->pc = 0x34245Cu;
    // 0x34245c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342460: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342464: 0x8456003c  lh          $s6, 0x3C($v0)
    ctx->pc = 0x342464u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x342468: 0x161c3c  dsll32      $v1, $s6, 16
    ctx->pc = 0x342468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 16));
    // 0x34246c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34246cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x342470: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x342470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x342474: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x342474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342478: 0xae240068  sw          $a0, 0x68($s1)
    ctx->pc = 0x342478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 4));
    // 0x34247c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x34247cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342480: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x342480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x342484: 0x84c2003a  lh          $v0, 0x3A($a2)
    ctx->pc = 0x342484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 58)));
    // 0x342488: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x342488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34248c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34248cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x342490: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x342490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x342494: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x342494u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x342498: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x342498u;
    {
        const bool branch_taken_0x342498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342498) {
            ctx->pc = 0x3424B8u;
            return;
        }
    }
    ctx->pc = 0x3424A0u;
    // 0x3424a0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3424a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3424a4: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x3424a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3424a8: 0x84a6003a  lh          $a2, 0x3A($a1)
    ctx->pc = 0x3424a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x3424ac: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x3424acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3424b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3424b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3424b4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x3424b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    ctx->pc = 0x3424b8u;
}
