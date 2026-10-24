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

// Function: entry_0015e5d8
// Address: 0x15e5d8 - 0x15e63c
void entry_0015e5d8_0x15e5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e5d8_0x15e5d8");
#endif

    ctx->pc = 0x15e5d8u;

    // 0x15e5d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e5dc: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15e5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15e5e0: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x15e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x15e5e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15e5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15e5e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e5ec: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x15e5ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15e5f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e5f4: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x15e5f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x15e5f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15e5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e5fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15e5fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15e600: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15E600u;
    {
        const bool branch_taken_0x15e600 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x15e600) {
            ctx->pc = 0x15E63Cu;
            return;
        }
    }
    ctx->pc = 0x15E608u;
    // 0x15e608: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15e608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e60c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e610: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x15e610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e614: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e618: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x15e618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e61c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e620: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x15e620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e624: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e628: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x15e628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e62c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e630: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15e634: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x15E634u;
    {
        const bool branch_taken_0x15e634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e634) {
            ctx->pc = 0x15E7E0u;
            return;
        }
    }
    ctx->pc = 0x15E63Cu;
}
