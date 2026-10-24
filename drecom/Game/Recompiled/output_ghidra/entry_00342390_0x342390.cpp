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

// Function: entry_00342390
// Address: 0x342390 - 0x342418
void entry_00342390_0x342390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00342390_0x342390");
#endif

    ctx->pc = 0x342390u;

    // 0x342390: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x342390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342394: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x342394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x342398: 0x84c20038  lh          $v0, 0x38($a2)
    ctx->pc = 0x342398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x34239c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x34239cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3423a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3423a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3423a4: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3423a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x3423a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3423a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3423ac: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3423acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3423b0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x3423B0u;
    {
        const bool branch_taken_0x3423b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423b0) {
            ctx->pc = 0x342418u;
            return;
        }
    }
    ctx->pc = 0x3423B8u;
    // 0x3423b8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3423b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3423bc: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x3423bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3423c0: 0x84a6003c  lh          $a2, 0x3C($a1)
    ctx->pc = 0x3423c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x3423c4: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x3423c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3423c8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x3423c8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x3423cc: 0x8e280064  lw          $t0, 0x64($s1)
    ctx->pc = 0x3423ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x3423d0: 0x1074823  subu        $t1, $t0, $a3
    ctx->pc = 0x3423d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x3423d4: 0xae290064  sw          $t1, 0x64($s1)
    ctx->pc = 0x3423d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 9));
    // 0x3423d8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3423d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3423dc: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x3423dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3423e0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x3423e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x3423e4: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x3423e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3423e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3423e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3423ec: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x3423ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x3423f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3423f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3423f4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3423f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3423f8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3423F8u;
    {
        const bool branch_taken_0x3423f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423f8) {
            ctx->pc = 0x342418u;
            return;
        }
    }
    ctx->pc = 0x342400u;
    // 0x342400: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342404: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x342404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x342408: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x342408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x34240c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x34240cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x342410: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x342410u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x342414: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x342414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
    ctx->pc = 0x342418u;
}
