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

// Function: entry_00135bdc
// Address: 0x135bdc - 0x135c04
void entry_00135bdc_0x135bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135bdc_0x135bdc");
#endif

    ctx->pc = 0x135bdcu;

    // 0x135bdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135be0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x135be0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x135be4: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x135be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135be8: 0x8ce4121c  lw          $a0, 0x121C($a3)
    ctx->pc = 0x135be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4636)));
    // 0x135bec: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x135becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x135bf0: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x135bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135bf4: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x135bf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x135bf8: 0xace6121c  sw          $a2, 0x121C($a3)
    ctx->pc = 0x135bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4636), GPR_U32(ctx, 6));
    // 0x135bfc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x135BFCu;
    {
        const bool branch_taken_0x135bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135bfc) {
            ctx->pc = 0x135C40u;
            return;
        }
    }
    ctx->pc = 0x135C04u;
}
