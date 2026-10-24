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

// Function: entry_00264d68
// Address: 0x264d68 - 0x264da4
void entry_00264d68_0x264d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264d68_0x264d68");
#endif

    ctx->pc = 0x264d68u;

    // 0x264d68: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x264d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x264d6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x264d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x264d70: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x264d70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x264d74: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x264D74u;
    {
        const bool branch_taken_0x264d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264d74) {
            ctx->pc = 0x264D38u;
            return;
        }
    }
    ctx->pc = 0x264D7Cu;
    // 0x264d7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264d80: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x264d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x264d84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264d88: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x264d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x264d8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264d90: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x264d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x264d94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264d98: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x264d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x264d9c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x264D9Cu;
    {
        const bool branch_taken_0x264d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d9c) {
            ctx->pc = 0x264F58u;
            return;
        }
    }
    ctx->pc = 0x264DA4u;
}
