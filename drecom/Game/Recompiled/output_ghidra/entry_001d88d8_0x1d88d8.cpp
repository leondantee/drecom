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

// Function: entry_001d88d8
// Address: 0x1d88d8 - 0x1d8944
void entry_001d88d8_0x1d88d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d88d8_0x1d88d8");
#endif

    ctx->pc = 0x1d88d8u;

    // 0x1d88d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d88dc: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1d88dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1d88e0: 0x860302b0  lh          $v1, 0x2B0($s0)
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1d88e4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1d88e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1d88e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d88e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1d88ec: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D88ECu;
    {
        const bool branch_taken_0x1d88ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d88ec) {
            ctx->pc = 0x1D8974u;
            return;
        }
    }
    ctx->pc = 0x1D88F4u;
    // 0x1d88f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d88f8: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x1d88f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x1d88fc: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x1d88fcu;
    SET_GPR_S32(ctx, 20, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u));
    // 0x1d8900: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d8900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8904: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d8904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d8908: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x1d8908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d890c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d890cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8910: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1d8910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d8914: 0x83b021  addu        $s6, $a0, $v1
    ctx->pc = 0x1d8914u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d8918: 0x274082b  sltu        $at, $s3, $s4
    ctx->pc = 0x1d8918u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1d891c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D891Cu;
    {
        const bool branch_taken_0x1d891c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d891c) {
            ctx->pc = 0x1D8944u;
            return;
        }
    }
    ctx->pc = 0x1D8924u;
    // 0x1d8924: 0x293a823  subu        $s5, $s4, $s3
    ctx->pc = 0x1d8924u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1d8928: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d8928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1d892c: 0x2a1082a  slt         $at, $s5, $at
    ctx->pc = 0x1d892cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d8930: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8930u;
    {
        const bool branch_taken_0x1d8930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8930) {
            ctx->pc = 0x1D8974u;
            return;
        }
    }
    ctx->pc = 0x1D8938u;
    // 0x1d8938: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1d8938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1d893c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D893Cu;
    {
        const bool branch_taken_0x1d893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d893c) {
            ctx->pc = 0x1D8974u;
            return;
        }
    }
    ctx->pc = 0x1D8944u;
}
