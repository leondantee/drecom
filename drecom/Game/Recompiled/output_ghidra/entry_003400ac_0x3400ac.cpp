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

// Function: entry_003400ac
// Address: 0x3400ac - 0x3400ec
void entry_003400ac_0x3400ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003400ac_0x3400ac");
#endif

    ctx->pc = 0x3400acu;

    // 0x3400ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3400acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3400b0: 0x8c6312ac  lw          $v1, 0x12AC($v1)
    ctx->pc = 0x3400b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x3400b4: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3400B4u;
    {
        const bool branch_taken_0x3400b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3400b4) {
            ctx->pc = 0x3400ECu;
            return;
        }
    }
    ctx->pc = 0x3400BCu;
    // 0x3400bc: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x3400bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3400c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3400c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3400c4: 0x8c8312ac  lw          $v1, 0x12AC($a0)
    ctx->pc = 0x3400c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4780)));
    // 0x3400c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3400c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3400cc: 0xac8312ac  sw          $v1, 0x12AC($a0)
    ctx->pc = 0x3400ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4780), GPR_U32(ctx, 3));
    // 0x3400d0: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3400D0u;
    {
        const bool branch_taken_0x3400d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3400d0) {
            ctx->pc = 0x340114u;
            return;
        }
    }
    ctx->pc = 0x3400D8u;
    // 0x3400d8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x3400d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3400dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3400dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3400e0: 0xac6412ac  sw          $a0, 0x12AC($v1)
    ctx->pc = 0x3400e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 4));
    // 0x3400e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3400E4u;
    {
        const bool branch_taken_0x3400e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3400e4) {
            ctx->pc = 0x340114u;
            return;
        }
    }
    ctx->pc = 0x3400ECu;
}
