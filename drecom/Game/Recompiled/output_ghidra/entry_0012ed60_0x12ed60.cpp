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

// Function: entry_0012ed60
// Address: 0x12ed60 - 0x12edc8
void entry_0012ed60_0x12ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ed60_0x12ed60");
#endif

    ctx->pc = 0x12ed60u;

    // 0x12ed60: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ed64: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ed68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ed6c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x12ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x12ed70: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x12ed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x12ed74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12ed74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ed78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12ed78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12ed7c: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x12ed7cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ed80: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x12ed80u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x12ed84: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ed88: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ed8c: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x12ed8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12ed90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ed94: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x12ed94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x12ed98: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12ed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12ed9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ed9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12eda0: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x12eda0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12eda4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12eda8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12edac: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x12edacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x12edb0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12edb4: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x12edb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x12edb8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12edb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12edbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12edbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12edc0: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x12edc0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12edc4: 0x0  nop
    ctx->pc = 0x12edc4u;
    // NOP
    ctx->pc = 0x12edc8u;
}
