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

// Function: entry_0013bb90
// Address: 0x13bb90 - 0x13bbe0
void entry_0013bb90_0x13bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bb90_0x13bb90");
#endif

    ctx->pc = 0x13bb90u;

    // 0x13bb90: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x13bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bb94: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bb98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bb98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bb9c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x13bb9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13bba0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x13BBA0u;
    {
        const bool branch_taken_0x13bba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bba0) {
            ctx->pc = 0x13BBE0u;
            return;
        }
    }
    ctx->pc = 0x13BBA8u;
    // 0x13bba8: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x13bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bbac: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x13bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x13bbb0: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bbb4: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x13bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bbb8: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bbbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bbbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bbc0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x13bbc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13bbc4: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x13BBC4u;
    {
        const bool branch_taken_0x13bbc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bbc4) {
            ctx->pc = 0x13BC40u;
            return;
        }
    }
    ctx->pc = 0x13BBCCu;
    // 0x13bbcc: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x13bbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x13bbd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13bbd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13bbd4: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x13bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x13bbd8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x13BBD8u;
    {
        const bool branch_taken_0x13bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bbd8) {
            ctx->pc = 0x13BC40u;
            return;
        }
    }
    ctx->pc = 0x13BBE0u;
}
