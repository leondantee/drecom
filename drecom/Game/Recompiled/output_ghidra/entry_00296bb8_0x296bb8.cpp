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

// Function: entry_00296bb8
// Address: 0x296bb8 - 0x296c2c
void entry_00296bb8_0x296bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296bb8_0x296bb8");
#endif

    ctx->pc = 0x296bb8u;

    // 0x296bb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296bbc: 0x8c6469bc  lw          $a0, 0x69BC($v1)
    ctx->pc = 0x296bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27068)));
    // 0x296bc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296bc4: 0xac6469c0  sw          $a0, 0x69C0($v1)
    ctx->pc = 0x296bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27072), GPR_U32(ctx, 4));
    // 0x296bc8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296bcc: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296bd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296bd4: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296bd8: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296bdc: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296be0: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296be4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296be8: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296be8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296bec: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296becu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296bf0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x296bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x296bf4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296bf8: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296bfc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296c00: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296c00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296c04: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296c04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296c08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c0c: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x296c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
    // 0x296c10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x296c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296c14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c18: 0xa06469c9  sb          $a0, 0x69C9($v1)
    ctx->pc = 0x296c18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 4));
    // 0x296c1c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296c20: 0xac20c9e8  sw          $zero, -0x3618($at)
    ctx->pc = 0x296c20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
    // 0x296c24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x296C24u;
    {
        const bool branch_taken_0x296c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c24) {
            ctx->pc = 0x296C34u;
            return;
        }
    }
    ctx->pc = 0x296C2Cu;
}
