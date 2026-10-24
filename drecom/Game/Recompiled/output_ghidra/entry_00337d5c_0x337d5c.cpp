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

// Function: entry_00337d5c
// Address: 0x337d5c - 0x337dd4
void entry_00337d5c_0x337d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337d5c_0x337d5c");
#endif

    ctx->pc = 0x337d5cu;

    // 0x337d5c: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x337d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x337d60: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x337d60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337d64: 0xafb100a8  sw          $s1, 0xA8($sp)
    ctx->pc = 0x337d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 17));
    // 0x337d68: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x337d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x337d6c: 0x9022c98e  lbu         $v0, -0x3672($at)
    ctx->pc = 0x337d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x337d70: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x337d70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337d74: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x337d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x337d78: 0x242b823  subu        $s7, $s2, $v0
    ctx->pc = 0x337d78u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x337d7c: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x337d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x337d80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x337d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337d84: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337d88: 0x8c224e38  lw          $v0, 0x4E38($at)
    ctx->pc = 0x337d88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x894E38u));
    // 0x337d8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x337d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x337d90: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x337d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x337d94: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x337d94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x337d98: 0xa2025deb  sb          $v0, 0x5DEB($s0)
    ctx->pc = 0x337d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24043), (uint8_t)GPR_U32(ctx, 2));
    // 0x337d9c: 0x82035deb  lb          $v1, 0x5DEB($s0)
    ctx->pc = 0x337d9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x337da0: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x337da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x337da4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x337da4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x337da8: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x337da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x337dac: 0x2e3082b  sltu        $at, $s7, $v1
    ctx->pc = 0x337dacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x337db0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x337DB0u;
    {
        const bool branch_taken_0x337db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337db0) {
            ctx->pc = 0x337DE0u;
            return;
        }
    }
    ctx->pc = 0x337DB8u;
    // 0x337db8: 0x2ee10003  sltiu       $at, $s7, 0x3
    ctx->pc = 0x337db8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x337dbc: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x337DBCu;
    {
        const bool branch_taken_0x337dbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x337dbc) {
            ctx->pc = 0x337DD4u;
            return;
        }
    }
    ctx->pc = 0x337DC4u;
    // 0x337dc4: 0x26e2fffe  addiu       $v0, $s7, -0x2
    ctx->pc = 0x337dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967294));
    // 0x337dc8: 0xae026850  sw          $v0, 0x6850($s0)
    ctx->pc = 0x337dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26704), GPR_U32(ctx, 2));
    // 0x337dcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x337DCCu;
    {
        const bool branch_taken_0x337dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337dcc) {
            ctx->pc = 0x337DF0u;
            return;
        }
    }
    ctx->pc = 0x337DD4u;
}
