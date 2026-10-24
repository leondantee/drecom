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

// Function: entry_00296b38
// Address: 0x296b38 - 0x296bb8
void entry_00296b38_0x296b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296b38_0x296b38");
#endif

    ctx->pc = 0x296b38u;

    // 0x296b38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b3c: 0x8c6469bc  lw          $a0, 0x69BC($v1)
    ctx->pc = 0x296b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27068)));
    // 0x296b40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b44: 0xac6469c0  sw          $a0, 0x69C0($v1)
    ctx->pc = 0x296b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27072), GPR_U32(ctx, 4));
    // 0x296b48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b4c: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296b50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296b54: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296b54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296b58: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b5c: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296b60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296b64: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296b68: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296b6c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b70: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296b74: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296b78: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296b7c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296b80: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x296b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x296b84: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b88: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296b8c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296b90: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296b90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296b94: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296b94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296b98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b9c: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x296b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
    // 0x296ba0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296ba4: 0xa06069c9  sb          $zero, 0x69C9($v1)
    ctx->pc = 0x296ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x296ba8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296bac: 0xac20c9e8  sw          $zero, -0x3618($at)
    ctx->pc = 0x296bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
    // 0x296bb0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x296BB0u;
    {
        const bool branch_taken_0x296bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296bb0) {
            ctx->pc = 0x296C34u;
            return;
        }
    }
    ctx->pc = 0x296BB8u;
}
