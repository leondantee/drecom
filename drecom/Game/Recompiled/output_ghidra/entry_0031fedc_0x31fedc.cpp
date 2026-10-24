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

// Function: entry_0031fedc
// Address: 0x31fedc - 0x31ff18
void entry_0031fedc_0x31fedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fedc_0x31fedc");
#endif

    ctx->pc = 0x31fedcu;

    // 0x31fedc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fee0: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x31fee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x31fee4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31fee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31fee8: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x31fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x31feec: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x31feecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31fef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fef4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x31fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31fef8: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x31fef8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31fefc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31ff00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31ff08: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x31ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x31ff0c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x31ff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x31ff10: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x31ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31ff14: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x31ff14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x31ff18u;
}
