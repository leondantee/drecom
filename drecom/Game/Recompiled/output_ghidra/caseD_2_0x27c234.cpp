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

// Function: caseD_2
// Address: 0x27c234 - 0x27c26c
void caseD_2_0x27c234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x27c234");
#endif

    ctx->pc = 0x27c234u;

    // 0x27c234: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c238: 0x90221b4a  lbu         $v0, 0x1B4A($at)
    ctx->pc = 0x27c238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Au));
    // 0x27c23c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27c23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27c240: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x27c240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x27c244: 0x24427610  addiu       $v0, $v0, 0x7610
    ctx->pc = 0x27c244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30224));
    // 0x27c248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27c248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c24c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27c24cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c250: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x27c250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x27c254: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x27c254u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x27c258: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x27c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27c25c: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x27c25cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
    // 0x27c260: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x27c260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x27c264: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x27C264u;
    {
        const bool branch_taken_0x27c264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c264) {
            ctx->pc = 0x27C39Cu;
            return;
        }
    }
    ctx->pc = 0x27C26Cu;
}
