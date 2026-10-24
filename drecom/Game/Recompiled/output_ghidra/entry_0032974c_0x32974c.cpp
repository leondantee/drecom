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

// Function: entry_0032974c
// Address: 0x32974c - 0x3297bc
void entry_0032974c_0x32974c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032974c_0x32974c");
#endif

    ctx->pc = 0x32974cu;

    // 0x32974c: 0x92032905  lbu         $v1, 0x2905($s0)
    ctx->pc = 0x32974cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10501)));
    // 0x329750: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329754: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x329754u;
    {
        const bool branch_taken_0x329754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329754) {
            ctx->pc = 0x329838u;
            return;
        }
    }
    ctx->pc = 0x32975Cu;
    // 0x32975c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32975cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x329760: 0x8c24af78  lw          $a0, -0x5088($at)
    ctx->pc = 0x329760u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF78u));
    // 0x329764: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329764u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329768: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32976c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32976cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329770: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x329770u;
    {
        const bool branch_taken_0x329770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329770) {
            ctx->pc = 0x329838u;
            return;
        }
    }
    ctx->pc = 0x329778u;
    // 0x329778: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x329778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32977c: 0x8c24af78  lw          $a0, -0x5088($at)
    ctx->pc = 0x32977cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF78u));
    // 0x329780: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329784: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329788: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329788u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32978c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x32978cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x329790: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x329790u;
    {
        const bool branch_taken_0x329790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x329790) {
            ctx->pc = 0x3297DCu;
            return;
        }
    }
    ctx->pc = 0x329798u;
    // 0x329798: 0x92032905  lbu         $v1, 0x2905($s0)
    ctx->pc = 0x329798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10501)));
    // 0x32979c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32979cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3297a0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3297A0u;
    {
        const bool branch_taken_0x3297a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3297a0) {
            ctx->pc = 0x3297BCu;
            return;
        }
    }
    ctx->pc = 0x3297A8u;
    // 0x3297a8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x3297a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x3297ac: 0x8c23af78  lw          $v1, -0x5088($at)
    ctx->pc = 0x3297acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF78u));
    // 0x3297b0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3297b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3297b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3297b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3297b8: 0xa603290a  sh          $v1, 0x290A($s0)
    ctx->pc = 0x3297b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10506), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3297bcu;
}
