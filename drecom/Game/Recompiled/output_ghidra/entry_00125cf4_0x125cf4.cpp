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

// Function: entry_00125cf4
// Address: 0x125cf4 - 0x125d54
void entry_00125cf4_0x125cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125cf4_0x125cf4");
#endif

    switch (ctx->pc) {
        case 0x125d08u: goto label_125d08;
        default: break;
    }

    ctx->pc = 0x125cf4u;

    // 0x125cf4: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x125CF4u;
    {
        const bool branch_taken_0x125cf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x125cf4) {
            ctx->pc = 0x125D54u;
            return;
        }
    }
    ctx->pc = 0x125CFCu;
    // 0x125cfc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d00: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x125D00u;
    SET_GPR_U32(ctx, 31, 0x125D08u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x125D00u, 0x125D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D08u;
label_125d08:
    // 0x125d08: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x125D08u;
    {
        const bool branch_taken_0x125d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125d08) {
            ctx->pc = 0x125D54u;
            return;
        }
    }
    ctx->pc = 0x125D10u;
    // 0x125d10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125d14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d18: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125d18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125d1c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x125d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x125d20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d24: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125d28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125d30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125d38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x125d40: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x125d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125d44: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x125d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x125d48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x125d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x125d4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x125d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x125d50: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x125d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x125d54u;
}
