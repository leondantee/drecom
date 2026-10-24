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

// Function: entry_0028ea60
// Address: 0x28ea60 - 0x28eaa8
void entry_0028ea60_0x28ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ea60_0x28ea60");
#endif

    ctx->pc = 0x28ea60u;

    // 0x28ea60: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28ea60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ea64: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28ea64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28ea68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ea6c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28EA6Cu;
    {
        const bool branch_taken_0x28ea6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ea6c) {
            ctx->pc = 0x28EAA8u;
            return;
        }
    }
    ctx->pc = 0x28EA74u;
    // 0x28ea74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ea78: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x28ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x28ea7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ea80: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x28ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x28ea84: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28ea84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28ea88: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28ea88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28ea8c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28ea8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28ea90: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x28ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ea94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ea98: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x28ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x28ea9c: 0xa06213a6  sb          $v0, 0x13A6($v1)
    ctx->pc = 0x28ea9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5030), (uint8_t)GPR_U32(ctx, 2));
    // 0x28eaa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eaa4: 0xa202660a  sb          $v0, 0x660A($s0)
    ctx->pc = 0x28eaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26122), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x28eaa8u;
}
