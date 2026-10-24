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

// Function: entry_00176790
// Address: 0x176790 - 0x1767bc
void entry_00176790_0x176790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176790_0x176790");
#endif

    ctx->pc = 0x176790u;

    // 0x176790: 0x87a300ca  lh          $v1, 0xCA($sp)
    ctx->pc = 0x176790u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 202)));
    // 0x176794: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x176794u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176798: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x176798u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x17679c: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x17679cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1767a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1767a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1767a4: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1767A4u;
    {
        const bool branch_taken_0x1767a4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1767a4) {
            ctx->pc = 0x1767BCu;
            return;
        }
    }
    ctx->pc = 0x1767ACu;
    // 0x1767ac: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1767acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1767b0: 0xa7a300cc  sh          $v1, 0xCC($sp)
    ctx->pc = 0x1767b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 204), (uint16_t)GPR_U32(ctx, 3));
    // 0x1767b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1767B4u;
    {
        const bool branch_taken_0x1767b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767b4) {
            ctx->pc = 0x1767C0u;
            return;
        }
    }
    ctx->pc = 0x1767BCu;
}
