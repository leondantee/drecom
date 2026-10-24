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

// Function: entry_0028ed8c
// Address: 0x28ed8c - 0x28edcc
void entry_0028ed8c_0x28ed8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ed8c_0x28ed8c");
#endif

    ctx->pc = 0x28ed8cu;

    // 0x28ed8c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ed8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ed90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28ed90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ed94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ed98: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28ED98u;
    {
        const bool branch_taken_0x28ed98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ed98) {
            ctx->pc = 0x28EDDCu;
            return;
        }
    }
    ctx->pc = 0x28EDA0u;
    // 0x28eda0: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28eda0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28eda4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x28eda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28eda8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28eda8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28edac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28edb0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28EDB0u;
    {
        const bool branch_taken_0x28edb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28edb0) {
            ctx->pc = 0x28EDD8u;
            return;
        }
    }
    ctx->pc = 0x28EDB8u;
    // 0x28edb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28edbc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EDBCu;
    {
        const bool branch_taken_0x28edbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28edbc) {
            ctx->pc = 0x28EDCCu;
            return;
        }
    }
    ctx->pc = 0x28EDC4u;
    // 0x28edc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28EDC4u;
    {
        const bool branch_taken_0x28edc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28edc4) {
            ctx->pc = 0x28EDDCu;
            return;
        }
    }
    ctx->pc = 0x28EDCCu;
}
