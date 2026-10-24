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

// Function: entry_0013cca8
// Address: 0x13cca8 - 0x13ccf0
void entry_0013cca8_0x13cca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cca8_0x13cca8");
#endif

    ctx->pc = 0x13cca8u;

    // 0x13cca8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x13cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x13ccac: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x13ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x13ccb0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x13ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x13ccb4: 0x2a430044  slti        $v1, $s2, 0x44
    ctx->pc = 0x13ccb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)68) ? 1 : 0);
    // 0x13ccb8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13CCB8u;
    {
        const bool branch_taken_0x13ccb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ccb8) {
            ctx->pc = 0x13CCF0u;
            return;
        }
    }
    ctx->pc = 0x13CCC0u;
    // 0x13ccc0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x13ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13ccc4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x13ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13ccc8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x13ccc8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13cccc: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x13ccccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x13ccd0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x13ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x13ccd4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x13ccd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13ccd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13ccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13ccdc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x13ccdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x13cce0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x13cce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x13cce4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x13cce4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13cce8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13CCE8u;
    {
        const bool branch_taken_0x13cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cce8) {
            ctx->pc = 0x13CD18u;
            return;
        }
    }
    ctx->pc = 0x13CCF0u;
}
