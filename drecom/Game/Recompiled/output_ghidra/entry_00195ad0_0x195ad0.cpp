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

// Function: entry_00195ad0
// Address: 0x195ad0 - 0x195b2c
void entry_00195ad0_0x195ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195ad0_0x195ad0");
#endif

    ctx->pc = 0x195ad0u;

    // 0x195ad0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x195ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195ad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195ad8: 0xac23ac60  sw          $v1, -0x53A0($at)
    ctx->pc = 0x195ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CAC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC60u, _value); } while (0);
    // 0x195adc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195ae0: 0x8c23ac60  lw          $v1, -0x53A0($at)
    ctx->pc = 0x195ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195ae4: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x195ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x195ae8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195aec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x195aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195af0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195af4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x195af4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x195af8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195afc: 0x8c23ac60  lw          $v1, -0x53A0($at)
    ctx->pc = 0x195afcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195b00: 0x24650018  addiu       $a1, $v1, 0x18
    ctx->pc = 0x195b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x195b04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x195b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195b08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x195b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195b10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x195b10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x195b14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195b18: 0x8c23ac60  lw          $v1, -0x53A0($at)
    ctx->pc = 0x195b18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC60u));
    // 0x195b1c: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x195b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x195b20: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x195b20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195b24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x195B24u;
    {
        const bool branch_taken_0x195b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b24) {
            ctx->pc = 0x195B60u;
            return;
        }
    }
    ctx->pc = 0x195B2Cu;
}
