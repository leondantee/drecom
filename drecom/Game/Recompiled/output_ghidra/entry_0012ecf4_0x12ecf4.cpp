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

// Function: entry_0012ecf4
// Address: 0x12ecf4 - 0x12ed60
void entry_0012ecf4_0x12ecf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ecf4_0x12ecf4");
#endif

    ctx->pc = 0x12ecf4u;

    // 0x12ecf4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ecf8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ecfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ed00: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x12ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x12ed04: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x12ed04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x12ed08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ed0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12ed0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12ed10: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x12ed10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ed14: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x12ed14u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x12ed18: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ed1c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ed20: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x12ed20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12ed24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ed24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ed28: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x12ed28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x12ed2c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12ed30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ed30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ed34: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x12ed34u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ed38: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x12ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x12ed3c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12ed40: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x12ed40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x12ed44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ed48: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x12ed48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x12ed4c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x12ed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x12ed50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ed54: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x12ed54u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ed58: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x12ED58u;
    {
        const bool branch_taken_0x12ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ed58) {
            ctx->pc = 0x12EDC8u;
            return;
        }
    }
    ctx->pc = 0x12ED60u;
}
