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

// Function: entry_0018dd34
// Address: 0x18dd34 - 0x18dd7c
void entry_0018dd34_0x18dd34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dd34_0x18dd34");
#endif

    ctx->pc = 0x18dd34u;

    // 0x18dd34: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x18dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x18dd38: 0xdfa20078  ld          $v0, 0x78($sp)
    ctx->pc = 0x18dd38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18dd3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18dd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18dd40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18dd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dd44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18dd44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18dd48: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x18dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x18dd4c: 0xdfa20078  ld          $v0, 0x78($sp)
    ctx->pc = 0x18dd4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18dd50: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x18dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
    // 0x18dd54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18dd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18dd58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18dd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18dd5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x18dd5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18dd60: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x18dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x18dd64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18dd68: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x18DD68u;
    {
        const bool branch_taken_0x18dd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dd68) {
            ctx->pc = 0x18DDCCu;
            return;
        }
    }
    ctx->pc = 0x18DD70u;
    // 0x18dd70: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x18dd70u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18dd74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18DD74u;
    {
        const bool branch_taken_0x18dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd74) {
            ctx->pc = 0x18DDA0u;
            return;
        }
    }
    ctx->pc = 0x18DD7Cu;
}
