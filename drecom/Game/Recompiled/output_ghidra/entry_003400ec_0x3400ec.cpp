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

// Function: entry_003400ec
// Address: 0x3400ec - 0x340114
void entry_003400ec_0x3400ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003400ec_0x3400ec");
#endif

    ctx->pc = 0x3400ecu;

    // 0x3400ec: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3400ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3400f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3400f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3400f4: 0x8c8312ac  lw          $v1, 0x12AC($a0)
    ctx->pc = 0x3400f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4780)));
    // 0x3400f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3400f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3400fc: 0xac8312ac  sw          $v1, 0x12AC($a0)
    ctx->pc = 0x3400fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4780), GPR_U32(ctx, 3));
    // 0x340100: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x340100u;
    {
        const bool branch_taken_0x340100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340100) {
            ctx->pc = 0x340114u;
            return;
        }
    }
    ctx->pc = 0x340108u;
    // 0x340108: 0x2404ffc4  addiu       $a0, $zero, -0x3C
    ctx->pc = 0x340108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967236));
    // 0x34010c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340110: 0xac6412ac  sw          $a0, 0x12AC($v1)
    ctx->pc = 0x340110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 4));
    ctx->pc = 0x340114u;
}
