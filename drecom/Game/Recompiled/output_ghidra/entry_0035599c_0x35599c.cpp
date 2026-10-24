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

// Function: entry_0035599c
// Address: 0x35599c - 0x3559e8
void entry_0035599c_0x35599c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035599c_0x35599c");
#endif

    ctx->pc = 0x35599cu;

    // 0x35599c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3559a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3559a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3559a4: 0x846300bc  lh          $v1, 0xBC($v1)
    ctx->pc = 0x3559a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3559a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3559a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3559ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3559acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3559b0: 0x28630200  slti        $v1, $v1, 0x200
    ctx->pc = 0x3559b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3559b4: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3559B4u;
    {
        const bool branch_taken_0x3559b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3559b4) {
            ctx->pc = 0x355A98u;
            return;
        }
    }
    ctx->pc = 0x3559BCu;
    // 0x3559bc: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x3559bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3559c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3559c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3559c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3559c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3559c8: 0xa46400bc  sh          $a0, 0xBC($v1)
    ctx->pc = 0x3559c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 4));
    // 0x3559cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3559ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3559d0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3559d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3559d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3559d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3559d8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3559d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3559dc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3559dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3559e0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3559E0u;
    {
        const bool branch_taken_0x3559e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3559e0) {
            ctx->pc = 0x355A98u;
            return;
        }
    }
    ctx->pc = 0x3559E8u;
}
