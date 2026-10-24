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

// Function: entry_0036ca80
// Address: 0x36ca80 - 0x36cab8
void entry_0036ca80_0x36ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ca80_0x36ca80");
#endif

    ctx->pc = 0x36ca80u;

    // 0x36ca80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca84: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36ca84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36ca88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36ca88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ca8c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36ca90: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x36CA90u;
    {
        const bool branch_taken_0x36ca90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ca90) {
            ctx->pc = 0x36CD48u;
            return;
        }
    }
    ctx->pc = 0x36CA98u;
    // 0x36ca98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ca9c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x36ca9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x36caa0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x36CAA0u;
    {
        const bool branch_taken_0x36caa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36caa0) {
            ctx->pc = 0x36CBF4u;
            return;
        }
    }
    ctx->pc = 0x36CAA8u;
    // 0x36caa8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x36caa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36caac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x36caacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36cab0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x36CAB0u;
    {
        const bool branch_taken_0x36cab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cab0) {
            ctx->pc = 0x36CBE0u;
            return;
        }
    }
    ctx->pc = 0x36CAB8u;
}
