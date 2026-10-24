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

// Function: entry_001d1810
// Address: 0x1d1810 - 0x1d1860
void entry_001d1810_0x1d1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1810_0x1d1810");
#endif

    ctx->pc = 0x1d1810u;

    // 0x1d1810: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x1d1810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d1814: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d1814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d1818: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1818u;
    {
        const bool branch_taken_0x1d1818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1818) {
            ctx->pc = 0x1D1880u;
            return;
        }
    }
    ctx->pc = 0x1D1820u;
    // 0x1d1820: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d1820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d1824: 0x904213a6  lbu         $v0, 0x13A6($v0)
    ctx->pc = 0x1d1824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
    // 0x1d1828: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d1828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d182c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1830: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1830u;
    {
        const bool branch_taken_0x1d1830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1830) {
            ctx->pc = 0x1D1874u;
            return;
        }
    }
    ctx->pc = 0x1D1838u;
    // 0x1d1838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d183c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D183Cu;
    {
        const bool branch_taken_0x1d183c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d183c) {
            ctx->pc = 0x1D1874u;
            return;
        }
    }
    ctx->pc = 0x1D1844u;
    // 0x1d1844: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1848: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1848u;
    {
        const bool branch_taken_0x1d1848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1848) {
            ctx->pc = 0x1D1860u;
            return;
        }
    }
    ctx->pc = 0x1D1850u;
    // 0x1d1850: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1850u;
    {
        const bool branch_taken_0x1d1850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1850) {
            ctx->pc = 0x1D1860u;
            return;
        }
    }
    ctx->pc = 0x1D1858u;
    // 0x1d1858: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1858u;
    {
        const bool branch_taken_0x1d1858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1858) {
            ctx->pc = 0x1D1880u;
            return;
        }
    }
    ctx->pc = 0x1D1860u;
}
