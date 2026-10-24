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

// Function: entry_0015db94
// Address: 0x15db94 - 0x15dbbc
void entry_0015db94_0x15db94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015db94_0x15db94");
#endif

    ctx->pc = 0x15db94u;

    // 0x15db94: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x15db94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15db98: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15db98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15db9c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15db9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15dba0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DBA0u;
    {
        const bool branch_taken_0x15dba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dba0) {
            ctx->pc = 0x15DBBCu;
            return;
        }
    }
    ctx->pc = 0x15DBA8u;
    // 0x15dba8: 0x8e031408  lw          $v1, 0x1408($s0)
    ctx->pc = 0x15dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5128)));
    // 0x15dbac: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5132)));
    // 0x15dbb0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dbb4: 0xae02140c  sw          $v0, 0x140C($s0)
    ctx->pc = 0x15dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5132), GPR_U32(ctx, 2));
    // 0x15dbb8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15dbbcu;
}
