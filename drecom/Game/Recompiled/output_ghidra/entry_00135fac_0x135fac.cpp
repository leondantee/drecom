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

// Function: entry_00135fac
// Address: 0x135fac - 0x135fe4
void entry_00135fac_0x135fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135fac_0x135fac");
#endif

    ctx->pc = 0x135facu;

    // 0x135fac: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x135FACu;
    {
        const bool branch_taken_0x135fac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fac) {
            ctx->pc = 0x136000u;
            return;
        }
    }
    ctx->pc = 0x135FB4u;
    // 0x135fb4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x135fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x135fb8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x135FB8u;
    {
        const bool branch_taken_0x135fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fb8) {
            ctx->pc = 0x135FE4u;
            return;
        }
    }
    ctx->pc = 0x135FC0u;
    // 0x135fc0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x135fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135fc4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x135fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x135fc8: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x135fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x135fcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x135fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135fd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x135fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x135fd4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x135fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x135fd8: 0xa2000097  sb          $zero, 0x97($s0)
    ctx->pc = 0x135fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x135fdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135FDCu;
    {
        const bool branch_taken_0x135fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fdc) {
            ctx->pc = 0x136000u;
            return;
        }
    }
    ctx->pc = 0x135FE4u;
}
