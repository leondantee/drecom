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

// Function: entry_001feabc
// Address: 0x1feabc - 0x1feaf4
void entry_001feabc_0x1feabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feabc_0x1feabc");
#endif

    ctx->pc = 0x1feabcu;

    // 0x1feabc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feac0: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x1feac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x1feac4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FEAC4u;
    {
        const bool branch_taken_0x1feac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feac4) {
            ctx->pc = 0x1FEAF4u;
            return;
        }
    }
    ctx->pc = 0x1FEACCu;
    // 0x1feacc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fead0: 0x8c5302ac  lw          $s3, 0x2AC($v0)
    ctx->pc = 0x1fead0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x1fead4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fead8: 0x904202a9  lbu         $v0, 0x2A9($v0)
    ctx->pc = 0x1fead8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 681)));
    // 0x1feadc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1feadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1feae0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1feae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1feae4: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x1feae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1feae8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1feae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feaec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1FEAECu;
    SET_GPR_U32(ctx, 31, 0x1FEAF4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1FEAF4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FEAF4u) { return; }
    ctx->pc = 0x1FEAF4u;
}
