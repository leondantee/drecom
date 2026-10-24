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

// Function: entry_001a7c18
// Address: 0x1a7c18 - 0x1a7c50
void entry_001a7c18_0x1a7c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7c18_0x1a7c18");
#endif

    ctx->pc = 0x1a7c18u;

    // 0x1a7c18: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a7c18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7c1c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1a7c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a7c20: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1a7c20u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1a7c24: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x1a7c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1a7c28: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1a7c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a7c2c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7C2Cu;
    {
        const bool branch_taken_0x1a7c2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c2c) {
            ctx->pc = 0x1A7C50u;
            return;
        }
    }
    ctx->pc = 0x1A7C34u;
    // 0x1a7c34: 0x82050310  lb          $a1, 0x310($s0)
    ctx->pc = 0x1a7c34u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7c38: 0x5263c  dsll32      $a0, $a1, 24
    ctx->pc = 0x1a7c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1a7c3c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1a7c3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1a7c40: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1a7c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1a7c44: 0x2473fff0  addiu       $s3, $v1, -0x10
    ctx->pc = 0x1a7c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1a7c48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7C48u;
    {
        const bool branch_taken_0x1a7c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c48) {
            ctx->pc = 0x1A7C60u;
            return;
        }
    }
    ctx->pc = 0x1A7C50u;
}
